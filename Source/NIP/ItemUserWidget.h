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

private:
    void SetupBackground();

    // Data
private:
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Data", meta = (AllowPrivateAccess = "true"))
    UItem* Item;

    // Slote
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


private:
    void SetupMaterialInstanceDynamic();
};
