// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameAPI/LootLockerConnectedAccountsRequestHandler.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLootLockerAccountConnectedResponse;
struct FLootLockerListConnectedAccountsResponse;
#ifdef LOOTLOCKERSDK_LootLockerConnectedAccountsRequestHandler_generated_h
#error "LootLockerConnectedAccountsRequestHandler.generated.h already included, missing '#pragma once' in LootLockerConnectedAccountsRequestHandler.h"
#endif
#define LOOTLOCKERSDK_LootLockerConnectedAccountsRequestHandler_generated_h

#define FID_Projects_cicadashell_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerConnectedAccountsRequestHandler_h_41_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLootLockerConnectedAccountProvider_Statics; \
	LOOTLOCKERSDK_API static class UScriptStruct* StaticStruct();


template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<struct FLootLockerConnectedAccountProvider>();

#define FID_Projects_cicadashell_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerConnectedAccountsRequestHandler_h_63_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLootLockerConnectGoogleProviderToAccountRequest_Statics; \
	LOOTLOCKERSDK_API static class UScriptStruct* StaticStruct();


template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<struct FLootLockerConnectGoogleProviderToAccountRequest>();

#define FID_Projects_cicadashell_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerConnectedAccountsRequestHandler_h_77_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLootLockerConnectGoogleProviderToAccountWithPlatformRequest_Statics; \
	LOOTLOCKERSDK_API static class UScriptStruct* StaticStruct();


template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<struct FLootLockerConnectGoogleProviderToAccountWithPlatformRequest>();

#define FID_Projects_cicadashell_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerConnectedAccountsRequestHandler_h_96_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLootLockerConnectAppleRestProviderToAccountRequest_Statics; \
	LOOTLOCKERSDK_API static class UScriptStruct* StaticStruct();


template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<struct FLootLockerConnectAppleRestProviderToAccountRequest>();

#define FID_Projects_cicadashell_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerConnectedAccountsRequestHandler_h_113_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLootLockerAccountConnectedResponse_Statics; \
	LOOTLOCKERSDK_API static class UScriptStruct* StaticStruct(); \
	typedef FLootLockerResponse Super;


template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<struct FLootLockerAccountConnectedResponse>();

#define FID_Projects_cicadashell_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerConnectedAccountsRequestHandler_h_132_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLootLockerListConnectedAccountsResponse_Statics; \
	LOOTLOCKERSDK_API static class UScriptStruct* StaticStruct(); \
	typedef FLootLockerResponse Super;


template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<struct FLootLockerListConnectedAccountsResponse>();

#define FID_Projects_cicadashell_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerConnectedAccountsRequestHandler_h_146_DELEGATE \
LOOTLOCKERSDK_API void FLootLockerAccountConnectedResponseBP_DelegateWrapper(const FScriptDelegate& LootLockerAccountConnectedResponseBP, FLootLockerAccountConnectedResponse Response);


#define FID_Projects_cicadashell_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerConnectedAccountsRequestHandler_h_150_DELEGATE \
LOOTLOCKERSDK_API void FLootLockerListConnectedAccountsResponseBP_DelegateWrapper(const FScriptDelegate& LootLockerListConnectedAccountsResponseBP, FLootLockerListConnectedAccountsResponse Response);


#define FID_Projects_cicadashell_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerConnectedAccountsRequestHandler_h_171_SPARSE_DATA
#define FID_Projects_cicadashell_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerConnectedAccountsRequestHandler_h_171_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Projects_cicadashell_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerConnectedAccountsRequestHandler_h_171_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Projects_cicadashell_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerConnectedAccountsRequestHandler_h_171_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Projects_cicadashell_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerConnectedAccountsRequestHandler_h_171_ACCESSORS
#define FID_Projects_cicadashell_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerConnectedAccountsRequestHandler_h_171_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULootLockerConnectedAccountsRequestHandler(); \
	friend struct Z_Construct_UClass_ULootLockerConnectedAccountsRequestHandler_Statics; \
public: \
	DECLARE_CLASS(ULootLockerConnectedAccountsRequestHandler, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LootLockerSDK"), NO_API) \
	DECLARE_SERIALIZER(ULootLockerConnectedAccountsRequestHandler)


#define FID_Projects_cicadashell_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerConnectedAccountsRequestHandler_h_171_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULootLockerConnectedAccountsRequestHandler(ULootLockerConnectedAccountsRequestHandler&&); \
	NO_API ULootLockerConnectedAccountsRequestHandler(const ULootLockerConnectedAccountsRequestHandler&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULootLockerConnectedAccountsRequestHandler); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULootLockerConnectedAccountsRequestHandler); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULootLockerConnectedAccountsRequestHandler) \
	NO_API virtual ~ULootLockerConnectedAccountsRequestHandler();


#define FID_Projects_cicadashell_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerConnectedAccountsRequestHandler_h_168_PROLOG
#define FID_Projects_cicadashell_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerConnectedAccountsRequestHandler_h_171_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_cicadashell_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerConnectedAccountsRequestHandler_h_171_SPARSE_DATA \
	FID_Projects_cicadashell_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerConnectedAccountsRequestHandler_h_171_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Projects_cicadashell_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerConnectedAccountsRequestHandler_h_171_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Projects_cicadashell_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerConnectedAccountsRequestHandler_h_171_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Projects_cicadashell_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerConnectedAccountsRequestHandler_h_171_ACCESSORS \
	FID_Projects_cicadashell_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerConnectedAccountsRequestHandler_h_171_INCLASS_NO_PURE_DECLS \
	FID_Projects_cicadashell_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerConnectedAccountsRequestHandler_h_171_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LOOTLOCKERSDK_API UClass* StaticClass<class ULootLockerConnectedAccountsRequestHandler>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projects_cicadashell_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerConnectedAccountsRequestHandler_h


#define FOREACH_ENUM_ELOOTLOCKERACCOUNTPROVIDER(op) \
	op(ELootLockerAccountProvider::Guest) \
	op(ELootLockerAccountProvider::Google) \
	op(ELootLockerAccountProvider::Apple) 

enum class ELootLockerAccountProvider : uint8;
template<> struct TIsUEnumClass<ELootLockerAccountProvider> { enum { Value = true }; };
template<> LOOTLOCKERSDK_API UEnum* StaticEnum<ELootLockerAccountProvider>();

#define FOREACH_ENUM_EGOOGLEACCOUNTPROVIDERPLATFORM(op) \
	op(EGoogleAccountProviderPlatform::web) \
	op(EGoogleAccountProviderPlatform::android) \
	op(EGoogleAccountProviderPlatform::ios) \
	op(EGoogleAccountProviderPlatform::desktop) 

enum class EGoogleAccountProviderPlatform : uint8;
template<> struct TIsUEnumClass<EGoogleAccountProviderPlatform> { enum { Value = true }; };
template<> LOOTLOCKERSDK_API UEnum* StaticEnum<EGoogleAccountProviderPlatform>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
