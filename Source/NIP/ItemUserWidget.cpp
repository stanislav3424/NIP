#include "ItemUserWidget.h"
#include "Item.h"
#include "MainGameState.h"

// NativeConstruct

void UItemUserWidget::NativeConstruct()
{
    Super::NativeConstruct();
    UpdateVisualization();
}

void UItemUserWidget::InitializeItem(UItem* NewItem)
{
    bCustomSize = false;
    if (!NewItem)
    {
        RemoveFromParent();
        return;
    }

    Item = NewItem;

    UpdateVisualization();
}

void UItemUserWidget::InitializeItemCustomSize(UItem* NewItem)
{
    bCustomSize = true;
    if (!NewItem)
    {
        UpdateVisualization();
        return;
    }
    if (Item == NewItem)
        return;

    Item = NewItem;
    UpdateVisualization();
}

// Visualization

void UItemUserWidget::UpdateVisualization()
{
    SetupSizeBox();
    SetupBackground();
    SetupItemImage();
}

void UItemUserWidget::SetupSizeBox()
{
    if (!SizeBox || !Item || bCustomSize)
        return;

    auto& ItemSize = Item->GetItemSize();
    SizeBox->SetWidthOverride(ItemSize.X * InventoryCellSize);
    SizeBox->SetHeightOverride(ItemSize.Y * InventoryCellSize);
}

void UItemUserWidget::SetupBackground() {
    if (!Background)
        return;

    FLinearColor FinalColor = BackgroundColor;
    if (bMouseEnter)
        FinalColor += ModifierMouseEnterColor;
    FSlateBrush Brush;
    Brush.TintColor = FinalColor;
    Background->SetBrush(Brush);
}

void UItemUserWidget::SetupItemImage()
{
    if (!Item)
    {
        ItemImage->SetVisibility(ESlateVisibility::Hidden);
        return;
    }
    if (!ItemImage || !SizeBox || !MainGameState || !Item)
        return;

    auto& ItemSize = Item->GetItemSize();
    UMaterialInstanceDynamic* MID = MainGameState->GetMaterialInstanceDynamic(Item, ItemSize);
    if (MID)
    {
        ItemImage->SetVisibility(ESlateVisibility::Visible);
        ItemImage->SetBrushFromMaterial(MID);
    }
}
