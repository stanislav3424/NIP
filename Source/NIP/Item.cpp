#include "Item.h"
#include "MainGameState.h"
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

//

void UItem::SetSelect(bool bNewSelect)
{
    if (bSelect == bNewSelect)
        return;
    bSelect = bNewSelect;
}

void UItem::RemoveContainerFromOwner() { ContainerOwner = nullptr; }

void UItem::SetContainerOwner(UItem* NewContainerOwner)
{
    RemoveContainerFromOwner();
    ContainerOwner = NewContainerOwner;
}