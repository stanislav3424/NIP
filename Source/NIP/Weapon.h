#pragma once

#include "CoreMinimal.h"
#include "Item.h"
#include "ItemData.h"
#include "Weapon.generated.h"

class AMainGameState;

UCLASS()
class NIP_API UWeapon : public UItem
{
    GENERATED_BODY()

public:
    virtual void Initialization(const FDataTableRowHandle& InitializationDataTableRowHandle);
};
