// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AController;
class AActor;
class UDamageType;
#ifdef GEP_GAME_HeathComponent_generated_h
#error "HeathComponent.generated.h already included, missing '#pragma once' in HeathComponent.h"
#endif
#define GEP_GAME_HeathComponent_generated_h

#define GEP_GAME_Source_GEP_GAME_Public_HeathComponent_h_8_DELEGATE \
struct _Script_GEP_GAME_eventComponentDeadSignature_Parms \
{ \
	AController* causer; \
}; \
static inline void FComponentDeadSignature_DelegateWrapper(const FMulticastScriptDelegate& ComponentDeadSignature, AController* causer) \
{ \
	_Script_GEP_GAME_eventComponentDeadSignature_Parms Parms; \
	Parms.causer=causer; \
	ComponentDeadSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define GEP_GAME_Source_GEP_GAME_Public_HeathComponent_h_13_SPARSE_DATA
#define GEP_GAME_Source_GEP_GAME_Public_HeathComponent_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDamgeTaken);


#define GEP_GAME_Source_GEP_GAME_Public_HeathComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDamgeTaken);


#define GEP_GAME_Source_GEP_GAME_Public_HeathComponent_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHeathComponent(); \
	friend struct Z_Construct_UClass_UHeathComponent_Statics; \
public: \
	DECLARE_CLASS(UHeathComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GEP_GAME"), NO_API) \
	DECLARE_SERIALIZER(UHeathComponent)


#define GEP_GAME_Source_GEP_GAME_Public_HeathComponent_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUHeathComponent(); \
	friend struct Z_Construct_UClass_UHeathComponent_Statics; \
public: \
	DECLARE_CLASS(UHeathComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GEP_GAME"), NO_API) \
	DECLARE_SERIALIZER(UHeathComponent)


#define GEP_GAME_Source_GEP_GAME_Public_HeathComponent_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHeathComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHeathComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHeathComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHeathComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHeathComponent(UHeathComponent&&); \
	NO_API UHeathComponent(const UHeathComponent&); \
public:


#define GEP_GAME_Source_GEP_GAME_Public_HeathComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHeathComponent(UHeathComponent&&); \
	NO_API UHeathComponent(const UHeathComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHeathComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHeathComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHeathComponent)


#define GEP_GAME_Source_GEP_GAME_Public_HeathComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_CurrentHealth() { return STRUCT_OFFSET(UHeathComponent, m_CurrentHealth); } \
	FORCEINLINE static uint32 __PPO__m_MaxHealth() { return STRUCT_OFFSET(UHeathComponent, m_MaxHealth); } \
	FORCEINLINE static uint32 __PPO__m_CurrentShield() { return STRUCT_OFFSET(UHeathComponent, m_CurrentShield); } \
	FORCEINLINE static uint32 __PPO__m_MaxShield() { return STRUCT_OFFSET(UHeathComponent, m_MaxShield); } \
	FORCEINLINE static uint32 __PPO__m_CanRegenSheild() { return STRUCT_OFFSET(UHeathComponent, m_CanRegenSheild); } \
	FORCEINLINE static uint32 __PPO__m_SheildRecoverDelayTimer() { return STRUCT_OFFSET(UHeathComponent, m_SheildRecoverDelayTimer); } \
	FORCEINLINE static uint32 __PPO__m_SheildRevoverRate() { return STRUCT_OFFSET(UHeathComponent, m_SheildRevoverRate); } \
	FORCEINLINE static uint32 __PPO__m_SheildRevoverDelay() { return STRUCT_OFFSET(UHeathComponent, m_SheildRevoverDelay); }


#define GEP_GAME_Source_GEP_GAME_Public_HeathComponent_h_10_PROLOG
#define GEP_GAME_Source_GEP_GAME_Public_HeathComponent_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GEP_GAME_Source_GEP_GAME_Public_HeathComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	GEP_GAME_Source_GEP_GAME_Public_HeathComponent_h_13_SPARSE_DATA \
	GEP_GAME_Source_GEP_GAME_Public_HeathComponent_h_13_RPC_WRAPPERS \
	GEP_GAME_Source_GEP_GAME_Public_HeathComponent_h_13_INCLASS \
	GEP_GAME_Source_GEP_GAME_Public_HeathComponent_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GEP_GAME_Source_GEP_GAME_Public_HeathComponent_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GEP_GAME_Source_GEP_GAME_Public_HeathComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	GEP_GAME_Source_GEP_GAME_Public_HeathComponent_h_13_SPARSE_DATA \
	GEP_GAME_Source_GEP_GAME_Public_HeathComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	GEP_GAME_Source_GEP_GAME_Public_HeathComponent_h_13_INCLASS_NO_PURE_DECLS \
	GEP_GAME_Source_GEP_GAME_Public_HeathComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GEP_GAME_API UClass* StaticClass<class UHeathComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GEP_GAME_Source_GEP_GAME_Public_HeathComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
