#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ItemData.h"
#include "PayloadItem.generated.h"

enum class EEquipmentSlots : uint8;
class UItem;

UCLASS()
class NIP_API UPayloadItem : public UObject
{
    GENERATED_BODY()

    // Initialization
public:
    void Initialization();

    // Data
private:
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Data", meta = (AllowPrivateAccess = "true"))
    EDataLastPosition DataLastPosition = EDataLastPosition::NoneIndex;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Data", meta = (AllowPrivateAccess = "true"))
    UItem* Item;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Data", meta = (AllowPrivateAccess = "true"))
    UItem* ContainerOwner;

public:
    void SetDataLastPosition(EDataLastPosition SetDataLastPosition) { DataLastPosition = SetDataLastPosition; };
    void SetItem(UItem* SetItem) { Item = SetItem; };
    void SetContainerOwner(UItem* NewContainerOwner) { ContainerOwner = NewContainerOwner; };

    UItem* GetItem() { return Item; };

    // Inventory
private:
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Data", meta = (AllowPrivateAccess = "true"))
    FIntPoint Position;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Data", meta = (AllowPrivateAccess = "true"))
    bool bRotation = false;

public:
    void SetPosition(const FIntPoint& SetPosition) { Position = SetPosition; };
    void SetRotation(bool bSetRotation) { bRotation = bSetRotation; };

    // Equipment
private:
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Data", meta = (AllowPrivateAccess = "true"))
    EEquipmentSlots EquipmentSlots;

public:
    void SetEquipmentSlots(EEquipmentSlots SetEquipmentSlots) { EquipmentSlots = SetEquipmentSlots; };
};
