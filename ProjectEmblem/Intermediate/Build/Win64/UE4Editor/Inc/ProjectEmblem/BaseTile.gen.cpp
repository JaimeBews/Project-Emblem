// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectEmblem/BaseTile.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseTile() {}
// Cross Module References
	PROJECTEMBLEM_API UClass* Z_Construct_UClass_ABaseTile_NoRegister();
	PROJECTEMBLEM_API UClass* Z_Construct_UClass_ABaseTile();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ProjectEmblem();
// End Cross Module References
	void ABaseTile::StaticRegisterNativesABaseTile()
	{
	}
	UClass* Z_Construct_UClass_ABaseTile_NoRegister()
	{
		return ABaseTile::StaticClass();
	}
	struct Z_Construct_UClass_ABaseTile_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABaseTile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectEmblem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseTile_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BaseTile.h" },
		{ "ModuleRelativePath", "BaseTile.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABaseTile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseTile>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABaseTile_Statics::ClassParams = {
		&ABaseTile::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ABaseTile_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ABaseTile_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABaseTile()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABaseTile_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABaseTile, 422563348);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABaseTile(Z_Construct_UClass_ABaseTile, &ABaseTile::StaticClass, TEXT("/Script/ProjectEmblem"), TEXT("ABaseTile"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseTile);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
