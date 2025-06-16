#include "InventoryUserWidget.h"
#include "Item.h"
#include "Inventory.h"
#include "ItemUserWidget.h"
#include "MainGameState.h"
#include "LogsMacros.h"
#include "Components/CanvasPanelSlot.h"
#include "Components/Border.h"
#include "Components/CanvasPanel.h"
#include "Components/SizeBox.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "ItemData.h"
#include "PayloadItem.h"
#include "Blueprint/DragDropOperation.h"

// NativeConstruct

void UInventoryUserWidget::NativeConstruct()
{
    Super::NativeConstruct();
    SetupBackground();
}

int32 UInventoryUserWidget::NativePaint(const FPaintArgs& Args, const FGeometry& AllottedGeometry,
                                        const FSlateRect& MyClippingRect, FSlateWindowElementList& OutDrawElements,
                                        int32 LayerId, const FWidgetStyle& InWidgetStyle, bool bParentEnabled) const
{
    LayerId = Super::NativePaint(Args, AllottedGeometry, MyClippingRect, OutDrawElements, LayerId, InWidgetStyle,
                                 bParentEnabled);

    if (Inventory)
        for (const TArray<FVector2D>& LineSegment : GridLineSegments)
            FSlateDrawElement::MakeLines(OutDrawElements, LayerId - LayerIdLines * 7,
                                         AllottedGeometry.ToPaintGeometry(), LineSegment, ESlateDrawEffect::None,
                                         BorderColor, true, 1.f);

    return LayerId + 1;
}

bool UInventoryUserWidget::NativeOnDrop(const FGeometry& InGeometry, const FDragDropEvent& InDragDropEvent,
                                        UDragDropOperation* InOperation)
{
    if (!InOperation)
        return false;
    UPayloadItem* PayloadItem = Cast<UPayloadItem>(InOperation->Payload);
    if (!PayloadItem || !Inventory)
        return false;
    auto Item = PayloadItem->GetItem();
    if (!Item)
        return false;

    FVector2D LocalPosition = InGeometry.AbsoluteToLocal(InDragDropEvent.GetScreenSpacePosition());

    int32 Index = Inventory->GetTopLeftIndex(Item, LocalPosition);
    if(!Inventory->AddToInventory(Item, Index))
        return false;
    return true;
}

void UInventoryUserWidget::InitializeInventory(UInventory* NewInventory)
{
    if (Inventory == NewInventory)
        return;
    if (Inventory)
        Inventory->OnChangesInventory.RemoveDynamic(this, &UInventoryUserWidget::InventoryChanges);

    Inventory = NewInventory;

    InventoryChanges();
    if (Inventory)
        Inventory->OnChangesInventory.AddDynamic(this, &UInventoryUserWidget::InventoryChanges);
}

void UInventoryUserWidget::InventoryChanges() {
    if (CanvasPanel)
        CanvasPanel->ClearChildren();
    SetupSizeBox();
    SetupBackground();
    CalculateGridLines();
    SetupItems();
}

void UInventoryUserWidget::SetupSizeBox()
{
    if (!SizeBox || !Inventory)
    {
        SizeBox->SetVisibility(ESlateVisibility::Collapsed);
        return;
    }

    SizeBox->SetVisibility(ESlateVisibility::Visible);
    auto& InventorySize = Inventory->GetSizeInventory();

    SizeBox->SetWidthOverride(InventorySize.X * InventoryCellSize);
    SizeBox->SetHeightOverride(InventorySize.Y * InventoryCellSize);
}

void UInventoryUserWidget::SetupBackground()
{
    if (!Background)
        return;

    FSlateBrush Brush;
    Brush.TintColor = FLinearColor(0.f,0.f,0.f,0.2f);
    Background->SetBrush(Brush);
}

void UInventoryUserWidget::SetupItems()
{
    if (!CanvasPanel || !Inventory || !MainGameState)
        return;

    LayerIdLines = 0;

    const auto& ItemPositionData = Inventory->GetItemsPositionData();

    auto& ClassItemUserWidget = MainGameState->GetClassItemUserWidget();

    for (auto& Item : ItemPositionData)
    {   
        if (!Item.Item)
            continue;

        UItemUserWidget* ItemWidget = CreateWidget<UItemUserWidget>(this, ClassItemUserWidget);
        if (!ItemWidget)
            continue;

        const float PositionX = Item.Position.X * InventoryCellSize;
        const float PositionY = Item.Position.Y * InventoryCellSize;

        if (UCanvasPanelSlot* CanvasSlot = Cast<UCanvasPanelSlot>(CanvasPanel->AddChild(ItemWidget)))
        {
            CanvasSlot->SetAutoSize(true);
            CanvasSlot->SetPosition(FVector2D(PositionX, PositionY));
        }

        ItemWidget->InitializeItem(Item.Item);
        ++LayerIdLines;
    }
}

void UInventoryUserWidget::CalculateGridLines()
{
    GridLineSegments.Empty();

    if (!Inventory)
        return;

    FIntPoint InventorySize = Inventory->GetSizeInventory();
    float CellSize = InventoryCellSize;

    for (int32 X = 0; X <= InventorySize.X; ++X)
    {
        TArray<FVector2D> VertLine;
        VertLine.Add(FVector2D(X * CellSize, 0));
        VertLine.Add(FVector2D(X * CellSize, InventorySize.Y * CellSize));
        GridLineSegments.Add(VertLine);
    }

    for (int32 Y = 0; Y <= InventorySize.Y; ++Y)
    {
        TArray<FVector2D> HorzLine;
        HorzLine.Add(FVector2D(0, Y * CellSize));
        HorzLine.Add(FVector2D(InventorySize.X * CellSize, Y * CellSize));
        GridLineSegments.Add(HorzLine);
    }
}