// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NIP/UnitUserWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnitUserWidget() {}

// Begin Cross Module References
NIP_API UClass* Z_Construct_UClass_UBaseUserWidget();
NIP_API UClass* Z_Construct_UClass_UUnitUserWidget();
NIP_API UClass* Z_Construct_UClass_UUnitUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_NIP();
// End Cross Module References

// Begin Class UUnitUserWidget
void UUnitUserWidget::StaticRegisterNativesUUnitUserWidget()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUnitUserWidget);
UClass* Z_Construct_UClass_UUnitUserWidget_NoRegister()
{
	return UUnitUserWidget::StaticClass();
}
struct Z_Construct_UClass_UUnitUserWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UnitUserWidget.h" },
		{ "ModuleRelativePath", "UnitUserWidget.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUnitUserWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UUnitUserWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_NIP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUnitUserWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUnitUserWidget_Statics::ClassParams = {
	&UUnitUserWidget::StaticClass,
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
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUnitUserWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UUnitUserWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUnitUserWidget()
{
	if (!Z_Registration_Info_UClass_UUnitUserWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUnitUserWidget.OuterSingleton, Z_Construct_UClass_UUnitUserWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUnitUserWidget.OuterSingleton;
}
template<> NIP_API UClass* StaticClass<UUnitUserWidget>()
{
	return UUnitUserWidget::StaticClass();
}
UUnitUserWidget::UUnitUserWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UUnitUserWidget);
UUnitUserWidget::~UUnitUserWidget() {}
// End Class UUnitUserWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_UnitUserWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUnitUserWidget, UUnitUserWidget::StaticClass, TEXT("UUnitUserWidget"), &Z_Registration_Info_UClass_UUnitUserWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUnitUserWidget), 1305814174U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_UnitUserWidget_h_3385332066(TEXT("/Script/NIP"),
	Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_UnitUserWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_UnitUserWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
