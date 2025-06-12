#include "ActorItem.h"
#include "Item.h"
#include "MainGameState.h"

AActorItem::AActorItem()
{
	PrimaryActorTick.bCanEverTick = true;

}

void AActorItem::BeginPlay()
{
	Super::BeginPlay();
	
}

void AActorItem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// RepresentableInterface

void AActorItem::InitializationItem(UItem* SetItem)
{
    Item = Cast<UItem>(SetItem);
    if (!Item)
        UE_LOG(LogTemp, Error, TEXT("Error in the file: %s, line: %d, NotValid InitializationItem"), TEXT(__FILE__),
               __LINE__);
}

void AActorItem::SetCollision(bool bEnableCollision)
{
    TArray<UPrimitiveComponent*> MeshComponents;
    GetComponents<UPrimitiveComponent>(MeshComponents);

    for (UPrimitiveComponent* MeshComponent : MeshComponents)
    {
        if (MeshComponent && (MeshComponent->IsA(UStaticMeshComponent::StaticClass()) ||
                         MeshComponent->IsA(USkeletalMeshComponent::StaticClass())))
        {
            MeshComponent->SetCollisionEnabled(bEnableCollision ? ECollisionEnabled::QueryAndPhysics
                                                           : ECollisionEnabled::NoCollision);
        }
    }
}
