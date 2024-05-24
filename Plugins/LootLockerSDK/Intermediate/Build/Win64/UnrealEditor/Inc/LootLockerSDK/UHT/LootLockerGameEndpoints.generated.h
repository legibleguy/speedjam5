// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LootLockerGameEndpoints.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LOOTLOCKERSDK_LootLockerGameEndpoints_generated_h
#error "LootLockerGameEndpoints.generated.h already included, missing '#pragma once' in LootLockerGameEndpoints.h"
#endif
#define LOOTLOCKERSDK_LootLockerGameEndpoints_generated_h

#define FID_Projects_cicadashell_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_LootLockerGameEndpoints_h_24_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLootLockerEndPoints_Statics; \
	LOOTLOCKERSDK_API static class UScriptStruct* StaticStruct();


template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<struct FLootLockerEndPoints>();

#define FID_Projects_cicadashell_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_LootLockerGameEndpoints_h_35_SPARSE_DATA
#define FID_Projects_cicadashell_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_LootLockerGameEndpoints_h_35_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Projects_cicadashell_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_LootLockerGameEndpoints_h_35_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Projects_cicadashell_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_LootLockerGameEndpoints_h_35_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Projects_cicadashell_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_LootLockerGameEndpoints_h_35_ACCESSORS
#define FID_Projects_cicadashell_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_LootLockerGameEndpoints_h_35_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULootLockerGameEndpoints(); \
	friend struct Z_Construct_UClass_ULootLockerGameEndpoints_Statics; \
public: \
	DECLARE_CLASS(ULootLockerGameEndpoints, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LootLockerSDK"), NO_API) \
	DECLARE_SERIALIZER(ULootLockerGameEndpoints)


#define FID_Projects_cicadashell_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_LootLockerGameEndpoints_h_35_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULootLockerGameEndpoints(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULootLockerGameEndpoints(ULootLockerGameEndpoints&&); \
	NO_API ULootLockerGameEndpoints(const ULootLockerGameEndpoints&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULootLockerGameEndpoints); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULootLockerGameEndpoints); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULootLockerGameEndpoints) \
	NO_API virtual ~ULootLockerGameEndpoints();


#define FID_Projects_cicadashell_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_LootLockerGameEndpoints_h_32_PROLOG
#define FID_Projects_cicadashell_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_LootLockerGameEndpoints_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_cicadashell_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_LootLockerGameEndpoints_h_35_SPARSE_DATA \
	FID_Projects_cicadashell_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_LootLockerGameEndpoints_h_35_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Projects_cicadashell_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_LootLockerGameEndpoints_h_35_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Projects_cicadashell_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_LootLockerGameEndpoints_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Projects_cicadashell_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_LootLockerGameEndpoints_h_35_ACCESSORS \
	FID_Projects_cicadashell_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_LootLockerGameEndpoints_h_35_INCLASS_NO_PURE_DECLS \
	FID_Projects_cicadashell_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_LootLockerGameEndpoints_h_35_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LOOTLOCKERSDK_API UClass* StaticClass<class ULootLockerGameEndpoints>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projects_cicadashell_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_LootLockerGameEndpoints_h


#define FOREACH_ENUM_ELOOTLOCKERHTTPMETHOD(op) \
	op(ELootLockerHTTPMethod::GET) \
	op(ELootLockerHTTPMethod::POST) \
	op(ELootLockerHTTPMethod::DELETE) \
	op(ELootLockerHTTPMethod::PUT) \
	op(ELootLockerHTTPMethod::HEAD) \
	op(ELootLockerHTTPMethod::CREATE) \
	op(ELootLockerHTTPMethod::OPTIONS) \
	op(ELootLockerHTTPMethod::PATCH) \
	op(ELootLockerHTTPMethod::UPLOAD) 

enum class ELootLockerHTTPMethod : uint8;
template<> struct TIsUEnumClass<ELootLockerHTTPMethod> { enum { Value = true }; };
template<> LOOTLOCKERSDK_API UEnum* StaticEnum<ELootLockerHTTPMethod>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
