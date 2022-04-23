// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GEP_GAME_PickUp_generated_h
#error "PickUp.generated.h already included, missing '#pragma once' in PickUp.h"
#endif
#define GEP_GAME_PickUp_generated_h

#define GEP_GAME_Source_GEP_GAME_Public_PickUp_h_16_SPARSE_DATA
#define GEP_GAME_Source_GEP_GAME_Public_PickUp_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPickup); \
	DECLARE_FUNCTION(execRotateActor);


#define GEP_GAME_Source_GEP_GAME_Public_PickUp_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPickup); \
	DECLARE_FUNCTION(execRotateActor);


#define GEP_GAME_Source_GEP_GAME_Public_PickUp_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPickUp(); \
	friend struct Z_Construct_UClass_APickUp_Statics; \
public: \
	DECLARE_CLASS(APickUp, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GEP_GAME"), NO_API) \
	DECLARE_SERIALIZER(APickUp)


#define GEP_GAME_Source_GEP_GAME_Public_PickUp_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAPickUp(); \
	friend struct Z_Construct_UClass_APickUp_Statics; \
public: \
	DECLARE_CLASS(APickUp, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GEP_GAME"), NO_API) \
	DECLARE_SERIALIZER(APickUp)


#define GEP_GAME_Source_GEP_GAME_Public_PickUp_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APickUp(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APickUp) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APickUp); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APickUp); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APickUp(APickUp&&); \
	NO_API APickUp(const APickUp&); \
public:


#define GEP_GAME_Source_GEP_GAME_Public_PickUp_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APickUp(APickUp&&); \
	NO_API APickUp(const APickUp&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APickUp); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APickUp); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APickUp)


#define GEP_GAME_Source_GEP_GAME_Public_PickUp_h_16_PRIVATE_PROPERTY_OFFSET
#define GEP_GAME_Source_GEP_GAME_Public_PickUp_h_13_PROLOG
#define GEP_GAME_Source_GEP_GAME_Public_PickUp_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GEP_GAME_Source_GEP_GAME_Public_PickUp_h_16_PRIVATE_PROPERTY_OFFSET \
	GEP_GAME_Source_GEP_GAME_Public_PickUp_h_16_SPARSE_DATA \
	GEP_GAME_Source_GEP_GAME_Public_PickUp_h_16_RPC_WRAPPERS \
	GEP_GAME_Source_GEP_GAME_Public_PickUp_h_16_INCLASS \
	GEP_GAME_Source_GEP_GAME_Public_PickUp_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GEP_GAME_Source_GEP_GAME_Public_PickUp_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GEP_GAME_Source_GEP_GAME_Public_PickUp_h_16_PRIVATE_PROPERTY_OFFSET \
	GEP_GAME_Source_GEP_GAME_Public_PickUp_h_16_SPARSE_DATA \
	GEP_GAME_Source_GEP_GAME_Public_PickUp_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	GEP_GAME_Source_GEP_GAME_Public_PickUp_h_16_INCLASS_NO_PURE_DECLS \
	GEP_GAME_Source_GEP_GAME_Public_PickUp_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GEP_GAME_API UClass* StaticClass<class APickUp>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GEP_GAME_Source_GEP_GAME_Public_PickUp_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
