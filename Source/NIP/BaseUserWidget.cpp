#include "BaseUserWidget.h"
#include "MainGameState.h"
#include "MainPlayerController.h"

// NativeConstruct

void UBaseUserWidget::NativeConstruct()
{
    Super::NativeConstruct();
    InitializeGameState();
}

void UBaseUserWidget::InitializeGameState()
{
    if (!GetWorld())
        return;
    MainGameState = Cast<AMainGameState>(GetWorld()->GetGameState());
    MainPlayerController = Cast<AMainPlayerController>(GetWorld()->GetFirstPlayerController());
    InventoryCellSize = MainGameState->GetInventoryCellSize();
}

// MouseEvent

void UBaseUserWidget::NativeOnMouseEnter(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent)
{
    Super::NativeOnMouseEnter(InGeometry, InMouseEvent);

    bMouseEnter = true;
    UpdateVisualization();
}

void UBaseUserWidget::NativeOnMouseLeave(const FPointerEvent& InMouseEvent)
{
    Super::NativeOnMouseLeave(InMouseEvent);

    bMouseEnter = false;
    UpdateVisualization();
}