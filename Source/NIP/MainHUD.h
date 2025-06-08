#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "MainHUD.generated.h"

class AMainPlayerController;
class ACharacterUnit;

UCLASS()
class NIP_API AMainHUD : public AHUD
{
	GENERATED_BODY()
	
	public:
    virtual void DrawHUD() override;

protected:
    virtual void BeginPlay() override;

private:
    UPROPERTY()
    AMainPlayerController* MainPlayerController;
};
