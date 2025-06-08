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
};