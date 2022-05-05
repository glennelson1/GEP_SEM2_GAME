// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GEP_GAME/Public/GameRuleManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameRuleManager() {}
// Cross Module References
	GEP_GAME_API UFunction* Z_Construct_UDelegateFunction_GEP_GAME_GameRuleSuccessSignature__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_GEP_GAME();
	GEP_GAME_API UClass* Z_Construct_UClass_AGameRuleManager_NoRegister();
	GEP_GAME_API UClass* Z_Construct_UClass_AGameRuleManager();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_GEP_GAME_GameRuleSuccessSignature__DelegateSignature_Statics
	{
		struct _Script_GEP_GAME_eventGameRuleSuccessSignature_Parms
		{
			AGameRuleManager* delegateInstigator;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_delegateInstigator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_GEP_GAME_GameRuleSuccessSignature__DelegateSignature_Statics::NewProp_delegateInstigator = { "delegateInstigator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_GEP_GAME_eventGameRuleSuccessSignature_Parms, delegateInstigator), Z_Construct_UClass_AGameRuleManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GEP_GAME_GameRuleSuccessSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GEP_GAME_GameRuleSuccessSignature__DelegateSignature_Statics::NewProp_delegateInstigator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GEP_GAME_GameRuleSuccessSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameRuleManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GEP_GAME_GameRuleSuccessSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GEP_GAME, nullptr, "GameRuleSuccessSignature__DelegateSignature", nullptr, nullptr, sizeof(_Script_GEP_GAME_eventGameRuleSuccessSignature_Parms), Z_Construct_UDelegateFunction_GEP_GAME_GameRuleSuccessSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GEP_GAME_GameRuleSuccessSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_GEP_GAME_GameRuleSuccessSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GEP_GAME_GameRuleSuccessSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_GEP_GAME_GameRuleSuccessSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_GEP_GAME_GameRuleSuccessSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void AGameRuleManager::StaticRegisterNativesAGameRuleManager()
	{
	}
	UClass* Z_Construct_UClass_AGameRuleManager_NoRegister()
	{
		return AGameRuleManager::StaticClass();
	}
	struct Z_Construct_UClass_AGameRuleManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnGameRuleSuccess_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGameRuleSuccess;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsMatchEndingRules_MetaData[];
#endif
		static void NewProp_IsMatchEndingRules_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsMatchEndingRules;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGameRuleManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GEP_GAME,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameRuleManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GameRuleManager.h" },
		{ "ModuleRelativePath", "Public/GameRuleManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameRuleManager_Statics::NewProp_OnGameRuleSuccess_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameRuleManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AGameRuleManager_Statics::NewProp_OnGameRuleSuccess = { "OnGameRuleSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameRuleManager, OnGameRuleSuccess), Z_Construct_UDelegateFunction_GEP_GAME_GameRuleSuccessSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AGameRuleManager_Statics::NewProp_OnGameRuleSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameRuleManager_Statics::NewProp_OnGameRuleSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameRuleManager_Statics::NewProp_IsMatchEndingRules_MetaData[] = {
		{ "Category", "GameRuleManager" },
		{ "ModuleRelativePath", "Public/GameRuleManager.h" },
	};
#endif
	void Z_Construct_UClass_AGameRuleManager_Statics::NewProp_IsMatchEndingRules_SetBit(void* Obj)
	{
		((AGameRuleManager*)Obj)->IsMatchEndingRules = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGameRuleManager_Statics::NewProp_IsMatchEndingRules = { "IsMatchEndingRules", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AGameRuleManager), &Z_Construct_UClass_AGameRuleManager_Statics::NewProp_IsMatchEndingRules_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGameRuleManager_Statics::NewProp_IsMatchEndingRules_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameRuleManager_Statics::NewProp_IsMatchEndingRules_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGameRuleManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameRuleManager_Statics::NewProp_OnGameRuleSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameRuleManager_Statics::NewProp_IsMatchEndingRules,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGameRuleManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGameRuleManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGameRuleManager_Statics::ClassParams = {
		&AGameRuleManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AGameRuleManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AGameRuleManager_Statics::PropPointers),
		0,
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_AGameRuleManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGameRuleManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGameRuleManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGameRuleManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGameRuleManager, 3729818477);
	template<> GEP_GAME_API UClass* StaticClass<AGameRuleManager>()
	{
		return AGameRuleManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGameRuleManager(Z_Construct_UClass_AGameRuleManager, &AGameRuleManager::StaticClass, TEXT("/Script/GEP_GAME"), TEXT("AGameRuleManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGameRuleManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
