// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NIP/VisibilityControl.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVisibilityControl() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UAIPerceptionComponent();
AIMODULE_API UClass* Z_Construct_UClass_UAISenseConfig_Sight_NoRegister();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIStimulus();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
NIP_API UClass* Z_Construct_UClass_UUnit_NoRegister();
NIP_API UClass* Z_Construct_UClass_UVisibilityControl();
NIP_API UClass* Z_Construct_UClass_UVisibilityControl_NoRegister();
UPackage* Z_Construct_UPackage__Script_NIP();
// End Cross Module References

// Begin Class UVisibilityControl Function ChangesTeam
struct Z_Construct_UFunction_UVisibilityControl_ChangesTeam_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "VisibilityControl.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVisibilityControl_ChangesTeam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVisibilityControl, nullptr, "ChangesTeam", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVisibilityControl_ChangesTeam_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVisibilityControl_ChangesTeam_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UVisibilityControl_ChangesTeam()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVisibilityControl_ChangesTeam_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVisibilityControl::execChangesTeam)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ChangesTeam();
	P_NATIVE_END;
}
// End Class UVisibilityControl Function ChangesTeam

// Begin Class UVisibilityControl Function OnTargetUpdated
struct Z_Construct_UFunction_UVisibilityControl_OnTargetUpdated_Statics
{
	struct VisibilityControl_eventOnTargetUpdated_Parms
	{
		AActor* Actor;
		FAIStimulus Stimulus;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "VisibilityControl.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Stimulus;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVisibilityControl_OnTargetUpdated_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisibilityControl_eventOnTargetUpdated_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVisibilityControl_OnTargetUpdated_Statics::NewProp_Stimulus = { "Stimulus", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisibilityControl_eventOnTargetUpdated_Parms, Stimulus), Z_Construct_UScriptStruct_FAIStimulus, METADATA_PARAMS(0, nullptr) }; // 177100813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVisibilityControl_OnTargetUpdated_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisibilityControl_OnTargetUpdated_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisibilityControl_OnTargetUpdated_Statics::NewProp_Stimulus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVisibilityControl_OnTargetUpdated_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVisibilityControl_OnTargetUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVisibilityControl, nullptr, "OnTargetUpdated", nullptr, nullptr, Z_Construct_UFunction_UVisibilityControl_OnTargetUpdated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVisibilityControl_OnTargetUpdated_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVisibilityControl_OnTargetUpdated_Statics::VisibilityControl_eventOnTargetUpdated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVisibilityControl_OnTargetUpdated_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVisibilityControl_OnTargetUpdated_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVisibilityControl_OnTargetUpdated_Statics::VisibilityControl_eventOnTargetUpdated_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVisibilityControl_OnTargetUpdated()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVisibilityControl_OnTargetUpdated_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVisibilityControl::execOnTargetUpdated)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_GET_STRUCT(FAIStimulus,Z_Param_Stimulus);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnTargetUpdated(Z_Param_Actor,Z_Param_Stimulus);
	P_NATIVE_END;
}
// End Class UVisibilityControl Function OnTargetUpdated

// Begin Class UVisibilityControl
void UVisibilityControl::StaticRegisterNativesUVisibilityControl()
{
	UClass* Class = UVisibilityControl::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ChangesTeam", &UVisibilityControl::execChangesTeam },
		{ "OnTargetUpdated", &UVisibilityControl::execOnTargetUpdated },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVisibilityControl);
UClass* Z_Construct_UClass_UVisibilityControl_NoRegister()
{
	return UVisibilityControl::StaticClass();
}
struct Z_Construct_UClass_UVisibilityControl_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "AI" },
		{ "HideCategories", "Activation Collision" },
		{ "IncludePath", "VisibilityControl.h" },
		{ "ModuleRelativePath", "VisibilityControl.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Unit_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Data" },
		{ "ModuleRelativePath", "VisibilityControl.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SightConfig_MetaData[] = {
		{ "ModuleRelativePath", "VisibilityControl.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Unit;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SightConfig;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UVisibilityControl_ChangesTeam, "ChangesTeam" }, // 1684684737
		{ &Z_Construct_UFunction_UVisibilityControl_OnTargetUpdated, "OnTargetUpdated" }, // 1189783662
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVisibilityControl>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVisibilityControl_Statics::NewProp_Unit = { "Unit", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVisibilityControl, Unit), Z_Construct_UClass_UUnit_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Unit_MetaData), NewProp_Unit_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVisibilityControl_Statics::NewProp_SightConfig = { "SightConfig", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVisibilityControl, SightConfig), Z_Construct_UClass_UAISenseConfig_Sight_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SightConfig_MetaData), NewProp_SightConfig_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVisibilityControl_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVisibilityControl_Statics::NewProp_Unit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVisibilityControl_Statics::NewProp_SightConfig,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVisibilityControl_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVisibilityControl_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAIPerceptionComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_NIP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVisibilityControl_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVisibilityControl_Statics::ClassParams = {
	&UVisibilityControl::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UVisibilityControl_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UVisibilityControl_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVisibilityControl_Statics::Class_MetaDataParams), Z_Construct_UClass_UVisibilityControl_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVisibilityControl()
{
	if (!Z_Registration_Info_UClass_UVisibilityControl.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVisibilityControl.OuterSingleton, Z_Construct_UClass_UVisibilityControl_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVisibilityControl.OuterSingleton;
}
template<> NIP_API UClass* StaticClass<UVisibilityControl>()
{
	return UVisibilityControl::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVisibilityControl);
UVisibilityControl::~UVisibilityControl() {}
// End Class UVisibilityControl

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_VisibilityControl_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVisibilityControl, UVisibilityControl::StaticClass, TEXT("UVisibilityControl"), &Z_Registration_Info_UClass_UVisibilityControl, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVisibilityControl), 763784138U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_VisibilityControl_h_3811094535(TEXT("/Script/NIP"),
	Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_VisibilityControl_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_VisibilityControl_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
