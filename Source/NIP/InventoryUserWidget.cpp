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


void UInventoryUserWidget::SetupBackground()
{
    if (!Background)
        return;
    FSlateBrush Brush;
    Brush.TintColor = FLinearColor(0.f, 0.f, 0.f, 0.4f);
    Background->SetBrush(Brush);
}

void UInventoryUserWidget::InitializeUnit(UInventory* NewInventory)
{
    Reset();
    if (!NewInventory)
        return;

    Inventory = NewInventory;
    SetupItems();
}

void UInventoryUserWidget::SetupItems()
{
    if (!SizeBox || !MainGameState || !Inventory)
        return;

    const FIntPoint& ItemSize = Inventory->GetInventorySize();
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

void UInventoryUserWidget::Reset()
{
    if (CanvasPanel)
        CanvasPanel->ClearChildren();
    Inventory = nullptr;
}
