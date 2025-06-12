#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CustomTest.generated.h"

class AMainGameState;
class ANavigationData;
class ACharacterUnit;
class UUnit;

UCLASS()
class NIP_API UCustomTest : public UObject
{
    GENERATED_BODY()

private:
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Data", meta = (AllowPrivateAccess = "true"))
    AMainGameState* MainGameState;

public:
    void RunTest(int32 IndexTest);
    void SetMainGameState(AMainGameState* SetMainGameState) { MainGameState = SetMainGameState; };

private:
    void RandomSpawnAndAddStuff();
    bool GetRandomReachablePointInRadius(const FVector& Origin, float Radius, FVector& OutLocation);
};
