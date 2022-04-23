// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GEP_GAME/Public/Puzzle_Component.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePuzzle_Component() {}
// Cross Module References
	GEP_GAME_API UClass* Z_Construct_UClass_APuzzle_Component_NoRegister();
	GEP_GAME_API UClass* Z_Construct_UClass_APuzzle_Component();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GEP_GAME();
// End Cross Module References
	void APuzzle_Component::StaticRegisterNativesAPuzzle_Component()
	{
	}
	UClass* Z_Construct_UClass_APuzzle_Component_NoRegister()
	{
		return APuzzle_Component::StaticClass();
	}
	struct Z_Construct_UClass_APuzzle_Component_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APuzzle_Component_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GEP_GAME,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APuzzle_Component_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Puzzle_Component.h" },
		{ "ModuleRelativePath", "Public/Puzzle_Component.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APuzzle_Component_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APuzzle_Component>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APuzzle_Component_Statics::ClassParams = {
		&APuzzle_Component::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_APuzzle_Component_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APuzzle_Component_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APuzzle_Component()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APuzzle_Component_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APuzzle_Component, 2082788216);
	template<> GEP_GAME_API UClass* StaticClass<APuzzle_Component>()
	{
		return APuzzle_Component::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APuzzle_Component(Z_Construct_UClass_APuzzle_Component, &APuzzle_Component::StaticClass, TEXT("/Script/GEP_GAME"), TEXT("APuzzle_Component"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APuzzle_Component);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
