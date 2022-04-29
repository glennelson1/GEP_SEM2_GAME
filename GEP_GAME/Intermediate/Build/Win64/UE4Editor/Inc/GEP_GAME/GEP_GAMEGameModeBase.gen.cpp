// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GEP_GAME/GEP_GAMEGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGEP_GAMEGameModeBase() {}
// Cross Module References
	GEP_GAME_API UClass* Z_Construct_UClass_AGEP_GAMEGameModeBase_NoRegister();
	GEP_GAME_API UClass* Z_Construct_UClass_AGEP_GAMEGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameMode();
	UPackage* Z_Construct_UPackage__Script_GEP_GAME();
	GEP_GAME_API UClass* Z_Construct_UClass_AGameRuleManager_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AGEP_GAMEGameModeBase::execHandleGameRuleSuccess)
	{
		P_GET_OBJECT(AGameRuleManager,Z_Param_delegateInstigator);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleGameRuleSuccess(Z_Param_delegateInstigator);
		P_NATIVE_END;
	}
	void AGEP_GAMEGameModeBase::StaticRegisterNativesAGEP_GAMEGameModeBase()
	{
		UClass* Class = AGEP_GAMEGameModeBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleGameRuleSuccess", &AGEP_GAMEGameModeBase::execHandleGameRuleSuccess },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGEP_GAMEGameModeBase_HandleGameRuleSuccess_Statics
	{
		struct GEP_GAMEGameModeBase_eventHandleGameRuleSuccess_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGEP_GAMEGameModeBase_HandleGameRuleSuccess_Statics::NewProp_delegateInstigator = { "delegateInstigator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GEP_GAMEGameModeBase_eventHandleGameRuleSuccess_Parms, delegateInstigator), Z_Construct_UClass_AGameRuleManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGEP_GAMEGameModeBase_HandleGameRuleSuccess_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGEP_GAMEGameModeBase_HandleGameRuleSuccess_Statics::NewProp_delegateInstigator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGEP_GAMEGameModeBase_HandleGameRuleSuccess_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GEP_GAMEGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGEP_GAMEGameModeBase_HandleGameRuleSuccess_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGEP_GAMEGameModeBase, nullptr, "HandleGameRuleSuccess", nullptr, nullptr, sizeof(GEP_GAMEGameModeBase_eventHandleGameRuleSuccess_Parms), Z_Construct_UFunction_AGEP_GAMEGameModeBase_HandleGameRuleSuccess_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGEP_GAMEGameModeBase_HandleGameRuleSuccess_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGEP_GAMEGameModeBase_HandleGameRuleSuccess_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGEP_GAMEGameModeBase_HandleGameRuleSuccess_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGEP_GAMEGameModeBase_HandleGameRuleSuccess()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGEP_GAMEGameModeBase_HandleGameRuleSuccess_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AGEP_GAMEGameModeBase_NoRegister()
	{
		return AGEP_GAMEGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AGEP_GAMEGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_m_GameRuleManagers_ValueProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_GameRuleManagers_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_GameRuleManagers_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_m_GameRuleManagers;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGEP_GAMEGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameMode,
		(UObject* (*)())Z_Construct_UPackage__Script_GEP_GAME,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AGEP_GAMEGameModeBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGEP_GAMEGameModeBase_HandleGameRuleSuccess, "HandleGameRuleSuccess" }, // 1459514348
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGEP_GAMEGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "GEP_GAMEGameModeBase.h" },
		{ "ModuleRelativePath", "GEP_GAMEGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGEP_GAMEGameModeBase_Statics::NewProp_m_GameRuleManagers_ValueProp = { "m_GameRuleManagers", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGEP_GAMEGameModeBase_Statics::NewProp_m_GameRuleManagers_Key_KeyProp = { "m_GameRuleManagers_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AGameRuleManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGEP_GAMEGameModeBase_Statics::NewProp_m_GameRuleManagers_MetaData[] = {
		{ "Category", "MatchManagement" },
		{ "ModuleRelativePath", "GEP_GAMEGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_AGEP_GAMEGameModeBase_Statics::NewProp_m_GameRuleManagers = { "m_GameRuleManagers", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGEP_GAMEGameModeBase, m_GameRuleManagers), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AGEP_GAMEGameModeBase_Statics::NewProp_m_GameRuleManagers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGEP_GAMEGameModeBase_Statics::NewProp_m_GameRuleManagers_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGEP_GAMEGameModeBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGEP_GAMEGameModeBase_Statics::NewProp_m_GameRuleManagers_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGEP_GAMEGameModeBase_Statics::NewProp_m_GameRuleManagers_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGEP_GAMEGameModeBase_Statics::NewProp_m_GameRuleManagers,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGEP_GAMEGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGEP_GAMEGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGEP_GAMEGameModeBase_Statics::ClassParams = {
		&AGEP_GAMEGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AGEP_GAMEGameModeBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AGEP_GAMEGameModeBase_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AGEP_GAMEGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGEP_GAMEGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGEP_GAMEGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGEP_GAMEGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGEP_GAMEGameModeBase, 2098551732);
	template<> GEP_GAME_API UClass* StaticClass<AGEP_GAMEGameModeBase>()
	{
		return AGEP_GAMEGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGEP_GAMEGameModeBase(Z_Construct_UClass_AGEP_GAMEGameModeBase, &AGEP_GAMEGameModeBase::StaticClass, TEXT("/Script/GEP_GAME"), TEXT("AGEP_GAMEGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGEP_GAMEGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
