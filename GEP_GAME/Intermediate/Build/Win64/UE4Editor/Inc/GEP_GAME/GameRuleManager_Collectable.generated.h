// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ACollectablePickUp;
#ifdef GEP_GAME_GameRuleManager_Collectable_generated_h
#error "GameRuleManager_Collectable.generated.h already included, missing '#pragma once' in GameRuleManager_Collectable.h"
#endif
#define GEP_GAME_GameRuleManager_Collectable_generated_h

#define GEP_GAME_Source_GEP_GAME_Public_GameRuleManager_Collectable_h_16_SPARSE_DATA
#define GEP_GAME_Source_GEP_GAME_Public_GameRuleManager_Collectable_h_16_RPC_WRAPPERS \
	virtual void Collected_Implementation(ACollectablePickUp* delegateInstigator); \
 \
	DECLARE_FUNCTION(execCollected);


#define GEP_GAME_Source_GEP_GAME_Public_GameRuleManager_Collectable_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCollected);


#define GEP_GAME_Source_GEP_GAME_Public_GameRuleManager_Collectable_h_16_EVENT_PARMS \
	struct GameRuleManager_Collectable_eventCollected_Parms \
	{ \
		ACollectablePickUp* delegateInstigator; \
	};


#define GEP_GAME_Source_GEP_GAME_Public_GameRuleManager_Collectable_h_16_CALLBACK_WRAPPERS
#define GEP_GAME_Source_GEP_GAME_Public_GameRuleManager_Collectable_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGameRuleManager_Collectable(); \
	friend struct Z_Construct_UClass_AGameRuleManager_Collectable_Statics; \
public: \
	DECLARE_CLASS(AGameRuleManager_Collectable, AGameRuleManager, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GEP_GAME"), NO_API) \
	DECLARE_SERIALIZER(AGameRuleManager_Collectable)


#define GEP_GAME_Source_GEP_GAME_Public_GameRuleManager_Collectable_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAGameRuleManager_Collectable(); \
	friend struct Z_Construct_UClass_AGameRuleManager_Collectable_Statics; \
public: \
	DECLARE_CLASS(AGameRuleManager_Collectable, AGameRuleManager, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GEP_GAME"), NO_API) \
	DECLARE_SERIALIZER(AGameRuleManager_Collectable)


#define GEP_GAME_Source_GEP_GAME_Public_GameRuleManager_Collectable_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGameRuleManager_Collectable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGameRuleManager_Collectable) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGameRuleManager_Collectable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameRuleManager_Collectable); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGameRuleManager_Collectable(AGameRuleManager_Collectable&&); \
	NO_API AGameRuleManager_Collectable(const AGameRuleManager_Collectable&); \
public:


#define GEP_GAME_Source_GEP_GAME_Public_GameRuleManager_Collectable_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGameRuleManager_Collectable() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGameRuleManager_Collectable(AGameRuleManager_Collectable&&); \
	NO_API AGameRuleManager_Collectable(const AGameRuleManager_Collectable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGameRuleManager_Collectable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameRuleManager_Collectable); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGameRuleManager_Collectable)


#define GEP_GAME_Source_GEP_GAME_Public_GameRuleManager_Collectable_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_Collectables() { return STRUCT_OFFSET(AGameRuleManager_Collectable, m_Collectables); }


#define GEP_GAME_Source_GEP_GAME_Public_GameRuleManager_Collectable_h_13_PROLOG \
	GEP_GAME_Source_GEP_GAME_Public_GameRuleManager_Collectable_h_16_EVENT_PARMS


#define GEP_GAME_Source_GEP_GAME_Public_GameRuleManager_Collectable_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GEP_GAME_Source_GEP_GAME_Public_GameRuleManager_Collectable_h_16_PRIVATE_PROPERTY_OFFSET \
	GEP_GAME_Source_GEP_GAME_Public_GameRuleManager_Collectable_h_16_SPARSE_DATA \
	GEP_GAME_Source_GEP_GAME_Public_GameRuleManager_Collectable_h_16_RPC_WRAPPERS \
	GEP_GAME_Source_GEP_GAME_Public_GameRuleManager_Collectable_h_16_CALLBACK_WRAPPERS \
	GEP_GAME_Source_GEP_GAME_Public_GameRuleManager_Collectable_h_16_INCLASS \
	GEP_GAME_Source_GEP_GAME_Public_GameRuleManager_Collectable_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GEP_GAME_Source_GEP_GAME_Public_GameRuleManager_Collectable_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GEP_GAME_Source_GEP_GAME_Public_GameRuleManager_Collectable_h_16_PRIVATE_PROPERTY_OFFSET \
	GEP_GAME_Source_GEP_GAME_Public_GameRuleManager_Collectable_h_16_SPARSE_DATA \
	GEP_GAME_Source_GEP_GAME_Public_GameRuleManager_Collectable_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	GEP_GAME_Source_GEP_GAME_Public_GameRuleManager_Collectable_h_16_CALLBACK_WRAPPERS \
	GEP_GAME_Source_GEP_GAME_Public_GameRuleManager_Collectable_h_16_INCLASS_NO_PURE_DECLS \
	GEP_GAME_Source_GEP_GAME_Public_GameRuleManager_Collectable_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GEP_GAME_API UClass* StaticClass<class AGameRuleManager_Collectable>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GEP_GAME_Source_GEP_GAME_Public_GameRuleManager_Collectable_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
