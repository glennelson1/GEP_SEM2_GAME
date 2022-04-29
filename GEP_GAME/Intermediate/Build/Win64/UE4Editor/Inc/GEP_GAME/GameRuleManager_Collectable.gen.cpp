// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GEP_GAME/Public/GameRuleManager_Collectable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameRuleManager_Collectable() {}
// Cross Module References
	GEP_GAME_API UClass* Z_Construct_UClass_AGameRuleManager_Collectable_NoRegister();
	GEP_GAME_API UClass* Z_Construct_UClass_AGameRuleManager_Collectable();
	GEP_GAME_API UClass* Z_Construct_UClass_AGameRuleManager();
	UPackage* Z_Construct_UPackage__Script_GEP_GAME();
	GEP_GAME_API UClass* Z_Construct_UClass_ACollectablePickUp_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AGameRuleManager_Collectable::execCollected)
	{
		P_GET_OBJECT(ACollectablePickUp,Z_Param_delegateInstigator);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Collected_Implementation(Z_Param_delegateInstigator);
		P_NATIVE_END;
	}
	static FName NAME_AGameRuleManager_Collectable_Collected = FName(TEXT("Collected"));
	void AGameRuleManager_Collectable::Collected(ACollectablePickUp* delegateInstigator)
	{
		GameRuleManager_Collectable_eventCollected_Parms Parms;
		Parms.delegateInstigator=delegateInstigator;
		ProcessEvent(FindFunctionChecked(NAME_AGameRuleManager_Collectable_Collected),&Parms);
	}
	void AGameRuleManager_Collectable::StaticRegisterNativesAGameRuleManager_Collectable()
	{
		UClass* Class = AGameRuleManager_Collectable::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Collected", &AGameRuleManager_Collectable::execCollected },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGameRuleManager_Collectable_Collected_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_delegateInstigator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGameRuleManager_Collectable_Collected_Statics::NewProp_delegateInstigator = { "delegateInstigator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameRuleManager_Collectable_eventCollected_Parms, delegateInstigator), Z_Construct_UClass_ACollectablePickUp_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameRuleManager_Collectable_Collected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameRuleManager_Collectable_Collected_Statics::NewProp_delegateInstigator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameRuleManager_Collectable_Collected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameRuleManager_Collectable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameRuleManager_Collectable_Collected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameRuleManager_Collectable, nullptr, "Collected", nullptr, nullptr, sizeof(GameRuleManager_Collectable_eventCollected_Parms), Z_Construct_UFunction_AGameRuleManager_Collectable_Collected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameRuleManager_Collectable_Collected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameRuleManager_Collectable_Collected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameRuleManager_Collectable_Collected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameRuleManager_Collectable_Collected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGameRuleManager_Collectable_Collected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AGameRuleManager_Collectable_NoRegister()
	{
		return AGameRuleManager_Collectable::StaticClass();
	}
	struct Z_Construct_UClass_AGameRuleManager_Collectable_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_Collectables_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_Collectables_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_m_Collectables;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGameRuleManager_Collectable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameRuleManager,
		(UObject* (*)())Z_Construct_UPackage__Script_GEP_GAME,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AGameRuleManager_Collectable_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGameRuleManager_Collectable_Collected, "Collected" }, // 2153155606
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameRuleManager_Collectable_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "GameRuleManager_Collectable.h" },
		{ "ModuleRelativePath", "Public/GameRuleManager_Collectable.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGameRuleManager_Collectable_Statics::NewProp_m_Collectables_Inner = { "m_Collectables", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ACollectablePickUp_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameRuleManager_Collectable_Statics::NewProp_m_Collectables_MetaData[] = {
		{ "Category", "GameRuleManager_Collectable" },
		{ "ModuleRelativePath", "Public/GameRuleManager_Collectable.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AGameRuleManager_Collectable_Statics::NewProp_m_Collectables = { "m_Collectables", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameRuleManager_Collectable, m_Collectables), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AGameRuleManager_Collectable_Statics::NewProp_m_Collectables_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameRuleManager_Collectable_Statics::NewProp_m_Collectables_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGameRuleManager_Collectable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameRuleManager_Collectable_Statics::NewProp_m_Collectables_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameRuleManager_Collectable_Statics::NewProp_m_Collectables,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGameRuleManager_Collectable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGameRuleManager_Collectable>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGameRuleManager_Collectable_Statics::ClassParams = {
		&AGameRuleManager_Collectable::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AGameRuleManager_Collectable_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AGameRuleManager_Collectable_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGameRuleManager_Collectable_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGameRuleManager_Collectable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGameRuleManager_Collectable()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGameRuleManager_Collectable_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGameRuleManager_Collectable, 133812924);
	template<> GEP_GAME_API UClass* StaticClass<AGameRuleManager_Collectable>()
	{
		return AGameRuleManager_Collectable::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGameRuleManager_Collectable(Z_Construct_UClass_AGameRuleManager_Collectable, &AGameRuleManager_Collectable::StaticClass, TEXT("/Script/GEP_GAME"), TEXT("AGameRuleManager_Collectable"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGameRuleManager_Collectable);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
