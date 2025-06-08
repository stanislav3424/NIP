#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "Engine/TextureRenderTarget2D.h"
#include "Containers/Map.h"
#include "Math/UnrealMathUtility.h"
#include "RealtimeRenderingPipeline.generated.h"


class USceneCaptureComponent2D;
class USpotLightComponent;
class UItem;

UCLASS()
class NIP_API ARealtimeRenderingPipeline : public AActor
{
    GENERATED_BODY()

public:
    ARealtimeRenderingPipeline();

protected:
    virtual void BeginPlay() override;

public:
    virtual void Tick(float DeltaTime) override;

private:
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Initialization", meta = (AllowPrivateAccess = "true"))
    float CaptureScaleModifier = 1.1f;

    TMultiMap<int32, UMaterialInstanceDynamic*> WaitingMIDs;

    UPROPERTY()
    TMap<int32, UTextureRenderTarget2D*> MapTextures;

    TQueue<UItem*> RenderQueue;

    UPROPERTY()
    AActor* RenderActor;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
    USceneCaptureComponent2D* SceneCapture;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
    USpotLightComponent* SpotLight;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Initialization", meta = (AllowPrivateAccess = "true"))
    UMaterial* MaterialBase;

public:
    UFUNCTION(BlueprintCallable)
    UMaterialInstanceDynamic* GetMaterialInstanceDynamic(UItem* ItemBase, FIntPoint Size);

private:
    void InitializeeComponents();
    bool RenderTexture();
    int32 GetID(UItem* ItemBase);
    void CheckWaitingMIDs();
    FVector2D NormalizeSize(FIntPoint Size);
};
