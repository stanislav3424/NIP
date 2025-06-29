#include "RepresentableInterface.h"

void IRepresentableInterface::SetVisibility(bool AddVisibilityControl, UActorComponent* VisibilityControl)
{
    if (AddVisibilityControl)
        VisibilityControls.Add(VisibilityControl);
    else
        VisibilityControls.Remove(VisibilityControl);

    const bool bVisible = VisibilityControls.Num() != 0;

    if (AActor* Owner = Cast<AActor>(this))
    {
        Owner->SetActorHiddenInGame(!bVisible);

        TArray<AActor*> AttachedActors;
        Owner->GetAttachedActors(AttachedActors);
        for (AActor* Child : AttachedActors)
            Child->SetActorHiddenInGame(!bVisible);
    }
}