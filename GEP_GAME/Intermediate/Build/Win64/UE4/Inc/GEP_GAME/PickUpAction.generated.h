// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GEP_GAME_PickUpAction_generated_h
#error "PickUpAction.generated.h already included, missing '#pragma once' in PickUpAction.h"
#endif
#define GEP_GAME_PickUpAction_generated_h

#define GEP_GAME_Source_GEP_GAME_Public_PickUpAction_h_13_SPARSE_DATA
#define GEP_GAME_Source_GEP_GAME_Public_PickUpAction_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPickUp); \
	DECLARE_FUNCTION(execRotateActor);


#define GEP_GAME_Source_GEP_GAME_Public_PickUpAction_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPickUp); \
	DECLARE_FUNCTION(execRotateActor);


#define GEP_GAME_Source_GEP_GAME_Public_PickUpAction_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPickUpAction(); \
	friend struct Z_Construct_UClass_APickUpAction_Statics; \
public: \
	DECLARE_CLASS(APickUpAction, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GEP_GAME"), NO_API) \
	DECLARE_SERIALIZER(APickUpAction)


#define GEP_GAME_Source_GEP_GAME_Public_PickUpAction_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAPickUpAction(); \
	friend struct Z_Construct_UClass_APickUpAction_Statics; \
public: \
	DECLARE_CLASS(APickUpAction, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GEP_GAME"), NO_API) \
	DECLARE_SERIALIZER(APickUpAction)


#define GEP_GAME_Source_GEP_GAME_Public_PickUpAction_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APickUpAction(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APickUpAction) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APickUpAction); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APickUpAction); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APickUpAction(APickUpAction&&); \
	NO_API APickUpAction(const APickUpAction&); \
public:


#define GEP_GAME_Source_GEP_GAME_Public_PickUpAction_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APickUpAction(APickUpAction&&); \
	NO_API APickUpAction(const APickUpAction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APickUpAction); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APickUpAction); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APickUpAction)


#define GEP_GAME_Source_GEP_GAME_Public_PickUpAction_h_13_PRIVATE_PROPERTY_OFFSET
#define GEP_GAME_Source_GEP_GAME_Public_PickUpAction_h_10_PROLOG
#define GEP_GAME_Source_GEP_GAME_Public_PickUpAction_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GEP_GAME_Source_GEP_GAME_Public_PickUpAction_h_13_PRIVATE_PROPERTY_OFFSET \
	GEP_GAME_Source_GEP_GAME_Public_PickUpAction_h_13_SPARSE_DATA \
	GEP_GAME_Source_GEP_GAME_Public_PickUpAction_h_13_RPC_WRAPPERS \
	GEP_GAME_Source_GEP_GAME_Public_PickUpAction_h_13_INCLASS \
	GEP_GAME_Source_GEP_GAME_Public_PickUpAction_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GEP_GAME_Source_GEP_GAME_Public_PickUpAction_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GEP_GAME_Source_GEP_GAME_Public_PickUpAction_h_13_PRIVATE_PROPERTY_OFFSET \
	GEP_GAME_Source_GEP_GAME_Public_PickUpAction_h_13_SPARSE_DATA \
	GEP_GAME_Source_GEP_GAME_Public_PickUpAction_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	GEP_GAME_Source_GEP_GAME_Public_PickUpAction_h_13_INCLASS_NO_PURE_DECLS \
	GEP_GAME_Source_GEP_GAME_Public_PickUpAction_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GEP_GAME_API UClass* StaticClass<class APickUpAction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GEP_GAME_Source_GEP_GAME_Public_PickUpAction_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
