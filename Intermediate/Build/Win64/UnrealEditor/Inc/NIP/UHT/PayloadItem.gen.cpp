// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NIP/PayloadItem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePayloadItem() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
NIP_API UClass* Z_Construct_UClass_UItem_NoRegister();
NIP_API UClass* Z_Construct_UClass_UPayloadItem();
NIP_API UClass* Z_Construct_UClass_UPayloadItem_NoRegister();
NIP_API UEnum* Z_Construct_UEnum_NIP_EDataLastPosition();
NIP_API UEnum* Z_Construct_UEnum_NIP_EEquipmentSlots();
UPackage* Z_Construct_UPackage__Script_NIP();
// End Cross Module References

// Begin Class UPayloadItem
void UPayloadItem::StaticRegisterNativesUPayloadItem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPayloadItem);
UClass* Z_Construct_UClass_UPayloadItem_NoRegister()
{
	return UPayloadItem::StaticClass();
}
struct Z_Construct_UClass_UPayloadItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "PayloadItem.h" },
		{ "ModuleRelativePath", "PayloadItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataLastPosition_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Data" },
		{ "ModuleRelativePath", "PayloadItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Data" },
		{ "ModuleRelativePath", "PayloadItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContainerOwner_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Data" },
		{ "ModuleRelativePath", "PayloadItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Data" },
		{ "ModuleRelativePath", "PayloadItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRotation_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Data" },
		{ "ModuleRelativePath", "PayloadItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EquipmentSlots_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Data" },
		{ "ModuleRelativePath", "PayloadItem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_DataLastPosition_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DataLastPosition;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ContainerOwner;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static void NewProp_bRotation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRotation;
	static const UECodeGen_Private::FBytePropertyParams NewProp_EquipmentSlots_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_EquipmentSlots;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPayloadItem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPayloadItem_Statics::NewProp_DataLastPosition_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPayloadItem_Statics::NewProp_DataLastPosition = { "DataLastPosition", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPayloadItem, DataLastPosition), Z_Construct_UEnum_NIP_EDataLastPosition, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataLastPosition_MetaData), NewProp_DataLastPosition_MetaData) }; // 1428574845
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPayloadItem_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPayloadItem, Item), Z_Construct_UClass_UItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Item_MetaData), NewProp_Item_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPayloadItem_Statics::NewProp_ContainerOwner = { "ContainerOwner", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPayloadItem, ContainerOwner), Z_Construct_UClass_UItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContainerOwner_MetaData), NewProp_ContainerOwner_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPayloadItem_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPayloadItem, Position), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Position_MetaData), NewProp_Position_MetaData) };
void Z_Construct_UClass_UPayloadItem_Statics::NewProp_bRotation_SetBit(void* Obj)
{
	((UPayloadItem*)Obj)->bRotation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPayloadItem_Statics::NewProp_bRotation = { "bRotation", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPayloadItem), &Z_Construct_UClass_UPayloadItem_Statics::NewProp_bRotation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRotation_MetaData), NewProp_bRotation_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPayloadItem_Statics::NewProp_EquipmentSlots_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPayloadItem_Statics::NewProp_EquipmentSlots = { "EquipmentSlots", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPayloadItem, EquipmentSlots), Z_Construct_UEnum_NIP_EEquipmentSlots, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EquipmentSlots_MetaData), NewProp_EquipmentSlots_MetaData) }; // 2378091645
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPayloadItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPayloadItem_Statics::NewProp_DataLastPosition_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPayloadItem_Statics::NewProp_DataLastPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPayloadItem_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPayloadItem_Statics::NewProp_ContainerOwner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPayloadItem_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPayloadItem_Statics::NewProp_bRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPayloadItem_Statics::NewProp_EquipmentSlots_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPayloadItem_Statics::NewProp_EquipmentSlots,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPayloadItem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPayloadItem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_NIP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPayloadItem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPayloadItem_Statics::ClassParams = {
	&UPayloadItem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPayloadItem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPayloadItem_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPayloadItem_Statics::Class_MetaDataParams), Z_Construct_UClass_UPayloadItem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPayloadItem()
{
	if (!Z_Registration_Info_UClass_UPayloadItem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPayloadItem.OuterSingleton, Z_Construct_UClass_UPayloadItem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPayloadItem.OuterSingleton;
}
template<> NIP_API UClass* StaticClass<UPayloadItem>()
{
	return UPayloadItem::StaticClass();
}
UPayloadItem::UPayloadItem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPayloadItem);
UPayloadItem::~UPayloadItem() {}
// End Class UPayloadItem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_PayloadItem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPayloadItem, UPayloadItem::StaticClass, TEXT("UPayloadItem"), &Z_Registration_Info_UClass_UPayloadItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPayloadItem), 3089417191U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_PayloadItem_h_97431717(TEXT("/Script/NIP"),
	Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_PayloadItem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_PayloadItem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
