#pragma once

#include "CoreMinimal.h"
#include "Item.h"
#include "ItemData.h"
#include "Inventory.generated.h"

class AMainGameState;

UCLASS()
class NIP_API UInventory : public UItem
{
    GENERATED_BODY()

    // Data
protected:
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Data", meta = (AllowPrivateAccess = "true"))
    FIntPoint InventorySize = {0, 0};

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    TArray<UItem*> Inventory;

public:
    const FIntPoint& GetInventorySize() const { return InventorySize; }

    UFUNCTION(BlueprintCallable)
    const TArray<FItemPositionData> GetItemsPositionData() const;

    // Initialization
public:
    virtual void Initialization(const FDataTableRowHandle& InitializationDataTableRowHandle) override;

    // Add / Remove Item

public:
    UFUNCTION(BlueprintCallable)
    bool AddToInventory(UItem* AddItem, int32 IndexInventory = -1);

    UFUNCTION(BlueprintCallable)
    bool TryAddToInventory(UItem* AddItem, int32 IndexInventory);

private:
    void AddToInventorySub(UItem* AddItem, int32 IndexInventory);
    int32 FaindTryAddToInventory(UItem* AddItem);

public:
    UFUNCTION(BlueprintCallable)
    bool RemoveItem(UItem* RemoveItem);

    UFUNCTION(BlueprintCallable)
    bool RemoveItemIndex(int32 IndexInventory);

private:
    void SubRemoveItem(UItem* RemoveItem);

    //
private:
    void CheckInventoryEmpty();

public:
    UFUNCTION(BlueprintCallable)
    UItem* GetItemIndex(int32 IndexInventory) const;

private:
    int32 PositionToInt(FIntPoint Position) const;
    FIntPoint IntToPosition(int32 Index) const;
};
