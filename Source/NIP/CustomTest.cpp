#include "CustomTest.h"
#include "MainGameState.h"
#include "CharacterUnit.h"
#include "Unit.h"
#include "NavigationSystem.h"
#include "Kismet/KismetMathLibrary.h"

void UCustomTest::RunTest(int32 IndexTest)
{
    switch (IndexTest)
    {
    case 1: {
        RandomSpawnAndAddStuff();
        return;
    }
    case 0: {
        return;
    }
    default:
        return;
    }
}

void UCustomTest::RandomSpawnAndAddStuff()
{
    if (!MainGameState)
        return;
    UNavigationSystemV1* NavigationSystem = FNavigationSystem::GetCurrent<UNavigationSystemV1>(MainGameState->GetWorld());
    if (!NavigationSystem)
        return;

    for (int32 Index = 0; Index < 5; ++Index)
    {
        FVector RandomLocation;
        if (GetRandomReachablePointInRadius(FVector(0.f, 0.f, 0.f), 1000.0f, RandomLocation))
        {
            FTransform SpawnTransform;
            SpawnTransform.SetLocation(RandomLocation);
            SpawnTransform.SetRotation(FQuat(FRotator(0.0f, FMath::FRandRange(0.0f, 360.0f), 0.0f)));
            auto Actor = MainGameState->SpawnRepresented(FName(TEXT("AutoUnit")), SpawnTransform);

            auto Item = MainGameState->CreateItem(FName(TEXT("TestInventorys")));

            ACharacterUnit* CharacterUnit = Cast<ACharacterUnit>(Actor);
            if (IsValid(CharacterUnit))
                CharacterUnit->GetUnit()->PutOnEquipment(Item, EEquipmentSlots::Backpack);
        }
    }
}

bool UCustomTest::GetRandomReachablePointInRadius(const FVector& Origin, float Radius, FVector& OutLocation)
{
    if (!MainGameState)
        return false;

    UNavigationSystemV1* NavSys = FNavigationSystem::GetCurrent<UNavigationSystemV1>(MainGameState->GetWorld());
    if (!NavSys)
        return false;

    FNavLocation NavLocation;
    bool bFound = NavSys->GetRandomReachablePointInRadius(Origin, Radius, NavLocation);
    if (bFound)
    {
        OutLocation = NavLocation.Location;
    }
    return bFound;
}