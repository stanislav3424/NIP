#pragma once

#include "CoreMinimal.h"
#include "BaseUserWidget.h"
#include "Components/Border.h"
#include "Components/CanvasPanel.h"
#include "Components/SizeBox.h"
#include "Components/TextBlock.h"
#include "Blueprint/IUserObjectListEntry.h"
#include "UnitListItem.generated.h"

class UUnit;
class AMainPlayerController;

UCLASS()
class NIP_API UUnitListItem : public UBaseUserWidget, public IUserObjectListEntry
{
    GENERATED_BODY()

    // NativeConstruct
public:
    virtual void NativeOnListItemObjectSet(UObject* ListItemObject) override;

protected:
    virtual void NativeDestruct() override;

    // Data
private:
    UPROPERTY(BlueprintReadOnly, Category = "Data", meta = (AllowPrivateAccess = "true"))
    UUnit* Unit;

    UPROPERTY(BlueprintReadOnly, Category = "Data", meta = (AllowPrivateAccess = "true"))
    FLinearColor BackgroundColor = {0.f, 0.f, 0.f, 0.4f};

    UPROPERTY(BlueprintReadOnly, Category = "Data", meta = (AllowPrivateAccess = "true"))
    FLinearColor ModifierMouseEnterColor = {0.f, 0.f, 0.f, -0.2f};

    UPROPERTY(BlueprintReadOnly, Category = "Data", meta = (AllowPrivateAccess = "true"))
    FLinearColor ModifierSelectedUnitColor = {0.f, 1.f, 0.f, 0.f};

    FDelegateHandle DelegateHandle;

    // Slate
public:
    UPROPERTY(meta = (BindWidget))
    USizeBox* SizeBox;

    UPROPERTY(meta = (BindWidget))
    UBorder* Background;

    UPROPERTY(meta = (BindWidget))
    UBorder* ItemImage;

    UPROPERTY(meta = (BindWidget))
    UCanvasPanel* CanvasPanel;

    UPROPERTY(meta = (BindWidget))
    UTextBlock* TextBlock_Name;

    // Visualization
private:
    UPROPERTY(BlueprintReadOnly, Category = "Data", meta = (AllowPrivateAccess = "true"))
    bool bSelectedUnit = false;

protected:
    virtual void UpdateVisualization();

private:
    void UnitSelectionChanged();

    // Interaction
protected:
     virtual FReply NativeOnMouseButtonDown(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent) override;

     //
};
