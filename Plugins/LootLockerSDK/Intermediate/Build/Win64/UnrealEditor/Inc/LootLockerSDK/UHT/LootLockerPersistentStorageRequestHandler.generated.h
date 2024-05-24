// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameAPI/LootLockerPersistentStorageRequestHandler.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLootLockerPersistentStorageItemResponse;
struct FLootLockerPersistentStorageItemsResponse;
#ifdef LOOTLOCKERSDK_LootLockerPersistentStorageRequestHandler_generated_h
#error "LootLockerPersistentStorageRequestHandler.generated.h already included, missing '#pragma once' in LootLockerPersistentStorageRequestHandler.h"
#endif
#define LOOTLOCKERSDK_LootLockerPersistentStorageRequestHandler_generated_h

#define FID_Projects_cicadashell_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerPersistentStorageRequestHandler_h_13_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLootLockerPersistentStorageItem_Statics; \
	LOOTLOCKERSDK_API static class UScriptStruct* StaticStruct();


template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<struct FLootLockerPersistentStorageItem>();

#define FID_Projects_cicadashell_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerPersistentStorageRequestHandler_h_26_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLootLockerPersistentStorageItems_Statics; \
	LOOTLOCKERSDK_API static class UScriptStruct* StaticStruct();


template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<struct FLootLockerPersistentStorageItems>();

#define FID_Projects_cicadashell_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerPersistentStorageRequestHandler_h_35_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLootLockerPersistentStorageItemsResponse_Statics; \
	LOOTLOCKERSDK_API static class UScriptStruct* StaticStruct(); \
	typedef FLootLockerResponse Super;


template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<struct FLootLockerPersistentStorageItemsResponse>();

#define FID_Projects_cicadashell_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerPersistentStorageRequestHandler_h_49_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLootLockerPersistentStorageItemResponse_Statics; \
	LOOTLOCKERSDK_API static class UScriptStruct* StaticStruct(); \
	typedef FLootLockerResponse Super;


template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<struct FLootLockerPersistentStorageItemResponse>();

#define FID_Projects_cicadashell_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerPersistentStorageRequestHandler_h_54_DELEGATE \
LOOTLOCKERSDK_API void FPersistentStorageItemsResponseDelegateBP_DelegateWrapper(const FScriptDelegate& PersistentStorageItemsResponseDelegateBP, FLootLockerPersistentStorageItemsResponse Response);


#define FID_Projects_cicadashell_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerPersistentStorageRequestHandler_h_55_DELEGATE \
LOOTLOCKERSDK_API void FPersistentStorageItemResponseDelegateBP_DelegateWrapper(const FScriptDelegate& PersistentStorageItemResponseDelegateBP, FLootLockerPersistentStorageItemResponse Response);


#define FID_Projects_cicadashell_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerPersistentStorageRequestHandler_h_66_SPARSE_DATA
#define FID_Projects_cicadashell_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerPersistentStorageRequestHandler_h_66_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Projects_cicadashell_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerPersistentStorageRequestHandler_h_66_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Projects_cicadashell_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerPersistentStorageRequestHandler_h_66_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Projects_cicadashell_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerPersistentStorageRequestHandler_h_66_ACCESSORS
#define FID_Projects_cicadashell_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerPersistentStorageRequestHandler_h_66_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULootLockerPersistentStorageRequestHandler(); \
	friend struct Z_Construct_UClass_ULootLockerPersistentStorageRequestHandler_Statics; \
public: \
	DECLARE_CLASS(ULootLockerPersistentStorageRequestHandler, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LootLockerSDK"), NO_API) \
	DECLARE_SERIALIZER(ULootLockerPersistentStorageRequestHandler)


#define FID_Projects_cicadashell_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerPersistentStorageRequestHandler_h_66_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULootLockerPersistentStorageRequestHandler(ULootLockerPersistentStorageRequestHandler&&); \
	NO_API ULootLockerPersistentStorageRequestHandler(const ULootLockerPersistentStorageRequestHandler&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULootLockerPersistentStorageRequestHandler); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULootLockerPersistentStorageRequestHandler); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULootLockerPersistentStorageRequestHandler) \
	NO_API virtual ~ULootLockerPersistentStorageRequestHandler();


#define FID_Projects_cicadashell_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerPersistentStorageRequestHandler_h_62_PROLOG
#define FID_Projects_cicadashell_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerPersistentStorageRequestHandler_h_66_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_cicadashell_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerPersistentStorageRequestHandler_h_66_SPARSE_DATA \
	FID_Projects_cicadashell_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerPersistentStorageRequestHandler_h_66_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Projects_cicadashell_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerPersistentStorageRequestHandler_h_66_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Projects_cicadashell_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerPersistentStorageRequestHandler_h_66_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Projects_cicadashell_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerPersistentStorageRequestHandler_h_66_ACCESSORS \
	FID_Projects_cicadashell_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerPersistentStorageRequestHandler_h_66_INCLASS_NO_PURE_DECLS \
	FID_Projects_cicadashell_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerPersistentStorageRequestHandler_h_66_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LOOTLOCKERSDK_API UClass* StaticClass<class ULootLockerPersistentStorageRequestHandler>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projects_cicadashell_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerPersistentStorageRequestHandler_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
