// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AGameRuleManager;
#ifdef GEP_GAME_GameRuleManager_generated_h
#error "GameRuleManager.generated.h already included, missing '#pragma once' in GameRuleManager.h"
#endif
#define GEP_GAME_GameRuleManager_generated_h

#define GEP_GAME_Source_GEP_GAME_Public_GameRuleManager_h_9_DELEGATE \
struct _Script_GEP_GAME_eventGameRuleSuccessSignature_Parms \
{ \
	AGameRuleManager* delegateInstigator; \
}; \
static inline void FGameRuleSuccessSignature_DelegateWrapper(const FMulticastScriptDelegate& GameRuleSuccessSignature, AGameRuleManager* delegateInstigator) \
{ \
	_Script_GEP_GAME_eventGameRuleSuccessSignature_Parms Parms; \
	Parms.delegateInstigator=delegateInstigator; \
	GameRuleSuccessSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define GEP_GAME_Source_GEP_GAME_Public_GameRuleManager_h_14_SPARSE_DATA
#define GEP_GAME_Source_GEP_GAME_Public_GameRuleManager_h_14_RPC_WRAPPERS
#define GEP_GAME_Source_GEP_GAME_Public_GameRuleManager_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define GEP_GAME_Source_GEP_GAME_Public_GameRuleManager_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGameRuleManager(); \
	friend struct Z_Construct_UClass_AGameRuleManager_Statics; \
public: \
	DECLARE_CLASS(AGameRuleManager, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/GEP_GAME"), NO_API) \
	DECLARE_SERIALIZER(AGameRuleManager)


#define GEP_GAME_Source_GEP_GAME_Public_GameRuleManager_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAGameRuleManager(); \
	friend struct Z_Construct_UClass_AGameRuleManager_Statics; \
public: \
	DECLARE_CLASS(AGameRuleManager, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/GEP_GAME"), NO_API) \
	DECLARE_SERIALIZER(AGameRuleManager)


#define GEP_GAME_Source_GEP_GAME_Public_GameRuleManager_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGameRuleManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGameRuleManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGameRuleManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameRuleManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGameRuleManager(AGameRuleManager&&); \
	NO_API AGameRuleManager(const AGameRuleManager&); \
public:


#define GEP_GAME_Source_GEP_GAME_Public_GameRuleManager_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGameRuleManager(AGameRuleManager&&); \
	NO_API AGameRuleManager(const AGameRuleManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGameRuleManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameRuleManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGameRuleManager)


#define GEP_GAME_Source_GEP_GAME_Public_GameRuleManager_h_14_PRIVATE_PROPERTY_OFFSET
#define GEP_GAME_Source_GEP_GAME_Public_GameRuleManager_h_11_PROLOG
#define GEP_GAME_Source_GEP_GAME_Public_GameRuleManager_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GEP_GAME_Source_GEP_GAME_Public_GameRuleManager_h_14_PRIVATE_PROPERTY_OFFSET \
	GEP_GAME_Source_GEP_GAME_Public_GameRuleManager_h_14_SPARSE_DATA \
	GEP_GAME_Source_GEP_GAME_Public_GameRuleManager_h_14_RPC_WRAPPERS \
	GEP_GAME_Source_GEP_GAME_Public_GameRuleManager_h_14_INCLASS \
	GEP_GAME_Source_GEP_GAME_Public_GameRuleManager_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GEP_GAME_Source_GEP_GAME_Public_GameRuleManager_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GEP_GAME_Source_GEP_GAME_Public_GameRuleManager_h_14_PRIVATE_PROPERTY_OFFSET \
	GEP_GAME_Source_GEP_GAME_Public_GameRuleManager_h_14_SPARSE_DATA \
	GEP_GAME_Source_GEP_GAME_Public_GameRuleManager_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	GEP_GAME_Source_GEP_GAME_Public_GameRuleManager_h_14_INCLASS_NO_PURE_DECLS \
	GEP_GAME_Source_GEP_GAME_Public_GameRuleManager_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GEP_GAME_API UClass* StaticClass<class AGameRuleManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GEP_GAME_Source_GEP_GAME_Public_GameRuleManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
