// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GEP_GAME/Public/PickUpAction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePickUpAction() {}
// Cross Module References
	GEP_GAME_API UClass* Z_Construct_UClass_APickUpAction_NoRegister();
	GEP_GAME_API UClass* Z_Construct_UClass_APickUpAction();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GEP_GAME();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(APickUpAction::execPickUp)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PickUp();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APickUpAction::execRotateActor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RotateActor();
		P_NATIVE_END;
	}
	void APickUpAction::StaticRegisterNativesAPickUpAction()
	{
		UClass* Class = APickUpAction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "PickUp", &APickUpAction::execPickUp },
			{ "RotateActor", &APickUpAction::execRotateActor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APickUpAction_PickUp_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APickUpAction_PickUp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PickUpAction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APickUpAction_PickUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APickUpAction, nullptr, "PickUp", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APickUpAction_PickUp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APickUpAction_PickUp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APickUpAction_PickUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APickUpAction_PickUp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APickUpAction_RotateActor_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APickUpAction_RotateActor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PickUpAction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APickUpAction_RotateActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APickUpAction, nullptr, "RotateActor", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APickUpAction_RotateActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APickUpAction_RotateActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APickUpAction_RotateActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APickUpAction_RotateActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APickUpAction_NoRegister()
	{
		return APickUpAction::StaticClass();
	}
	struct Z_Construct_UClass_APickUpAction_Statics
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
	UObject* (*const Z_Construct_UClass_APickUpAction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GEP_GAME,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APickUpAction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APickUpAction_PickUp, "PickUp" }, // 877898376
		{ &Z_Construct_UFunction_APickUpAction_RotateActor, "RotateActor" }, // 1445809704
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickUpAction_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PickUpAction.h" },
		{ "ModuleRelativePath", "Public/PickUpAction.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickUpAction_Statics::NewProp_MyMesh_MetaData[] = {
		{ "Category", "PickUpAction" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PickUpAction.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APickUpAction_Statics::NewProp_MyMesh = { "MyMesh", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APickUpAction, MyMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APickUpAction_Statics::NewProp_MyMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APickUpAction_Statics::NewProp_MyMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickUpAction_Statics::NewProp_HoldingComp_MetaData[] = {
		{ "Category", "PickUpAction" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PickUpAction.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APickUpAction_Statics::NewProp_HoldingComp = { "HoldingComp", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APickUpAction, HoldingComp), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APickUpAction_Statics::NewProp_HoldingComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APickUpAction_Statics::NewProp_HoldingComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APickUpAction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickUpAction_Statics::NewProp_MyMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickUpAction_Statics::NewProp_HoldingComp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APickUpAction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APickUpAction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APickUpAction_Statics::ClassParams = {
		&APickUpAction::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APickUpAction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APickUpAction_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APickUpAction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APickUpAction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APickUpAction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APickUpAction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APickUpAction, 3400533685);
	template<> GEP_GAME_API UClass* StaticClass<APickUpAction>()
	{
		return APickUpAction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APickUpAction(Z_Construct_UClass_APickUpAction, &APickUpAction::StaticClass, TEXT("/Script/GEP_GAME"), TEXT("APickUpAction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APickUpAction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
