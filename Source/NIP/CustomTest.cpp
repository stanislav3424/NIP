#include "CustomTest.h"
#include "MainGameState.h"
#include "CharacterUnit.h"
#include "Unit.h"
#include "Inventory.h"
#include "NavigationSystem.h"
#include "Kismet/KismetMathLibrary.h"
#include "LogsMacros.h"
#include "ItemData.h"

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

    for (int32 Index = 0; Index < 3; ++Index)
    {
        FVector RandomLocation;
        if (GetRandomReachablePointInRadius(FVector(0.f, 0.f, 0.f), 1000.0f, RandomLocation))
        {
            FTransform SpawnTransform;
            SpawnTransform.SetLocation(RandomLocation);
            SpawnTransform.SetRotation(FQuat(FRotator(0.0f, FMath::FRandRange(0.0f, 360.0f), 0.0f)));
            auto Item = MainGameState->SpawnRepresented(FName(TEXT("AutoUnit")), SpawnTransform);

            auto Item1 = MainGameState->CreateItem(FName(TEXT("TestInventorys")));
            auto Item2 = MainGameState->CreateItem(FName(TEXT("TestWeapon")));

            for (int32 Index2 = 0; Index2 < 2; ++Index2)
            {
                auto Item3 = MainGameState->CreateItem(FName(TEXT("TestInventorys")));
                auto Backpack = Cast<UInventory>(Item1);
                if (Backpack)
                {

                    Backpack->AddToInventory(Item3);
                }
            }

            if (auto Unit = Cast<UUnit>(Item))
            {
                Unit->SetTeam(ETeams::Player);
                Unit->PutOnEquipment(Item1, EEquipmentSlots::Backpack);
                Unit->PutOnEquipment(Item2, EEquipmentSlots::Weapon);
            }
        }
    }
    for (int32 Index = 0; Index < 3; ++Index)
    {
        FVector RandomLocation;
        if (GetRandomReachablePointInRadius(FVector(0.f, 0.f, 0.f), 500.0f, RandomLocation))
        {
            FTransform SpawnTransform;
            SpawnTransform.SetLocation(RandomLocation);
            SpawnTransform.SetRotation(FQuat(FRotator(0.0f, FMath::FRandRange(0.0f, 360.0f), 0.0f)));
            auto Item = MainGameState->SpawnRepresented(FName(TEXT("AutoUnit")), SpawnTransform);
            if (auto Unit = Cast<UUnit>(Item))
                Unit->SetTeam(ETeams::Enemy);
        }
    }
}

bool UCustomTest::GetRandomReachablePointInRadius(const FVector& Origin, float Radius, FVector& OutLocation)
{
    UNavigationSystemV1* NavSys = FNavigationSystem::GetCurrent<UNavigationSystemV1>(GetWorld());
    if (!NavSys)
        return false;

    FNavLocation NavLocation;
    bool bFound = NavSys->GetRandomReachablePointInRadius(Origin, Radius, NavLocation);
    if (bFound)
        OutLocation = NavLocation.Location;
    return bFound;
}