// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Organic_Dungeon_V2_C/Organic_Dungeon_V2_CCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOrganic_Dungeon_V2_CCharacter() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	ORGANIC_DUNGEON_V2_C_API UClass* Z_Construct_UClass_AOrganic_Dungeon_V2_CCharacter();
	ORGANIC_DUNGEON_V2_C_API UClass* Z_Construct_UClass_AOrganic_Dungeon_V2_CCharacter_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Organic_Dungeon_V2_C();
// End Cross Module References
	void AOrganic_Dungeon_V2_CCharacter::StaticRegisterNativesAOrganic_Dungeon_V2_CCharacter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AOrganic_Dungeon_V2_CCharacter);
	UClass* Z_Construct_UClass_AOrganic_Dungeon_V2_CCharacter_NoRegister()
	{
		return AOrganic_Dungeon_V2_CCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AOrganic_Dungeon_V2_CCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JumpAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AOrganic_Dungeon_V2_CCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Organic_Dungeon_V2_C,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOrganic_Dungeon_V2_CCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Organic_Dungeon_V2_CCharacter.h" },
		{ "ModuleRelativePath", "Organic_Dungeon_V2_CCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOrganic_Dungeon_V2_CCharacter_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Camera boom positioning the camera behind the character */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Organic_Dungeon_V2_CCharacter.h" },
		{ "ToolTip", "Camera boom positioning the camera behind the character" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOrganic_Dungeon_V2_CCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AOrganic_Dungeon_V2_CCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOrganic_Dungeon_V2_CCharacter_Statics::NewProp_CameraBoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOrganic_Dungeon_V2_CCharacter_Statics::NewProp_CameraBoom_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOrganic_Dungeon_V2_CCharacter_Statics::NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Follow camera */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Organic_Dungeon_V2_CCharacter.h" },
		{ "ToolTip", "Follow camera" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOrganic_Dungeon_V2_CCharacter_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AOrganic_Dungeon_V2_CCharacter, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOrganic_Dungeon_V2_CCharacter_Statics::NewProp_FollowCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOrganic_Dungeon_V2_CCharacter_Statics::NewProp_FollowCamera_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOrganic_Dungeon_V2_CCharacter_Statics::NewProp_DefaultMappingContext_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "Comment", "/** MappingContext */" },
		{ "ModuleRelativePath", "Organic_Dungeon_V2_CCharacter.h" },
		{ "ToolTip", "MappingContext" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOrganic_Dungeon_V2_CCharacter_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AOrganic_Dungeon_V2_CCharacter, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOrganic_Dungeon_V2_CCharacter_Statics::NewProp_DefaultMappingContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOrganic_Dungeon_V2_CCharacter_Statics::NewProp_DefaultMappingContext_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOrganic_Dungeon_V2_CCharacter_Statics::NewProp_JumpAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "Comment", "/** Jump Input Action */" },
		{ "ModuleRelativePath", "Organic_Dungeon_V2_CCharacter.h" },
		{ "ToolTip", "Jump Input Action" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOrganic_Dungeon_V2_CCharacter_Statics::NewProp_JumpAction = { "JumpAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AOrganic_Dungeon_V2_CCharacter, JumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOrganic_Dungeon_V2_CCharacter_Statics::NewProp_JumpAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOrganic_Dungeon_V2_CCharacter_Statics::NewProp_JumpAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOrganic_Dungeon_V2_CCharacter_Statics::NewProp_MoveAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "Comment", "/** Move Input Action */" },
		{ "ModuleRelativePath", "Organic_Dungeon_V2_CCharacter.h" },
		{ "ToolTip", "Move Input Action" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOrganic_Dungeon_V2_CCharacter_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AOrganic_Dungeon_V2_CCharacter, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOrganic_Dungeon_V2_CCharacter_Statics::NewProp_MoveAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOrganic_Dungeon_V2_CCharacter_Statics::NewProp_MoveAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOrganic_Dungeon_V2_CCharacter_Statics::NewProp_LookAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "Comment", "/** Look Input Action */" },
		{ "ModuleRelativePath", "Organic_Dungeon_V2_CCharacter.h" },
		{ "ToolTip", "Look Input Action" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOrganic_Dungeon_V2_CCharacter_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AOrganic_Dungeon_V2_CCharacter, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOrganic_Dungeon_V2_CCharacter_Statics::NewProp_LookAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOrganic_Dungeon_V2_CCharacter_Statics::NewProp_LookAction_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AOrganic_Dungeon_V2_CCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOrganic_Dungeon_V2_CCharacter_Statics::NewProp_CameraBoom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOrganic_Dungeon_V2_CCharacter_Statics::NewProp_FollowCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOrganic_Dungeon_V2_CCharacter_Statics::NewProp_DefaultMappingContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOrganic_Dungeon_V2_CCharacter_Statics::NewProp_JumpAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOrganic_Dungeon_V2_CCharacter_Statics::NewProp_MoveAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOrganic_Dungeon_V2_CCharacter_Statics::NewProp_LookAction,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AOrganic_Dungeon_V2_CCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOrganic_Dungeon_V2_CCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AOrganic_Dungeon_V2_CCharacter_Statics::ClassParams = {
		&AOrganic_Dungeon_V2_CCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AOrganic_Dungeon_V2_CCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AOrganic_Dungeon_V2_CCharacter_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AOrganic_Dungeon_V2_CCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AOrganic_Dungeon_V2_CCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AOrganic_Dungeon_V2_CCharacter()
	{
		if (!Z_Registration_Info_UClass_AOrganic_Dungeon_V2_CCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AOrganic_Dungeon_V2_CCharacter.OuterSingleton, Z_Construct_UClass_AOrganic_Dungeon_V2_CCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AOrganic_Dungeon_V2_CCharacter.OuterSingleton;
	}
	template<> ORGANIC_DUNGEON_V2_C_API UClass* StaticClass<AOrganic_Dungeon_V2_CCharacter>()
	{
		return AOrganic_Dungeon_V2_CCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AOrganic_Dungeon_V2_CCharacter);
	AOrganic_Dungeon_V2_CCharacter::~AOrganic_Dungeon_V2_CCharacter() {}
	struct Z_CompiledInDeferFile_FID_Users_harry_Documents_Uni_Side_Projects_Organic_Dungeon_V2_Organic_Dungeon_V2_C_Source_Organic_Dungeon_V2_C_Organic_Dungeon_V2_CCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_harry_Documents_Uni_Side_Projects_Organic_Dungeon_V2_Organic_Dungeon_V2_C_Source_Organic_Dungeon_V2_C_Organic_Dungeon_V2_CCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AOrganic_Dungeon_V2_CCharacter, AOrganic_Dungeon_V2_CCharacter::StaticClass, TEXT("AOrganic_Dungeon_V2_CCharacter"), &Z_Registration_Info_UClass_AOrganic_Dungeon_V2_CCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AOrganic_Dungeon_V2_CCharacter), 758579185U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_harry_Documents_Uni_Side_Projects_Organic_Dungeon_V2_Organic_Dungeon_V2_C_Source_Organic_Dungeon_V2_C_Organic_Dungeon_V2_CCharacter_h_4005436509(TEXT("/Script/Organic_Dungeon_V2_C"),
		Z_CompiledInDeferFile_FID_Users_harry_Documents_Uni_Side_Projects_Organic_Dungeon_V2_Organic_Dungeon_V2_C_Source_Organic_Dungeon_V2_C_Organic_Dungeon_V2_CCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_harry_Documents_Uni_Side_Projects_Organic_Dungeon_V2_Organic_Dungeon_V2_C_Source_Organic_Dungeon_V2_C_Organic_Dungeon_V2_CCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
