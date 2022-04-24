// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GEP_GAME/Public/MyActorComponent_Health.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyActorComponent_Health() {}
// Cross Module References
	GEP_GAME_API UClass* Z_Construct_UClass_UMyActorComponent_Health_NoRegister();
	GEP_GAME_API UClass* Z_Construct_UClass_UMyActorComponent_Health();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_GEP_GAME();
// End Cross Module References
	void UMyActorComponent_Health::StaticRegisterNativesUMyActorComponent_Health()
	{
	}
	UClass* Z_Construct_UClass_UMyActorComponent_Health_NoRegister()
	{
		return UMyActorComponent_Health::StaticClass();
	}
	struct Z_Construct_UClass_UMyActorComponent_Health_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMyActorComponent_Health_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_GEP_GAME,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyActorComponent_Health_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "MyActorComponent_Health.h" },
		{ "ModuleRelativePath", "Public/MyActorComponent_Health.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMyActorComponent_Health_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyActorComponent_Health>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMyActorComponent_Health_Statics::ClassParams = {
		&UMyActorComponent_Health::StaticClass,
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
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMyActorComponent_Health_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMyActorComponent_Health_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMyActorComponent_Health()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMyActorComponent_Health_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMyActorComponent_Health, 622457528);
	template<> GEP_GAME_API UClass* StaticClass<UMyActorComponent_Health>()
	{
		return UMyActorComponent_Health::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMyActorComponent_Health(Z_Construct_UClass_UMyActorComponent_Health, &UMyActorComponent_Health::StaticClass, TEXT("/Script/GEP_GAME"), TEXT("UMyActorComponent_Health"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyActorComponent_Health);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
