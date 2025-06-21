#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MapGeneration.generated.h"

class UProceduralMeshComponent;

UENUM()
enum class Parameters : uint8
{
    NoneIndex,
    SID,
    Room,
    Parameter3,
};

UCLASS()
class NIP_API AMapGeneration : public AActor
{
    GENERATED_BODY()

public:
    AMapGeneration();

protected:
    virtual void BeginPlay() override;

    // ID
private:
    TMap<Parameters, int32> BitMap{
        {Parameters::SID, 10},
        {Parameters::Room, 5},
        {Parameters::Parameter3, 5},
    };

    int32 DefaultBitCount = 2;
    int32 DefaultParamValue = 2;

    int32 ID = 0;

    void GenerateID(TMap<Parameters, int32>& MapParameters);
    TMap<Parameters, int32> DecodeID();

    // TestGeneration
public:
    UFUNCTION(CallInEditor, Category = "Map Generation")
    void TestGeneration();

    UPROPERTY(EditAnywhere, Category = "Map Generation")
    int32 Rooms = 1;

    UPROPERTY(EditAnywhere, Category = "Map Generation")
    int32 SID = 1024;

    // Generation
public:
    void Regenerate();;

private:
    UPROPERTY()
    TArray<UProceduralMeshComponent*> GeneratedMeshes;

    void DestroyAll();
    UProceduralMeshComponent* RoomGeneration(const FVector& Location);
    void TunnelGeneration();
};
