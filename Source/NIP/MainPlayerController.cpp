#include "MainPlayerController.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputAction.h"
#include "MainHUD.h"
#include "Unit.h"
#include "CharacterUnit.h"
#include "MainGameState.h"
#include "MenuUnitsUserWidget.h"
#include "Kismet/KismetMathLibrary.h"

AMainPlayerController::AMainPlayerController() {}

void AMainPlayerController::BeginPlay()
{
    Super::BeginPlay();

    bShowMouseCursor = true;

    if (UEnhancedInputLocalPlayerSubsystem* Subsystem =
            ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer()))
    {
        Subsystem->AddMappingContext(DefaultMappingContext, 0);
    }

    if (GetWorld())
        MainGameState = Cast<AMainGameState>(GetWorld()->GetGameState());
    if (!MainGameState)
        return;

    MenuUnitsUserWidget = CreateWidget<UMenuUnitsUserWidget>(this, MainGameState->GetClassMenuUnitsUserWidget());
    if (MenuUnitsUserWidget)
        MenuUnitsUserWidget->AddToViewport();
}

void AMainPlayerController::SetupInputComponent()
{
    Super::SetupInputComponent();

    if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(InputComponent))
    {
        EnhancedInputComponent->BindAction(SelectionAction, ETriggerEvent::Started, this,
                                           &AMainPlayerController::StartedSelection);
        EnhancedInputComponent->BindAction(SelectionAction, ETriggerEvent::Triggered, this,
                                           &AMainPlayerController::TriggeredSelection);
        EnhancedInputComponent->BindAction(SelectionAction, ETriggerEvent::Completed, this,
                                           &AMainPlayerController::CompletedSelection);
        EnhancedInputComponent->BindAction(CommandAction, ETriggerEvent::Completed, this,
                                           &AMainPlayerController::HandleCommand);
    }
}

void AMainPlayerController::Tick(float DeltaTime)
{
    if (bIsSelecting || bWaitingSelecting)
    {
        FHitResult HitResult;
        this->GetHitResultUnderCursor(ECollisionChannel(ECC_Visibility), false, HitResult);
        if (!HitResult.bBlockingHit)
            return;

        FVector WorldLocation;
        WorldLocation = HitResult.Location;
        this->ProjectWorldLocationToScreen(WorldLocation, SelectionEnd, true);
    }
    if (bIsSelecting)
        UpdateUnitsSelection();
    if (!bWaitingSelecting)
        return;
    float Distance = FVector2D::Distance(SelectionStart, SelectionEnd);
    if (Distance > 10.f)
    {
        bIsSelecting = true;
        bWaitingSelecting = false;
    }
}

// Input

void AMainPlayerController::StartedSelection(const FInputActionValue& Value)
{
    FHitResult HitResult;
    this->GetHitResultUnderCursor(ECollisionChannel(ECC_Visibility), false, HitResult);
    if (!HitResult.bBlockingHit)
        return;

    FVector WorldLocation;
    WorldLocation = HitResult.Location;
    if (this->ProjectWorldLocationToScreen(WorldLocation, SelectionStart, true))
    {
        SelectionEnd = SelectionStart;
        bWaitingSelecting = true;
    }
}

void AMainPlayerController::TriggeredSelection(const FInputActionValue& Value) {}

void AMainPlayerController::CompletedSelection(const FInputActionValue& Value)
{
    if (!bIsSelecting && bWaitingSelecting)
        SelectUnit();

    bIsSelecting = false;
    bWaitingSelecting = false;
}

void AMainPlayerController::HandleCommand(const FInputActionValue& Value) { MoveToLocation(); }

// Selection

void AMainPlayerController::UpdateUnitsSelection()
{
    if (AreUnitSetsEqual())
        return;
    AddedUnits = NewSelectedUnits.Difference(SelectedUnits);
    RemovedUnits = SelectedUnits.Difference(NewSelectedUnits);
    for (UUnit* Unit : AddedUnits)
        if (Unit)
            Unit->SetSelect(true);
    for (UUnit* Unit : RemovedUnits)
        if (Unit)
            Unit->SetSelect(false);

    SelectedUnits = NewSelectedUnits;
    bSelectionChanged = true;

    if (SelectedUnits.IsEmpty())
    {
        SetUISelectedUnit(nullptr);
    }
    else if (!IsValid(UISelectedUnit) || !SelectedUnits.Contains(UISelectedUnit))
    {

        for (UUnit* Unit : SelectedUnits)
        {
            if (IsValid(Unit))
            {
                SetUISelectedUnit(Unit);
                break;
            }
        }
    }
    ProcessSelectionChanges();
}

bool AMainPlayerController::AreUnitSetsEqual()
{
    if (SelectedUnits.Num() != NewSelectedUnits.Num())
        return false;

    for (UUnit* Unit : SelectedUnits)
    {
        if (Unit)
            if (!NewSelectedUnits.Contains(Unit))
                return false;
    }
    return true;
}

void AMainPlayerController::SelectUnit()
{
    FHitResult HitResult;
    NewSelectedUnits.Empty();
    if (GetHitResultUnderCursor(ECC_Visibility, false, HitResult))
    {
        if (IsValid(HitResult.GetActor()))
        {
            ACharacterUnit* CharacterUnit = Cast<ACharacterUnit>(HitResult.GetActor());
            if (IsValid(CharacterUnit))
            {
                UUnit* Unit = CharacterUnit->GetUnit();
                if (Unit)
                {
                    NewSelectedUnits.Add(Unit);
                }
            }
        }
    }
    UpdateUnitsSelection();
}

void AMainPlayerController::SetUISelectedUnit(UUnit* Unit)
{
    if (UISelectedUnit == Unit)
        return;

    UISelectedUnit = Unit;
    bSelectionChanged = true;
    OnUISelectedUnitChanged.Broadcast();
    ProcessSelectionChanges();
}

void AMainPlayerController::ProcessSelectionChanges()
{
    if (bSelectionChanged && MenuUnitsUserWidget)
    {
        MenuUnitsUserWidget->ChangeUnits();
        bSelectionChanged = false;
    }
}

bool AMainPlayerController::IsTargetISelectUnit(UUnit* Unit)
{
    if (!Unit)
        return false;
    if (UISelectedUnit == Unit)
        return true;
    return false;
}

// HandleCommand

bool AMainPlayerController::MoveToLocation()
{
    bool bMove = false;
    FHitResult HitResult;

    if (GetHitResultUnderCursor(ECC_Visibility, false, HitResult))
    {
        for (UUnit* Unit : SelectedUnits)
        {
            if (!Unit)
                continue;

            auto Represented = Unit->GetRepresented();
            if (!IsValid(Represented.GetObject()))
                continue;
            AAIController* AIController = Cast<AAIController>(Unit->GetRepresented()->GetAIController());
            if (AIController)
            {
                AIController->MoveToLocation(HitResult.Location);
                bMove = true;
            }
        }
    }

    return bMove;
}

// UI

