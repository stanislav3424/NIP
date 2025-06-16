#include "UnitUserWidget.h"
#include "MainGameState.h"
#include "Inventory.h"
#include "ItemUserWidget.h"
#include "Unit.h"
#include "InventoryUserWidget.h"
#include "Components/Border.h"
#include "Components/CanvasPanel.h"
#include "Components/SizeBox.h"
#include "Components/TextBlock.h"
#include "ItemData.h"

// NativeConstruct

void UUnitUserWidget::NativeConstruct()
{
    Super::NativeConstruct();
    SetupBackground();
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
    if (Unit == NewUnit && NewUnit != nullptr)
        return;

    if (Unit)
        Unit->OnChangesEquipment.RemoveDynamic(this, &UUnitUserWidget::EquipmentChanges);

    Unit = NewUnit;

    if (Unit)
        Unit->OnChangesEquipment.AddDynamic(this, &UUnitUserWidget::EquipmentChanges);

    EquipmentChanges();
}

void UUnitUserWidget::EquipmentChanges()
{
    if (!CanvasPanel || !TextBlock_Name || !InventoryUserWidget || !EquipmentBackpackUserWidget ||
        !EquipmentWeaponUserWidget)
        return;

    if (!Unit)
    {
        CanvasPanel->SetVisibility(ESlateVisibility::Hidden);
        InventoryUserWidget->InitializeInventory(nullptr);
        EquipmentBackpackUserWidget->InitializeItemCustomSize(nullptr);
        EquipmentWeaponUserWidget->InitializeItemCustomSize(nullptr);
    }
    else
    {
        TextBlock_Name->SetText(FText::FromName(Unit->GetID()));
        CanvasPanel->SetVisibility(ESlateVisibility::SelfHitTestInvisible);
        InventoryUserWidget->InitializeInventory(Unit->GetEquipmentBySlot<UInventory>(EEquipmentSlots::Backpack));
        EquipmentBackpackUserWidget->InitializeItemCustomSize(Unit->GetEquipmentBySlot(EEquipmentSlots::Backpack));
        EquipmentWeaponUserWidget->InitializeItemCustomSize(Unit->GetEquipmentBySlot(EEquipmentSlots::Weapon));

    }

}