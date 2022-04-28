// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GEP_GAME/Public/userUI.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeuserUI() {}
// Cross Module References
	GEP_GAME_API UClass* Z_Construct_UClass_UuserUI_NoRegister();
	GEP_GAME_API UClass* Z_Construct_UClass_UuserUI();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_GEP_GAME();
// End Cross Module References
	void UuserUI::StaticRegisterNativesUuserUI()
	{
	}
	UClass* Z_Construct_UClass_UuserUI_NoRegister()
	{
		return UuserUI::StaticClass();
	}
	struct Z_Construct_UClass_UuserUI_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UuserUI_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_GEP_GAME,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UuserUI_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "userUI.h" },
		{ "ModuleRelativePath", "Public/userUI.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UuserUI_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UuserUI>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UuserUI_Statics::ClassParams = {
		&UuserUI::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UuserUI_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UuserUI_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UuserUI()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UuserUI_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UuserUI, 2914116246);
	template<> GEP_GAME_API UClass* StaticClass<UuserUI>()
	{
		return UuserUI::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UuserUI(Z_Construct_UClass_UuserUI, &UuserUI::StaticClass, TEXT("/Script/GEP_GAME"), TEXT("UuserUI"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UuserUI);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
