#include "Unit.h"
#include "MainGameState.h"

void UUnit::Initialization(const FDataTableRowHandle& InitializationDataTableRowHandle)
{
    Super::Initialization(InitializationDataTableRowHandle);
    MainGameState = Cast<AMainGameState>(GetWorld()->GetGameState());
    if (!MainGameState)
        return;
    FUnitData* UnitData = MainGameState->GetItemData<FUnitData>(DataTableRowHandle);
    if (!UnitData)
        return;

    Speed = UnitData->Speed;
}
