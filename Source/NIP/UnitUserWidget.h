#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/Border.h"
#include "Components/CanvasPanel.h"
#include "Components/SizeBox.h"
#include "BaseUserWidget.h"
#include "UnitUserWidget.generated.h"

class AMainGameState;
class UInventory;
class UUnit;
class UInventoryUserWidget;

UCLASS()
class NIP_API UUnitUserWidget : public UBaseUserWidget
{
	GENERATED_BODY()
	
	protected:
    virtual void NativeConstruct() override;

private:
    void SetupBackground();

    // Data
private:
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Data", meta = (AllowPrivateAccess = "true"))
    UUnit* Unit;

    // Slate
public:
    UPROPERTY(meta = (BindWidget))
    USizeBox* SizeBox;

    UPROPERTY(meta = (BindWidget))
    UBorder* Background;

    UPROPERTY(meta = (BindWidget))
    UCanvasPanel* CanvasPanel;

    // Initialization
public:
    UFUNCTION(BlueprintCallable, Category = "Item")
    void InitializeUnit(UUnit* NewUnit);

private:
    void Reset();
};
