#include "CharacterUnit.h"
#include "Unit.h"
#include "MainGameState.h"

ACharacterUnit::ACharacterUnit()
{
	PrimaryActorTick.bCanEverTick = true;

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

void ACharacterUnit::Tick(float DeltaTime) { Super::Tick(DeltaTime); }

void ACharacterUnit::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
    Super::SetupPlayerInputComponent(PlayerInputComponent);
}

// RepresentableInterface

void ACharacterUnit::InitializationItem(UItem* Item)
{
    Unit = Cast<UUnit>(Item);
    if (!Unit)
        UE_LOG(LogTemp, Error, TEXT("Error in the file: %s, line: %d, NotValid InitializationItem"), TEXT(__FILE__), __LINE__);
}

AAIController* ACharacterUnit::GetAIController()
{
    AAIController* AIController = Cast<AAIController>(GetController());
    return AIController;
}