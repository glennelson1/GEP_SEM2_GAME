// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GEP_GAME_FPSCharacter_generated_h
#error "FPSCharacter.generated.h already included, missing '#pragma once' in FPSCharacter.h"
#endif
#define GEP_GAME_FPSCharacter_generated_h

#define GEP_GAME_Source_GEP_GAME_Public_FPSCharacter_h_18_SPARSE_DATA
#define GEP_GAME_Source_GEP_GAME_Public_FPSCharacter_h_18_RPC_WRAPPERS
#define GEP_GAME_Source_GEP_GAME_Public_FPSCharacter_h_18_RPC_WRAPPERS_NO_PURE_DECLS
#define GEP_GAME_Source_GEP_GAME_Public_FPSCharacter_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFPSCharacter(); \
	friend struct Z_Construct_UClass_AFPSCharacter_Statics; \
public: \
	DECLARE_CLASS(AFPSCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GEP_GAME"), NO_API) \
	DECLARE_SERIALIZER(AFPSCharacter)


#define GEP_GAME_Source_GEP_GAME_Public_FPSCharacter_h_18_INCLASS \
private: \
	static void StaticRegisterNativesAFPSCharacter(); \
	friend struct Z_Construct_UClass_AFPSCharacter_Statics; \
public: \
	DECLARE_CLASS(AFPSCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GEP_GAME"), NO_API) \
	DECLARE_SERIALIZER(AFPSCharacter)


#define GEP_GAME_Source_GEP_GAME_Public_FPSCharacter_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFPSCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFPSCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSCharacter(AFPSCharacter&&); \
	NO_API AFPSCharacter(const AFPSCharacter&); \
public:


#define GEP_GAME_Source_GEP_GAME_Public_FPSCharacter_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSCharacter(AFPSCharacter&&); \
	NO_API AFPSCharacter(const AFPSCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFPSCharacter)


#define GEP_GAME_Source_GEP_GAME_Public_FPSCharacter_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__HoldingComponent() { return STRUCT_OFFSET(AFPSCharacter, HoldingComponent); }


#define GEP_GAME_Source_GEP_GAME_Public_FPSCharacter_h_15_PROLOG
#define GEP_GAME_Source_GEP_GAME_Public_FPSCharacter_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GEP_GAME_Source_GEP_GAME_Public_FPSCharacter_h_18_PRIVATE_PROPERTY_OFFSET \
	GEP_GAME_Source_GEP_GAME_Public_FPSCharacter_h_18_SPARSE_DATA \
	GEP_GAME_Source_GEP_GAME_Public_FPSCharacter_h_18_RPC_WRAPPERS \
	GEP_GAME_Source_GEP_GAME_Public_FPSCharacter_h_18_INCLASS \
	GEP_GAME_Source_GEP_GAME_Public_FPSCharacter_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GEP_GAME_Source_GEP_GAME_Public_FPSCharacter_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GEP_GAME_Source_GEP_GAME_Public_FPSCharacter_h_18_PRIVATE_PROPERTY_OFFSET \
	GEP_GAME_Source_GEP_GAME_Public_FPSCharacter_h_18_SPARSE_DATA \
	GEP_GAME_Source_GEP_GAME_Public_FPSCharacter_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	GEP_GAME_Source_GEP_GAME_Public_FPSCharacter_h_18_INCLASS_NO_PURE_DECLS \
	GEP_GAME_Source_GEP_GAME_Public_FPSCharacter_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GEP_GAME_API UClass* StaticClass<class AFPSCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GEP_GAME_Source_GEP_GAME_Public_FPSCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
