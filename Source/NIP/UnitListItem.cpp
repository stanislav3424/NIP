#include "UnitListItem.h"
#include "Unit.h"
#include "MainPlayerController.h"

void UUnitListItem::NativeOnListItemObjectSet(UObject* ListItemObject)
{
    if (!IsValid(this) || !ListItemObject || !MainGameState || !SizeBox || !Background || !ItemImage || !CanvasPanel ||
        !TextBlock_Name || !MainPlayerController)
        return;

    Unit = Cast<UUnit>(ListItemObject);
    if (!Unit)
        return;

    UpdateVisualization();

    TextBlock_Name->SetText(FText::FromName(Unit->GetID()));

    if (MainPlayerController)
        DelegateHandle =
            MainPlayerController->OnUISelectedUnitChanged.AddUObject(this, &UUnitListItem::UnitSelectionChanged);
    UnitSelectionChanged();
}

void UUnitListItem::NativeDestruct()
{
    if (MainPlayerController && DelegateHandle.IsValid())
        MainPlayerController->OnUISelectedUnitChanged.Remove(DelegateHandle);
    Super::NativeDestruct();
}

// Visualization

void UUnitListItem::UpdateVisualization()
{
    FLinearColor FinalColor = BackgroundColor;
    if (bMouseEnter)
        FinalColor += ModifierMouseEnterColor;
    if (bSelectedUnit)
        FinalColor += ModifierSelectedUnitColor;

    if (!Background)
        return;
    FSlateBrush Brush;
    Brush.TintColor = FinalColor;
    Background->SetBrush(Brush);

}

void UUnitListItem::UnitSelectionChanged()
{
    if (!MainPlayerController)
        return;
    auto SelectedUnit = MainPlayerController->GetUISelectedUnit();

    if (Unit == SelectedUnit)
        bSelectedUnit = true;
    else
        bSelectedUnit = false;

    UpdateVisualization();
}

// Interaction

FReply UUnitListItem::NativeOnMouseButtonDown(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent)
{
    if (InMouseEvent.GetEffectingButton() == EKeys::LeftMouseButton && MainPlayerController)
    {
        MainPlayerController->SetUISelectedUnit(Unit);
        return FReply::Handled();
    }
    return FReply::Unhandled();
}