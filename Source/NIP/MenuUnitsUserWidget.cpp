#include "MenuUnitsUserWidget.h"
#include "MainGameState.h"
#include "MainPlayerController.h"
#include "Unit.h"
#include "UnitUserWidget.h"

// NativeConstruct

void UMenuUnitsUserWidget::NativeConstruct()
{
    Super::NativeConstruct();
    SetupBackground();

    if (MainPlayerController)
        DelegateHandle =
            MainPlayerController->OnUISelectedUnitChanged.AddUObject(this, &UMenuUnitsUserWidget::UnitSelectionChanged);
    ChangeUnits();
}

void UMenuUnitsUserWidget::SetupBackground()
{
    if (!Background)
        return;
    FSlateBrush Brush;
    Brush.TintColor = FLinearColor(0.f, 0.f, 0.f, 0.0f);
    Background->SetBrush(Brush);
}

// Change

void UMenuUnitsUserWidget::ChangeUnits()
{
    if (!MainPlayerController || !ListView || !UnitUserWidget)
        return;
    ChangeListView();
}

void UMenuUnitsUserWidget::ChangeListView()
{
    auto& AddedUnits = MainPlayerController->GetAddedUnits();
    auto& RemovedUnits = MainPlayerController->GetRemovedUnits();

    for (auto* Unit : AddedUnits.Array())
    { 
        if (Unit)
            ListView->AddItem(Unit);
    }
    for (auto* Unit : RemovedUnits.Array())
    {
        if (Unit)
            ListView->RemoveItem(Unit);
    }
    
}

void UMenuUnitsUserWidget::UnitSelectionChanged() {
    if (!MainPlayerController || !UnitUserWidget)
        return;
    UnitUserWidget->InitializeUnit(MainPlayerController->GetUISelectedUnit());
}