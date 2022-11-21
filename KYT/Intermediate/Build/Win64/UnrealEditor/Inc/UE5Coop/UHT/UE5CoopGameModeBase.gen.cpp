// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE5Coop/UE5CoopGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUE5CoopGameModeBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UE5COOP_API UClass* Z_Construct_UClass_AUE5CoopGameModeBase();
	UE5COOP_API UClass* Z_Construct_UClass_AUE5CoopGameModeBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UE5Coop();
// End Cross Module References
	void AUE5CoopGameModeBase::StaticRegisterNativesAUE5CoopGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AUE5CoopGameModeBase);
	UClass* Z_Construct_UClass_AUE5CoopGameModeBase_NoRegister()
	{
		return AUE5CoopGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AUE5CoopGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUE5CoopGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_UE5Coop,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUE5CoopGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "UE5CoopGameModeBase.h" },
		{ "ModuleRelativePath", "UE5CoopGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUE5CoopGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUE5CoopGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AUE5CoopGameModeBase_Statics::ClassParams = {
		&AUE5CoopGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AUE5CoopGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUE5CoopGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUE5CoopGameModeBase()
	{
		if (!Z_Registration_Info_UClass_AUE5CoopGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AUE5CoopGameModeBase.OuterSingleton, Z_Construct_UClass_AUE5CoopGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AUE5CoopGameModeBase.OuterSingleton;
	}
	template<> UE5COOP_API UClass* StaticClass<AUE5CoopGameModeBase>()
	{
		return AUE5CoopGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUE5CoopGameModeBase);
	AUE5CoopGameModeBase::~AUE5CoopGameModeBase() {}
	struct Z_CompiledInDeferFile_FID_UE_Study_KYT_Source_UE5Coop_UE5CoopGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Study_KYT_Source_UE5Coop_UE5CoopGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AUE5CoopGameModeBase, AUE5CoopGameModeBase::StaticClass, TEXT("AUE5CoopGameModeBase"), &Z_Registration_Info_UClass_AUE5CoopGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AUE5CoopGameModeBase), 2963993021U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Study_KYT_Source_UE5Coop_UE5CoopGameModeBase_h_146998770(TEXT("/Script/UE5Coop"),
		Z_CompiledInDeferFile_FID_UE_Study_KYT_Source_UE5Coop_UE5CoopGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Study_KYT_Source_UE5Coop_UE5CoopGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
