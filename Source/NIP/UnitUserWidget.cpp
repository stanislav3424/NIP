#include "UnitUserWidget.h"
#include "MainGameState.h"
#include "Inventory.h"
#include "ItemUserWidget.h"
#include "Unit.h"
#include "InventoryUserWidget.h"

// NativeConstruct

void UUnitUserWidget::NativeConstruct()
{
    Super::NativeConstruct();
    SetupBackground();
    Reset();
}

void UUnitUserWidget::SetupBackground()
{
    if (!Background)
        return;
    FSlateBrush Brush;
    Brush.TintColor = FLinearColor(0.f, 0.f, 0.f, 0.2f);
    Background->SetBrush(Brush);
}

void UUnitUserWidget::InitializeUnit(UUnit* NewUnit)
{
    if (!NewUnit)
    {
        Reset();
        return;
    }
    if (Unit == NewUnit)
        return;

    Unit = NewUnit;
}

void UUnitUserWidget::Reset() {}
