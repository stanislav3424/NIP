// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NIP/MainGameState.h"
#include "Runtime/Engine/Classes/Engine/DataTable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainGameState() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameStateBase();
ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDataTableRowHandle();
NIP_API UClass* Z_Construct_UClass_AMainGameState();
NIP_API UClass* Z_Construct_UClass_AMainGameState_NoRegister();
NIP_API UClass* Z_Construct_UClass_ARealtimeRenderingPipeline_NoRegister();
NIP_API UClass* Z_Construct_UClass_UCustomTest_NoRegister();
NIP_API UClass* Z_Construct_UClass_UInventoryUserWidget_NoRegister();
NIP_API UClass* Z_Construct_UClass_UItem_NoRegister();
NIP_API UClass* Z_Construct_UClass_UItemUserWidget_NoRegister();
NIP_API UClass* Z_Construct_UClass_UMenuUnitsUserWidget_NoRegister();
NIP_API UClass* Z_Construct_UClass_UUnitUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_NIP();
// End Cross Module References

// Begin Class AMainGameState Function CreateItem
struct Z_Construct_UFunction_AMainGameState_CreateItem_Statics
{
	struct MainGameState_eventCreateItem_Parms
	{
		FDataTableRowHandle DataTableRowHandle;
		UItem* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Create" },
		{ "ModuleRelativePath", "MainGameState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataTableRowHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DataTableRowHandle;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMainGameState_CreateItem_Statics::NewProp_DataTableRowHandle = { "DataTableRowHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MainGameState_eventCreateItem_Parms, DataTableRowHandle), Z_Construct_UScriptStruct_FDataTableRowHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataTableRowHandle_MetaData), NewProp_DataTableRowHandle_MetaData) }; // 1360917958
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMainGameState_CreateItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MainGameState_eventCreateItem_Parms, ReturnValue), Z_Construct_UClass_UItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMainGameState_CreateItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMainGameState_CreateItem_Statics::NewProp_DataTableRowHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMainGameState_CreateItem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMainGameState_CreateItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMainGameState_CreateItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMainGameState, nullptr, "CreateItem", nullptr, nullptr, Z_Construct_UFunction_AMainGameState_CreateItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMainGameState_CreateItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMainGameState_CreateItem_Statics::MainGameState_eventCreateItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMainGameState_CreateItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMainGameState_CreateItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMainGameState_CreateItem_Statics::MainGameState_eventCreateItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMainGameState_CreateItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMainGameState_CreateItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMainGameState::execCreateItem)
{
	P_GET_STRUCT_REF(FDataTableRowHandle,Z_Param_Out_DataTableRowHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UItem**)Z_Param__Result=P_THIS->CreateItem(Z_Param_Out_DataTableRowHandle);
	P_NATIVE_END;
}
// End Class AMainGameState Function CreateItem

// Begin Class AMainGameState Function RunTest
struct Z_Construct_UFunction_AMainGameState_RunTest_Statics
{
	struct MainGameState_eventRunTest_Parms
	{
		int32 IndexTest;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RunTest" },
		{ "ModuleRelativePath", "MainGameState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_IndexTest;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMainGameState_RunTest_Statics::NewProp_IndexTest = { "IndexTest", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MainGameState_eventRunTest_Parms, IndexTest), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMainGameState_RunTest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMainGameState_RunTest_Statics::NewProp_IndexTest,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMainGameState_RunTest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMainGameState_RunTest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMainGameState, nullptr, "RunTest", nullptr, nullptr, Z_Construct_UFunction_AMainGameState_RunTest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMainGameState_RunTest_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMainGameState_RunTest_Statics::MainGameState_eventRunTest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMainGameState_RunTest_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMainGameState_RunTest_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMainGameState_RunTest_Statics::MainGameState_eventRunTest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMainGameState_RunTest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMainGameState_RunTest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMainGameState::execRunTest)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_IndexTest);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RunTest(Z_Param_IndexTest);
	P_NATIVE_END;
}
// End Class AMainGameState Function RunTest

// Begin Class AMainGameState Function SpawnRepresented
struct Z_Construct_UFunction_AMainGameState_SpawnRepresented_Statics
{
	struct MainGameState_eventSpawnRepresented_Parms
	{
		FDataTableRowHandle DataTableRowHandle;
		FTransform SpawnTransform;
		AActor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Create" },
		{ "ModuleRelativePath", "MainGameState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataTableRowHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DataTableRowHandle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnTransform;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMainGameState_SpawnRepresented_Statics::NewProp_DataTableRowHandle = { "DataTableRowHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MainGameState_eventSpawnRepresented_Parms, DataTableRowHandle), Z_Construct_UScriptStruct_FDataTableRowHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataTableRowHandle_MetaData), NewProp_DataTableRowHandle_MetaData) }; // 1360917958
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMainGameState_SpawnRepresented_Statics::NewProp_SpawnTransform = { "SpawnTransform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MainGameState_eventSpawnRepresented_Parms, SpawnTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnTransform_MetaData), NewProp_SpawnTransform_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMainGameState_SpawnRepresented_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MainGameState_eventSpawnRepresented_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMainGameState_SpawnRepresented_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMainGameState_SpawnRepresented_Statics::NewProp_DataTableRowHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMainGameState_SpawnRepresented_Statics::NewProp_SpawnTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMainGameState_SpawnRepresented_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMainGameState_SpawnRepresented_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMainGameState_SpawnRepresented_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMainGameState, nullptr, "SpawnRepresented", nullptr, nullptr, Z_Construct_UFunction_AMainGameState_SpawnRepresented_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMainGameState_SpawnRepresented_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMainGameState_SpawnRepresented_Statics::MainGameState_eventSpawnRepresented_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMainGameState_SpawnRepresented_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMainGameState_SpawnRepresented_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMainGameState_SpawnRepresented_Statics::MainGameState_eventSpawnRepresented_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMainGameState_SpawnRepresented()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMainGameState_SpawnRepresented_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMainGameState::execSpawnRepresented)
{
	P_GET_STRUCT_REF(FDataTableRowHandle,Z_Param_Out_DataTableRowHandle);
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_SpawnTransform);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AActor**)Z_Param__Result=P_THIS->SpawnRepresented(Z_Param_Out_DataTableRowHandle,Z_Param_Out_SpawnTransform);
	P_NATIVE_END;
}
// End Class AMainGameState Function SpawnRepresented

// Begin Class AMainGameState
void AMainGameState::StaticRegisterNativesAMainGameState()
{
	UClass* Class = AMainGameState::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreateItem", &AMainGameState::execCreateItem },
		{ "RunTest", &AMainGameState::execRunTest },
		{ "SpawnRepresented", &AMainGameState::execSpawnRepresented },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMainGameState);
UClass* Z_Construct_UClass_AMainGameState_NoRegister()
{
	return AMainGameState::StaticClass();
}
struct Z_Construct_UClass_AMainGameState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "MainGameState.h" },
		{ "ModuleRelativePath", "MainGameState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemsDataTable_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "DataTable" },
		{ "ModuleRelativePath", "MainGameState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnitsDataTable_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "DataTable" },
		{ "ModuleRelativePath", "MainGameState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InventorysDataTable_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "DataTable" },
		{ "ModuleRelativePath", "MainGameState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClassRealtimeRenderingPipeline_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "RealtimeRenderingPipeline" },
		{ "ModuleRelativePath", "MainGameState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RealtimeRenderingPipeline_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "RealtimeRenderingPipeline" },
		{ "ModuleRelativePath", "MainGameState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InventoryCellSize_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Data" },
		{ "ModuleRelativePath", "MainGameState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClassItemUserWidget_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "UserInterface" },
		{ "ModuleRelativePath", "MainGameState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClassInventoryUserWidget_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "UserInterface" },
		{ "ModuleRelativePath", "MainGameState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClassUnitUserWidget_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "UserInterface" },
		{ "ModuleRelativePath", "MainGameState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClassMenuUnitsUserWidget_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "UserInterface" },
		{ "ModuleRelativePath", "MainGameState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialBase_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "UserInterface" },
		{ "ModuleRelativePath", "MainGameState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Test_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Data" },
		{ "ModuleRelativePath", "MainGameState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemsDataTable;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UnitsDataTable;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InventorysDataTable;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ClassRealtimeRenderingPipeline;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RealtimeRenderingPipeline;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InventoryCellSize;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ClassItemUserWidget;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ClassInventoryUserWidget;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ClassUnitUserWidget;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ClassMenuUnitsUserWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialBase;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Test;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMainGameState_CreateItem, "CreateItem" }, // 2065181384
		{ &Z_Construct_UFunction_AMainGameState_RunTest, "RunTest" }, // 3681078442
		{ &Z_Construct_UFunction_AMainGameState_SpawnRepresented, "SpawnRepresented" }, // 3334322756
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMainGameState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainGameState_Statics::NewProp_ItemsDataTable = { "ItemsDataTable", nullptr, (EPropertyFlags)0x0040000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainGameState, ItemsDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemsDataTable_MetaData), NewProp_ItemsDataTable_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainGameState_Statics::NewProp_UnitsDataTable = { "UnitsDataTable", nullptr, (EPropertyFlags)0x0040000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainGameState, UnitsDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnitsDataTable_MetaData), NewProp_UnitsDataTable_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainGameState_Statics::NewProp_InventorysDataTable = { "InventorysDataTable", nullptr, (EPropertyFlags)0x0040000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainGameState, InventorysDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InventorysDataTable_MetaData), NewProp_InventorysDataTable_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMainGameState_Statics::NewProp_ClassRealtimeRenderingPipeline = { "ClassRealtimeRenderingPipeline", nullptr, (EPropertyFlags)0x0044000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainGameState, ClassRealtimeRenderingPipeline), Z_Construct_UClass_UClass, Z_Construct_UClass_ARealtimeRenderingPipeline_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClassRealtimeRenderingPipeline_MetaData), NewProp_ClassRealtimeRenderingPipeline_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainGameState_Statics::NewProp_RealtimeRenderingPipeline = { "RealtimeRenderingPipeline", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainGameState, RealtimeRenderingPipeline), Z_Construct_UClass_ARealtimeRenderingPipeline_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RealtimeRenderingPipeline_MetaData), NewProp_RealtimeRenderingPipeline_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMainGameState_Statics::NewProp_InventoryCellSize = { "InventoryCellSize", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainGameState, InventoryCellSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InventoryCellSize_MetaData), NewProp_InventoryCellSize_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMainGameState_Statics::NewProp_ClassItemUserWidget = { "ClassItemUserWidget", nullptr, (EPropertyFlags)0x0044000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainGameState, ClassItemUserWidget), Z_Construct_UClass_UClass, Z_Construct_UClass_UItemUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClassItemUserWidget_MetaData), NewProp_ClassItemUserWidget_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMainGameState_Statics::NewProp_ClassInventoryUserWidget = { "ClassInventoryUserWidget", nullptr, (EPropertyFlags)0x0044000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainGameState, ClassInventoryUserWidget), Z_Construct_UClass_UClass, Z_Construct_UClass_UInventoryUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClassInventoryUserWidget_MetaData), NewProp_ClassInventoryUserWidget_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMainGameState_Statics::NewProp_ClassUnitUserWidget = { "ClassUnitUserWidget", nullptr, (EPropertyFlags)0x0044000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainGameState, ClassUnitUserWidget), Z_Construct_UClass_UClass, Z_Construct_UClass_UUnitUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClassUnitUserWidget_MetaData), NewProp_ClassUnitUserWidget_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMainGameState_Statics::NewProp_ClassMenuUnitsUserWidget = { "ClassMenuUnitsUserWidget", nullptr, (EPropertyFlags)0x0044000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainGameState, ClassMenuUnitsUserWidget), Z_Construct_UClass_UClass, Z_Construct_UClass_UMenuUnitsUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClassMenuUnitsUserWidget_MetaData), NewProp_ClassMenuUnitsUserWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainGameState_Statics::NewProp_MaterialBase = { "MaterialBase", nullptr, (EPropertyFlags)0x0040000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainGameState, MaterialBase), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialBase_MetaData), NewProp_MaterialBase_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainGameState_Statics::NewProp_Test = { "Test", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainGameState, Test), Z_Construct_UClass_UCustomTest_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Test_MetaData), NewProp_Test_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMainGameState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainGameState_Statics::NewProp_ItemsDataTable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainGameState_Statics::NewProp_UnitsDataTable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainGameState_Statics::NewProp_InventorysDataTable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainGameState_Statics::NewProp_ClassRealtimeRenderingPipeline,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainGameState_Statics::NewProp_RealtimeRenderingPipeline,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainGameState_Statics::NewProp_InventoryCellSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainGameState_Statics::NewProp_ClassItemUserWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainGameState_Statics::NewProp_ClassInventoryUserWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainGameState_Statics::NewProp_ClassUnitUserWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainGameState_Statics::NewProp_ClassMenuUnitsUserWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainGameState_Statics::NewProp_MaterialBase,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainGameState_Statics::NewProp_Test,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMainGameState_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMainGameState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameStateBase,
	(UObject* (*)())Z_Construct_UPackage__Script_NIP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMainGameState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMainGameState_Statics::ClassParams = {
	&AMainGameState::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AMainGameState_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMainGameState_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMainGameState_Statics::Class_MetaDataParams), Z_Construct_UClass_AMainGameState_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMainGameState()
{
	if (!Z_Registration_Info_UClass_AMainGameState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMainGameState.OuterSingleton, Z_Construct_UClass_AMainGameState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMainGameState.OuterSingleton;
}
template<> NIP_API UClass* StaticClass<AMainGameState>()
{
	return AMainGameState::StaticClass();
}
AMainGameState::AMainGameState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMainGameState);
AMainGameState::~AMainGameState() {}
// End Class AMainGameState

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_MainGameState_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMainGameState, AMainGameState::StaticClass, TEXT("AMainGameState"), &Z_Registration_Info_UClass_AMainGameState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMainGameState), 786982188U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_MainGameState_h_3123356384(TEXT("/Script/NIP"),
	Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_MainGameState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_MainGameState_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
