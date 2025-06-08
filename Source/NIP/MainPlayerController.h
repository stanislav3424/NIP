#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "InputActionValue.h"
#include "Containers/Set.h"
#include "AIController.h"
#include "NavigationSystem.h"
#include "MainPlayerController.generated.h"

class UInputAction;
class UInputMappingContext;
class AMainHUD;
class UUnit;
class ACharacterUnit;

UCLASS()
class NIP_API AMainPlayerController : public APlayerController
{
    GENERATED_BODY()

    friend class AMainHUD;

public:
    AMainPlayerController();

protected:
    virtual void BeginPlay() override;
    virtual void SetupInputComponent() override;

public:
    virtual void Tick(float DeltaTime) override;

    // Input
private:
    UPROPERTY(EditAnywhere, Category = "Input")
    UInputMappingContext* DefaultMappingContext;

    UPROPERTY(EditAnywhere, Category = "Input")
    UInputAction* SelectionAction;

    UPROPERTY(EditAnywhere, Category = "Input")
    UInputAction* CommandAction;

    void StartedSelection(const FInputActionValue& Value);
    void TriggeredSelection(const FInputActionValue& Value);
    void CompletedSelection(const FInputActionValue& Value);
    void HandleCommand(const FInputActionValue& Value);

    // Selection
private:
    FVector2D SelectionStart;
    FVector2D SelectionEnd;
    bool bIsSelecting = false;
    bool bVaitingSelecting = false;

    UPROPERTY(BlueprintReadOnly, Category = "Selection", meta = (AllowPrivateAccess = "true"))
    TSet<UUnit*> SelectedUnits;

    UPROPERTY(BlueprintReadOnly, Category = "Selection", meta = (AllowPrivateAccess = "true"))
    TSet<UUnit*> NewSelectedUnits;

    UPROPERTY(BlueprintReadOnly, Category = "Selection", meta = (AllowPrivateAccess = "true"))
    TSet<UUnit*> AddedUnits;

    UPROPERTY(BlueprintReadOnly, Category = "Selection", meta = (AllowPrivateAccess = "true"))
    TSet<UUnit*> RemovedUnits;

    UPROPERTY(BlueprintReadOnly, Category = "Selection", meta = (AllowPrivateAccess = "true"))
    UUnit* UISelectedUnit;

    void UpdateUnitsSelection();
    bool AreUnitSetsEqual();
    void SelectUnit();

public:

    UFUNCTION(BlueprintCallable)
    void SetTargetSelectUnit(UUnit* Unit);

    UFUNCTION(BlueprintCallable)
    bool IsTargetISelectUnit(UUnit* Unit);

    const TSet<UUnit*>& GetSelectedUnits() const { return SelectedUnits; };

    // HandleCommand

    bool MoveToLocation();

    // UI
private:
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Initialization", meta = (AllowPrivateAccess = "true"))
    float SizeCell = 25.0f;

public:
    float GetSizeCell() { return SizeCell; }
	
};
