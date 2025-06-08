#pragma once

#include "Blueprint/UserWidget.h"
#include "CoreMinimal.h"
#include "BaseUserWidget.generated.h"

class AMainGameState;

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
    float InventoryCellSize = 25.f;
};
