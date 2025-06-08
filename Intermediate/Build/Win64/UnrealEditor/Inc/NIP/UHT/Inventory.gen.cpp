// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NIP/Inventory.h"
#include "NIP/ItemData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventory() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
NIP_API UClass* Z_Construct_UClass_UInventory();
NIP_API UClass* Z_Construct_UClass_UInventory_NoRegister();
NIP_API UClass* Z_Construct_UClass_UItem();
NIP_API UClass* Z_Construct_UClass_UItem_NoRegister();
NIP_API UScriptStruct* Z_Construct_UScriptStruct_FItemPositionData();
UPackage* Z_Construct_UPackage__Script_NIP();
// End Cross Module References

// Begin Class UInventory Function AddToInventory
struct Z_Construct_UFunction_UInventory_AddToInventory_Statics
{
	struct Inventory_eventAddToInventory_Parms
	{
		UItem* AddItem;
		int32 IndexInventory;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CPP_Default_IndexInventory", "-1" },
		{ "ModuleRelativePath", "Inventory.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AddItem;
	static const UECodeGen_Private::FIntPropertyParams NewProp_IndexInventory;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventory_AddToInventory_Statics::NewProp_AddItem = { "AddItem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inventory_eventAddToInventory_Parms, AddItem), Z_Construct_UClass_UItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventory_AddToInventory_Statics::NewProp_IndexInventory = { "IndexInventory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inventory_eventAddToInventory_Parms, IndexInventory), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInventory_AddToInventory_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Inventory_eventAddToInventory_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventory_AddToInventory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Inventory_eventAddToInventory_Parms), &Z_Construct_UFunction_UInventory_AddToInventory_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventory_AddToInventory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_AddToInventory_Statics::NewProp_AddItem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_AddToInventory_Statics::NewProp_IndexInventory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_AddToInventory_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_AddToInventory_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_AddToInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventory, nullptr, "AddToInventory", nullptr, nullptr, Z_Construct_UFunction_UInventory_AddToInventory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_AddToInventory_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventory_AddToInventory_Statics::Inventory_eventAddToInventory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_AddToInventory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventory_AddToInventory_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventory_AddToInventory_Statics::Inventory_eventAddToInventory_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventory_AddToInventory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventory_AddToInventory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventory::execAddToInventory)
{
	P_GET_OBJECT(UItem,Z_Param_AddItem);
	P_GET_PROPERTY(FIntProperty,Z_Param_IndexInventory);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->AddToInventory(Z_Param_AddItem,Z_Param_IndexInventory);
	P_NATIVE_END;
}
// End Class UInventory Function AddToInventory

// Begin Class UInventory Function GetItemIndex
struct Z_Construct_UFunction_UInventory_GetItemIndex_Statics
{
	struct Inventory_eventGetItemIndex_Parms
	{
		int32 IndexInventory;
		UItem* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Inventory.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_IndexInventory;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventory_GetItemIndex_Statics::NewProp_IndexInventory = { "IndexInventory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inventory_eventGetItemIndex_Parms, IndexInventory), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventory_GetItemIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inventory_eventGetItemIndex_Parms, ReturnValue), Z_Construct_UClass_UItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventory_GetItemIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GetItemIndex_Statics::NewProp_IndexInventory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GetItemIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_GetItemIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_GetItemIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventory, nullptr, "GetItemIndex", nullptr, nullptr, Z_Construct_UFunction_UInventory_GetItemIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_GetItemIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventory_GetItemIndex_Statics::Inventory_eventGetItemIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_GetItemIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventory_GetItemIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventory_GetItemIndex_Statics::Inventory_eventGetItemIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventory_GetItemIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventory_GetItemIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventory::execGetItemIndex)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_IndexInventory);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UItem**)Z_Param__Result=P_THIS->GetItemIndex(Z_Param_IndexInventory);
	P_NATIVE_END;
}
// End Class UInventory Function GetItemIndex

// Begin Class UInventory Function GetItemsPositionData
struct Z_Construct_UFunction_UInventory_GetItemsPositionData_Statics
{
	struct Inventory_eventGetItemsPositionData_Parms
	{
		TArray<FItemPositionData> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Inventory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventory_GetItemsPositionData_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FItemPositionData, METADATA_PARAMS(0, nullptr) }; // 3703416842
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInventory_GetItemsPositionData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inventory_eventGetItemsPositionData_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 3703416842
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventory_GetItemsPositionData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GetItemsPositionData_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GetItemsPositionData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_GetItemsPositionData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_GetItemsPositionData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventory, nullptr, "GetItemsPositionData", nullptr, nullptr, Z_Construct_UFunction_UInventory_GetItemsPositionData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_GetItemsPositionData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventory_GetItemsPositionData_Statics::Inventory_eventGetItemsPositionData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_GetItemsPositionData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventory_GetItemsPositionData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventory_GetItemsPositionData_Statics::Inventory_eventGetItemsPositionData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventory_GetItemsPositionData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventory_GetItemsPositionData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventory::execGetItemsPositionData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FItemPositionData>*)Z_Param__Result=P_THIS->GetItemsPositionData();
	P_NATIVE_END;
}
// End Class UInventory Function GetItemsPositionData

// Begin Class UInventory Function RemoveItem
struct Z_Construct_UFunction_UInventory_RemoveItem_Statics
{
	struct Inventory_eventRemoveItem_Parms
	{
		UItem* RemoveItem;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Inventory.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RemoveItem;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventory_RemoveItem_Statics::NewProp_RemoveItem = { "RemoveItem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inventory_eventRemoveItem_Parms, RemoveItem), Z_Construct_UClass_UItem_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInventory_RemoveItem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Inventory_eventRemoveItem_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventory_RemoveItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Inventory_eventRemoveItem_Parms), &Z_Construct_UFunction_UInventory_RemoveItem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventory_RemoveItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_RemoveItem_Statics::NewProp_RemoveItem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_RemoveItem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_RemoveItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_RemoveItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventory, nullptr, "RemoveItem", nullptr, nullptr, Z_Construct_UFunction_UInventory_RemoveItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_RemoveItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventory_RemoveItem_Statics::Inventory_eventRemoveItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_RemoveItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventory_RemoveItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventory_RemoveItem_Statics::Inventory_eventRemoveItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventory_RemoveItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventory_RemoveItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventory::execRemoveItem)
{
	P_GET_OBJECT(UItem,Z_Param_RemoveItem);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RemoveItem(Z_Param_RemoveItem);
	P_NATIVE_END;
}
// End Class UInventory Function RemoveItem

// Begin Class UInventory Function RemoveItemIndex
struct Z_Construct_UFunction_UInventory_RemoveItemIndex_Statics
{
	struct Inventory_eventRemoveItemIndex_Parms
	{
		int32 IndexInventory;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Inventory.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_IndexInventory;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventory_RemoveItemIndex_Statics::NewProp_IndexInventory = { "IndexInventory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inventory_eventRemoveItemIndex_Parms, IndexInventory), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInventory_RemoveItemIndex_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Inventory_eventRemoveItemIndex_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventory_RemoveItemIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Inventory_eventRemoveItemIndex_Parms), &Z_Construct_UFunction_UInventory_RemoveItemIndex_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventory_RemoveItemIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_RemoveItemIndex_Statics::NewProp_IndexInventory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_RemoveItemIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_RemoveItemIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_RemoveItemIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventory, nullptr, "RemoveItemIndex", nullptr, nullptr, Z_Construct_UFunction_UInventory_RemoveItemIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_RemoveItemIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventory_RemoveItemIndex_Statics::Inventory_eventRemoveItemIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_RemoveItemIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventory_RemoveItemIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventory_RemoveItemIndex_Statics::Inventory_eventRemoveItemIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventory_RemoveItemIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventory_RemoveItemIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventory::execRemoveItemIndex)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_IndexInventory);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RemoveItemIndex(Z_Param_IndexInventory);
	P_NATIVE_END;
}
// End Class UInventory Function RemoveItemIndex

// Begin Class UInventory Function TryAddToInventory
struct Z_Construct_UFunction_UInventory_TryAddToInventory_Statics
{
	struct Inventory_eventTryAddToInventory_Parms
	{
		UItem* AddItem;
		int32 IndexInventory;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Inventory.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AddItem;
	static const UECodeGen_Private::FIntPropertyParams NewProp_IndexInventory;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventory_TryAddToInventory_Statics::NewProp_AddItem = { "AddItem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inventory_eventTryAddToInventory_Parms, AddItem), Z_Construct_UClass_UItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventory_TryAddToInventory_Statics::NewProp_IndexInventory = { "IndexInventory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inventory_eventTryAddToInventory_Parms, IndexInventory), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInventory_TryAddToInventory_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Inventory_eventTryAddToInventory_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventory_TryAddToInventory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Inventory_eventTryAddToInventory_Parms), &Z_Construct_UFunction_UInventory_TryAddToInventory_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventory_TryAddToInventory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_TryAddToInventory_Statics::NewProp_AddItem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_TryAddToInventory_Statics::NewProp_IndexInventory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_TryAddToInventory_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_TryAddToInventory_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_TryAddToInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventory, nullptr, "TryAddToInventory", nullptr, nullptr, Z_Construct_UFunction_UInventory_TryAddToInventory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_TryAddToInventory_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventory_TryAddToInventory_Statics::Inventory_eventTryAddToInventory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_TryAddToInventory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventory_TryAddToInventory_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventory_TryAddToInventory_Statics::Inventory_eventTryAddToInventory_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventory_TryAddToInventory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventory_TryAddToInventory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventory::execTryAddToInventory)
{
	P_GET_OBJECT(UItem,Z_Param_AddItem);
	P_GET_PROPERTY(FIntProperty,Z_Param_IndexInventory);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->TryAddToInventory(Z_Param_AddItem,Z_Param_IndexInventory);
	P_NATIVE_END;
}
// End Class UInventory Function TryAddToInventory

// Begin Class UInventory
void UInventory::StaticRegisterNativesUInventory()
{
	UClass* Class = UInventory::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddToInventory", &UInventory::execAddToInventory },
		{ "GetItemIndex", &UInventory::execGetItemIndex },
		{ "GetItemsPositionData", &UInventory::execGetItemsPositionData },
		{ "RemoveItem", &UInventory::execRemoveItem },
		{ "RemoveItemIndex", &UInventory::execRemoveItemIndex },
		{ "TryAddToInventory", &UInventory::execTryAddToInventory },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInventory);
UClass* Z_Construct_UClass_UInventory_NoRegister()
{
	return UInventory::StaticClass();
}
struct Z_Construct_UClass_UInventory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Inventory.h" },
		{ "ModuleRelativePath", "Inventory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InventorySize_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Inventory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Inventory_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Inventory.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InventorySize;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Inventory_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Inventory;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInventory_AddToInventory, "AddToInventory" }, // 545710080
		{ &Z_Construct_UFunction_UInventory_GetItemIndex, "GetItemIndex" }, // 1867534064
		{ &Z_Construct_UFunction_UInventory_GetItemsPositionData, "GetItemsPositionData" }, // 342797527
		{ &Z_Construct_UFunction_UInventory_RemoveItem, "RemoveItem" }, // 3907954111
		{ &Z_Construct_UFunction_UInventory_RemoveItemIndex, "RemoveItemIndex" }, // 2957161688
		{ &Z_Construct_UFunction_UInventory_TryAddToInventory, "TryAddToInventory" }, // 73265667
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInventory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInventory_Statics::NewProp_InventorySize = { "InventorySize", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventory, InventorySize), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InventorySize_MetaData), NewProp_InventorySize_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventory_Statics::NewProp_Inventory_Inner = { "Inventory", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInventory_Statics::NewProp_Inventory = { "Inventory", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventory, Inventory), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Inventory_MetaData), NewProp_Inventory_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInventory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventory_Statics::NewProp_InventorySize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventory_Statics::NewProp_Inventory_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventory_Statics::NewProp_Inventory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventory_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInventory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UItem,
	(UObject* (*)())Z_Construct_UPackage__Script_NIP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInventory_Statics::ClassParams = {
	&UInventory::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UInventory_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UInventory_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventory_Statics::Class_MetaDataParams), Z_Construct_UClass_UInventory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInventory()
{
	if (!Z_Registration_Info_UClass_UInventory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInventory.OuterSingleton, Z_Construct_UClass_UInventory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInventory.OuterSingleton;
}
template<> NIP_API UClass* StaticClass<UInventory>()
{
	return UInventory::StaticClass();
}
UInventory::UInventory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInventory);
UInventory::~UInventory() {}
// End Class UInventory

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_Inventory_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInventory, UInventory::StaticClass, TEXT("UInventory"), &Z_Registration_Info_UClass_UInventory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInventory), 4190028027U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_Inventory_h_2185793703(TEXT("/Script/NIP"),
	Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_Inventory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_Inventory_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
