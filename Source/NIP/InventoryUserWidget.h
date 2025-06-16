#pragma once

#include "CoreMinimal.h"
#include "BaseUserWidget.h"
#include "InventoryUserWidget.generated.h"

class AMainGameState;
class UItem;
class UInventory;
class UItemUserWidget;
class USizeBox;
class UBorder;
class UCanvasPanel;

UCLASS()
class NIP_API UInventoryUserWidget : public UBaseUserWidget
{
    GENERATED_BODY()

    // NativeConstruct
protected:
    virtual void NativeConstruct() override;
    virtual int32 NativePaint(const FPaintArgs& Args, const FGeometry& AllottedGeometry,
                              const FSlateRect& MyClippingRect, FSlateWindowElementList& OutDrawElements, int32 LayerId,
                              const FWidgetStyle& InWidgetStyle, bool bParentEnabled) const override;

    // Data
private:
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Data", meta = (AllowPrivateAccess = "true"))
    UInventory* Inventory;

    TArray<TArray<FVector2D>> GridLineSegments;
    
    int32 LayerIdLines = 0;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Data", meta = (AllowPrivateAccess = "true"))
    FLinearColor BorderColor = FLinearColor::Gray;

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
    UFUNCTION(BlueprintCallable, Category = "Changes")
    void InitializeInventory(UInventory* NewInventory);

    // Visualization
private:
    UFUNCTION(BlueprintCallable, Category = "Changes")
    void InventoryChanges();
    void SetupSizeBox();
    void SetupBackground();
    void SetupItems();
    void CalculateGridLines();
};
