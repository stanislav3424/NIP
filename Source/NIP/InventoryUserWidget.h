#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/Border.h"
#include "Components/CanvasPanel.h"
#include "Components/SizeBox.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "BaseUserWidget.h"
#include "InventoryUserWidget.generated.h"

class AMainGameState;
class UItem;
class UInventory;
class UItemUserWidget;

UCLASS()
class NIP_API UInventoryUserWidget : public UBaseUserWidget
{
	GENERATED_BODY()

    // NativeConstruct
protected:
    virtual void NativeConstruct() override;

private:
    void SetupBackground();
	
	// Data
private:

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Data", meta = (AllowPrivateAccess = "true"))
    UInventory* Inventory;

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
    void InitializeUnit(UInventory* NewInventory);

private:
    void SetupItems();
    void Reset();
};
