#pragma once

#include "CoreMinimal.h"
#include "Item.h"
#include "ItemData.h"
#include "Unit.generated.h"

class AMainGameState;

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
};
