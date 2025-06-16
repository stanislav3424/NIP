#include "ItemUserWidget.h"
#include "Item.h"
#include "MainGameState.h"
#include "Blueprint/WidgetBlueprintLibrary.h"
#include "Components/Border.h"
#include "Components/SizeBox.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "Components/TextBlock.h"
#include "LogsMacros.h"
#include "PayloadItem.h"

// Native

void UItemUserWidget::NativeConstruct()
{
    Super::NativeConstruct();
    CHECK_NULLPTR_LOG(SizeBox);
    CHECK_NULLPTR_LOG(Background);
    CHECK_NULLPTR_LOG(ItemImage);
    CHECK_NULLPTR_LOG(TextBlock_Name);
}

int32 UItemUserWidget::NativePaint(const FPaintArgs& Args, const FGeometry& AllottedGeometry,
                                   const FSlateRect& MyClippingRect, FSlateWindowElementList& OutDrawElements,
                                   int32 LayerId, const FWidgetStyle& InWidgetStyle, bool bParentEnabled) const
{
    LayerId = Super::NativePaint(Args, AllottedGeometry, MyClippingRect, OutDrawElements, LayerId, InWidgetStyle,
                                 bParentEnabled);

    const FVector2D TopLeft = FVector2D(0.f, 0.f);
    const FVector2D TopRight = FVector2D(AllottedGeometry.GetLocalSize().X, 0.f);
    const FVector2D BottomRight = AllottedGeometry.GetLocalSize();
    const FVector2D BottomLeft = FVector2D(0.f, AllottedGeometry.GetLocalSize().Y);

    TArray<FVector2D> Points = {TopLeft, TopRight, BottomRight, BottomLeft, TopLeft};

    FSlateDrawElement::MakeLines(OutDrawElements, LayerId + 1, AllottedGeometry.ToPaintGeometry(), Points,
                                 ESlateDrawEffect::None, BorderColor, true, 1.0f);

    return LayerId + 1;
}

FReply UItemUserWidget::NativeOnMouseButtonDown(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent)
{
    if (InMouseEvent.IsMouseButtonDown(EKeys::LeftMouseButton))
        return UWidgetBlueprintLibrary::DetectDragIfPressed(InMouseEvent, this, EKeys::LeftMouseButton).NativeReply;

    return Super::NativeOnMouseButtonDown(InGeometry, InMouseEvent);
}

void UItemUserWidget::NativeOnDragDetected(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent,
                                           UDragDropOperation*& OutOperation)
{
    UDragDropOperation* DragOp = NewObject<UDragDropOperation>();

    if (!MainGameState)
        return;

    auto DragAndDropItemWidget = MainGameState->GetDragAndDropItemWidget();

    if (!Item || !DragOp || !DragAndDropItemWidget)
    {
        CHECK_NULLPTR_LOG(Item);
        CHECK_NULLPTR_LOG(DragOp);
        CHECK_NULLPTR_LOG(DragAndDropItemWidget);
        return;
    }

    DragAndDropItemWidget->InitializeItem(Item);
    DragOp->DefaultDragVisual = DragAndDropItemWidget;
    DragOp->Pivot = EDragPivot::CenterCenter;
    DragOp->Payload = Item->GetPayloadItem();

    Item->RemoveContainerOwner();
    OutOperation = DragOp;
}

void UItemUserWidget::InitializeItem(UItem* NewItem)
{
    bCustomSize = false;
    if (!NewItem)
    {
        RemoveFromParent();
        return;
    }
    if (Item == NewItem)
        return;

    Item = NewItem;
    UpdateAllVisualization();
}

void UItemUserWidget::InitializeItemCustomSize(UItem* NewItem)
{
    bCustomSize = true;

    if (Item == NewItem && NewItem)
        return;

    Item = NewItem;
    UpdateAllVisualization();
}

// Visualization

void UItemUserWidget::UpdateVisualization()
{
    SetupBackground();
}

void UItemUserWidget::UpdateAllVisualization() {
    SetupSizeBox();
    SetupItemImage();
    UpdateVisualization();
    SetupTextBlock();
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
        if (ItemImage)
            ItemImage->SetVisibility(ESlateVisibility::Hidden);
        return;
    }
    if (!ItemImage || !SizeBox || !MainGameState || !Item)
        return;

    auto& ItemSize = Item->GetItemSize();
    UMaterialInstanceDynamic* MID = MainGameState->GetMIDItemImage(Item, ItemSize);
    if (MID)
    {
        ItemImage->SetVisibility(ESlateVisibility::Visible);
        ItemImage->SetBrushFromMaterial(MID);
    }
}

void UItemUserWidget::SetupTextBlock()
{
    if (!TextBlock_Name || !Item)
        return;
    TextBlock_Name->SetText(FText::FromName(Item->GetID()));
}