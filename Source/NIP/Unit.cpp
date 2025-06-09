#include "Unit.h"
#include "Item.h"
#include "Inventory.h"
#include "Weapon.h"
#include "MainGameState.h"

void UUnit::Initialization(const FDataTableRowHandle& InitializationDataTableRowHandle)
{
    Super::Initialization(InitializationDataTableRowHandle);
    MainGameState = Cast<AMainGameState>(GetWorld()->GetGameState());
    if (!MainGameState)
        return;
    FUnitData* UnitData = MainGameState->GetItemData<FUnitData>(DataTableRowHandle);
    if (!UnitData)
        return;

    Speed = UnitData->Speed;
}

// Equipment

void UUnit::RemoveContainerFromOwner(UItem* Item)
{
    if (!Item)
        return;

    if (Backpack == Item)
    {
        Backpack->RemoveRepresented();
        Backpack = nullptr;
    }
    else if (Weapon == Item)
    {
        Weapon->RemoveRepresented();
        Weapon = nullptr;
    }
}

FName UUnit::GetSocketName(EEquipmentSlots EquipmentSlots)
{
    FName SocketName;
    switch (EquipmentSlots)
    {
    case (EEquipmentSlots::Backpack):
        SocketName = TEXT("BackpackSocket");
        break;

    case (EEquipmentSlots::Weapon):
        SocketName = TEXT("WeaponSocket");
        break;

    default:
        break;
    }
    return SocketName;
}

bool UUnit::EquipmentSlotAvailable(EEquipmentSlots EquipmentSlots)
{
    switch (EquipmentSlots)
    {
    case (EEquipmentSlots::Backpack):
        if (!Backpack)
            return true;
        break;

    case (EEquipmentSlots::Weapon):
        if (!Weapon)
            return true;
        break;

    default:
        break;
    }
    return false;
}

bool UUnit::PutOnEquipment(UItem* EquipItem, EEquipmentSlots EquipmentSlots)
{
    if (!EquipItem)
        return false;

    switch (EquipmentSlots)
    {
    case EEquipmentSlots::Backpack:
        return PutOnEquipmentInternal<UInventory, &UUnit::Backpack, EEquipmentSlots::Backpack>(EquipItem);

    case EEquipmentSlots::Weapon:
        return PutOnEquipmentInternal<UWeapon, &UUnit::Weapon, EEquipmentSlots::Weapon>(EquipItem);

    default:
        return false;
    }
}

template <typename ItemType, ItemType* UUnit::* SlotMember, EEquipmentSlots SlotEnum>
bool UUnit::PutOnEquipmentInternal(UItem* Item)
{
    if (this->*SlotMember != nullptr)
        return false;

    ItemType* CastedItem = Cast<ItemType>(Item);
    if (!CastedItem)
        return false;

    Item->SetContainerOwner(this);
    this->*SlotMember = CastedItem;
    CastedItem->SpawnAndAttachSkeleton(this, SlotEnum);
    return true;
}

bool UUnit::TakeOffEquipment(UItem* GetItem, EEquipmentSlots EquipmentSlots)
{
    switch (EquipmentSlots)
    {
    case EEquipmentSlots::Backpack:
        return TakeOffEquipmentInternal<UInventory, &UUnit::Backpack>(GetItem);

    case EEquipmentSlots::Weapon:
        return TakeOffEquipmentInternal<UWeapon, &UUnit::Weapon>(GetItem);

    default:
        return false;
    }
}

template <typename ItemType, ItemType* UUnit::* SlotMember>
bool UUnit::TakeOffEquipmentInternal(UItem* ItemBase)
{
    if (auto* Item = this->*SlotMember)
    {
        ItemBase = Item;
        Item->RemoveRepresented();
        this->*SlotMember = nullptr;
        return true;
    }
    return false;
}

// Visualization

void UUnit::CheckEquipmentVisualization()
{
    if (!IsValid(Represented.GetObject()))
        return;
    CheckEquipmentVisualizationInternal(Backpack, EEquipmentSlots::Backpack);
    CheckEquipmentVisualizationInternal(Weapon, EEquipmentSlots::Weapon);
}

void UUnit::CheckEquipmentVisualizationInternal(UItem* Item, EEquipmentSlots EquipmentSlots)
{
    if (!IsValid(Represented.GetObject()))
        return;

    if (Item)
        Item->SpawnAndAttachSkeleton(this, EquipmentSlots);
}