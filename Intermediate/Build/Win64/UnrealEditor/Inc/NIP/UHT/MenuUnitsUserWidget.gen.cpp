// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NIP/MenuUnitsUserWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMenuUnitsUserWidget() {}

// Begin Cross Module References
NIP_API UClass* Z_Construct_UClass_UBaseUserWidget();
NIP_API UClass* Z_Construct_UClass_UMenuUnitsUserWidget();
NIP_API UClass* Z_Construct_UClass_UMenuUnitsUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_NIP();
// End Cross Module References

// Begin Class UMenuUnitsUserWidget
void UMenuUnitsUserWidget::StaticRegisterNativesUMenuUnitsUserWidget()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMenuUnitsUserWidget);
UClass* Z_Construct_UClass_UMenuUnitsUserWidget_NoRegister()
{
	return UMenuUnitsUserWidget::StaticClass();
}
struct Z_Construct_UClass_UMenuUnitsUserWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MenuUnitsUserWidget.h" },
		{ "ModuleRelativePath", "MenuUnitsUserWidget.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMenuUnitsUserWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMenuUnitsUserWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_NIP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMenuUnitsUserWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMenuUnitsUserWidget_Statics::ClassParams = {
	&UMenuUnitsUserWidget::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMenuUnitsUserWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UMenuUnitsUserWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMenuUnitsUserWidget()
{
	if (!Z_Registration_Info_UClass_UMenuUnitsUserWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMenuUnitsUserWidget.OuterSingleton, Z_Construct_UClass_UMenuUnitsUserWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMenuUnitsUserWidget.OuterSingleton;
}
template<> NIP_API UClass* StaticClass<UMenuUnitsUserWidget>()
{
	return UMenuUnitsUserWidget::StaticClass();
}
UMenuUnitsUserWidget::UMenuUnitsUserWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMenuUnitsUserWidget);
UMenuUnitsUserWidget::~UMenuUnitsUserWidget() {}
// End Class UMenuUnitsUserWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_MenuUnitsUserWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMenuUnitsUserWidget, UMenuUnitsUserWidget::StaticClass, TEXT("UMenuUnitsUserWidget"), &Z_Registration_Info_UClass_UMenuUnitsUserWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMenuUnitsUserWidget), 822987606U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_MenuUnitsUserWidget_h_2906488973(TEXT("/Script/NIP"),
	Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_MenuUnitsUserWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_MenuUnitsUserWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
