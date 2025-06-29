#pragma once

#include "CoreMinimal.h"
#include "Perception/AIPerceptionComponent.h"
#include "Perception/AISenseConfig_Sight.h"
#include "VisibilityControl.generated.h"

class IRepresentableInterface;
class UUnit;

UCLASS(ClassGroup = (AI), meta = (BlueprintSpawnableComponent))
class NIP_API UVisibilityControl : public UAIPerceptionComponent
{
    GENERATED_BODY()

public:
    UVisibilityControl();

protected:
    virtual void BeginPlay() override;
    virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Data", meta = (AllowPrivateAccess = "true"))
    UUnit* Unit;

    UPROPERTY()
    UAISenseConfig_Sight* SightConfig;

    UFUNCTION()
    void OnTargetUpdated(AActor* Actor, FAIStimulus Stimulus);

    UFUNCTION()
    void ChangesTeam();
};
