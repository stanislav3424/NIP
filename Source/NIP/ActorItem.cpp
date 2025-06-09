#include "ActorItem.h"

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

