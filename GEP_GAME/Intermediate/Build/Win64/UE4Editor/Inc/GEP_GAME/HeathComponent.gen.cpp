// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GEP_GAME/Public/HeathComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHeathComponent() {}
// Cross Module References
	GEP_GAME_API UClass* Z_Construct_UClass_UHeathComponent_NoRegister();
	GEP_GAME_API UClass* Z_Construct_UClass_UHeathComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_GEP_GAME();
// End Cross Module References
	void UHeathComponent::StaticRegisterNativesUHeathComponent()
	{
	}
	UClass* Z_Construct_UClass_UHeathComponent_NoRegister()
	{
		return UHeathComponent::StaticClass();
	}
	struct Z_Construct_UClass_UHeathComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHeathComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_GEP_GAME,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeathComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "HeathComponent.h" },
		{ "ModuleRelativePath", "Public/HeathComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHeathComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHeathComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHeathComponent_Statics::ClassParams = {
		&UHeathComponent::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UHeathComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHeathComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHeathComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHeathComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHeathComponent, 3144461720);
	template<> GEP_GAME_API UClass* StaticClass<UHeathComponent>()
	{
		return UHeathComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHeathComponent(Z_Construct_UClass_UHeathComponent, &UHeathComponent::StaticClass, TEXT("/Script/GEP_GAME"), TEXT("UHeathComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHeathComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
