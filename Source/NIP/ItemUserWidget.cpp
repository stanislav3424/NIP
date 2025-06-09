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
    if (!NewItem)
    {
        RemoveFromParent();
        return;
    }

    Item = NewItem;
    UpdateVisualization();
}

// Visualization

void UItemUserWidget::UpdateVisualization()
{
    if (!Background)
        return;

    FLinearColor FinalColor = BackgroundColor;
    if (bMouseEnter)
        FinalColor += ModifierMouseEnterColor;
    FSlateBrush Brush;
    Brush.TintColor = FinalColor;
    Background->SetBrush(Brush);
    SetupMaterialInstanceDynamic();
}

void UItemUserWidget::SetupMaterialInstanceDynamic()
{
    if (!ItemImage || !SizeBox || !MainGameState || !Item)
        return;

    FIntPoint ItemSize = Item->GetItemSize();
    SizeBox->SetWidthOverride(ItemSize.X * InventoryCellSize);
    SizeBox->SetHeightOverride(ItemSize.Y * InventoryCellSize);

    UMaterialInstanceDynamic* MID = MainGameState->GetMaterialInstanceDynamic(Item, ItemSize);
    if (MID)
        ItemImage->SetBrushFromMaterial(MID);
}

