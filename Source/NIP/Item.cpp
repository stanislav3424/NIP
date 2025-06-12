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

void UItem::SpawnRepresented(const FTransform& SpawnTransform)
{
    if (IsValid(Represented.GetObject()))
        return;
    if (GetWorld())
        Represented = GetWorld()->SpawnActor<AActor>(ClassRepresentedActor, SpawnTransform);
    if (IsValid(Represented.GetObject()))
        Represented.GetInterface()->InitializationItem(this);
}

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

    USkeletalMeshComponent* MeshRef = Unit->GetRepresented().GetInterface()->GetMeshInterface();
    if (!MeshRef)
        return;
    FName SocketName = Unit->GetSocketName(EquipmentSlots);
    if (!MeshRef->DoesSocketExist(SocketName))
        return;

    FTransform SpawnTransform = MeshRef->GetSocketTransform(SocketName);

    Represented = GetWorld()->SpawnActor<AActor>(GetClassRepresentedActor(), SpawnTransform, SpawnParameters);

    AActor* RepresentedActor = Cast<AActor>(Represented.GetObject());
    if (IsValid(RepresentedActor))
        RepresentedActor->AttachToComponent(MeshRef, FAttachmentTransformRules::SnapToTargetIncludingScale, SocketName);

    if (Represented.GetInterface())
    Represented.GetInterface()->SetCollision(false);
}

void UItem::RemoveRepresented()
{
    AActor* RepresentedActor = Cast<AActor>(Represented.GetObject());
    if (IsValid(RepresentedActor))
        RepresentedActor->Destroy();
}