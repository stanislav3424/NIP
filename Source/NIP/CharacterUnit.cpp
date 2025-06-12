#include "CharacterUnit.h"
#include "Unit.h"
#include "MainGameState.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Navigation/PathFollowingComponent.h"
#include "AIController.h"

ACharacterUnit::ACharacterUnit()
{
    PrimaryActorTick.bCanEverTick = true;
    AutoPossessAI = EAutoPossessAI::PlacedInWorldOrSpawned;

    bUseControllerRotationPitch = false;
    bUseControllerRotationYaw = false;
    bUseControllerRotationRoll = false;

    GetCharacterMovement()->bOrientRotationToMovement = true;
    GetCharacterMovement()->RotationRate = FRotator(0.f, 640.f, 0.f);
    GetCharacterMovement()->bConstrainToPlane = true;
    GetCharacterMovement()->bSnapToPlaneAtStart = true;

    GetCharacterMovement()->MaxAcceleration = 1000.f;
    GetCharacterMovement()->BrakingFrictionFactor = 1.f;
    GetCharacterMovement()->BrakingDecelerationWalking = 1000.f;
    GetCharacterMovement()->SetFixedBrakingDistance(200.0f);
    GetCharacterMovement()->UseAccelerationForPathFollowing();
    //bUseAccelerationForPaths
}

void ACharacterUnit::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

void ACharacterUnit::BeginPlay()
{
    Super::BeginPlay();

    if (DataTableRowHandle.IsNull())
        return;
    AMainGameState* MainGameState = Cast<AMainGameState>(GetWorld()->GetGameState());
    if (!MainGameState)
        return;
    Unit = Cast<UUnit>(MainGameState->CreateItem(DataTableRowHandle));
    if (!Unit)
        Destroy();
    Unit->InitializationRepresented(this);
}

void ACharacterUnit::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
    Super::SetupPlayerInputComponent(PlayerInputComponent);
}

// RepresentableInterface

void ACharacterUnit::InitializationItem(UItem* Item)
{
    Unit = Cast<UUnit>(Item);
    if (!Unit)
        UE_LOG(LogTemp, Error, TEXT("Error in the file: %s, line: %d, NotValid InitializationItem"), TEXT(__FILE__),
               __LINE__);
}

AAIController* ACharacterUnit::GetAIController()
{
    AAIController* AIController = Cast<AAIController>(GetController());
    return AIController;

    GetMesh();
}
