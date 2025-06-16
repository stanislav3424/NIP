#pragma once

#include "Blueprint/DragDropOperation.h"
#include "CoreMinimal.h"
#include "ItemDragDropOperation.generated.h"

UCLASS()
class NIP_API UItemDragDropOperation : public UDragDropOperation
{
    GENERATED_BODY()

protected:
    virtual void DragCancelled_Implementation(const FPointerEvent& PointerEvent) override;
};
