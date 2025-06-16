#include "PayloadItem.h"
#include "Item.h"
#include "Inventory.h"
#include "Unit.h"
#include "LogsMacros.h"

void UPayloadItem::Initialization() { ContainerOwner->SetDataPayload(this); }

void UPayloadItem::DragCancelled()
{
    if (!Item)
    {
        CHECK_NULLPTR_LOG(Item);
        return;
    }

    if (!ContainerOwner)
    {
        ThrowOnGround();
        return;
    }

 

    UInventory* Inventory = nullptr;
    UUnit* Unit = nullptr;

    switch (DataLastPosition)
    {
    case EDataLastPosition::NoneIndex:
        return;

    case EDataLastPosition::Inventory:
        Inventory = Cast<UInventory>(ContainerOwner);
        if (Inventory)
        {
            Item->SetRotation(bRotation);
            if (Inventory->AddToInventory(Item, IndexInventory))
                return;
            else if (Inventory->AddToInventory(Item))
                return;
            else
                ThrowOnGround();
        }
        return;

    case EDataLastPosition::Equipment:
        Unit = Cast<UUnit>(ContainerOwner);
        if (Unit)
        {
            if (Unit->PutOnEquipment(Item, EquipmentSlots))
                return;
            else if (Unit->AddAnywhere(Item))
                return;
            else
                ThrowOnGround();
        }
        return;

    default:
        return;
    }
}

void UPayloadItem::ThrowOnGround()
{
    if (!Item)
        return;

    FTransform Transform; 
    Transform.SetLocation(Location);
    Item->SpawnRepresented(Transform);
}