#pragma once

#include "Blueprint/UserWidget.h"
#include "CoreMinimal.h"
#include "BaseUserWidget.generated.h"

class AMainGameState;
class AMainPlayerController;

UCLASS()
class NIP_API UBaseUserWidget : public UUserWidget
{
    GENERATED_BODY()

    // NativeConstruct
protected:
    virtual void NativeConstruct() override;
    void InitializeGameState();

    // Data
protected:
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Data", meta = (AllowPrivateAccess = "true"))
    AMainGameState* MainGameState;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Data", meta = (AllowPrivateAccess = "true"))
    AMainPlayerController* MainPlayerController;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Data", meta = (AllowPrivateAccess = "true"))
    float InventoryCellSize = 25.f;

    // MouseEvent
protected:
    UPROPERTY(BlueprintReadOnly, Category = "Data", meta = (AllowPrivateAccess = "true"))
    bool bMouseEnter = false;

    virtual void NativeOnMouseEnter(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent) override;
    virtual void NativeOnMouseLeave(const FPointerEvent& InMouseEvent) override;

    // Visualization
protected:
    virtual void UpdateVisualization() {};
};
