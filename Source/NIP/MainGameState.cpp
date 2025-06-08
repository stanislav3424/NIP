#include "MainGameState.h"
#include "Item.h"
#include "RealtimeRenderingPipeline.h"
#include "Engine/DataTable.h"
#include "ItemUserWidget.h"
#include "InventoryUserWidget.h"
#include "UnitUserWidget.h"
#include "MenuUnitsUserWidget.h"

void AMainGameState::BeginPlay()
{
    Super::BeginPlay();
    CheckDataTable();
    if (GetWorld())
        RealtimeRenderingPipeline = GetWorld()->SpawnActor<ARealtimeRenderingPipeline>();
}

UItem* AMainGameState::CreateItem(const FDataTableRowHandle& DataTableRowHandle)
{
    FItemData* ItemData = GetItemData(DataTableRowHandle);
    if (!ItemData)
        return nullptr;

    UItem* Item = NewObject<UItem>(this, ItemData->ClassItem);
    Item->Initialization(DataTableRowHandle);
    return Item;
}

AActor* AMainGameState::SpawnRepresented(const FDataTableRowHandle& DataTableRowHandle)
{
    FItemData* ItemData = GetItemData(DataTableRowHandle);
    if (!ItemData)
        return nullptr;

    return nullptr;
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