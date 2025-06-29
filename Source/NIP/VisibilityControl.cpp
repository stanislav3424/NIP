#include "VisibilityControl.h"
#include "Perception/AISense_Sight.h"
#include "RepresentableInterface.h"
#include "Unit.h"
#include "ItemData.h"

UVisibilityControl::UVisibilityControl()
{
    SightConfig = CreateDefaultSubobject<UAISenseConfig_Sight>(TEXT("SightConfig"));
    SightConfig->SightRadius = 1500.0f;
    SightConfig->LoseSightRadius = 1600.0f;
    SightConfig->PeripheralVisionAngleDegrees = 45.0f;
    SightConfig->SetMaxAge(1.0f);
    SightConfig->DetectionByAffiliation.bDetectEnemies = true;
    SightConfig->DetectionByAffiliation.bDetectFriendlies = true;
    SightConfig->DetectionByAffiliation.bDetectNeutrals = true;

    
}

void UVisibilityControl::BeginPlay()
{
    Super::BeginPlay();

    Unit = Cast<UUnit>(GetOwner());
    ChangesTeam();
    if (Unit)
        Unit->OnChangesTeam.AddDynamic(this, &UVisibilityControl::ChangesTeam);


    OnTargetPerceptionUpdated.AddDynamic(this, &UVisibilityControl::OnTargetUpdated);
}

void UVisibilityControl::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
    OnTargetPerceptionUpdated.RemoveDynamic(this, &UVisibilityControl::OnTargetUpdated);
    if (Unit)
        Unit->OnChangesTeam.RemoveDynamic(this, &UVisibilityControl::ChangesTeam);
    Super::EndPlay(EndPlayReason);
}

void UVisibilityControl::OnTargetUpdated(AActor* Actor, FAIStimulus Stimulus)
{
    auto RepresentableInterface = Cast<IRepresentableInterface>(Actor);
    if (!RepresentableInterface)
        return;

    const bool bVisible = Stimulus.WasSuccessfullySensed();

    RepresentableInterface->SetVisibility(bVisible, this);

}

void UVisibilityControl::ChangesTeam()
{
    if (!Unit || !SightConfig)
        return;

    if (Unit->GetTeam() == ETeams::Player)
    {
        ForgetAll();
        SensesConfig.Remove(SightConfig);
        RequestStimuliListenerUpdate();
    }
    else
    {
        if (!SensesConfig.Contains(SightConfig))
        {
            SensesConfig.Add(SightConfig);
            SetDominantSense(SightConfig->GetSenseImplementation());
            RequestStimuliListenerUpdate();
        }
    }

}