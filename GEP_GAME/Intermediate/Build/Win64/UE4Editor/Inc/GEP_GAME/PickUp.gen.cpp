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
	GEP_GAME_API UClass* Z_Construct_UClass_APickUp_NoRegister();
	GEP_GAME_API UClass* Z_Construct_UClass_APickUp();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GEP_GAME();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(APickUp::execPickup)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Pickup();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APickUp::execRotateActor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RotateActor();
		P_NATIVE_END;
	}
	void APickUp::StaticRegisterNativesAPickUp()
	{
		UClass* Class = APickUp::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Pickup", &APickUp::execPickup },
			{ "RotateActor", &APickUp::execRotateActor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APickUp_Pickup_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APickUp_Pickup_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PickUp.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APickUp_Pickup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APickUp, nullptr, "Pickup", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APickUp_Pickup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APickUp_Pickup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APickUp_Pickup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APickUp_Pickup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APickUp_RotateActor_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APickUp_RotateActor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PickUp.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APickUp_RotateActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APickUp, nullptr, "RotateActor", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APickUp_RotateActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APickUp_RotateActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APickUp_RotateActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APickUp_RotateActor_Statics::FuncParams);
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MyMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MyMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HoldingComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HoldingComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APickUp_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GEP_GAME,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APickUp_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APickUp_Pickup, "Pickup" }, // 177518415
		{ &Z_Construct_UFunction_APickUp_RotateActor, "RotateActor" }, // 666455400
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickUp_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PickUp.h" },
		{ "ModuleRelativePath", "Public/PickUp.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickUp_Statics::NewProp_MyMesh_MetaData[] = {
		{ "Category", "PickUp" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PickUp.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APickUp_Statics::NewProp_MyMesh = { "MyMesh", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APickUp, MyMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APickUp_Statics::NewProp_MyMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APickUp_Statics::NewProp_MyMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickUp_Statics::NewProp_HoldingComp_MetaData[] = {
		{ "Category", "PickUp" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PickUp.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APickUp_Statics::NewProp_HoldingComp = { "HoldingComp", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APickUp, HoldingComp), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APickUp_Statics::NewProp_HoldingComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APickUp_Statics::NewProp_HoldingComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APickUp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickUp_Statics::NewProp_MyMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickUp_Statics::NewProp_HoldingComp,
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
		0x009000A4u,
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
	IMPLEMENT_CLASS(APickUp, 3460786467);
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
