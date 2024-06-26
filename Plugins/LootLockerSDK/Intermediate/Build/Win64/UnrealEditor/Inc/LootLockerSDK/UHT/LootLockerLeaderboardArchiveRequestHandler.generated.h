// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameAPI/LootLockerLeaderboardArchiveRequestHandler.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLootLockerLeaderboardArchiveDetailsResponse;
struct FLootLockerLeaderboardArchiveResponse;
#ifdef LOOTLOCKERSDK_LootLockerLeaderboardArchiveRequestHandler_generated_h
#error "LootLockerLeaderboardArchiveRequestHandler.generated.h already included, missing '#pragma once' in LootLockerLeaderboardArchiveRequestHandler.h"
#endif
#define LOOTLOCKERSDK_LootLockerLeaderboardArchiveRequestHandler_generated_h

#define FID_Projects_cicadashell_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerLeaderboardArchiveRequestHandler_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLootLockerLeaderboardArchivePlayer_Statics; \
	LOOTLOCKERSDK_API static class UScriptStruct* StaticStruct();


template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<struct FLootLockerLeaderboardArchivePlayer>();

#define FID_Projects_cicadashell_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerLeaderboardArchiveRequestHandler_h_34_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLootLockerLeaderboardArchiveDetails_Statics; \
	LOOTLOCKERSDK_API static class UScriptStruct* StaticStruct();


template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<struct FLootLockerLeaderboardArchiveDetails>();

#define FID_Projects_cicadashell_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerLeaderboardArchiveRequestHandler_h_55_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLootLockerLeaderboardArchive_Statics; \
	LOOTLOCKERSDK_API static class UScriptStruct* StaticStruct();


template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<struct FLootLockerLeaderboardArchive>();

#define FID_Projects_cicadashell_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerLeaderboardArchiveRequestHandler_h_73_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLootLockerLeaderboardArchiveDetailsResponse_Statics; \
	LOOTLOCKERSDK_API static class UScriptStruct* StaticStruct(); \
	typedef FLootLockerResponse Super;


template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<struct FLootLockerLeaderboardArchiveDetailsResponse>();

#define FID_Projects_cicadashell_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerLeaderboardArchiveRequestHandler_h_82_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLootLockerLeaderboardArchiveResponse_Statics; \
	LOOTLOCKERSDK_API static class UScriptStruct* StaticStruct(); \
	typedef FLootLockerResponse Super;


template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<struct FLootLockerLeaderboardArchiveResponse>();

#define FID_Projects_cicadashell_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerLeaderboardArchiveRequestHandler_h_88_DELEGATE \
LOOTLOCKERSDK_API void FLootLockerLeaderboardArchiveResponseBP_DelegateWrapper(const FScriptDelegate& LootLockerLeaderboardArchiveResponseBP, FLootLockerLeaderboardArchiveResponse Response);


#define FID_Projects_cicadashell_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerLeaderboardArchiveRequestHandler_h_89_DELEGATE \
LOOTLOCKERSDK_API void FLootLockerLeaderboardArchiveDetailReponseBP_DelegateWrapper(const FScriptDelegate& LootLockerLeaderboardArchiveDetailReponseBP, FLootLockerLeaderboardArchiveDetailsResponse Response);


#define FID_Projects_cicadashell_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerLeaderboardArchiveRequestHandler_h_97_SPARSE_DATA
#define FID_Projects_cicadashell_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerLeaderboardArchiveRequestHandler_h_97_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Projects_cicadashell_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerLeaderboardArchiveRequestHandler_h_97_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Projects_cicadashell_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerLeaderboardArchiveRequestHandler_h_97_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Projects_cicadashell_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerLeaderboardArchiveRequestHandler_h_97_ACCESSORS
#define FID_Projects_cicadashell_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerLeaderboardArchiveRequestHandler_h_97_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULootLockerLeaderboardArchiveRequestHandler(); \
	friend struct Z_Construct_UClass_ULootLockerLeaderboardArchiveRequestHandler_Statics; \
public: \
	DECLARE_CLASS(ULootLockerLeaderboardArchiveRequestHandler, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LootLockerSDK"), NO_API) \
	DECLARE_SERIALIZER(ULootLockerLeaderboardArchiveRequestHandler)


#define FID_Projects_cicadashell_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerLeaderboardArchiveRequestHandler_h_97_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULootLockerLeaderboardArchiveRequestHandler(ULootLockerLeaderboardArchiveRequestHandler&&); \
	NO_API ULootLockerLeaderboardArchiveRequestHandler(const ULootLockerLeaderboardArchiveRequestHandler&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULootLockerLeaderboardArchiveRequestHandler); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULootLockerLeaderboardArchiveRequestHandler); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULootLockerLeaderboardArchiveRequestHandler) \
	NO_API virtual ~ULootLockerLeaderboardArchiveRequestHandler();


#define FID_Projects_cicadashell_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerLeaderboardArchiveRequestHandler_h_94_PROLOG
#define FID_Projects_cicadashell_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerLeaderboardArchiveRequestHandler_h_97_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_cicadashell_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerLeaderboardArchiveRequestHandler_h_97_SPARSE_DATA \
	FID_Projects_cicadashell_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerLeaderboardArchiveRequestHandler_h_97_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Projects_cicadashell_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerLeaderboardArchiveRequestHandler_h_97_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Projects_cicadashell_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerLeaderboardArchiveRequestHandler_h_97_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Projects_cicadashell_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerLeaderboardArchiveRequestHandler_h_97_ACCESSORS \
	FID_Projects_cicadashell_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerLeaderboardArchiveRequestHandler_h_97_INCLASS_NO_PURE_DECLS \
	FID_Projects_cicadashell_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerLeaderboardArchiveRequestHandler_h_97_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LOOTLOCKERSDK_API UClass* StaticClass<class ULootLockerLeaderboardArchiveRequestHandler>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projects_cicadashell_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerLeaderboardArchiveRequestHandler_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
