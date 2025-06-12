#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "AIController.h"
#include "RepresentableInterface.generated.h"

class UItem;

UINTERFACE(MinimalAPI)
class URepresentableInterface : public UInterface
{
    GENERATED_BODY()
};

class NIP_API IRepresentableInterface
{
    GENERATED_BODY()

public:
    virtual void InitializationItem(UItem* Item) = 0;
    virtual void ChangeVisualization() {};
    virtual AAIController* GetAIController() { return nullptr; };
<<<<<<< HEAD
    virtual USkeletalMeshComponent* GetMeshInterface() { return nullptr; };
    virtual void SetCollision(bool bEnableCollision) {};
=======
    virtual USkeletalMeshComponent* GetMesh() { return nullptr; };
>>>>>>> 8109ca2ede52324330ba30f33c79a0a8097732e3
};