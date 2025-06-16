#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ItemData.h"
#include "PayloadItem.generated.h"

enum class EEquipmentSlots : uint8;
class UItem;
class UInventory;
class UUnit;

UCLASS()
class NIP_API UPayloadItem : public UObject
{
    GENERATED_BODY()

    // Initialization
public:
    void Initialization();

    // DragCancelled
public:
    void DragCancelled();

private:
    void ThrowOnGround();


    // Data
private:
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Data", meta = (AllowPrivateAccess = "true"))
    EDataLastPosition DataLastPosition = EDataLastPosition::NoneIndex;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Data", meta = (AllowPrivateAccess = "true"))
    UItem* Item;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Data", meta = (AllowPrivateAccess = "true"))
    UItem* ContainerOwner;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Data", meta = (AllowPrivateAccess = "true"))
    FVector Location;

public:
    void SetDataLastPosition(EDataLastPosition SetDataLastPosition) { DataLastPosition = SetDataLastPosition; };
    void SetItem(UItem* SetItem) { Item = SetItem; };
    void SetContainerOwner(UItem* NewContainerOwner) { ContainerOwner = NewContainerOwner; };
    void SetLocation(const FVector& SetLocation) { Location = SetLocation; };

    UItem* GetItem() { return Item; };

    // Inventory
private:
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Data", meta = (AllowPrivateAccess = "true"))
    int32 IndexInventory;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Data", meta = (AllowPrivateAccess = "true"))
    bool bRotation = false;

public:
    void SetPosition(int32 SetIndexInventory) { IndexInventory = SetIndexInventory; };
    void SetRotation(bool bSetRotation) { bRotation = bSetRotation; };

    // Equipment
private:
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Data", meta = (AllowPrivateAccess = "true"))
    EEquipmentSlots EquipmentSlots;

public:
    void SetEquipmentSlots(EEquipmentSlots SetEquipmentSlots) { EquipmentSlots = SetEquipmentSlots; };
};
