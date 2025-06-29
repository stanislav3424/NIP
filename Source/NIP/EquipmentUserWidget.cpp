#include "EquipmentUserWidget.h"
#include "Item.h"
#include "ItemData.h"
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
#include "UnitUserWidget.h"
#include "Unit.h"

// Native

void UEquipmentUserWidget::NativeConstruct()
{
    Super::NativeConstruct();
    CHECK_MULTI(SizeBox, Background, ItemImage, TextBlock_Name);
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
    if (Item)
    {
        CHECK(MainGameState);
        UItemDragDropOperation* DragDropOperation = NewObject<UItemDragDropOperation>();
        CHECK(DragDropOperation);
        auto DragAndDropItemWidget = MainGameState->GetDragAndDropItemWidget();
        CHECK(DragAndDropItemWidget);
        DragAndDropItemWidget->InitializeItem(Item);
        DragDropOperation->DefaultDragVisual = DragAndDropItemWidget;
        DragDropOperation->Pivot = EDragPivot::CenterCenter;
        DragDropOperation->Payload = Item->GetPayloadItem();

        Item->RemoveContainerOwner();
        OutOperation = DragDropOperation;
    }
}

bool UEquipmentUserWidget::NativeOnDrop(const FGeometry& InGeometry, const FDragDropEvent& InDragDropEvent,
                                        UDragDropOperation* InOperation)
{
    
    if (Item)
        return false;

    CHECK_F(InOperation);
    UPayloadItem* PayloadItem = Cast<UPayloadItem>(InOperation->Payload);
    CHECK_F(PayloadItem);
    auto ItemDrop = PayloadItem->GetItem();
    if (!ItemDrop)
        return false;

    UUnitUserWidget* CreatorWidget = GetTypedOuter<UUnitUserWidget>();
    CHECK_F(CreatorWidget);
    auto Unit = CreatorWidget->GetUnit();
    CHECK_F(Unit);
    return Unit->PutOnEquipment(ItemDrop, EquipmentSlots);
}

void UEquipmentUserWidget::InitializeItem(UItem* NewItem, EEquipmentSlots SetEquipmentSlots)
{
    Item = NewItem;
    EquipmentSlots = SetEquipmentSlots;
    UpdateAllVisualization();
}

// Visualization

void UEquipmentUserWidget::UpdateVisualization() { SetupBackground(); }

void UEquipmentUserWidget::UpdateAllVisualization()
{
    SetupItemImage();
    SetupBackground();
    SetupTextBlock();
}

void UEquipmentUserWidget::SetupBackground()
{
    CHECK(Background);
    FLinearColor FinalColor = BackgroundColor;
    if (bMouseEnter)
        FinalColor += ModifierMouseEnterColor;
    FSlateBrush Brush;
    Brush.TintColor = FinalColor;
    Background->SetBrush(Brush);
}

void UEquipmentUserWidget::SetupItemImage()
{
    CHECK_MULTI(ItemImage, MainGameState);
    if (!Item)
    {
        ItemImage->SetVisibility(ESlateVisibility::Hidden);
        return;
    }
    FIntPoint ItemSize{0, 0};
    if (UCanvasPanelSlot* CanvasSlot = Cast<UCanvasPanelSlot>(this->Slot))
    {
        FVector2D Size = CanvasSlot->GetSize();
        ItemSize.X = Size.X;
        ItemSize.Y = Size.Y;
    }
    if (UMaterialInstanceDynamic* MID = MainGameState->GetMIDItemImage(Item, ItemSize))
    {
        ItemImage->SetVisibility(ESlateVisibility::Visible);
        ItemImage->SetBrushFromMaterial(MID);
    }
}

void UEquipmentUserWidget::SetupTextBlock()
{
    CHECK(TextBlock_Name);
    if (!Item)
        return;
    TextBlock_Name->SetText(FText::FromName(Item->GetID()));
}