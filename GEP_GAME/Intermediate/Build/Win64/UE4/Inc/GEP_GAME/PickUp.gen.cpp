// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GEP_GAME/Public/PickUp.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePickUp() {}
// Cross Module References
	GEP_GAME_API UFunction* Z_Construct_UDelegateFunction_GEP_GAME_ColloectedSignature__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_GEP_GAME();
	GEP_GAME_API UClass* Z_Construct_UClass_APickUp_NoRegister();
	GEP_GAME_API UClass* Z_Construct_UClass_APickUp();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_GEP_GAME_ColloectedSignature__DelegateSignature_Statics
	{
		struct _Script_GEP_GAME_eventColloectedSignature_Parms
		{
			APickUp* delegateInstigator;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_delegateInstigator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_GEP_GAME_ColloectedSignature__DelegateSignature_Statics::NewProp_delegateInstigator = { "delegateInstigator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_GEP_GAME_eventColloectedSignature_Parms, delegateInstigator), Z_Construct_UClass_APickUp_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GEP_GAME_ColloectedSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GEP_GAME_ColloectedSignature__DelegateSignature_Statics::NewProp_delegateInstigator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GEP_GAME_ColloectedSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PickUp.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GEP_GAME_ColloectedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GEP_GAME, nullptr, "ColloectedSignature__DelegateSignature", nullptr, nullptr, sizeof(_Script_GEP_GAME_eventColloectedSignature_Parms), Z_Construct_UDelegateFunction_GEP_GAME_ColloectedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GEP_GAME_ColloectedSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_GEP_GAME_ColloectedSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GEP_GAME_ColloectedSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_GEP_GAME_ColloectedSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_GEP_GAME_ColloectedSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(APickUp::execBroadCastOnCollected)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BroadCastOnCollected();
		P_NATIVE_END;
	}
	void APickUp::StaticRegisterNativesAPickUp()
	{
		UClass* Class = APickUp::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BroadCastOnCollected", &APickUp::execBroadCastOnCollected },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APickUp_BroadCastOnCollected_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APickUp_BroadCastOnCollected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PickUp.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APickUp_BroadCastOnCollected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APickUp, nullptr, "BroadCastOnCollected", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APickUp_BroadCastOnCollected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APickUp_BroadCastOnCollected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APickUp_BroadCastOnCollected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APickUp_BroadCastOnCollected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APickUp_NoRegister()
	{
		return APickUp::StaticClass();
	}
	struct Z_Construct_UClass_APickUp_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_Collider_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_Collider;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnCollected_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCollected;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APickUp_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GEP_GAME,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APickUp_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APickUp_BroadCastOnCollected, "BroadCastOnCollected" }, // 911260551
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickUp_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PickUp.h" },
		{ "ModuleRelativePath", "Public/PickUp.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickUp_Statics::NewProp_m_Collider_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PickUp" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PickUp.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APickUp_Statics::NewProp_m_Collider = { "m_Collider", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APickUp, m_Collider), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APickUp_Statics::NewProp_m_Collider_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APickUp_Statics::NewProp_m_Collider_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickUp_Statics::NewProp_OnCollected_MetaData[] = {
		{ "ModuleRelativePath", "Public/PickUp.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_APickUp_Statics::NewProp_OnCollected = { "OnCollected", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APickUp, OnCollected), Z_Construct_UDelegateFunction_GEP_GAME_ColloectedSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_APickUp_Statics::NewProp_OnCollected_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APickUp_Statics::NewProp_OnCollected_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APickUp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickUp_Statics::NewProp_m_Collider,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickUp_Statics::NewProp_OnCollected,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APickUp_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APickUp>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APickUp_Statics::ClassParams = {
		&APickUp::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APickUp_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APickUp_Statics::PropPointers),
		0,
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_APickUp_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APickUp_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APickUp()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APickUp_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APickUp, 1424344461);
	template<> GEP_GAME_API UClass* StaticClass<APickUp>()
	{
		return APickUp::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APickUp(Z_Construct_UClass_APickUp, &APickUp::StaticClass, TEXT("/Script/GEP_GAME"), TEXT("APickUp"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APickUp);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
