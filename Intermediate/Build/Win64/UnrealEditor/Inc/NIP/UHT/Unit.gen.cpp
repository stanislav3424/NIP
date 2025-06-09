// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NIP/Unit.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnit() {}

// Begin Cross Module References
NIP_API UClass* Z_Construct_UClass_UInventory_NoRegister();
NIP_API UClass* Z_Construct_UClass_UItem();
NIP_API UClass* Z_Construct_UClass_UUnit();
NIP_API UClass* Z_Construct_UClass_UUnit_NoRegister();
NIP_API UClass* Z_Construct_UClass_UWeapon_NoRegister();
UPackage* Z_Construct_UPackage__Script_NIP();
// End Cross Module References

// Begin Class UUnit
void UUnit::StaticRegisterNativesUUnit()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUnit);
UClass* Z_Construct_UClass_UUnit_NoRegister()
{
	return UUnit::StaticClass();
}
struct Z_Construct_UClass_UUnit_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Unit.h" },
		{ "ModuleRelativePath", "Unit.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Data\n" },
#endif
		{ "ModuleRelativePath", "Unit.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Data" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Backpack_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Equipment" },
		{ "ModuleRelativePath", "Unit.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Weapon_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Equipment" },
		{ "ModuleRelativePath", "Unit.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Backpack;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Weapon;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUnit>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUnit_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUnit, Speed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Speed_MetaData), NewProp_Speed_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUnit_Statics::NewProp_Backpack = { "Backpack", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUnit, Backpack), Z_Construct_UClass_UInventory_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Backpack_MetaData), NewProp_Backpack_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUnit_Statics::NewProp_Weapon = { "Weapon", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUnit, Weapon), Z_Construct_UClass_UWeapon_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Weapon_MetaData), NewProp_Weapon_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUnit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnit_Statics::NewProp_Speed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnit_Statics::NewProp_Backpack,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnit_Statics::NewProp_Weapon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUnit_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UUnit_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UItem,
	(UObject* (*)())Z_Construct_UPackage__Script_NIP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUnit_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUnit_Statics::ClassParams = {
	&UUnit::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UUnit_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UUnit_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUnit_Statics::Class_MetaDataParams), Z_Construct_UClass_UUnit_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUnit()
{
	if (!Z_Registration_Info_UClass_UUnit.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUnit.OuterSingleton, Z_Construct_UClass_UUnit_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUnit.OuterSingleton;
}
template<> NIP_API UClass* StaticClass<UUnit>()
{
	return UUnit::StaticClass();
}
UUnit::UUnit(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UUnit);
UUnit::~UUnit() {}
// End Class UUnit

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_Unit_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUnit, UUnit::StaticClass, TEXT("UUnit"), &Z_Registration_Info_UClass_UUnit, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUnit), 999171266U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_Unit_h_2592184420(TEXT("/Script/NIP"),
	Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_Unit_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_Unit_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
