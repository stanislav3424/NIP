#include "Weapon.h"
#include "MainGameState.h"

void UWeapon::Initialization(const FDataTableRowHandle& InitializationDataTableRowHandle)
{
    Super::Initialization(InitializationDataTableRowHandle);
    FWeaponData* WeaponData = MainGameState->GetItemData<FWeaponData>(DataTableRowHandle);
    if (!WeaponData)
        return;

}