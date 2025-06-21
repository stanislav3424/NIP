#include "Unit.h"
#include "Item.h"
#include "Inventory.h"
#include "Weapon.h"
#include "MainGameState.h"
#include "ItemData.h"
#include "PayloadItem.h"

void UUnit::Initialization(const FDataTableRowHandle& InitializationDataTableRowHandle)
{
    Super::Initialization(InitializationDataTableRowHandle);
    FUnitData* UnitData = MainGameState->GetItemData<FUnitData>(DataTableRowHandle);
    if (!UnitData)
        return;

    Speed = UnitData->Speed;
}

// Equipment

void UUnit::SubRemoveContainerOwner(UItem* Item)
{
    if (!Item)
        return;

    TakeOffEquipment(GetSlotByItem(Item));
}

UItem* UUnit::GetEquipmentBySlot(EEquipmentSlots Slot) const
{
    if (EquipmentMap.Contains(Slot))
    {
        return EquipmentMap[Slot];
    }
    return nullptr;
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

bool UUnit::EquipmentSlotAvailable(EEquipmentSlots EquipmentSlots) const
{
    return !EquipmentMap.Contains(EquipmentSlots);
}

bool UUnit::PutOnEquipment(UItem* EquipItem, EEquipmentSlots EquipmentSlots)
{
    if (!EquipItem || EquipmentMap.Contains(EquipmentSlots))
        return false;

    EquipItem->SetContainerOwner(this);
    EquipmentMap.Add(EquipmentSlots, EquipItem);
    EquipItem->SpawnAndAttachSkeleton(this, EquipmentSlots);
    OnChangesEquipment.Broadcast();
    return true;
}

bool UUnit::TakeOffEquipment(EEquipmentSlots EquipmentSlots)
{
    if (UItem* Equipped = EquipmentMap.FindRef(EquipmentSlots))
    {
        Equipped->RemoveRepresented();
        EquipmentMap.Remove(EquipmentSlots);
        OnChangesEquipment.Broadcast();
        return true;
    }
    return false;
}

EEquipmentSlots UUnit::GetSlotByItem(UItem* Item) const
{
    for (const auto& Pair : EquipmentMap)
    {
        if (Pair.Value == Item)
            return Pair.Key;
    }
    return EEquipmentSlots::NoneIndex;
}

// Visualization

void UUnit::CheckEquipmentVisualization()
{
    if (!IsValid(Represented.GetObject()))
        return;

    for (const auto& Pair : EquipmentMap)
    {
        if (Pair.Value)
        {
            Pair.Value->SpawnAndAttachSkeleton(this, Pair.Key);
        }
    }
}

void UUnit::SetDataPayload(UPayloadItem* PayloadItem)
{
    if (PayloadItem)
    {
        PayloadItem->SetDataLastPosition(EDataLastPosition::Equipment);
        PayloadItem->SetEquipmentSlots(GetSlotByItem(PayloadItem->GetItem()));
    }
}

bool UUnit::AddAnywhere(UItem* Item)
{
    if (!Item)
        return false;

    for (const auto& Pair : EquipmentMap)
    {
        EEquipmentSlots Slot = Pair.Key;

        if (!EquipmentMap[Slot])
        {
            return PutOnEquipment(Item, Slot);
        }
    }

    return false;
}