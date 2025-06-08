#include "BaseUserWidget.h"
#include "MainGameState.h"
#include "MainPlayerController.h"

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
