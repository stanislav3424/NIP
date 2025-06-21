#include "UnitUserWidget.h"
#include "MainGameState.h"
#include "Inventory.h"
#include "ItemUserWidget.h"
#include "EquipmentUserWidget.h"
#include "Unit.h"
#include "InventoryUserWidget.h"
#include "Components/Border.h"
#include "Components/CanvasPanel.h"
#include "Components/SizeBox.h"
#include "Components/TextBlock.h"
#include "ItemData.h"
#include "LogsMacros.h"

// NativeConstruct

void UUnitUserWidget::NativeConstruct()
{
    Super::NativeConstruct();
    CHECK_MULTI(SizeBox, Background, CanvasPanel, TextBlock_Name, InventoryUserWidget, EquipmentBackpackUserWidget,
          EquipmentWeaponUserWidget);

    SetupBackground();
    EquipmentBackpackUserWidget->InitializeEquipmentSlots(EEquipmentSlots::Backpack);
    EquipmentWeaponUserWidget->InitializeEquipmentSlots(EEquipmentSlots::Weapon);
}

void UUnitUserWidget::SetupBackground()
{
    CHECK(Background);
    FSlateBrush Brush;
    Brush.TintColor = FLinearColor(0.f, 0.f, 0.f, 0.2f);
    Background->SetBrush(Brush);
}

void UUnitUserWidget::InitializeUnit(UUnit* NewUnit)
{
    if (Unit)
        Unit->OnChangesEquipment.RemoveDynamic(this, &UUnitUserWidget::EquipmentChanges);

    Unit = NewUnit;

    if (Unit)
        Unit->OnChangesEquipment.AddDynamic(this, &UUnitUserWidget::EquipmentChanges);

    EquipmentChanges();
}

void UUnitUserWidget::EquipmentChanges()
{
    CHECK_MULTI(CanvasPanel, TextBlock_Name, InventoryUserWidget, EquipmentBackpackUserWidget, EquipmentWeaponUserWidget);

    if (!Unit)
    {
        CanvasPanel->SetVisibility(ESlateVisibility::Hidden);
        InventoryUserWidget->InitializeInventory(nullptr);
        EquipmentBackpackUserWidget->InitializeItem(nullptr);
        EquipmentWeaponUserWidget->InitializeItem(nullptr);
    }
    else
    {
        TextBlock_Name->SetText(FText::FromName(Unit->GetID()));
        CanvasPanel->SetVisibility(ESlateVisibility::SelfHitTestInvisible);
        InventoryUserWidget->InitializeInventory(Cast<UInventory>(Unit->GetEquipmentBySlot(EEquipmentSlots::Backpack)));
        EquipmentBackpackUserWidget->InitializeItem(Unit->GetEquipmentBySlot(EEquipmentSlots::Backpack));
        EquipmentWeaponUserWidget->InitializeItem(Unit->GetEquipmentBySlot(EEquipmentSlots::Weapon));

    }

}