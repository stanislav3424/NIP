#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GameFramework/GameStateBase.h"
#include "ItemData.h"
#include "RepresentableInterface.h"
#include "MainGameState.generated.h"

class UItem;
class ARealtimeRenderingPipeline;
class UItemUserWidget;
class UInventoryUserWidget;
class UUnitUserWidget;
class UMenuUnitsUserWidget;
class UCustomTest;

UCLASS()
class NIP_API AMainGameState : public AGameStateBase
{
    GENERATED_BODY()

protected:
    virtual void BeginPlay() override;

    // Data

    // Create
public:
    UFUNCTION(BlueprintCallable, Category = "Create")
    UItem* CreateItem(const FDataTableRowHandle& DataTableRowHandle);
    UItem* CreateItem(const FName& RowName);

    UFUNCTION(BlueprintCallable, Category = "Create")
    AActor* SpawnRepresented(const FDataTableRowHandle& DataTableRowHandle, const FTransform& SpawnTransform);
    AActor* SpawnRepresented(const FName& RowName, const FTransform& SpawnTransform);

    // DataTable
private:
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "DataTable", meta = (AllowPrivateAccess = "true"))
    UDataTable* ItemsDataTable;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "DataTable", meta = (AllowPrivateAccess = "true"))
    UDataTable* UnitsDataTable;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "DataTable", meta = (AllowPrivateAccess = "true"))
    UDataTable* InventorysDataTable;

    void CheckDataTable();

public:
    template <typename T>
    T* GetItemData(const FDataTableRowHandle& DataTableRowHandle);
    FItemData* GetItemData(const FDataTableRowHandle& DataTableRowHandle);
    FDataTableRowHandle GetDataTableRowHandle(const FName& RowName);

    // Generate
public:
    FName GenerateUniqueName(const UObject* Object) const;

    // RealtimeRenderingPipeline
private:
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "RealtimeRenderingPipeline", meta = (AllowPrivateAccess = "true"))
    TSubclassOf<ARealtimeRenderingPipeline> ClassRealtimeRenderingPipeline;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "RealtimeRenderingPipeline",
              meta = (AllowPrivateAccess = "true"))
    ARealtimeRenderingPipeline* RealtimeRenderingPipeline;

public:
    ARealtimeRenderingPipeline* GetRealtimeRenderingPipeline() const { return RealtimeRenderingPipeline; }

    // UserInterface
private:
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Data", meta = (AllowPrivateAccess = "true"))
    float InventoryCellSize = 25.f;

public:
    float GetInventoryCellSize() { return InventoryCellSize; }
    UMaterialInstanceDynamic* GetMaterialInstanceDynamic(UItem* Item, const FIntPoint& Size);

private:
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "UserInterface", meta = (AllowPrivateAccess = "true"))
    TSubclassOf<UItemUserWidget> ClassItemUserWidget;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "UserInterface", meta = (AllowPrivateAccess = "true"))
    TSubclassOf<UInventoryUserWidget> ClassInventoryUserWidget;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "UserInterface", meta = (AllowPrivateAccess = "true"))
    TSubclassOf<UUnitUserWidget> ClassUnitUserWidget;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "UserInterface", meta = (AllowPrivateAccess = "true"))
    TSubclassOf<UMenuUnitsUserWidget> ClassMenuUnitsUserWidget;

public:
    const TSubclassOf<UItemUserWidget>& GetClassItemUserWidget() const { return ClassItemUserWidget; }
    const TSubclassOf<UInventoryUserWidget>& GetClassInventoryUserWidget() const { return ClassInventoryUserWidget; }
    const TSubclassOf<UUnitUserWidget>& GetClassUnitUserWidget() const { return ClassUnitUserWidget; }
    const TSubclassOf<UMenuUnitsUserWidget>& GetClassMenuUnitsUserWidget() const { return ClassMenuUnitsUserWidget; }

private:
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "UserInterface", meta = (AllowPrivateAccess = "true"))
    UMaterial* MaterialBase;

    // Tests
private:
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Data", meta = (AllowPrivateAccess = "true"))
    UCustomTest* Test;

public:
    UFUNCTION(BlueprintCallable, Category = "RunTest")
    void RunTest(int32 IndexTest);
};