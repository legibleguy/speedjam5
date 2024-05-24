// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameAPI/LootLockerCurrencyRequestHandler.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLootLockerListCurrenciesResponse;
struct FLootLockerListDenominationsResponse;
#ifdef LOOTLOCKERSDK_LootLockerCurrencyRequestHandler_generated_h
#error "LootLockerCurrencyRequestHandler.generated.h already included, missing '#pragma once' in LootLockerCurrencyRequestHandler.h"
#endif
#define LOOTLOCKERSDK_LootLockerCurrencyRequestHandler_generated_h

#define FID_Projects_cicadashell_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerCurrencyRequestHandler_h_20_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLootLockerCurrency_Statics; \
	LOOTLOCKERSDK_API static class UScriptStruct* StaticStruct();


template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<struct FLootLockerCurrency>();

#define FID_Projects_cicadashell_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerCurrencyRequestHandler_h_59_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLootLockerDenomination_Statics; \
	LOOTLOCKERSDK_API static class UScriptStruct* StaticStruct();


template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<struct FLootLockerDenomination>();

#define FID_Projects_cicadashell_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerCurrencyRequestHandler_h_103_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLootLockerListCurrenciesResponse_Statics; \
	LOOTLOCKERSDK_API static class UScriptStruct* StaticStruct(); \
	typedef FLootLockerResponse Super;


template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<struct FLootLockerListCurrenciesResponse>();

#define FID_Projects_cicadashell_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerCurrencyRequestHandler_h_117_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLootLockerListDenominationsResponse_Statics; \
	LOOTLOCKERSDK_API static class UScriptStruct* StaticStruct(); \
	typedef FLootLockerResponse Super;


template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<struct FLootLockerListDenominationsResponse>();

#define FID_Projects_cicadashell_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerCurrencyRequestHandler_h_133_DELEGATE \
LOOTLOCKERSDK_API void FLootLockerListCurrenciesResponseBP_DelegateWrapper(const FScriptDelegate& LootLockerListCurrenciesResponseBP, FLootLockerListCurrenciesResponse Response);


#define FID_Projects_cicadashell_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerCurrencyRequestHandler_h_137_DELEGATE \
LOOTLOCKERSDK_API void FLootLockerListDenominationsResponseBP_DelegateWrapper(const FScriptDelegate& LootLockerListDenominationsResponseBP, FLootLockerListDenominationsResponse Response);


#define FID_Projects_cicadashell_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerCurrencyRequestHandler_h_160_SPARSE_DATA
#define FID_Projects_cicadashell_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerCurrencyRequestHandler_h_160_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Projects_cicadashell_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerCurrencyRequestHandler_h_160_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Projects_cicadashell_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerCurrencyRequestHandler_h_160_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Projects_cicadashell_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerCurrencyRequestHandler_h_160_ACCESSORS
#define FID_Projects_cicadashell_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerCurrencyRequestHandler_h_160_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULootLockerCurrencyRequestHandler(); \
	friend struct Z_Construct_UClass_ULootLockerCurrencyRequestHandler_Statics; \
public: \
	DECLARE_CLASS(ULootLockerCurrencyRequestHandler, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LootLockerSDK"), NO_API) \
	DECLARE_SERIALIZER(ULootLockerCurrencyRequestHandler)


#define FID_Projects_cicadashell_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerCurrencyRequestHandler_h_160_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULootLockerCurrencyRequestHandler(ULootLockerCurrencyRequestHandler&&); \
	NO_API ULootLockerCurrencyRequestHandler(const ULootLockerCurrencyRequestHandler&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULootLockerCurrencyRequestHandler); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULootLockerCurrencyRequestHandler); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULootLockerCurrencyRequestHandler) \
	NO_API virtual ~ULootLockerCurrencyRequestHandler();


#define FID_Projects_cicadashell_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerCurrencyRequestHandler_h_157_PROLOG
#define FID_Projects_cicadashell_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerCurrencyRequestHandler_h_160_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_cicadashell_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerCurrencyRequestHandler_h_160_SPARSE_DATA \
	FID_Projects_cicadashell_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerCurrencyRequestHandler_h_160_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Projects_cicadashell_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerCurrencyRequestHandler_h_160_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Projects_cicadashell_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerCurrencyRequestHandler_h_160_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Projects_cicadashell_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerCurrencyRequestHandler_h_160_ACCESSORS \
	FID_Projects_cicadashell_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerCurrencyRequestHandler_h_160_INCLASS_NO_PURE_DECLS \
	FID_Projects_cicadashell_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerCurrencyRequestHandler_h_160_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LOOTLOCKERSDK_API UClass* StaticClass<class ULootLockerCurrencyRequestHandler>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projects_cicadashell_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerCurrencyRequestHandler_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
