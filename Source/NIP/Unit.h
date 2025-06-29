#pragma once

#include "CoreMinimal.h"
#include "Item.h"
#include "Unit.generated.h"

class AMainGameState;
class UInventory;
class UWeapon;
enum class EEquipmentSlots : uint8;
enum class ETeams : uint8;

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnChangesEquipment);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnChangesTeam);

UCLASS()
class NIP_API UUnit : public UItem
{
    GENERATED_BODY()

public:
    UUnit();

    // Data
private:
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Data", meta = (AllowPrivateAccess = "true"))
    ETeams Team;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Data", meta = (AllowPrivateAccess = "true"))
    float Speed = 600.f;

public:
    FOnChangesEquipment OnChangesEquipment;
    FOnChangesTeam OnChangesTeam;

    void SetTeam(ETeams SetTeam);
    ETeams GetTeam();

private:
    void CheckValidTeam() const;

    // Initialization
public:
    virtual void Initialization(const FDataTableRowHandle& InitializationDataTableRowHandle) override;
    bool IsEquipmentMapComplete() const;

    // Equipment
public:
    virtual void SubRemoveContainerOwner(UItem* Item) override;
    virtual void SetDataPayload(UPayloadItem* PayloadItem) override;

private:
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Equipment", meta = (AllowPrivateAccess = "true"))
    TMap<EEquipmentSlots, UItem*> EquipmentMap;

    static TMap<EEquipmentSlots, TSubclassOf<UItem>> SlotClassMap;

public:
    UItem* GetEquipmentBySlot(EEquipmentSlots EquipmentSlots) const;
    FName GetSocketName(EEquipmentSlots EquipmentSlots);
    bool EquipmentSlotAvailable(EEquipmentSlots EquipmentSlots) const;
    bool PutOnEquipment(UItem* Item, EEquipmentSlots EquipmentSlots);
    bool AddAnywhere(UItem* Item);
    bool TakeOffEquipment(EEquipmentSlots EquipmentSlots);
    EEquipmentSlots GetSlotByItem(UItem* Item) const;

    // Visualization
private:
    void CheckEquipmentVisualization();

};
