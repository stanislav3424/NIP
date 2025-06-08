#include "Inventory.h"
#include "MainGameState.h"
// Data

const TArray<FItemPositionData> UInventory::GetItemsPositionData() const
{
    TArray<FItemPositionData> ItemPositionData;
    TArray<UItem*> ProcessedItems;

    const int32 InventoryWidth = InventorySize.X;

    for (int32 Index = 0; Index < Inventory.Num(); ++Index)
    {
        UItem* CurrentItem = Inventory[Index];

        if (!CurrentItem || ProcessedItems.Contains(CurrentItem))
            continue;

        ProcessedItems.Add(CurrentItem);

        FIntPoint Position;
        Position.X = Index % InventoryWidth;
        Position.Y = Index / InventoryWidth;

        FItemPositionData NewData;
        NewData.Item = CurrentItem;
        NewData.Position = Position;

        ItemPositionData.Add(NewData);
    }

    return ItemPositionData;
}

// Initialization

void UInventory::Initialization(const FDataTableRowHandle& InitializationDataTableRowHandle)
{
    UItem::Initialization(InitializationDataTableRowHandle);
    MainGameState = Cast<AMainGameState>(GetWorld()->GetGameState());
    if (!MainGameState)
        return;
    FInventoryData* InventoryData = MainGameState->GetItemData<FInventoryData>(DataTableRowHandle);
    if (!InventoryData)
        return;

    InventorySize = InventoryData->SizeInventory;
}

// Add / Remove Item

bool UInventory::AddToInventory(UItem* AddItem, int32 IndexInventory)
{
    if (!AddItem)
        return false;
    if (IndexInventory == INDEX_NONE)
    {
        int32 Index = FaindTryAddToInventory(AddItem);
        if (Index == INDEX_NONE)
            return false;
        else
        {
            AddToInventorySub(AddItem, Index);
            return true;
        }
    }
    else
    {
        if (TryAddToInventory(AddItem, IndexInventory))
        {
            AddToInventorySub(AddItem, IndexInventory);
            return true;
        }
        else
            return false;
    }
}

void UInventory::AddToInventorySub(UItem* AddItem, int32 IndexInventory)
{
    if (!AddItem || !Inventory.IsValidIndex(IndexInventory))
        return;

    AddItem->SetContainerOwner(this);

    const int32 WidthItem = AddItem->GetSizeItem().X;
    const int32 HeightItem = AddItem->GetSizeItem().Y;
    const int32 InventoryWidth = InventorySize.X;

    for (int32 Index = 0; Index < WidthItem * HeightItem; ++Index)
    {
        const int32 CurrentIndex = IndexInventory + (Index % WidthItem) + (Index / WidthItem) * InventoryWidth;
        if (!Inventory.IsValidIndex(CurrentIndex))
            break;
        Inventory[CurrentIndex] = AddItem;
    }
    CheckInventoryEmpty();
}

bool UInventory::TryAddToInventory(UItem* AddItem, int32 IndexInventory)
{
    if (!AddItem || !Inventory.IsValidIndex(IndexInventory))
        return false;

    if (!AddItem->IsCanPut())
        return false;

    const int32 InventoryWidth = InventorySize.X;
    const int32 InventoryHeight = InventorySize.Y;
    const int32 WidthItem = AddItem->GetSizeItem().X;
    const int32 HeightItem = AddItem->GetSizeItem().Y;

    FIntPoint StartPosition = IntToPosition(IndexInventory);
    if (StartPosition.X == INDEX_NONE || StartPosition.Y == INDEX_NONE)
        return false;

    if (StartPosition.X + WidthItem > InventoryWidth || StartPosition.Y + HeightItem > InventoryHeight)
        return false;

    for (int32 Y = 0; Y < HeightItem; ++Y)
        for (int32 X = 0; X < WidthItem; ++X)
        {
            const int32 CheckX = StartPosition.X + X;
            const int32 CheckY = StartPosition.Y + Y;
            const int32 CheckIndex = CheckY * InventoryWidth + CheckX;

            if (!Inventory.IsValidIndex(CheckIndex) || Inventory[CheckIndex] != nullptr)
                return false;
        }
    return true;
}

int32 UInventory::FaindTryAddToInventory(UItem* AddItem)
{
    if (!AddItem)
        return INDEX_NONE;

    for (int32 Index = 0; Index < Inventory.Num(); ++Index)
        if (Inventory[Index] == nullptr && TryAddToInventory(AddItem, Index))
            return Index;
    return INDEX_NONE;
}

bool UInventory::RemoveItem(UItem* RemoveItem)
{
    if (!RemoveItem)
        return false;
    SubRemoveItem(RemoveItem);
    CheckInventoryEmpty();
    return true;
}

bool UInventory::RemoveItemIndex(int32 IndexInventory)
{
    UItem* Item = GetItemIndex(IndexInventory);
    if (!Item)
        return false;
    RemoveItem(Item);
    return true;
}

void UInventory::SubRemoveItem(UItem* RemoveItem)
{
    if (!RemoveItem)
        return;
    for (auto& Slot : Inventory)
        if (Slot == RemoveItem)
            Slot = nullptr;
}

void UInventory::CheckInventoryEmpty()
{
    bool Check = true;
    for (UItem* ItemBase : Inventory)
        if (ItemBase)
            Check = false;
    bCanPut = Check;
}

UItem* UInventory::GetItemIndex(int32 IndexInventory) const
{
    if (Inventory.IsValidIndex(IndexInventory))
        return Inventory[IndexInventory];
    else
        return nullptr;
}

int32 UInventory::PositionToInt(FIntPoint Position) const
{
    const int32 InventoryWidth = InventorySize.X;
    const int32 InventoryHeight = InventorySize.Y;
    if (InventoryWidth <= 0 || InventoryHeight <= 0)
    {
        return INDEX_NONE;
    }

    if (Position.X < 0 || Position.Y < 0 || Position.X >= InventoryWidth || Position.Y >= InventoryHeight)
    {
        return INDEX_NONE;
    }

    return Position.Y * InventoryWidth + Position.X;
}

FIntPoint UInventory::IntToPosition(int32 Index) const
{
    FIntPoint Position;

    const int32 InventoryWidth = InventorySize.X;
    const int32 InventoryHeight = InventorySize.Y;

    if (InventoryWidth <= 0 || InventoryHeight <= 0)
    {
        Position.X = INDEX_NONE;
        Position.Y = INDEX_NONE;
        return Position;
    }

    if (Index < 0 || Index >= Inventory.Num())
    {
        Position.X = INDEX_NONE;
        Position.Y = INDEX_NONE;
        return Position;
    }

    Position.X = Index % InventoryWidth;
    Position.Y = Index / InventoryHeight;

    return Position;
}