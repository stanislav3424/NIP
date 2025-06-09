#pragma once

#include "CoreMinimal.h"
#include "RepresentableInterface.h"
#include "ItemData.generated.h"

class UItem;

USTRUCT(BlueprintType)
struct FItemData : public FTableRowBase
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FText DisplayName;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TSubclassOf<UItem> ClassItem;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (MustImplement = "RepresentableInterface"))
    TSubclassOf<AActor> ClassRepresentedActor;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FIntPoint ItemSize = {0, 0};

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool bCanPut = false;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool bCanRotation = false;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool bCanSelect = false;
};

USTRUCT(BlueprintType)
struct FInventoryData : public FItemData
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FIntPoint SizeInventory = {0, 0};
};

USTRUCT(BlueprintType)
struct FWeaponData : public FItemData
{
    GENERATED_BODY()

};

USTRUCT(BlueprintType)
struct FUnitData : public FItemData
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float Speed = 600.f;
};

USTRUCT(BlueprintType)
struct FItemPositionData
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    UItem* Item = nullptr;

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    FIntPoint Position = {0, 0};
};

UENUM(BlueprintType)
enum class EEquipmentSlots : uint8
{
    Backpack UMETA(DisplayName = "Backpack"),
    Weapon UMETA(DisplayName = "Weapon"),
};
