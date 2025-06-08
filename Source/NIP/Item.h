#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ItemData.h"
#include "RepresentableInterface.h"
#include "Item.generated.h"

class AMainGameState;

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
    const FIntPoint& GetItemSize() const { return ItemSize; }

    void SetSelect(bool bNewSelect);
    const bool IsSelect() const { return bSelect; }
    const bool IsCanSelect() const { return bCanSelect; }

    // Initialization
public:
    virtual void Initialization(const FDataTableRowHandle& InitializationDataTableRowHandle);

    // Spawn

    // ContainerOwner
public:
    virtual void RemoveContainerFromOwner();
    void SetContainerOwner(UItem* NewContainerOwner);
    bool IsCanPut() { return bCanPut; }
    FIntPoint GetSizeItem() { return ItemSize; };
};
