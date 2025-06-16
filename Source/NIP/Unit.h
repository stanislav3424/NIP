#pragma once

#include "CoreMinimal.h"
#include "Item.h"
#include "Unit.generated.h"

class AMainGameState;
class UInventory;
class UWeapon;
enum class EEquipmentSlots : uint8;

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnChangesEquipment);

UCLASS()
class NIP_API UUnit : public UItem
{
    GENERATED_BODY()

    // Data
private:
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Data", meta = (AllowPrivateAccess = "true"))
    float Speed = 600.f;

public:
    FOnChangesEquipment OnChangesEquipment;

    // Initialization
public:
    virtual void Initialization(const FDataTableRowHandle& InitializationDataTableRowHandle) override;

    // Equipment
public:
    virtual void SubRemoveContainerOwner(UItem* Item) override;
    virtual void SetDataPayload(UPayloadItem* PayloadItem) override;

private:
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Equipment", meta = (AllowPrivateAccess = "true"))
    UInventory* Backpack;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Equipment", meta = (AllowPrivateAccess = "true"))
    UWeapon* Weapon;

public:
    UItem* GetEquipmentBySlot(EEquipmentSlots EquipmentSlots);
    template <typename T>
    T* GetEquipmentBySlot(EEquipmentSlots EquipmentSlots)
    {
        UItem* Item = GetEquipmentBySlot(EquipmentSlots);
        return Cast<T>(Item);
    }
    FName GetSocketName(EEquipmentSlots EquipmentSlots);
    bool EquipmentSlotAvailable(EEquipmentSlots EquipmentSlots);
    bool PutOnEquipment(UItem* Item, EEquipmentSlots EquipmentSlots);

private:
    template <typename ItemType, ItemType* UUnit::* SlotMember, EEquipmentSlots SlotEnum>
    bool PutOnEquipmentInternal(UItem* Item);

public:
    bool TakeOffEquipment(UItem* Item, EEquipmentSlots EquipmentSlots);

private:
    template <typename ItemType, ItemType* UUnit::* SlotMember>
    bool TakeOffEquipmentInternal(UItem* Item);

public:
    EEquipmentSlots GetEquipmentSlotsItem(UItem* TargetItem);

    // Visualization
private:
    void CheckEquipmentVisualization();
    void CheckEquipmentVisualizationInternal(UItem* Item, EEquipmentSlots EquipmentSlots);

};
