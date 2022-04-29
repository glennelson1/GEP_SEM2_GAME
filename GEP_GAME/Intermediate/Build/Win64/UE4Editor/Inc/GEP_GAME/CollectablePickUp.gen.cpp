// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GEP_GAME/Public/CollectablePickUp.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCollectablePickUp() {}
// Cross Module References
	GEP_GAME_API UClass* Z_Construct_UClass_ACollectablePickUp_NoRegister();
	GEP_GAME_API UClass* Z_Construct_UClass_ACollectablePickUp();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GEP_GAME();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ACollectablePickUp::execBroadCastOnCollected)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BroadCastOnCollected();
		P_NATIVE_END;
	}
	void ACollectablePickUp::StaticRegisterNativesACollectablePickUp()
	{
		UClass* Class = ACollectablePickUp::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BroadCastOnCollected", &ACollectablePickUp::execBroadCastOnCollected },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACollectablePickUp_BroadCastOnCollected_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACollectablePickUp_BroadCastOnCollected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CollectablePickUp.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACollectablePickUp_BroadCastOnCollected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACollectablePickUp, nullptr, "BroadCastOnCollected", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACollectablePickUp_BroadCastOnCollected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACollectablePickUp_BroadCastOnCollected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACollectablePickUp_BroadCastOnCollected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACollectablePickUp_BroadCastOnCollected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ACollectablePickUp_NoRegister()
	{
		return ACollectablePickUp::StaticClass();
	}
	struct Z_Construct_UClass_ACollectablePickUp_Statics
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
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACollectablePickUp_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GEP_GAME,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACollectablePickUp_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACollectablePickUp_BroadCastOnCollected, "BroadCastOnCollected" }, // 3259434442
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACollectablePickUp_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CollectablePickUp.h" },
		{ "ModuleRelativePath", "Public/CollectablePickUp.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACollectablePickUp_Statics::NewProp_m_Collider_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "CollectablePickUp" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CollectablePickUp.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACollectablePickUp_Statics::NewProp_m_Collider = { "m_Collider", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACollectablePickUp, m_Collider), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACollectablePickUp_Statics::NewProp_m_Collider_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACollectablePickUp_Statics::NewProp_m_Collider_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACollectablePickUp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACollectablePickUp_Statics::NewProp_m_Collider,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACollectablePickUp_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACollectablePickUp>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACollectablePickUp_Statics::ClassParams = {
		&ACollectablePickUp::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACollectablePickUp_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACollectablePickUp_Statics::PropPointers),
		0,
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_ACollectablePickUp_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACollectablePickUp_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACollectablePickUp()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACollectablePickUp_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACollectablePickUp, 3283417363);
	template<> GEP_GAME_API UClass* StaticClass<ACollectablePickUp>()
	{
		return ACollectablePickUp::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACollectablePickUp(Z_Construct_UClass_ACollectablePickUp, &ACollectablePickUp::StaticClass, TEXT("/Script/GEP_GAME"), TEXT("ACollectablePickUp"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACollectablePickUp);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
