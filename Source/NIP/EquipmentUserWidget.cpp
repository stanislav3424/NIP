#include "EquipmentUserWidget.h"
#include "Item.h"
#include "MainGameState.h"
#include "Blueprint/WidgetBlueprintLibrary.h"
#include "Components/Border.h"
#include "Components/SizeBox.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "Components/TextBlock.h"
#include "LogsMacros.h"
#include "PayloadItem.h"
#include "ItemDragDropOperation.h"
#include "Components/CanvasPanelSlot.h"
#include "ItemUserWidget.h"

// Native

void UEquipmentUserWidget::NativeConstruct()
{
    Super::NativeConstruct();
    CHECK_NULLPTR_LOG(SizeBox);
    CHECK_NULLPTR_LOG(Background);
    CHECK_NULLPTR_LOG(ItemImage);
    CHECK_NULLPTR_LOG(TextBlock_Name);
}

int32 UEquipmentUserWidget::NativePaint(const FPaintArgs& Args, const FGeometry& AllottedGeometry,
                                   const FSlateRect& MyClippingRect, FSlateWindowElementList& OutDrawElements,
                                   int32 LayerId, const FWidgetStyle& InWidgetStyle, bool bParentEnabled) const
{
    LayerId = Super::NativePaint(Args, AllottedGeometry, MyClippingRect, OutDrawElements, LayerId, InWidgetStyle,
                                 bParentEnabled);

    const float LineThickness = 1.0f;
    const FVector2D HalfThickness(LineThickness * 0.5f, LineThickness * 0.5f);
    const FVector2D Size = AllottedGeometry.GetLocalSize();

    TArray<FVector2D> Points = {FVector2D(0.f + HalfThickness.X, 0.f + HalfThickness.Y),
                                FVector2D(Size.X - HalfThickness.X, 0.f + HalfThickness.Y),
                                FVector2D(Size.X - HalfThickness.X, Size.Y - HalfThickness.Y),
                                FVector2D(0.f + HalfThickness.X, Size.Y - HalfThickness.Y),
                                FVector2D(0.f + HalfThickness.X, 0.f + HalfThickness.Y)};

    FSlateDrawElement::MakeLines(OutDrawElements, LayerId + 1, AllottedGeometry.ToPaintGeometry(), Points,
                                 ESlateDrawEffect::None, BorderColor, true, LineThickness);

    return LayerId + 1;
}

FReply UEquipmentUserWidget::NativeOnMouseButtonDown(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent)
{
    if (InMouseEvent.IsMouseButtonDown(EKeys::LeftMouseButton))
        if (Item)
            return UWidgetBlueprintLibrary::DetectDragIfPressed(InMouseEvent, this, EKeys::LeftMouseButton).NativeReply;

    return Super::NativeOnMouseButtonDown(InGeometry, InMouseEvent);
}

void UEquipmentUserWidget::NativeOnDragDetected(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent,
                                           UDragDropOperation*& OutOperation)
{
    UItemDragDropOperation* DragDropOperation = NewObject<UItemDragDropOperation>();

    if (!MainGameState)
        return;

    auto DragAndDropItemWidget = MainGameState->GetDragAndDropItemWidget();

    if (!Item || !DragDropOperation || !DragAndDropItemWidget)
    {
        CHECK_NULLPTR_LOG(Item);
        CHECK_NULLPTR_LOG(DragDropOperation);
        CHECK_NULLPTR_LOG(DragAndDropItemWidget);
        return;
    }

    DragAndDropItemWidget->InitializeItem(Item);
    DragDropOperation->DefaultDragVisual = DragAndDropItemWidget;
    DragDropOperation->Pivot = EDragPivot::CenterCenter;
    DragDropOperation->Payload = Item->GetPayloadItem();

    Item->RemoveContainerOwner();
    OutOperation = DragDropOperation;
}

bool UEquipmentUserWidget::NativeOnDrop(const FGeometry& InGeometry, const FDragDropEvent& InDragDropEvent,
                                        UDragDropOperation* InOperation)
{
    if (!InOperation || Item)
        return false;
    UPayloadItem* PayloadItem = Cast<UPayloadItem>(InOperation->Payload);
    if (!PayloadItem)
        return false;
    auto ItemDrop = PayloadItem->GetItem();
    if (!ItemDrop)
        return false;

    return true;
}

void UEquipmentUserWidget::InitializeItem(UItem* NewItem)
{
    Item = NewItem;
    UpdateAllVisualization();
}

// Visualization

void UEquipmentUserWidget::UpdateVisualization() { SetupBackground(); }

void UEquipmentUserWidget::UpdateAllVisualization()
{
    SetupItemImage();
    UpdateVisualization();
    SetupTextBlock();
}

void UEquipmentUserWidget::SetupBackground()
{
    if (!Background)
        return;
    FLinearColor FinalColor = BackgroundColor;
    if (bMouseEnter)
        FinalColor += ModifierMouseEnterColor;
    FSlateBrush Brush;
    Brush.TintColor = FinalColor;
    Background->SetBrush(Brush);
}

void UEquipmentUserWidget::SetupItemImage()
{
    if (!Item)
    {
        if (ItemImage)
            ItemImage->SetVisibility(ESlateVisibility::Hidden);
        return;
    }
    if (!ItemImage || !SizeBox || !MainGameState || !Item)
        return;
    FIntPoint ItemSize{0, 0};
    if (UCanvasPanelSlot* CanvasSlot = Cast<UCanvasPanelSlot>(this->Slot))
    {
        FVector2D Size = CanvasSlot->GetSize();
        ItemSize.X = Size.X;
        ItemSize.Y = Size.Y;
    }
    UMaterialInstanceDynamic* MID = MainGameState->GetMIDItemImage(Item, ItemSize);
    if (MID)
    {
        ItemImage->SetVisibility(ESlateVisibility::Visible);
        ItemImage->SetBrushFromMaterial(MID);
    }
}

void UEquipmentUserWidget::SetupTextBlock()
{
    if (!TextBlock_Name || !Item)
        return;
    TextBlock_Name->SetText(FText::FromName(Item->GetID()));
}