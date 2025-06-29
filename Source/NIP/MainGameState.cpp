#include "MainGameState.h"
#include "Item.h"
#include "RealtimeRenderingPipeline.h"
#include "Engine/DataTable.h"
#include "ItemUserWidget.h"
#include "InventoryUserWidget.h"
#include "UnitUserWidget.h"
#include "MenuUnitsUserWidget.h"
#include "CustomTest.h"
#include "LogsMacros.h"
#include "RepresentableInterface.h"
#include "ItemData.h"

void AMainGameState::BeginPlay()
{
    Super::BeginPlay();
    
    if (GetWorld())
        RealtimeRenderingPipeline = GetWorld()->SpawnActor<ARealtimeRenderingPipeline>(ClassRealtimeRenderingPipeline);
    if (IsValid(RealtimeRenderingPipeline))
        RealtimeRenderingPipeline->SetMaterialBase(MaterialItemImage);

    Test = NewObject<UCustomTest>(this);
    if (Test)
        Test->SetMainGameState(this);

    DragAndDropItemWidget = CreateWidget<UItemUserWidget>(GetWorld(), ClassItemUserWidget);
    if (DragAndDropItemWidget)
    {
        DragAndDropItemWidget->AddToViewport();
        DragAndDropItemWidget->SetVisibility(ESlateVisibility::Hidden);
    }

    NamedDataTables.Add("Item", ItemsDataTable);
    NamedDataTables.Add("Unit", UnitsDataTable);
    NamedDataTables.Add("Inventory", InventorysDataTable);
    NamedDataTables.Add("Weapon", WeaponsDataTable);

    CheckValid();
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

UItem* AMainGameState::SpawnRepresented(const FDataTableRowHandle& DataTableRowHandle,
                                         const FTransform& SpawnTransform)
{
    auto Item = CreateItem(DataTableRowHandle);
    if (!Item)
        return nullptr;

    Item->SpawnRepresented(SpawnTransform);
    return Item;
}

UItem* AMainGameState::SpawnRepresented(const FName& RowName,
                                         const FTransform& SpawnTransform)
{
    auto DataTableRowHandle = GetDataTableRowHandle(RowName);
    return SpawnRepresented(DataTableRowHandle, SpawnTransform);
}


// DataTable

void AMainGameState::CheckValid()
{
    CHECK_NULLPTR_LOG(ItemsDataTable);
    CHECK_NULLPTR_LOG(UnitsDataTable);
    CHECK_NULLPTR_LOG(InventorysDataTable);
    CHECK_NULLPTR_LOG(WeaponsDataTable);
    CHECK_NULLPTR_LOG(MaterialItemImage);
    CHECK_NULLPTR_LOG(MaterialBackgroundInventory);
    CHECK_NULLPTR_LOG(RealtimeRenderingPipeline);
    CHECK_NULLPTR_LOG(Test);
    CHECK_NULLPTR_LOG(DragAndDropItemWidget);
}

template <typename T>
T* AMainGameState::GetItemData(const FDataTableRowHandle& DataTableRowHandle)
{
    if (!DataTableRowHandle.DataTable || DataTableRowHandle.RowName.IsNone())
    {
        UE_LOG(LogTemp, Warning, TEXT("GetItemData: Invalid RowHandle"));
        return nullptr;
    }

    return DataTableRowHandle.DataTable->FindRow<T>(DataTableRowHandle.RowName, TEXT("GetItemData"));
}

template FInventoryData* AMainGameState::GetItemData<FInventoryData>(const FDataTableRowHandle&);
template FUnitData* AMainGameState::GetItemData<FUnitData>(const FDataTableRowHandle&);
template FItemData* AMainGameState::GetItemData<FItemData>(const FDataTableRowHandle&);
template FWeaponData* AMainGameState::GetItemData<FWeaponData>(const FDataTableRowHandle&);


FItemData* AMainGameState::GetItemData(const FDataTableRowHandle& DataTableRowHandle)
{
    FItemData* ItemData = GetItemData<FItemData>(DataTableRowHandle);
    return ItemData;
}


FDataTableRowHandle AMainGameState::GetDataTableRowHandle(const FName& RowName)
{
    if (!RowName.IsValid() || RowName.IsNone())
    {
        UE_LOG(LogTemp, Warning, TEXT("GetDataTableRowHandle: Invalid RowName!"));
        return FDataTableRowHandle();
    }

    for (const auto& Pair : NamedDataTables)
    {
        if (UDataTable* Table = Pair.Value)
        {
            if (Table->GetRowNames().Contains(RowName))
            {
                FDataTableRowHandle Handle;
                Handle.DataTable = Table;
                Handle.RowName = RowName;
                return Handle;
            }
        }
    }

    UE_LOG(LogTemp, Warning, TEXT("GetDataTableRowHandle: Row '%s' not found in any NamedDataTables!"),
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

UMaterialInstanceDynamic* AMainGameState::GetMIDItemImage(UItem* Item, const FIntPoint& Size)
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

UItemUserWidget* AMainGameState::GetDragAndDropItemWidget()
{
    DragAndDropItemWidget->SetVisibility(ESlateVisibility::Visible);
    DragAndDropItemWidget->RemoveFromParent();
    return DragAndDropItemWidget;
}