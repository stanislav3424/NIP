// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NIP/RepresentableInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRepresentableInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
NIP_API UClass* Z_Construct_UClass_URepresentableInterface();
NIP_API UClass* Z_Construct_UClass_URepresentableInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_NIP();
// End Cross Module References

// Begin Interface URepresentableInterface
void URepresentableInterface::StaticRegisterNativesURepresentableInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URepresentableInterface);
UClass* Z_Construct_UClass_URepresentableInterface_NoRegister()
{
	return URepresentableInterface::StaticClass();
}
struct Z_Construct_UClass_URepresentableInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "RepresentableInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IRepresentableInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_URepresentableInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_NIP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URepresentableInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URepresentableInterface_Statics::ClassParams = {
	&URepresentableInterface::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URepresentableInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_URepresentableInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URepresentableInterface()
{
	if (!Z_Registration_Info_UClass_URepresentableInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URepresentableInterface.OuterSingleton, Z_Construct_UClass_URepresentableInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URepresentableInterface.OuterSingleton;
}
template<> NIP_API UClass* StaticClass<URepresentableInterface>()
{
	return URepresentableInterface::StaticClass();
}
URepresentableInterface::URepresentableInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(URepresentableInterface);
URepresentableInterface::~URepresentableInterface() {}
// End Interface URepresentableInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_RepresentableInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URepresentableInterface, URepresentableInterface::StaticClass, TEXT("URepresentableInterface"), &Z_Registration_Info_UClass_URepresentableInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URepresentableInterface), 1644782689U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_RepresentableInterface_h_65465863(TEXT("/Script/NIP"),
	Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_RepresentableInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_RepresentableInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
