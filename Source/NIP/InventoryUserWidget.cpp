#include "InventoryUserWidget.h"
#include "Item.h"
#include "Inventory.h"
#include "ItemUserWidget.h"
#include "MainGameState.h"

// NativeConstruct

void UInventoryUserWidget::NativeConstruct()
{
    Super::NativeConstruct();
    SetupBackground();
}

void UInventoryUserWidget::InitializeInventory(UInventory* NewInventory)
{
    if (Inventory == NewInventory)
        return;
    Inventory = NewInventory;

    Reset();
}

void UInventoryUserWidget::Reset()
{
    if (CanvasPanel)
        CanvasPanel->ClearChildren();

    SetupSizeBox();
    SetupBackground();
    SetupItems();
}

void UInventoryUserWidget::SetupSizeBox()
{
    if (!SizeBox || !Inventory)
        return;

    auto& InventorySize = Inventory->GetSizeInventory();

    SizeBox->SetWidthOverride(InventorySize.X * InventoryCellSize);
    SizeBox->SetHeightOverride(InventorySize.Y * InventoryCellSize);
}

void UInventoryUserWidget::SetupBackground()
{
    if (!Background)
        return;

    if (Inventory)
        Background->SetVisibility(ESlateVisibility::Collapsed);
    else
    {
        Background->SetVisibility(ESlateVisibility::Visible);
        //Background->SetBrushFromMaterial();
    }
}

void UInventoryUserWidget::SetupItems()
{
    if (!SizeBox || !Inventory)
        return;

    const FIntPoint& ItemSize = Inventory->GetSizeInventory();
    SizeBox->SetWidthOverride(ItemSize.X * InventoryCellSize);
    SizeBox->SetHeightOverride(ItemSize.Y * InventoryCellSize);

    const auto& ItemPositionData = Inventory->GetItemsPositionData();

    for (auto& Item : ItemPositionData)
    {
        if (!Item.Item)
            continue;

        UItemUserWidget* ItemWidget = CreateWidget<UItemUserWidget>(GetWorld(), UItemUserWidget::StaticClass());
        if (!ItemWidget)
            continue;

        ItemWidget->InitializeItem(Item.Item);

    }
}
