#pragma once

#include "CoreMinimal.h"
#include "BaseUserWidget.h"
#include "UnitUserWidget.generated.h"

class AMainGameState;
class UInventory;
class UUnit;
class UInventoryUserWidget;
class UItemUserWidget;
class UEquipmentUserWidget;
class USizeBox;
class UBorder;
class UCanvasPanel;
class UTextBlock;

UCLASS()
class NIP_API UUnitUserWidget : public UBaseUserWidget
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
    UUnit* Unit;

    // Slate
public:
    UPROPERTY(meta = (BindWidget))
    USizeBox* SizeBox;

    UPROPERTY(meta = (BindWidget))
    UBorder* Background;

    UPROPERTY(meta = (BindWidget))
    UCanvasPanel* CanvasPanel;

    UPROPERTY(meta = (BindWidget))
    UTextBlock* TextBlock_Name;

    UPROPERTY(meta = (BindWidget))
    UInventoryUserWidget* InventoryUserWidget;

    UPROPERTY(meta = (BindWidget))
    UEquipmentUserWidget* EquipmentBackpackUserWidget;

    UPROPERTY(meta = (BindWidget))
    UEquipmentUserWidget* EquipmentWeaponUserWidget;

    // Initialization
public:
    UFUNCTION(BlueprintCallable, Category = "Item")
    void InitializeUnit(UUnit* NewUnit);

private:
    UFUNCTION(BlueprintCallable, Category = "Changes")
    void EquipmentChanges();
    // Visualization
};
