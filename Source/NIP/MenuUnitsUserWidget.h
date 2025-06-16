#pragma once

#include "CoreMinimal.h"
#include "BaseUserWidget.h"
#include "MenuUnitsUserWidget.generated.h"

class AMainGameState;
class AMainPlayerController;
class UUnit;
class UUnitUserWidget;
class UBorder;
class UCanvasPanel;
class UListView;

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
    FDelegateHandle DelegateHandle;

    // Slate
public:
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

private:
    void UnitSelectionChanged();
};
