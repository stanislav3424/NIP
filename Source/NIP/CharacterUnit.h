#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "RepresentableInterface.h"
#include "ItemData.h"
#include "CharacterUnit.generated.h"

class UUnit;
class AMainGameState;

UCLASS()
class NIP_API ACharacterUnit : public ACharacter, public IRepresentableInterface
{
    GENERATED_BODY()

public:
    ACharacterUnit();

protected:
    virtual void BeginPlay() override;

public:
    virtual void Tick(float DeltaTime) override;
    virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

    // Data
protected:
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Data", meta = (AllowPrivateAccess = "true"))
    FDataTableRowHandle DataTableRowHandle;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Data", meta = (AllowPrivateAccess = "true"))
    UUnit* Unit;

public:
    UUnit* GetUnit() { return Unit; }

    // RepresentableInterface
protected:
    virtual void InitializationItem(UItem* Item) override;
    virtual AAIController* GetAIController() override;

};
