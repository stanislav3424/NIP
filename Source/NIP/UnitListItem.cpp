#include "UnitListItem.h"
#include "Unit.h"
#include "MainPlayerController.h"

void UUnitListItem::NativeOnListItemObjectSet(UObject* ListItemObject)
{
<<<<<<< HEAD
    if (!IsValid(this) || !ListItemObject || !MainGameState || !SizeBox || !Background || !ItemImage || !CanvasPanel ||
        !TextBlock_Name || !MainPlayerController)
=======
    if (!ListItemObject || !MainGameState || !SizeBox || !Background || !ItemImage || !CanvasPanel || !TextBlock_Name)
>>>>>>> 8109ca2ede52324330ba30f33c79a0a8097732e3
        return;

    Unit = Cast<UUnit>(ListItemObject);
    if (!Unit)
        return;

<<<<<<< HEAD
    UpdateVisualization();

    TextBlock_Name->SetText(FText::FromName(Unit->GetID()));

    if (MainPlayerController)
        DelegateHandle =
            MainPlayerController->OnUISelectedUnitChanged.AddUObject(this, &UUnitListItem::UnitSelectionChanged);
    UnitSelectionChanged();
=======
    SetupBackground();

    auto& ID = Unit->GetID();
    TextBlock_Name->SetText(FText::FromName(ID));

    if (!MainPlayerController)
        return;

    MainPlayerController->OnUISelectedUnitChanged.AddDynamic(this, &UUnitListItem::UnitSelectionChanged);
>>>>>>> 8109ca2ede52324330ba30f33c79a0a8097732e3
}

void UUnitListItem::NativeDestruct()
{
<<<<<<< HEAD
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
=======
    if (MainPlayerController)
        MainPlayerController->OnUISelectedUnitChanged.RemoveDynamic(this, &UUnitListItem::UnitSelectionChanged);
    Super::NativeDestruct();
}

void UUnitListItem::SetupBackground()
{
    if (!Background)
        return;
    FSlateBrush Brush;
    Brush.TintColor = FLinearColor(0.f, 0.f, 0.f, 0.4f);
    Background->SetBrush(Brush);
}

// Visualization

void UUnitListItem::UpdateVisualization() {}
>>>>>>> 8109ca2ede52324330ba30f33c79a0a8097732e3

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
<<<<<<< HEAD
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
=======
>>>>>>> 8109ca2ede52324330ba30f33c79a0a8097732e3
}