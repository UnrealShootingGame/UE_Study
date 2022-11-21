// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE5Coop/ShooterCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShooterCharacter() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UE5COOP_API UClass* Z_Construct_UClass_AShooterCharacter();
	UE5COOP_API UClass* Z_Construct_UClass_AShooterCharacter_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UE5Coop();
// End Cross Module References
	void AShooterCharacter::StaticRegisterNativesAShooterCharacter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AShooterCharacter);
	UClass* Z_Construct_UClass_AShooterCharacter_NoRegister()
	{
		return AShooterCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AShooterCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxDashCount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxDashCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DashCount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DashCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DashDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DashDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DashCoolTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DashCoolTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AShooterCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_UE5Coop,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "ShooterCharacter.h" },
		{ "ModuleRelativePath", "ShooterCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_MaxDashCount_MetaData[] = {
		{ "Category", "Dash" },
		{ "ModuleRelativePath", "ShooterCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_MaxDashCount = { "MaxDashCount", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AShooterCharacter, MaxDashCount), METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_MaxDashCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_MaxDashCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_DashCount_MetaData[] = {
		{ "Category", "Dash" },
		{ "ModuleRelativePath", "ShooterCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_DashCount = { "DashCount", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AShooterCharacter, DashCount), METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_DashCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_DashCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_DashDistance_MetaData[] = {
		{ "Category", "Dash" },
		{ "ModuleRelativePath", "ShooterCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_DashDistance = { "DashDistance", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AShooterCharacter, DashDistance), METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_DashDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_DashDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_DashCoolTime_MetaData[] = {
		{ "Category", "Dash" },
		{ "ModuleRelativePath", "ShooterCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_DashCoolTime = { "DashCoolTime", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AShooterCharacter, DashCoolTime), METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_DashCoolTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_DashCoolTime_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AShooterCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_MaxDashCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_DashCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_DashDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_DashCoolTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AShooterCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShooterCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AShooterCharacter_Statics::ClassParams = {
		&AShooterCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AShooterCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AShooterCharacter()
	{
		if (!Z_Registration_Info_UClass_AShooterCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AShooterCharacter.OuterSingleton, Z_Construct_UClass_AShooterCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AShooterCharacter.OuterSingleton;
	}
	template<> UE5COOP_API UClass* StaticClass<AShooterCharacter>()
	{
		return AShooterCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShooterCharacter);
	AShooterCharacter::~AShooterCharacter() {}
	struct Z_CompiledInDeferFile_FID_UE_Study_KYT_Source_UE5Coop_ShooterCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Study_KYT_Source_UE5Coop_ShooterCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AShooterCharacter, AShooterCharacter::StaticClass, TEXT("AShooterCharacter"), &Z_Registration_Info_UClass_AShooterCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AShooterCharacter), 2286459655U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Study_KYT_Source_UE5Coop_ShooterCharacter_h_2209765093(TEXT("/Script/UE5Coop"),
		Z_CompiledInDeferFile_FID_UE_Study_KYT_Source_UE5Coop_ShooterCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Study_KYT_Source_UE5Coop_ShooterCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
