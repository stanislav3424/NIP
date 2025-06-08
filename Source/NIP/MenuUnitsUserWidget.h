#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/Border.h"
#include "Components/CanvasPanel.h"
#include "Components/SizeBox.h"
#include "Components/ListView.h"
#include "BaseUserWidget.h"
#include "MenuUnitsUserWidget.generated.h"

class AMainGameState;
class AMainPlayerController;
class UUnit;
class UUnitUserWidget;

UCLASS()
class NIP_API UMenuUnitsUserWidget : public UBaseUserWidget
{
    GENERATED_BODY()

protected:
    virtual void NativeConstruct() override;

private:
    void SetupBackground();

    // Data
private:
    

    // Slate
public:
    UPROPERTY(meta = (BindWidget))
    USizeBox* SizeBox;

    UPROPERTY(meta = (BindWidget))
    UBorder* Background;

    UPROPERTY(meta = (BindWidget))
    UCanvasPanel* CanvasPanel;

    UPROPERTY(meta = (BindWidget))
    UUnitUserWidget* UnitUserWidget;

    UPROPERTY(meta = (BindWidget))
    UListView* ListView;

    // Initialization

    // Change
public:
    void ChangeUnits();

private:
    void ChangeListView();
};
