// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE5Coop/GhostTail.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGhostTail() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UE5COOP_API UClass* Z_Construct_UClass_AGhostTail();
	UE5COOP_API UClass* Z_Construct_UClass_AGhostTail_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UE5Coop();
// End Cross Module References
	void AGhostTail::StaticRegisterNativesAGhostTail()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGhostTail);
	UClass* Z_Construct_UClass_AGhostTail_NoRegister()
	{
		return AGhostTail::StaticClass();
	}
	struct Z_Construct_UClass_AGhostTail_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGhostTail_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UE5Coop,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGhostTail_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GhostTail.h" },
		{ "ModuleRelativePath", "GhostTail.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGhostTail_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGhostTail>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGhostTail_Statics::ClassParams = {
		&AGhostTail::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGhostTail_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGhostTail_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGhostTail()
	{
		if (!Z_Registration_Info_UClass_AGhostTail.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGhostTail.OuterSingleton, Z_Construct_UClass_AGhostTail_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGhostTail.OuterSingleton;
	}
	template<> UE5COOP_API UClass* StaticClass<AGhostTail>()
	{
		return AGhostTail::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGhostTail);
	AGhostTail::~AGhostTail() {}
	struct Z_CompiledInDeferFile_FID_UE_Study_KYT_Source_UE5Coop_GhostTail_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Study_KYT_Source_UE5Coop_GhostTail_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGhostTail, AGhostTail::StaticClass, TEXT("AGhostTail"), &Z_Registration_Info_UClass_AGhostTail, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGhostTail), 1154304683U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Study_KYT_Source_UE5Coop_GhostTail_h_192913037(TEXT("/Script/UE5Coop"),
		Z_CompiledInDeferFile_FID_UE_Study_KYT_Source_UE5Coop_GhostTail_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Study_KYT_Source_UE5Coop_GhostTail_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
