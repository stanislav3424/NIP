#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RepresentableInterface.h"
#include "ItemData.h"
#include "ActorItem.generated.h"

class UItem;
class AMainGameState;

UCLASS()
class NIP_API AActorItem : public AActor, public IRepresentableInterface
{
	GENERATED_BODY()
	
public:	
	AActorItem();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

	// Data
protected:
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Data", meta = (AllowPrivateAccess = "true"))
    FDataTableRowHandle DataTableRowHandle;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Data", meta = (AllowPrivateAccess = "true"))
    UItem* Item;

public:
    UItem* GetItem() { return Item; }

    // RepresentableInterface
protected:
    virtual void InitializationItem(UItem* Item) override;
    virtual void SetCollision(bool bEnableCollision) override;
};
