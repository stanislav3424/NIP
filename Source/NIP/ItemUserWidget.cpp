#include "ItemUserWidget.h"
#include "Item.h"
#include "MainGameState.h"

// NativeConstruct

void UItemUserWidget::NativeConstruct()
{
    Super::NativeConstruct();
    SetupBackground();
}

void UItemUserWidget::SetupBackground()
{
    if (!Background)
        return;
    FSlateBrush Brush;
    Brush.TintColor = FLinearColor(0.f, 0.f, 0.f, 0.4f);
    Background->SetBrush(Brush);
}

void UItemUserWidget::InitializeItem(UItem* NewItem)
{
    if (!NewItem)
    {
        RemoveFromParent();
        return;
    }

    Item = NewItem;
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

