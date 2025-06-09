#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/Border.h"
#include "Components/CanvasPanel.h"
#include "Components/SizeBox.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "BaseUserWidget.h"
#include "ItemUserWidget.generated.h"

class AMainGameState;
class UItem;

UCLASS()
class NIP_API UItemUserWidget : public UBaseUserWidget
{
    GENERATED_BODY()

    // NativeConstruct
protected:
    virtual void NativeConstruct() override;

    // Data
private:
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Data", meta = (AllowPrivateAccess = "true"))
    UItem* Item;

    UPROPERTY(BlueprintReadOnly, Category = "Data", meta = (AllowPrivateAccess = "true"))
    FLinearColor BackgroundColor = {0.f, 0.f, 0.f, 0.4f};

    UPROPERTY(BlueprintReadOnly, Category = "Data", meta = (AllowPrivateAccess = "true"))
    FLinearColor ModifierMouseEnterColor = {0.f, 0.f, 0.f, -0.2f};

    // Slate
public:
    UPROPERTY(meta = (BindWidget))
    USizeBox* SizeBox;

    UPROPERTY(meta = (BindWidget))
    UBorder* Background;

    UPROPERTY(meta = (BindWidget))
    UBorder* ItemImage;

    // Initialization
public:
    UFUNCTION(BlueprintCallable, Category = "Item")
    void InitializeItem(UItem* NewItem);

    // Visualization
protected:
    virtual void UpdateVisualization();

private:
    void SetupMaterialInstanceDynamic();
};
