#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "RepresentableInterface.generated.h"

class UItem;
class AAIController;
class UActorComponent;

UINTERFACE(MinimalAPI)
class URepresentableInterface : public UInterface
{
    GENERATED_BODY()
};

class NIP_API IRepresentableInterface
{
    GENERATED_BODY()

private:
    TSet<UActorComponent*> VisibilityControls;


public:
    virtual void InitializationItem(UItem* Item) = 0;
    virtual void ChangeVisualization() {};
    virtual AAIController* GetAIController() { return nullptr; };
    virtual USkeletalMeshComponent* GetMeshInterface() { return nullptr; };
    virtual void SetCollision(bool bEnableCollision) {};
    virtual void SetVisibility(bool AddVisibilityControl, UActorComponent* VisibilityControl);

};