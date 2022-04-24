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
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UShapeComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(APickUp::execOnPlayerEnterPickUp)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_overlappedComp);
		P_GET_OBJECT(AActor,Z_Param_otherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_otherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_otherbodyIndex);
		P_GET_UBOOL(Z_Param_m_fromsweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_sweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPlayerEnterPickUp(Z_Param_overlappedComp,Z_Param_otherActor,Z_Param_otherComp,Z_Param_otherbodyIndex,Z_Param_m_fromsweep,Z_Param_Out_sweepResult);
		P_NATIVE_END;
	}
	void APickUp::StaticRegisterNativesAPickUp()
	{
		UClass* Class = APickUp::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnPlayerEnterPickUp", &APickUp::execOnPlayerEnterPickUp },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APickUp_OnPlayerEnterPickUp_Statics
	{
		struct PickUp_eventOnPlayerEnterPickUp_Parms
		{
			UPrimitiveComponent* overlappedComp;
			AActor* otherActor;
			UPrimitiveComponent* otherComp;
			int32 otherbodyIndex;
			bool m_fromsweep;
			FHitResult sweepResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_overlappedComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_overlappedComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_otherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_otherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_otherComp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_otherbodyIndex;
		static void NewProp_m_fromsweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_m_fromsweep;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_sweepResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_sweepResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APickUp_OnPlayerEnterPickUp_Statics::NewProp_overlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APickUp_OnPlayerEnterPickUp_Statics::NewProp_overlappedComp = { "overlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PickUp_eventOnPlayerEnterPickUp_Parms, overlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_APickUp_OnPlayerEnterPickUp_Statics::NewProp_overlappedComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APickUp_OnPlayerEnterPickUp_Statics::NewProp_overlappedComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APickUp_OnPlayerEnterPickUp_Statics::NewProp_otherActor = { "otherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PickUp_eventOnPlayerEnterPickUp_Parms, otherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APickUp_OnPlayerEnterPickUp_Statics::NewProp_otherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APickUp_OnPlayerEnterPickUp_Statics::NewProp_otherComp = { "otherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PickUp_eventOnPlayerEnterPickUp_Parms, otherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_APickUp_OnPlayerEnterPickUp_Statics::NewProp_otherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APickUp_OnPlayerEnterPickUp_Statics::NewProp_otherComp_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APickUp_OnPlayerEnterPickUp_Statics::NewProp_otherbodyIndex = { "otherbodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PickUp_eventOnPlayerEnterPickUp_Parms, otherbodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_APickUp_OnPlayerEnterPickUp_Statics::NewProp_m_fromsweep_SetBit(void* Obj)
	{
		((PickUp_eventOnPlayerEnterPickUp_Parms*)Obj)->m_fromsweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APickUp_OnPlayerEnterPickUp_Statics::NewProp_m_fromsweep = { "m_fromsweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PickUp_eventOnPlayerEnterPickUp_Parms), &Z_Construct_UFunction_APickUp_OnPlayerEnterPickUp_Statics::NewProp_m_fromsweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APickUp_OnPlayerEnterPickUp_Statics::NewProp_sweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APickUp_OnPlayerEnterPickUp_Statics::NewProp_sweepResult = { "sweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PickUp_eventOnPlayerEnterPickUp_Parms, sweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_APickUp_OnPlayerEnterPickUp_Statics::NewProp_sweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APickUp_OnPlayerEnterPickUp_Statics::NewProp_sweepResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APickUp_OnPlayerEnterPickUp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APickUp_OnPlayerEnterPickUp_Statics::NewProp_overlappedComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APickUp_OnPlayerEnterPickUp_Statics::NewProp_otherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APickUp_OnPlayerEnterPickUp_Statics::NewProp_otherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APickUp_OnPlayerEnterPickUp_Statics::NewProp_otherbodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APickUp_OnPlayerEnterPickUp_Statics::NewProp_m_fromsweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APickUp_OnPlayerEnterPickUp_Statics::NewProp_sweepResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APickUp_OnPlayerEnterPickUp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PickUp.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APickUp_OnPlayerEnterPickUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APickUp, nullptr, "OnPlayerEnterPickUp", nullptr, nullptr, sizeof(PickUp_eventOnPlayerEnterPickUp_Parms), Z_Construct_UFunction_APickUp_OnPlayerEnterPickUp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APickUp_OnPlayerEnterPickUp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APickUp_OnPlayerEnterPickUp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APickUp_OnPlayerEnterPickUp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APickUp_OnPlayerEnterPickUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APickUp_OnPlayerEnterPickUp_Statics::FuncParams);
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_PickUpRoot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_PickUpRoot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_MyMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_MyMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_PickUpBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_PickUpBox;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APickUp_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GEP_GAME,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APickUp_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APickUp_OnPlayerEnterPickUp, "OnPlayerEnterPickUp" }, // 4215183894
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickUp_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PickUp.h" },
		{ "ModuleRelativePath", "Public/PickUp.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickUp_Statics::NewProp_m_PickUpRoot_MetaData[] = {
		{ "Category", "PickUp" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PickUp.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APickUp_Statics::NewProp_m_PickUpRoot = { "m_PickUpRoot", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APickUp, m_PickUpRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APickUp_Statics::NewProp_m_PickUpRoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APickUp_Statics::NewProp_m_PickUpRoot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickUp_Statics::NewProp_m_MyMesh_MetaData[] = {
		{ "Category", "PickUp" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PickUp.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APickUp_Statics::NewProp_m_MyMesh = { "m_MyMesh", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APickUp, m_MyMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APickUp_Statics::NewProp_m_MyMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APickUp_Statics::NewProp_m_MyMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickUp_Statics::NewProp_m_PickUpBox_MetaData[] = {
		{ "Category", "PickUp" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PickUp.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APickUp_Statics::NewProp_m_PickUpBox = { "m_PickUpBox", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APickUp, m_PickUpBox), Z_Construct_UClass_UShapeComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APickUp_Statics::NewProp_m_PickUpBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APickUp_Statics::NewProp_m_PickUpBox_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APickUp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickUp_Statics::NewProp_m_PickUpRoot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickUp_Statics::NewProp_m_MyMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickUp_Statics::NewProp_m_PickUpBox,
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
	IMPLEMENT_CLASS(APickUp, 1794241322);
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
