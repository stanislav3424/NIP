// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NIP/MapGeneration.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMapGeneration() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
NIP_API UClass* Z_Construct_UClass_AMapGeneration();
NIP_API UClass* Z_Construct_UClass_AMapGeneration_NoRegister();
NIP_API UEnum* Z_Construct_UEnum_NIP_Parameters();
PROCEDURALMESHCOMPONENT_API UClass* Z_Construct_UClass_UProceduralMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_NIP();
// End Cross Module References

// Begin Enum Parameters
static FEnumRegistrationInfo Z_Registration_Info_UEnum_Parameters;
static UEnum* Parameters_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_Parameters.OuterSingleton)
	{
		Z_Registration_Info_UEnum_Parameters.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_NIP_Parameters, (UObject*)Z_Construct_UPackage__Script_NIP(), TEXT("Parameters"));
	}
	return Z_Registration_Info_UEnum_Parameters.OuterSingleton;
}
template<> NIP_API UEnum* StaticEnum<Parameters>()
{
	return Parameters_StaticEnum();
}
struct Z_Construct_UEnum_NIP_Parameters_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "MapGeneration.h" },
		{ "NoneIndex.Name", "Parameters::NoneIndex" },
		{ "Parameter3.Name", "Parameters::Parameter3" },
		{ "Room.Name", "Parameters::Room" },
		{ "SID.Name", "Parameters::SID" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "Parameters::NoneIndex", (int64)Parameters::NoneIndex },
		{ "Parameters::SID", (int64)Parameters::SID },
		{ "Parameters::Room", (int64)Parameters::Room },
		{ "Parameters::Parameter3", (int64)Parameters::Parameter3 },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_NIP_Parameters_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_NIP,
	nullptr,
	"Parameters",
	"Parameters",
	Z_Construct_UEnum_NIP_Parameters_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_NIP_Parameters_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_NIP_Parameters_Statics::Enum_MetaDataParams), Z_Construct_UEnum_NIP_Parameters_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_NIP_Parameters()
{
	if (!Z_Registration_Info_UEnum_Parameters.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_Parameters.InnerSingleton, Z_Construct_UEnum_NIP_Parameters_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_Parameters.InnerSingleton;
}
// End Enum Parameters

// Begin Class AMapGeneration Function TestGeneration
struct Z_Construct_UFunction_AMapGeneration_TestGeneration_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Map Generation" },
		{ "ModuleRelativePath", "MapGeneration.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapGeneration_TestGeneration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMapGeneration, nullptr, "TestGeneration", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapGeneration_TestGeneration_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMapGeneration_TestGeneration_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMapGeneration_TestGeneration()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMapGeneration_TestGeneration_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMapGeneration::execTestGeneration)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TestGeneration();
	P_NATIVE_END;
}
// End Class AMapGeneration Function TestGeneration

// Begin Class AMapGeneration
void AMapGeneration::StaticRegisterNativesAMapGeneration()
{
	UClass* Class = AMapGeneration::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "TestGeneration", &AMapGeneration::execTestGeneration },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMapGeneration);
UClass* Z_Construct_UClass_AMapGeneration_NoRegister()
{
	return AMapGeneration::StaticClass();
}
struct Z_Construct_UClass_AMapGeneration_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MapGeneration.h" },
		{ "ModuleRelativePath", "MapGeneration.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rooms_MetaData[] = {
		{ "Category", "Map Generation" },
		{ "ModuleRelativePath", "MapGeneration.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SID_MetaData[] = {
		{ "Category", "Map Generation" },
		{ "ModuleRelativePath", "MapGeneration.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GeneratedMeshes_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MapGeneration.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Rooms;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SID;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GeneratedMeshes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GeneratedMeshes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMapGeneration_TestGeneration, "TestGeneration" }, // 2872245899
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMapGeneration>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMapGeneration_Statics::NewProp_Rooms = { "Rooms", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapGeneration, Rooms), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rooms_MetaData), NewProp_Rooms_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMapGeneration_Statics::NewProp_SID = { "SID", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapGeneration, SID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SID_MetaData), NewProp_SID_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMapGeneration_Statics::NewProp_GeneratedMeshes_Inner = { "GeneratedMeshes", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UProceduralMeshComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMapGeneration_Statics::NewProp_GeneratedMeshes = { "GeneratedMeshes", nullptr, (EPropertyFlags)0x0040008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapGeneration, GeneratedMeshes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GeneratedMeshes_MetaData), NewProp_GeneratedMeshes_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMapGeneration_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapGeneration_Statics::NewProp_Rooms,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapGeneration_Statics::NewProp_SID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapGeneration_Statics::NewProp_GeneratedMeshes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapGeneration_Statics::NewProp_GeneratedMeshes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMapGeneration_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMapGeneration_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_NIP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMapGeneration_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMapGeneration_Statics::ClassParams = {
	&AMapGeneration::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AMapGeneration_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMapGeneration_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMapGeneration_Statics::Class_MetaDataParams), Z_Construct_UClass_AMapGeneration_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMapGeneration()
{
	if (!Z_Registration_Info_UClass_AMapGeneration.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMapGeneration.OuterSingleton, Z_Construct_UClass_AMapGeneration_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMapGeneration.OuterSingleton;
}
template<> NIP_API UClass* StaticClass<AMapGeneration>()
{
	return AMapGeneration::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMapGeneration);
AMapGeneration::~AMapGeneration() {}
// End Class AMapGeneration

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_MapGeneration_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ Parameters_StaticEnum, TEXT("Parameters"), &Z_Registration_Info_UEnum_Parameters, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3408896462U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMapGeneration, AMapGeneration::StaticClass, TEXT("AMapGeneration"), &Z_Registration_Info_UClass_AMapGeneration, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMapGeneration), 1193817079U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_MapGeneration_h_3848825328(TEXT("/Script/NIP"),
	Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_MapGeneration_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_MapGeneration_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_MapGeneration_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_MapGeneration_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
