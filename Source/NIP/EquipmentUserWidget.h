#pragma once

#include "CoreMinimal.h"
#include "BaseUserWidget.h"
#include "EquipmentUserWidget.generated.h"

class AMainGameState;
class UItem;
class USizeBox;
class UBorder;
class UTextBlock;
class UCanvasPanelSlot;
class UItemUserWidget;
enum class EEquipmentSlots : uint8;

UCLASS()
class NIP_API UEquipmentUserWidget : public UBaseUserWidget
{
	GENERATED_BODY()
	
	// Native
protected:
    virtual void NativeConstruct() override;
    virtual int32 NativePaint(const FPaintArgs& Args, const FGeometry& AllottedGeometry,
                              const FSlateRect& MyClippingRect, FSlateWindowElementList& OutDrawElements, int32 LayerId,
                              const FWidgetStyle& InWidgetStyle, bool bParentEnabled) const override;
    virtual FReply NativeOnMouseButtonDown(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent) override;
    virtual void NativeOnDragDetected(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent,
                                      UDragDropOperation*& OutOperation) override;
    virtual bool NativeOnDrop(const FGeometry& InGeometry, const FDragDropEvent& InDragDropEvent,
                              UDragDropOperation* InOperation) override;

    // Data
private:
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Data", meta = (AllowPrivateAccess = "true"))
    UItem* Item;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Data", meta = (AllowPrivateAccess = "true"))
    EEquipmentSlots EquipmentSlots;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Data", meta = (AllowPrivateAccess = "true"))
    FLinearColor BackgroundColor = {0.f, 0.f, 0.f, 0.4f};

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Data", meta = (AllowPrivateAccess = "true"))
    FLinearColor ModifierMouseEnterColor = {0.f, 0.f, 0.f, -0.2f};

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Data", meta = (AllowPrivateAccess = "true"))
    FLinearColor BorderColor = FLinearColor::Black;

    // Slate
public:
    UPROPERTY(meta = (BindWidget))
    USizeBox* SizeBox;

    UPROPERTY(meta = (BindWidget))
    UBorder* Background;

    UPROPERTY(meta = (BindWidget))
    UBorder* ItemImage;

    UPROPERTY(meta = (BindWidget))
    UTextBlock* TextBlock_Name;

    // Initialization
public:
    void InitializeItem(UItem* NewItem);
    void InitializeEquipmentSlots(EEquipmentSlots SetEquipmentSlots) { EquipmentSlots = EquipmentSlots; };

    // Visualization
protected:
    virtual void UpdateVisualization();

private:
    void UpdateAllVisualization();
    void SetupBackground();
    void SetupItemImage();
    void SetupTextBlock();
};
