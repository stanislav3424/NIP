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

    if (!CanvasPanel || !TextBlock_Name || !InventoryUserWidget || !EquipmentBackpackUserWidget ||
        !EquipmentWeaponUserWidget)
        return;
    TextBlock_Name->SetText(FText::FromName(Unit->GetID()));
    CanvasPanel->SetVisibility(ESlateVisibility::SelfHitTestInvisible);
    InventoryUserWidget->InitializeInventory(Unit->GetEquipmentBySlot<UInventory>(EEquipmentSlots::Backpack));
    EquipmentBackpackUserWidget->InitializeItemCustomSize(Unit->GetEquipmentBySlot(EEquipmentSlots::Backpack));
    EquipmentWeaponUserWidget->InitializeItemCustomSize(Unit->GetEquipmentBySlot(EEquipmentSlots::Weapon));
}

void UUnitUserWidget::Reset()
{
    if (!CanvasPanel || !TextBlock_Name || !InventoryUserWidget || !EquipmentBackpackUserWidget ||
        !EquipmentWeaponUserWidget)
        return;
    Unit = nullptr;
    CanvasPanel->SetVisibility(ESlateVisibility::Hidden);
    InventoryUserWidget->InitializeInventory(nullptr);
    EquipmentBackpackUserWidget->InitializeItemCustomSize(nullptr);
    EquipmentWeaponUserWidget->InitializeItemCustomSize(nullptr);
}
