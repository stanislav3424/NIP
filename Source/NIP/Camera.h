#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "InputActionValue.h"
#include "Camera.generated.h"

class UInputMappingContext;
class UInputAction;
class USpringArmComponent;
class UCameraComponent;
class UFloatingPawnMovement;

UCLASS()
class NIP_API ACamera : public APawn
{
    GENERATED_BODY()

public:
    ACamera();

protected:
    virtual void BeginPlay() override;
    virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

public:
    virtual void Tick(float DeltaTime) override;

private:
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Component", meta = (AllowPrivateAccess = "true"))
    UFloatingPawnMovement* FloatingPawnMovement;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Component", meta = (AllowPrivateAccess = "true"))
    USpringArmComponent* SpringArm;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Component", meta = (AllowPrivateAccess = "true"))
    UCameraComponent* CameraComponent;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input", meta = (AllowPrivateAccess = "true"))
    UInputMappingContext* DefaultMappingContext;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input", meta = (AllowPrivateAccess = "true"))
    UInputAction* MoveAction;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input", meta = (AllowPrivateAccess = "true"))
    UInputAction* RotateAction;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input", meta = (AllowPrivateAccess = "true"))
    UInputAction* ZoomAction;

    UPROPERTY(EditAnywhere, Category = "Camera Settings")
    float MoveSpeed = 1000.0f;

    UPROPERTY(EditAnywhere, Category = "Camera Settings")
    float RotationSpeed = 100.0f;

    UPROPERTY(EditAnywhere, Category = "Camera Settings")
    float ZoomSpeed = 100.0f;

    UPROPERTY(EditAnywhere, Category = "Camera Settings")
    float MinZoomDistance = 500.0f;

    UPROPERTY(EditAnywhere, Category = "Camera Settings")
    float MaxZoomDistance = 3000.0f;

    void Move(const FInputActionValue& Value);
    void Rotate(const FInputActionValue& Value);
    void Zoom(const FInputActionValue& Value);

};
