#include "Item.h"
#include "MainGameState.h"
#include "Unit.h"
#include "Engine/DataTable.h"

// Initialization

void UItem::Initialization(const FDataTableRowHandle& InitializationDataTableRowHandle)
{
    DataTableRowHandle = InitializationDataTableRowHandle;
    if (!GetWorld())
        return;
    MainGameState = Cast<AMainGameState>(GetWorld()->GetGameState());
    if (!MainGameState)
        return;
    auto ItemData = (MainGameState->GetItemData(DataTableRowHandle));
    if (!ItemData)
        return;

    DisplayName = ItemData->DisplayName;
    ClassRepresentedActor = ItemData->ClassRepresentedActor;
    ItemSize = ItemData->ItemSize;
    bCanPut = ItemData->bCanPut;
    bCanRotation = ItemData->bCanRotation;
    ID = MainGameState->GenerateUniqueName(this);
    bCanSelect = ItemData->bCanSelect;
}

void UItem::InitializationRepresented(AActor* SetRepresented)
{
    if (IsValid(Represented.GetObject()))
        return;
    if (!IsValid(SetRepresented))
        return;
    Represented = SetRepresented;
}

//

void UItem::SetSelect(bool bNewSelect)
{
    if (bSelect == bNewSelect)
        return;
    bSelect = bNewSelect;
}

void UItem::RemoveContainerFromOwner(UItem* Item) { ContainerOwner = nullptr; }

void UItem::SetContainerOwner(UItem* NewContainerOwner)
{
    RemoveContainerFromOwner();
    ContainerOwner = NewContainerOwner;
}

// Spawn

<<<<<<< HEAD
void UItem::SpawnRepresented(const FTransform& SpawnTransform)
{
    if (IsValid(Represented.GetObject()))
        return;
    if (GetWorld())
        Represented = GetWorld()->SpawnActor<AActor>(ClassRepresentedActor, SpawnTransform);
    if (IsValid(Represented.GetObject()))
        Represented.GetInterface()->InitializationItem(this);
}

=======
>>>>>>> 8109ca2ede52324330ba30f33c79a0a8097732e3
void UItem::SpawnAndAttachSkeleton(UUnit* Unit, EEquipmentSlots EquipmentSlots)
{
    if (!IsValid(Unit))
        return;
    AActor* RepresentedActorTarget = Cast<AActor>(Unit->GetRepresented().GetObject());
    if (!IsValid(RepresentedActorTarget))
        return;
    FActorSpawnParameters SpawnParameters;
    SpawnParameters.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
    SpawnParameters.Owner = RepresentedActorTarget;

<<<<<<< HEAD
    USkeletalMeshComponent* MeshRef = Unit->GetRepresented().GetInterface()->GetMeshInterface();
=======
    USkeletalMeshComponent* MeshRef = Unit->GetRepresented().GetInterface()->GetMesh();
>>>>>>> 8109ca2ede52324330ba30f33c79a0a8097732e3
    if (!MeshRef)
        return;
    FName SocketName = Unit->GetSocketName(EquipmentSlots);
    if (!MeshRef->DoesSocketExist(SocketName))
        return;

    FTransform SpawnTransform = MeshRef->GetSocketTransform(SocketName);

    Represented = GetWorld()->SpawnActor<AActor>(GetClassRepresentedActor(), SpawnTransform, SpawnParameters);

    AActor* RepresentedActor = Cast<AActor>(Represented.GetObject());
<<<<<<< HEAD
    if (IsValid(RepresentedActor))
        RepresentedActor->AttachToComponent(MeshRef, FAttachmentTransformRules::SnapToTargetIncludingScale, SocketName);

    if (Represented.GetInterface())
    Represented.GetInterface()->SetCollision(false);
=======

    if (IsValid(RepresentedActor))
        RepresentedActor->AttachToComponent(MeshRef, FAttachmentTransformRules::SnapToTargetIncludingScale, SocketName);
>>>>>>> 8109ca2ede52324330ba30f33c79a0a8097732e3
}

void UItem::RemoveRepresented()
{
    AActor* RepresentedActor = Cast<AActor>(Represented.GetObject());
    if (IsValid(RepresentedActor))
        RepresentedActor->Destroy();
}