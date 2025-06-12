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
class AMainGameState;
class UMenuUnitsUserWidget;

DECLARE_MULTICAST_DELEGATE(FOnUISelectedUnitChanged);

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

    // Data
private:
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Data", meta = (AllowPrivateAccess = "true"))
    AMainGameState* MainGameState;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Data", meta = (AllowPrivateAccess = "true"))
    UMenuUnitsUserWidget* MenuUnitsUserWidget;

public:
    UMenuUnitsUserWidget* GetMenuUnitsUserWidget() { return MenuUnitsUserWidget; }

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
    bool bWaitingSelecting = false;

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

    bool bSelectionChanged = false;
    void ProcessSelectionChanges();

public:
    TSet<UUnit*>& GetAddedUnits() { return AddedUnits; }
    TSet<UUnit*>& GetRemovedUnits() { return RemovedUnits; }
    UUnit* GetUISelectedUnit() { return UISelectedUnit; }
    void SetUISelectedUnit(UUnit* Unit);
    bool IsTargetISelectUnit(UUnit* Unit);
    const TSet<UUnit*>& GetSelectedUnits() const { return SelectedUnits; };

    FOnUISelectedUnitChanged OnUISelectedUnitChanged;
    // HandleCommand

    bool MoveToLocation();

    // UI

	
};
