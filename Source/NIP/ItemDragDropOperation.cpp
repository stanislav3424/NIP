#include "ItemDragDropOperation.h"
#include "PayloadItem.h"

void UItemDragDropOperation::DragCancelled_Implementation(const FPointerEvent& PointerEvent)
{
    Super::DragCancelled_Implementation(PointerEvent);

    if (Payload)
    {
        UPayloadItem* PayloadItem = Cast<UPayloadItem>(Payload);
        if (PayloadItem)
            PayloadItem->DragCancelled();
    }
}