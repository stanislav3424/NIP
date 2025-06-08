#include "BaseUserWidget.h"
#include "MainGameState.h"

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
    InventoryCellSize = MainGameState->GetInventoryCellSize();
}


