#include "MainGameState.h"
#include "Item.h"
#include "RealtimeRenderingPipeline.h"
#include "Engine/DataTable.h"
#include "ItemUserWidget.h"
#include "InventoryUserWidget.h"
#include "UnitUserWidget.h"
#include "MenuUnitsUserWidget.h"
#include "CustomTest.h"

void AMainGameState::BeginPlay()
{
    Super::BeginPlay();
    CheckDataTable();
    if (GetWorld())
        RealtimeRenderingPipeline = GetWorld()->SpawnActor<ARealtimeRenderingPipeline>(ClassRealtimeRenderingPipeline);
    if (IsValid(RealtimeRenderingPipeline))
        RealtimeRenderingPipeline->SetMaterialBase(MaterialBase);

    Test = NewObject<UCustomTest>(this);
    if (Test)
        Test->SetMainGameState(this);
}

UItem* AMainGameState::CreateItem(const FDataTableRowHandle& DataTableRowHandle)
{
    FItemData* ItemData = GetItemData(DataTableRowHandle);
    if (!ItemData)
        return nullptr;

    UItem* Item = NewObject<UItem>(this, ItemData->ClassItem);
    if (Item)
        Item->Initialization(DataTableRowHandle);
    return Item;
}

UItem* AMainGameState::CreateItem(const FName& RowName)
{
    auto DataTableRowHandle = GetDataTableRowHandle(RowName);
    return CreateItem(DataTableRowHandle);
}

AActor* AMainGameState::SpawnRepresented(const FDataTableRowHandle& DataTableRowHandle,
                                         const FTransform& SpawnTransform)
{
    auto Item = CreateItem(DataTableRowHandle);
    if (!Item)
        return nullptr;

    Item->SpawnRepresented(SpawnTransform);
    return Cast<AActor>(Item->GetRepresented().GetObject());
}

AActor* AMainGameState::SpawnRepresented(const FName& RowName,
                                         const FTransform& SpawnTransform)
{
    auto DataTableRowHandle = GetDataTableRowHandle(RowName);
    return SpawnRepresented(DataTableRowHandle, SpawnTransform);
}


// DataTable

void AMainGameState::CheckDataTable()
{
    if (!ItemsDataTable)
        UE_LOG(LogTemp, Error, TEXT("ItemsDataTable is nullptr!"));
    if (!UnitsDataTable)
        UE_LOG(LogTemp, Error, TEXT("UnitsDataTable is nullptr!"));
    if (!InventorysDataTable)
        UE_LOG(LogTemp, Error, TEXT("InventorysDataTable is nullptr!"));
}

template <typename T>
T* AMainGameState::GetItemData(const FDataTableRowHandle& DataTableRowHandle)
{
    if (DataTableRowHandle.IsNull())
    {
        UE_LOG(LogTemp, Warning, TEXT("GetItemData: Invalid DataTableRowHandle!"));
        return nullptr;
    }

    if (!DataTableRowHandle.DataTable)
    {
        UE_LOG(LogTemp, Warning, TEXT("GetItemData: DataTable is nullptr for row '%s'!"),
               *DataTableRowHandle.RowName.ToString());
        return nullptr;
    }

    return DataTableRowHandle.DataTable->FindRow<T>(DataTableRowHandle.RowName, "");
}

template FItemData* AMainGameState::GetItemData<FItemData>(const FDataTableRowHandle&);
template FUnitData* AMainGameState::GetItemData<FUnitData>(const FDataTableRowHandle&);
template FInventoryData* AMainGameState::GetItemData<FInventoryData>(const FDataTableRowHandle&);

FItemData* AMainGameState::GetItemData(const FDataTableRowHandle& DataTableRowHandle)
{
    FItemData* ItemData = GetItemData<FItemData>(DataTableRowHandle);
    return ItemData;
}

FDataTableRowHandle AMainGameState::GetDataTableRowHandle(const FName& RowName)
{
    if (!RowName.IsValid() || RowName.IsNone())
    {
        UE_LOG(LogTemp, Warning, TEXT("GetItemDataByName: Invalid RowName!"));
        return FDataTableRowHandle();
    }

    FDataTableRowHandle DataTableRowHandle;
    DataTableRowHandle.RowName = RowName;

    if (ItemsDataTable)
        if (ItemsDataTable->GetRowNames().Contains<FName>(RowName))
        {
            DataTableRowHandle.DataTable = ItemsDataTable;
            return DataTableRowHandle;
        }
    if (UnitsDataTable)
        if (UnitsDataTable->GetRowNames().Contains<FName>(RowName))
        {
            DataTableRowHandle.DataTable = UnitsDataTable;
            return DataTableRowHandle;
        }
    if (InventorysDataTable)
        if (InventorysDataTable->GetRowNames().Contains<FName>(RowName))
        {
            DataTableRowHandle.DataTable = InventorysDataTable;
            return DataTableRowHandle;
        }

    UE_LOG(LogTemp, Warning, TEXT("GetItemDataByName: Item with name '%s' not found in any DataTable!"),
           *RowName.ToString());
    return FDataTableRowHandle();
}

// Generate

FName AMainGameState::GenerateUniqueName(const UObject* Object) const
{
    if (!Object)
        return NAME_None;

    FString ClassName = Object->GetClass()->GetName();

    const TCHAR* CharSet = TEXT("ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789");
    FString RandomHash;
    for (int32 i = 0; i < 4; ++i)
    {
        RandomHash += CharSet[FMath::RandRange(0, 35)];
    }

    return FName(FString::Printf(TEXT("%s_%s"), *ClassName, *RandomHash));
}

// UserInterface
UMaterialInstanceDynamic* AMainGameState::GetMaterialInstanceDynamic(UItem* Item, const FIntPoint& Size)
{
    if (IsValid(RealtimeRenderingPipeline))
        return RealtimeRenderingPipeline->GetMaterialInstanceDynamic(Item, Size);
    return nullptr;
}

// Tests

void AMainGameState::RunTest(int32 IndexTest)
{
    if (Test)
        Test->RunTest(IndexTest);
};