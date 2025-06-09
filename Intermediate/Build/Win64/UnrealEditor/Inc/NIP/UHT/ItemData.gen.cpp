// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NIP/ItemData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemData() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
NIP_API UClass* Z_Construct_UClass_UItem_NoRegister();
NIP_API UEnum* Z_Construct_UEnum_NIP_EEquipmentSlots();
NIP_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryData();
NIP_API UScriptStruct* Z_Construct_UScriptStruct_FItemData();
NIP_API UScriptStruct* Z_Construct_UScriptStruct_FItemPositionData();
NIP_API UScriptStruct* Z_Construct_UScriptStruct_FUnitData();
NIP_API UScriptStruct* Z_Construct_UScriptStruct_FWeaponData();
UPackage* Z_Construct_UPackage__Script_NIP();
// End Cross Module References

// Begin ScriptStruct FItemData
static_assert(std::is_polymorphic<FItemData>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FItemData cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ItemData;
class UScriptStruct* FItemData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ItemData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ItemData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FItemData, (UObject*)Z_Construct_UPackage__Script_NIP(), TEXT("ItemData"));
	}
	return Z_Registration_Info_UScriptStruct_ItemData.OuterSingleton;
}
template<> NIP_API UScriptStruct* StaticStruct<FItemData>()
{
	return FItemData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FItemData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "ItemData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[] = {
		{ "Category", "ItemData" },
		{ "ModuleRelativePath", "ItemData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClassItem_MetaData[] = {
		{ "Category", "ItemData" },
		{ "ModuleRelativePath", "ItemData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClassRepresentedActor_MetaData[] = {
		{ "Category", "ItemData" },
		{ "ModuleRelativePath", "ItemData.h" },
		{ "MustImplement", "RepresentableInterface" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemSize_MetaData[] = {
		{ "Category", "ItemData" },
		{ "ModuleRelativePath", "ItemData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanPut_MetaData[] = {
		{ "Category", "ItemData" },
		{ "ModuleRelativePath", "ItemData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanRotation_MetaData[] = {
		{ "Category", "ItemData" },
		{ "ModuleRelativePath", "ItemData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanSelect_MetaData[] = {
		{ "Category", "ItemData" },
		{ "ModuleRelativePath", "ItemData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_DisplayName;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ClassItem;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ClassRepresentedActor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemSize;
	static void NewProp_bCanPut_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanPut;
	static void NewProp_bCanRotation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanRotation;
	static void NewProp_bCanSelect_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanSelect;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FItemData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FItemData_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemData, DisplayName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayName_MetaData), NewProp_DisplayName_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ClassItem = { "ClassItem", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemData, ClassItem), Z_Construct_UClass_UClass, Z_Construct_UClass_UItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClassItem_MetaData), NewProp_ClassItem_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ClassRepresentedActor = { "ClassRepresentedActor", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemData, ClassRepresentedActor), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClassRepresentedActor_MetaData), NewProp_ClassRepresentedActor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ItemSize = { "ItemSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemData, ItemSize), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemSize_MetaData), NewProp_ItemSize_MetaData) };
void Z_Construct_UScriptStruct_FItemData_Statics::NewProp_bCanPut_SetBit(void* Obj)
{
	((FItemData*)Obj)->bCanPut = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FItemData_Statics::NewProp_bCanPut = { "bCanPut", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FItemData), &Z_Construct_UScriptStruct_FItemData_Statics::NewProp_bCanPut_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanPut_MetaData), NewProp_bCanPut_MetaData) };
void Z_Construct_UScriptStruct_FItemData_Statics::NewProp_bCanRotation_SetBit(void* Obj)
{
	((FItemData*)Obj)->bCanRotation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FItemData_Statics::NewProp_bCanRotation = { "bCanRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FItemData), &Z_Construct_UScriptStruct_FItemData_Statics::NewProp_bCanRotation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanRotation_MetaData), NewProp_bCanRotation_MetaData) };
void Z_Construct_UScriptStruct_FItemData_Statics::NewProp_bCanSelect_SetBit(void* Obj)
{
	((FItemData*)Obj)->bCanSelect = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FItemData_Statics::NewProp_bCanSelect = { "bCanSelect", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FItemData), &Z_Construct_UScriptStruct_FItemData_Statics::NewProp_bCanSelect_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanSelect_MetaData), NewProp_bCanSelect_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FItemData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemData_Statics::NewProp_DisplayName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ClassItem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ClassRepresentedActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ItemSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemData_Statics::NewProp_bCanPut,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemData_Statics::NewProp_bCanRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemData_Statics::NewProp_bCanSelect,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FItemData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NIP,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"ItemData",
	Z_Construct_UScriptStruct_FItemData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemData_Statics::PropPointers),
	sizeof(FItemData),
	alignof(FItemData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FItemData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FItemData()
{
	if (!Z_Registration_Info_UScriptStruct_ItemData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ItemData.InnerSingleton, Z_Construct_UScriptStruct_FItemData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ItemData.InnerSingleton;
}
// End ScriptStruct FItemData

// Begin ScriptStruct FInventoryData
static_assert(std::is_polymorphic<FInventoryData>() == std::is_polymorphic<FItemData>(), "USTRUCT FInventoryData cannot be polymorphic unless super FItemData is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InventoryData;
class UScriptStruct* FInventoryData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InventoryData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InventoryData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInventoryData, (UObject*)Z_Construct_UPackage__Script_NIP(), TEXT("InventoryData"));
	}
	return Z_Registration_Info_UScriptStruct_InventoryData.OuterSingleton;
}
template<> NIP_API UScriptStruct* StaticStruct<FInventoryData>()
{
	return FInventoryData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInventoryData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "ItemData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SizeInventory_MetaData[] = {
		{ "Category", "InventoryData" },
		{ "ModuleRelativePath", "ItemData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SizeInventory;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInventoryData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInventoryData_Statics::NewProp_SizeInventory = { "SizeInventory", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryData, SizeInventory), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SizeInventory_MetaData), NewProp_SizeInventory_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInventoryData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryData_Statics::NewProp_SizeInventory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInventoryData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NIP,
	Z_Construct_UScriptStruct_FItemData,
	&NewStructOps,
	"InventoryData",
	Z_Construct_UScriptStruct_FInventoryData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryData_Statics::PropPointers),
	sizeof(FInventoryData),
	alignof(FInventoryData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInventoryData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInventoryData()
{
	if (!Z_Registration_Info_UScriptStruct_InventoryData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InventoryData.InnerSingleton, Z_Construct_UScriptStruct_FInventoryData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InventoryData.InnerSingleton;
}
// End ScriptStruct FInventoryData

// Begin ScriptStruct FWeaponData
static_assert(std::is_polymorphic<FWeaponData>() == std::is_polymorphic<FItemData>(), "USTRUCT FWeaponData cannot be polymorphic unless super FItemData is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WeaponData;
class UScriptStruct* FWeaponData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WeaponData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WeaponData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWeaponData, (UObject*)Z_Construct_UPackage__Script_NIP(), TEXT("WeaponData"));
	}
	return Z_Registration_Info_UScriptStruct_WeaponData.OuterSingleton;
}
template<> NIP_API UScriptStruct* StaticStruct<FWeaponData>()
{
	return FWeaponData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FWeaponData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "ItemData.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWeaponData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWeaponData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NIP,
	Z_Construct_UScriptStruct_FItemData,
	&NewStructOps,
	"WeaponData",
	nullptr,
	0,
	sizeof(FWeaponData),
	alignof(FWeaponData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWeaponData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FWeaponData()
{
	if (!Z_Registration_Info_UScriptStruct_WeaponData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WeaponData.InnerSingleton, Z_Construct_UScriptStruct_FWeaponData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_WeaponData.InnerSingleton;
}
// End ScriptStruct FWeaponData

// Begin ScriptStruct FUnitData
static_assert(std::is_polymorphic<FUnitData>() == std::is_polymorphic<FItemData>(), "USTRUCT FUnitData cannot be polymorphic unless super FItemData is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UnitData;
class UScriptStruct* FUnitData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UnitData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UnitData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUnitData, (UObject*)Z_Construct_UPackage__Script_NIP(), TEXT("UnitData"));
	}
	return Z_Registration_Info_UScriptStruct_UnitData.OuterSingleton;
}
template<> NIP_API UScriptStruct* StaticStruct<FUnitData>()
{
	return FUnitData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FUnitData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "ItemData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[] = {
		{ "Category", "UnitData" },
		{ "ModuleRelativePath", "ItemData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUnitData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FUnitData_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUnitData, Speed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Speed_MetaData), NewProp_Speed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUnitData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUnitData_Statics::NewProp_Speed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUnitData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUnitData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NIP,
	Z_Construct_UScriptStruct_FItemData,
	&NewStructOps,
	"UnitData",
	Z_Construct_UScriptStruct_FUnitData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUnitData_Statics::PropPointers),
	sizeof(FUnitData),
	alignof(FUnitData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUnitData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FUnitData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FUnitData()
{
	if (!Z_Registration_Info_UScriptStruct_UnitData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UnitData.InnerSingleton, Z_Construct_UScriptStruct_FUnitData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_UnitData.InnerSingleton;
}
// End ScriptStruct FUnitData

// Begin ScriptStruct FItemPositionData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ItemPositionData;
class UScriptStruct* FItemPositionData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ItemPositionData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ItemPositionData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FItemPositionData, (UObject*)Z_Construct_UPackage__Script_NIP(), TEXT("ItemPositionData"));
	}
	return Z_Registration_Info_UScriptStruct_ItemPositionData.OuterSingleton;
}
template<> NIP_API UScriptStruct* StaticStruct<FItemPositionData>()
{
	return FItemPositionData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FItemPositionData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "ItemData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[] = {
		{ "Category", "ItemPositionData" },
		{ "ModuleRelativePath", "ItemData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[] = {
		{ "Category", "ItemPositionData" },
		{ "ModuleRelativePath", "ItemData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FItemPositionData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FItemPositionData_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemPositionData, Item), Z_Construct_UClass_UItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Item_MetaData), NewProp_Item_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FItemPositionData_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemPositionData, Position), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Position_MetaData), NewProp_Position_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FItemPositionData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemPositionData_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemPositionData_Statics::NewProp_Position,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemPositionData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FItemPositionData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NIP,
	nullptr,
	&NewStructOps,
	"ItemPositionData",
	Z_Construct_UScriptStruct_FItemPositionData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemPositionData_Statics::PropPointers),
	sizeof(FItemPositionData),
	alignof(FItemPositionData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemPositionData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FItemPositionData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FItemPositionData()
{
	if (!Z_Registration_Info_UScriptStruct_ItemPositionData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ItemPositionData.InnerSingleton, Z_Construct_UScriptStruct_FItemPositionData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ItemPositionData.InnerSingleton;
}
// End ScriptStruct FItemPositionData

// Begin Enum EEquipmentSlots
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEquipmentSlots;
static UEnum* EEquipmentSlots_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EEquipmentSlots.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EEquipmentSlots.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_NIP_EEquipmentSlots, (UObject*)Z_Construct_UPackage__Script_NIP(), TEXT("EEquipmentSlots"));
	}
	return Z_Registration_Info_UEnum_EEquipmentSlots.OuterSingleton;
}
template<> NIP_API UEnum* StaticEnum<EEquipmentSlots>()
{
	return EEquipmentSlots_StaticEnum();
}
struct Z_Construct_UEnum_NIP_EEquipmentSlots_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Backpack.DisplayName", "Backpack" },
		{ "Backpack.Name", "EEquipmentSlots::Backpack" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "ItemData.h" },
		{ "Weapon.DisplayName", "Weapon" },
		{ "Weapon.Name", "EEquipmentSlots::Weapon" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EEquipmentSlots::Backpack", (int64)EEquipmentSlots::Backpack },
		{ "EEquipmentSlots::Weapon", (int64)EEquipmentSlots::Weapon },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_NIP_EEquipmentSlots_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_NIP,
	nullptr,
	"EEquipmentSlots",
	"EEquipmentSlots",
	Z_Construct_UEnum_NIP_EEquipmentSlots_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_NIP_EEquipmentSlots_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_NIP_EEquipmentSlots_Statics::Enum_MetaDataParams), Z_Construct_UEnum_NIP_EEquipmentSlots_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_NIP_EEquipmentSlots()
{
	if (!Z_Registration_Info_UEnum_EEquipmentSlots.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEquipmentSlots.InnerSingleton, Z_Construct_UEnum_NIP_EEquipmentSlots_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EEquipmentSlots.InnerSingleton;
}
// End Enum EEquipmentSlots

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_ItemData_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EEquipmentSlots_StaticEnum, TEXT("EEquipmentSlots"), &Z_Registration_Info_UEnum_EEquipmentSlots, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2103481331U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FItemData::StaticStruct, Z_Construct_UScriptStruct_FItemData_Statics::NewStructOps, TEXT("ItemData"), &Z_Registration_Info_UScriptStruct_ItemData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FItemData), 888641964U) },
		{ FInventoryData::StaticStruct, Z_Construct_UScriptStruct_FInventoryData_Statics::NewStructOps, TEXT("InventoryData"), &Z_Registration_Info_UScriptStruct_InventoryData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInventoryData), 962260327U) },
		{ FWeaponData::StaticStruct, Z_Construct_UScriptStruct_FWeaponData_Statics::NewStructOps, TEXT("WeaponData"), &Z_Registration_Info_UScriptStruct_WeaponData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWeaponData), 3421905979U) },
		{ FUnitData::StaticStruct, Z_Construct_UScriptStruct_FUnitData_Statics::NewStructOps, TEXT("UnitData"), &Z_Registration_Info_UScriptStruct_UnitData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUnitData), 224718326U) },
		{ FItemPositionData::StaticStruct, Z_Construct_UScriptStruct_FItemPositionData_Statics::NewStructOps, TEXT("ItemPositionData"), &Z_Registration_Info_UScriptStruct_ItemPositionData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FItemPositionData), 3703416842U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_ItemData_h_1093664369(TEXT("/Script/NIP"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_ItemData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_ItemData_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_ItemData_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_ItemData_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
