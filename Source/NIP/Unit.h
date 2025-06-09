#pragma once

#include "CoreMinimal.h"
#include "Item.h"
#include "ItemData.h"
#include "Unit.generated.h"

class AMainGameState;
class UInventory;
class UWeapon;

UCLASS()
class NIP_API UUnit : public UItem
{
    GENERATED_BODY()

    // Data
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Data", meta = (AllowPrivateAccess = "true"))
    float Speed = 600.f;

    // Initialization
public:
    virtual void Initialization(const FDataTableRowHandle& InitializationDataTableRowHandle) override;

   // Equipment
public:
    virtual void RemoveContainerFromOwner(UItem* Item) override;

private:
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Equipment", meta = (AllowPrivateAccess = "true"))
    UInventory* Backpack;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Equipment", meta = (AllowPrivateAccess = "true"))
    UWeapon* Weapon;

public:
    FName GetSocketName(EEquipmentSlots EquipmentSlots);
    bool EquipmentSlotAvailable(EEquipmentSlots EquipmentSlots);
    bool PutOnEquipment(UItem* ItemBase, EEquipmentSlots EquipmentSlots);

private:
    template <typename ItemType, ItemType* UUnit::* SlotMember, EEquipmentSlots SlotEnum>
    bool PutOnEquipmentInternal(UItem* Item);

public:
    bool TakeOffEquipment(UItem* ItemBase, EEquipmentSlots EquipmentSlots);

private:
    template <typename ItemType, ItemType* UUnit::* SlotMember>
    bool TakeOffEquipmentInternal(UItem* ItemBase);

    // Visualization
private:
    void CheckEquipmentVisualization();
    void CheckEquipmentVisualizationInternal(UItem* Item, EEquipmentSlots EquipmentSlots);

};
