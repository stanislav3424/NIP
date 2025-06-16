#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Item.generated.h"

class AMainGameState;
class UUnit;
class IRepresentableInterface;
class UPayloadItem;
enum class EEquipmentSlots : uint8;

UCLASS()
class NIP_API UItem : public UObject
{
    GENERATED_BODY()

    // Data
protected:
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Data", meta = (AllowPrivateAccess = "true"))
    FDataTableRowHandle DataTableRowHandle;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Data", meta = (AllowPrivateAccess = "true"))
    AMainGameState* MainGameState;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Data", meta = (AllowPrivateAccess = "true"))
    FText DisplayName;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Data", meta = (AllowPrivateAccess = "true"))
    FName ID;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Data", meta = (AllowPrivateAccess = "true"),
              meta = (MustImplement = "RepresentableInterface"))
    TSubclassOf<AActor> ClassRepresentedActor;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Data", meta = (AllowPrivateAccess = "true"))
    TScriptInterface<IRepresentableInterface> Represented;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Data", meta = (AllowPrivateAccess = "true"))
    FIntPoint ItemSize = {0, 0};

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Data", meta = (AllowPrivateAccess = "true"))
    bool bCanPut = false;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Data", meta = (AllowPrivateAccess = "true"))
    bool bCanRotation = false;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Data", meta = (AllowPrivateAccess = "true"))
    bool bRotation = false;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Data", meta = (AllowPrivateAccess = "true"))
    UItem* ContainerOwner;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Data", meta = (AllowPrivateAccess = "true"))
    bool bCanSelect = false;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Data", meta = (AllowPrivateAccess = "true"))
    bool bSelect = false;

public:
    const TSubclassOf<AActor>& GetClassRepresentedActor() const { return ClassRepresentedActor; };
    TScriptInterface<IRepresentableInterface> GetRepresented() const { return Represented; };
    const FIntPoint& GetItemSize() const { return ItemSize; };

    void SetSelect(bool bNewSelect);
    const bool IsSelect() const { return bSelect; };
    const bool IsCanSelect() const { return bCanSelect; };
    const FName& GetID() const { return ID; };
    bool IsCanPut() const { return bCanPut; };
    FIntPoint GetSizeItem() const { return ItemSize; };
    void SetContainerOwner(UItem* NewContainerOwner);
    virtual void SubRemoveContainerOwner(UItem* Item);
    void RemoveContainerOwner() { if (ContainerOwner) ContainerOwner->SubRemoveContainerOwner(this); };
    UPayloadItem* GetPayloadItem();
    virtual void SetDataPayload(UPayloadItem* PayloadItem) {};
    bool GetRotation() const { return bRotation; };

    // Initialization
public:
    virtual void Initialization(const FDataTableRowHandle& InitializationDataTableRowHandle);
    void InitializationRepresented(AActor* SetRepresented);

    // Spawn
    virtual void SpawnRepresented(const FTransform& SpawnTransform);
    void SpawnAndAttachSkeleton(UUnit* Unit, EEquipmentSlots EquipmentSlots);
    void RemoveRepresented();
};
