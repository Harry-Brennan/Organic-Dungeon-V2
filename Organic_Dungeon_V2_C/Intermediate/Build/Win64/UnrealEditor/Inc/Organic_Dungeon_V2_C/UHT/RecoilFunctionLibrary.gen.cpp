// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Organic_Dungeon_V2_C/Public/RecoilFunctionLibrary.h"
#include "../../Source/Runtime/Engine/Classes/Curves/CurveFloat.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRecoilFunctionLibrary() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve();
	ORGANIC_DUNGEON_V2_C_API UClass* Z_Construct_UClass_URecoilFunctionLibrary();
	ORGANIC_DUNGEON_V2_C_API UClass* Z_Construct_UClass_URecoilFunctionLibrary_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Organic_Dungeon_V2_C();
// End Cross Module References
	DEFINE_FUNCTION(URecoilFunctionLibrary::execGetRuntimeFloatCurveValue)
	{
		P_GET_STRUCT_REF(FRuntimeFloatCurve,Z_Param_Out_InCurve);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=URecoilFunctionLibrary::GetRuntimeFloatCurveValue(Z_Param_Out_InCurve,Z_Param_InTime);
		P_NATIVE_END;
	}
	void URecoilFunctionLibrary::StaticRegisterNativesURecoilFunctionLibrary()
	{
		UClass* Class = URecoilFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetRuntimeFloatCurveValue", &URecoilFunctionLibrary::execGetRuntimeFloatCurveValue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URecoilFunctionLibrary_GetRuntimeFloatCurveValue_Statics
	{
		struct RecoilFunctionLibrary_eventGetRuntimeFloatCurveValue_Parms
		{
			FRuntimeFloatCurve InCurve;
			float InTime;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InCurve_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InCurve;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InTime;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URecoilFunctionLibrary_GetRuntimeFloatCurveValue_Statics::NewProp_InCurve_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URecoilFunctionLibrary_GetRuntimeFloatCurveValue_Statics::NewProp_InCurve = { "InCurve", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RecoilFunctionLibrary_eventGetRuntimeFloatCurveValue_Parms, InCurve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UFunction_URecoilFunctionLibrary_GetRuntimeFloatCurveValue_Statics::NewProp_InCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URecoilFunctionLibrary_GetRuntimeFloatCurveValue_Statics::NewProp_InCurve_MetaData)) }; // 1477693291
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URecoilFunctionLibrary_GetRuntimeFloatCurveValue_Statics::NewProp_InTime = { "InTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RecoilFunctionLibrary_eventGetRuntimeFloatCurveValue_Parms, InTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URecoilFunctionLibrary_GetRuntimeFloatCurveValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RecoilFunctionLibrary_eventGetRuntimeFloatCurveValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URecoilFunctionLibrary_GetRuntimeFloatCurveValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URecoilFunctionLibrary_GetRuntimeFloatCurveValue_Statics::NewProp_InCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URecoilFunctionLibrary_GetRuntimeFloatCurveValue_Statics::NewProp_InTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URecoilFunctionLibrary_GetRuntimeFloatCurveValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URecoilFunctionLibrary_GetRuntimeFloatCurveValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Math|RuntimeFloatCurve" },
		{ "Comment", "/** Evaluates the value of a Runtime Float Curve using the given time. */" },
		{ "ModuleRelativePath", "Public/RecoilFunctionLibrary.h" },
		{ "ToolTip", "Evaluates the value of a Runtime Float Curve using the given time." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URecoilFunctionLibrary_GetRuntimeFloatCurveValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URecoilFunctionLibrary, nullptr, "GetRuntimeFloatCurveValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_URecoilFunctionLibrary_GetRuntimeFloatCurveValue_Statics::RecoilFunctionLibrary_eventGetRuntimeFloatCurveValue_Parms), Z_Construct_UFunction_URecoilFunctionLibrary_GetRuntimeFloatCurveValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URecoilFunctionLibrary_GetRuntimeFloatCurveValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URecoilFunctionLibrary_GetRuntimeFloatCurveValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URecoilFunctionLibrary_GetRuntimeFloatCurveValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URecoilFunctionLibrary_GetRuntimeFloatCurveValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URecoilFunctionLibrary_GetRuntimeFloatCurveValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URecoilFunctionLibrary);
	UClass* Z_Construct_UClass_URecoilFunctionLibrary_NoRegister()
	{
		return URecoilFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_URecoilFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URecoilFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Organic_Dungeon_V2_C,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URecoilFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URecoilFunctionLibrary_GetRuntimeFloatCurveValue, "GetRuntimeFloatCurveValue" }, // 2587006840
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URecoilFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "RecoilFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/RecoilFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URecoilFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URecoilFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URecoilFunctionLibrary_Statics::ClassParams = {
		&URecoilFunctionLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URecoilFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URecoilFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URecoilFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_URecoilFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URecoilFunctionLibrary.OuterSingleton, Z_Construct_UClass_URecoilFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URecoilFunctionLibrary.OuterSingleton;
	}
	template<> ORGANIC_DUNGEON_V2_C_API UClass* StaticClass<URecoilFunctionLibrary>()
	{
		return URecoilFunctionLibrary::StaticClass();
	}
	URecoilFunctionLibrary::URecoilFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URecoilFunctionLibrary);
	URecoilFunctionLibrary::~URecoilFunctionLibrary() {}
	struct Z_CompiledInDeferFile_FID_Users_harry_Documents_Uni_Side_Projects_Organic_Dungeon_V2_Organic_Dungeon_V2_C_Source_Organic_Dungeon_V2_C_Public_RecoilFunctionLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_harry_Documents_Uni_Side_Projects_Organic_Dungeon_V2_Organic_Dungeon_V2_C_Source_Organic_Dungeon_V2_C_Public_RecoilFunctionLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URecoilFunctionLibrary, URecoilFunctionLibrary::StaticClass, TEXT("URecoilFunctionLibrary"), &Z_Registration_Info_UClass_URecoilFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URecoilFunctionLibrary), 623236652U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_harry_Documents_Uni_Side_Projects_Organic_Dungeon_V2_Organic_Dungeon_V2_C_Source_Organic_Dungeon_V2_C_Public_RecoilFunctionLibrary_h_1792060301(TEXT("/Script/Organic_Dungeon_V2_C"),
		Z_CompiledInDeferFile_FID_Users_harry_Documents_Uni_Side_Projects_Organic_Dungeon_V2_Organic_Dungeon_V2_C_Source_Organic_Dungeon_V2_C_Public_RecoilFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_harry_Documents_Uni_Side_Projects_Organic_Dungeon_V2_Organic_Dungeon_V2_C_Source_Organic_Dungeon_V2_C_Public_RecoilFunctionLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
