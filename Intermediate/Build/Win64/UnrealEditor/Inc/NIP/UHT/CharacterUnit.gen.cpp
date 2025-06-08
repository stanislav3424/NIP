// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NIP/CharacterUnit.h"
#include "Runtime/Engine/Classes/Engine/DataTable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterUnit() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDataTableRowHandle();
NIP_API UClass* Z_Construct_UClass_ACharacterUnit();
NIP_API UClass* Z_Construct_UClass_ACharacterUnit_NoRegister();
NIP_API UClass* Z_Construct_UClass_URepresentableInterface_NoRegister();
NIP_API UClass* Z_Construct_UClass_UUnit_NoRegister();
UPackage* Z_Construct_UPackage__Script_NIP();
// End Cross Module References

// Begin Class ACharacterUnit
void ACharacterUnit::StaticRegisterNativesACharacterUnit()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACharacterUnit);
UClass* Z_Construct_UClass_ACharacterUnit_NoRegister()
{
	return ACharacterUnit::StaticClass();
}
struct Z_Construct_UClass_ACharacterUnit_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "CharacterUnit.h" },
		{ "ModuleRelativePath", "CharacterUnit.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataTableRowHandle_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Data" },
		{ "ModuleRelativePath", "CharacterUnit.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Unit_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Data" },
		{ "ModuleRelativePath", "CharacterUnit.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DataTableRowHandle;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Unit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACharacterUnit>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACharacterUnit_Statics::NewProp_DataTableRowHandle = { "DataTableRowHandle", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACharacterUnit, DataTableRowHandle), Z_Construct_UScriptStruct_FDataTableRowHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataTableRowHandle_MetaData), NewProp_DataTableRowHandle_MetaData) }; // 1360917958
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACharacterUnit_Statics::NewProp_Unit = { "Unit", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACharacterUnit, Unit), Z_Construct_UClass_UUnit_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Unit_MetaData), NewProp_Unit_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACharacterUnit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterUnit_Statics::NewProp_DataTableRowHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterUnit_Statics::NewProp_Unit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterUnit_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACharacterUnit_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_NIP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterUnit_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ACharacterUnit_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_URepresentableInterface_NoRegister, (int32)VTABLE_OFFSET(ACharacterUnit, IRepresentableInterface), false },  // 1644782689
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACharacterUnit_Statics::ClassParams = {
	&ACharacterUnit::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ACharacterUnit_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterUnit_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterUnit_Statics::Class_MetaDataParams), Z_Construct_UClass_ACharacterUnit_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACharacterUnit()
{
	if (!Z_Registration_Info_UClass_ACharacterUnit.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACharacterUnit.OuterSingleton, Z_Construct_UClass_ACharacterUnit_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACharacterUnit.OuterSingleton;
}
template<> NIP_API UClass* StaticClass<ACharacterUnit>()
{
	return ACharacterUnit::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACharacterUnit);
ACharacterUnit::~ACharacterUnit() {}
// End Class ACharacterUnit

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_CharacterUnit_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACharacterUnit, ACharacterUnit::StaticClass, TEXT("ACharacterUnit"), &Z_Registration_Info_UClass_ACharacterUnit, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACharacterUnit), 2368235893U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_CharacterUnit_h_3527874511(TEXT("/Script/NIP"),
	Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_CharacterUnit_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_CharacterUnit_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
