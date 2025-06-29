#include "Unit.h"
#include "Item.h"
#include "Inventory.h"
#include "Weapon.h"
#include "MainGameState.h"
#include "ItemData.h"
#include "PayloadItem.h"
#include "LogsMacros.h"

TMap<EEquipmentSlots, TSubclassOf<UItem>> UUnit::SlotClassMap;

UUnit::UUnit() : Team{ETeams::NoneIndex}
{
    struct FUnitStaticInitializer
    {
        FUnitStaticInitializer()
        {
            UUnit::SlotClassMap.Add(EEquipmentSlots::Weapon, UWeapon::StaticClass());
            UUnit::SlotClassMap.Add(EEquipmentSlots::Backpack, UInventory::StaticClass());
        }
    };

    static FUnitStaticInitializer StaticInitializer;
}

void UUnit::SetTeam(ETeams SetTeam)
{
    Team = SetTeam;
    OnChangesTeam.Broadcast();
    CheckValidTeam();
}

ETeams UUnit::GetTeam()
{
    CheckValidTeam();
    return Team;
}

void UUnit::CheckValidTeam() const
{
    if (Team == ETeams::NoneIndex)
        LINE_LOG_MSG("NoneTeam");
}

void UUnit::Initialization(const FDataTableRowHandle& InitializationDataTableRowHandle)
{
    Super::Initialization(InitializationDataTableRowHandle);
    FUnitData* UnitData = MainGameState->GetItemData<FUnitData>(DataTableRowHandle);
    if (!UnitData)
        return;

    Speed = UnitData->Speed;

    SlotClassMap.Add(EEquipmentSlots::Weapon, UWeapon::StaticClass());
    SlotClassMap.Add(EEquipmentSlots::Backpack, UInventory::StaticClass());
}

bool UUnit::IsEquipmentMapComplete() const
{
    for (const auto& SlotPair : SlotClassMap)
    {
        EEquipmentSlots Slot = SlotPair.Key;

        if (Slot == EEquipmentSlots::NoneIndex)
            continue;

        if (!EquipmentMap.Contains(Slot) || !IsValid(EquipmentMap[Slot]))
        {
            UE_LOG(LogTemp, Error, TEXT("Equipment slot '%s' is not filled on unit '%s'."),
                   *UEnum::GetValueAsString(Slot), *GetName());
            return false;
        }
    }

    return true;
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

    TSubclassOf<UItem>* ExpectedClass = SlotClassMap.Find(EquipmentSlots);
    if (ExpectedClass && !EquipItem->IsA(*ExpectedClass))
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