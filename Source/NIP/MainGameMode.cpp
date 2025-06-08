#include "MainGameMode.h"
#include "Camera.h"
#include "MainPlayerController.h"
#include "MainGameState.h"
#include "MainHUD.h"

AMainGameMode::AMainGameMode()
{
    GameStateClass = AMainGameState::StaticClass();
    PlayerControllerClass = AMainPlayerController::StaticClass();
    DefaultPawnClass = ACamera::StaticClass();
    HUDClass = AMainHUD::StaticClass();
}