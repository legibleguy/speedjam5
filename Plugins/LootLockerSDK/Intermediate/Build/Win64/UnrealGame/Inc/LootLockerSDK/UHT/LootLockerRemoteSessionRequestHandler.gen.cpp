// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LootLockerSDK/Public/GameAPI/LootLockerRemoteSessionRequestHandler.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLootLockerRemoteSessionRequestHandler() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	LOOTLOCKERSDK_API UClass* Z_Construct_UClass_ULootLockerRemoteSessionRequestHandler();
	LOOTLOCKERSDK_API UClass* Z_Construct_UClass_ULootLockerRemoteSessionRequestHandler_NoRegister();
	LOOTLOCKERSDK_API UEnum* Z_Construct_UEnum_LootLockerSDK_ELootLockerRemoteSessionLeaseStatus();
	LOOTLOCKERSDK_API UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerLeaseRemoteSessionResponseDelegateBP__DelegateSignature();
	LOOTLOCKERSDK_API UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerRefreshRemoteSessionResponseDelegateBP__DelegateSignature();
	LOOTLOCKERSDK_API UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerRemoteSessionStatusPollingResponseDelegateBP__DelegateSignature();
	LOOTLOCKERSDK_API UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerStartRemoteSessionResponseDelegateBP__DelegateSignature();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerAuthenticationResponse();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerBaseAuthRequest();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerLeaseRemoteSessionRequest();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerLeaseRemoteSessionResponse();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerRefreshRemoteSessionRequest();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerRefreshRemoteSessionResponse();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerRemoteSessionStatusPollingResponse();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerResponse();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerStartRemoteSessionRequest();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerStartRemoteSessionResponse();
	UPackage* Z_Construct_UPackage__Script_LootLockerSDK();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELootLockerRemoteSessionLeaseStatus;
	static UEnum* ELootLockerRemoteSessionLeaseStatus_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ELootLockerRemoteSessionLeaseStatus.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ELootLockerRemoteSessionLeaseStatus.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LootLockerSDK_ELootLockerRemoteSessionLeaseStatus, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("ELootLockerRemoteSessionLeaseStatus"));
		}
		return Z_Registration_Info_UEnum_ELootLockerRemoteSessionLeaseStatus.OuterSingleton;
	}
	template<> LOOTLOCKERSDK_API UEnum* StaticEnum<ELootLockerRemoteSessionLeaseStatus>()
	{
		return ELootLockerRemoteSessionLeaseStatus_StaticEnum();
	}
	struct Z_Construct_UEnum_LootLockerSDK_ELootLockerRemoteSessionLeaseStatus_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_LootLockerSDK_ELootLockerRemoteSessionLeaseStatus_Statics::Enumerators[] = {
		{ "ELootLockerRemoteSessionLeaseStatus::Created", (int64)ELootLockerRemoteSessionLeaseStatus::Created },
		{ "ELootLockerRemoteSessionLeaseStatus::Claimed", (int64)ELootLockerRemoteSessionLeaseStatus::Claimed },
		{ "ELootLockerRemoteSessionLeaseStatus::Verified", (int64)ELootLockerRemoteSessionLeaseStatus::Verified },
		{ "ELootLockerRemoteSessionLeaseStatus::Authorized", (int64)ELootLockerRemoteSessionLeaseStatus::Authorized },
		{ "ELootLockerRemoteSessionLeaseStatus::Cancelled", (int64)ELootLockerRemoteSessionLeaseStatus::Cancelled },
		{ "ELootLockerRemoteSessionLeaseStatus::Timed_out", (int64)ELootLockerRemoteSessionLeaseStatus::Timed_out },
		{ "ELootLockerRemoteSessionLeaseStatus::Failed", (int64)ELootLockerRemoteSessionLeaseStatus::Failed },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_LootLockerSDK_ELootLockerRemoteSessionLeaseStatus_Statics::Enum_MetaDataParams[] = {
		{ "Authorized.Name", "ELootLockerRemoteSessionLeaseStatus::Authorized" },
		{ "BlueprintType", "true" },
		{ "Cancelled.Name", "ELootLockerRemoteSessionLeaseStatus::Cancelled" },
		{ "Category", "LootLocker" },
		{ "Claimed.Name", "ELootLockerRemoteSessionLeaseStatus::Claimed" },
		{ "Comment", "/**\n * Possible entity kinds that catalog entries can have\n */" },
		{ "Created.Name", "ELootLockerRemoteSessionLeaseStatus::Created" },
		{ "Failed.Name", "ELootLockerRemoteSessionLeaseStatus::Failed" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerRemoteSessionRequestHandler.h" },
		{ "Timed_out.Name", "ELootLockerRemoteSessionLeaseStatus::Timed_out" },
		{ "ToolTip", "Possible entity kinds that catalog entries can have" },
		{ "Verified.Name", "ELootLockerRemoteSessionLeaseStatus::Verified" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LootLockerSDK_ELootLockerRemoteSessionLeaseStatus_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		"ELootLockerRemoteSessionLeaseStatus",
		"ELootLockerRemoteSessionLeaseStatus",
		Z_Construct_UEnum_LootLockerSDK_ELootLockerRemoteSessionLeaseStatus_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_LootLockerSDK_ELootLockerRemoteSessionLeaseStatus_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_LootLockerSDK_ELootLockerRemoteSessionLeaseStatus_Statics::Enum_MetaDataParams), Z_Construct_UEnum_LootLockerSDK_ELootLockerRemoteSessionLeaseStatus_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_LootLockerSDK_ELootLockerRemoteSessionLeaseStatus()
	{
		if (!Z_Registration_Info_UEnum_ELootLockerRemoteSessionLeaseStatus.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELootLockerRemoteSessionLeaseStatus.InnerSingleton, Z_Construct_UEnum_LootLockerSDK_ELootLockerRemoteSessionLeaseStatus_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ELootLockerRemoteSessionLeaseStatus.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerLeaseRemoteSessionRequest;
class UScriptStruct* FLootLockerLeaseRemoteSessionRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerLeaseRemoteSessionRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerLeaseRemoteSessionRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerLeaseRemoteSessionRequest, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerLeaseRemoteSessionRequest"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerLeaseRemoteSessionRequest.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerLeaseRemoteSessionRequest>()
{
	return FLootLockerLeaseRemoteSessionRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerLeaseRemoteSessionRequest_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Game_key_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Game_key;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Game_version_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Game_version;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerLeaseRemoteSessionRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "LootLocker" },
		{ "Comment", "/**\n * \n */" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerRemoteSessionRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerLeaseRemoteSessionRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerLeaseRemoteSessionRequest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerLeaseRemoteSessionRequest_Statics::NewProp_Game_key_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "Comment", "/**\n     * The Game Key configured for the game\n     */" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerRemoteSessionRequestHandler.h" },
		{ "ToolTip", "The Game Key configured for the game" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerLeaseRemoteSessionRequest_Statics::NewProp_Game_key = { "Game_key", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerLeaseRemoteSessionRequest, Game_key), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerLeaseRemoteSessionRequest_Statics::NewProp_Game_key_MetaData), Z_Construct_UScriptStruct_FLootLockerLeaseRemoteSessionRequest_Statics::NewProp_Game_key_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerLeaseRemoteSessionRequest_Statics::NewProp_Game_version_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "Comment", "/**\n     * The Game Version configured for the game\n     */" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerRemoteSessionRequestHandler.h" },
		{ "ToolTip", "The Game Version configured for the game" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerLeaseRemoteSessionRequest_Statics::NewProp_Game_version = { "Game_version", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerLeaseRemoteSessionRequest, Game_version), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerLeaseRemoteSessionRequest_Statics::NewProp_Game_version_MetaData), Z_Construct_UScriptStruct_FLootLockerLeaseRemoteSessionRequest_Statics::NewProp_Game_version_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerLeaseRemoteSessionRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerLeaseRemoteSessionRequest_Statics::NewProp_Game_key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerLeaseRemoteSessionRequest_Statics::NewProp_Game_version,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerLeaseRemoteSessionRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		&NewStructOps,
		"LootLockerLeaseRemoteSessionRequest",
		Z_Construct_UScriptStruct_FLootLockerLeaseRemoteSessionRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerLeaseRemoteSessionRequest_Statics::PropPointers),
		sizeof(FLootLockerLeaseRemoteSessionRequest),
		alignof(FLootLockerLeaseRemoteSessionRequest),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerLeaseRemoteSessionRequest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerLeaseRemoteSessionRequest_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerLeaseRemoteSessionRequest_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerLeaseRemoteSessionRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerLeaseRemoteSessionRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerLeaseRemoteSessionRequest.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerLeaseRemoteSessionRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerLeaseRemoteSessionRequest.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerStartRemoteSessionRequest;
class UScriptStruct* FLootLockerStartRemoteSessionRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerStartRemoteSessionRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerStartRemoteSessionRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerStartRemoteSessionRequest, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerStartRemoteSessionRequest"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerStartRemoteSessionRequest.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerStartRemoteSessionRequest>()
{
	return FLootLockerStartRemoteSessionRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerStartRemoteSessionRequest_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Game_key_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Game_key;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Game_version_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Game_version;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Lease_code_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Lease_code;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Nonce_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Nonce;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerStartRemoteSessionRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "LootLocker" },
		{ "Comment", "/**\n *\n */" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerRemoteSessionRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerStartRemoteSessionRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerStartRemoteSessionRequest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerStartRemoteSessionRequest_Statics::NewProp_Game_key_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "Comment", "/**\n     * The Game Key configured for the game\n     */" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerRemoteSessionRequestHandler.h" },
		{ "ToolTip", "The Game Key configured for the game" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerStartRemoteSessionRequest_Statics::NewProp_Game_key = { "Game_key", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerStartRemoteSessionRequest, Game_key), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerStartRemoteSessionRequest_Statics::NewProp_Game_key_MetaData), Z_Construct_UScriptStruct_FLootLockerStartRemoteSessionRequest_Statics::NewProp_Game_key_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerStartRemoteSessionRequest_Statics::NewProp_Game_version_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "Comment", "/**\n     * The Game Version configured for the game\n     */" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerRemoteSessionRequestHandler.h" },
		{ "ToolTip", "The Game Version configured for the game" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerStartRemoteSessionRequest_Statics::NewProp_Game_version = { "Game_version", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerStartRemoteSessionRequest, Game_version), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerStartRemoteSessionRequest_Statics::NewProp_Game_version_MetaData), Z_Construct_UScriptStruct_FLootLockerStartRemoteSessionRequest_Statics::NewProp_Game_version_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerStartRemoteSessionRequest_Statics::NewProp_Lease_code_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "Comment", "/**\n     * The lease code returned with the response when starting a lease process\n     */" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerRemoteSessionRequestHandler.h" },
		{ "ToolTip", "The lease code returned with the response when starting a lease process" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerStartRemoteSessionRequest_Statics::NewProp_Lease_code = { "Lease_code", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerStartRemoteSessionRequest, Lease_code), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerStartRemoteSessionRequest_Statics::NewProp_Lease_code_MetaData), Z_Construct_UScriptStruct_FLootLockerStartRemoteSessionRequest_Statics::NewProp_Lease_code_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerStartRemoteSessionRequest_Statics::NewProp_Nonce_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "Comment", "/**\n     * The nonce returned with the response when starting a lease process\n     */" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerRemoteSessionRequestHandler.h" },
		{ "ToolTip", "The nonce returned with the response when starting a lease process" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerStartRemoteSessionRequest_Statics::NewProp_Nonce = { "Nonce", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerStartRemoteSessionRequest, Nonce), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerStartRemoteSessionRequest_Statics::NewProp_Nonce_MetaData), Z_Construct_UScriptStruct_FLootLockerStartRemoteSessionRequest_Statics::NewProp_Nonce_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerStartRemoteSessionRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerStartRemoteSessionRequest_Statics::NewProp_Game_key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerStartRemoteSessionRequest_Statics::NewProp_Game_version,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerStartRemoteSessionRequest_Statics::NewProp_Lease_code,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerStartRemoteSessionRequest_Statics::NewProp_Nonce,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerStartRemoteSessionRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		&NewStructOps,
		"LootLockerStartRemoteSessionRequest",
		Z_Construct_UScriptStruct_FLootLockerStartRemoteSessionRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerStartRemoteSessionRequest_Statics::PropPointers),
		sizeof(FLootLockerStartRemoteSessionRequest),
		alignof(FLootLockerStartRemoteSessionRequest),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerStartRemoteSessionRequest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerStartRemoteSessionRequest_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerStartRemoteSessionRequest_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerStartRemoteSessionRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerStartRemoteSessionRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerStartRemoteSessionRequest.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerStartRemoteSessionRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerStartRemoteSessionRequest.InnerSingleton;
	}

static_assert(std::is_polymorphic<FLootLockerRefreshRemoteSessionRequest>() == std::is_polymorphic<FLootLockerBaseAuthRequest>(), "USTRUCT FLootLockerRefreshRemoteSessionRequest cannot be polymorphic unless super FLootLockerBaseAuthRequest is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerRefreshRemoteSessionRequest;
class UScriptStruct* FLootLockerRefreshRemoteSessionRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerRefreshRemoteSessionRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerRefreshRemoteSessionRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerRefreshRemoteSessionRequest, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerRefreshRemoteSessionRequest"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerRefreshRemoteSessionRequest.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerRefreshRemoteSessionRequest>()
{
	return FLootLockerRefreshRemoteSessionRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerRefreshRemoteSessionRequest_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_refresh_token_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_refresh_token;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerRefreshRemoteSessionRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerRemoteSessionRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerRefreshRemoteSessionRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerRefreshRemoteSessionRequest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerRefreshRemoteSessionRequest_Statics::NewProp_refresh_token_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerRemoteSessionRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerRefreshRemoteSessionRequest_Statics::NewProp_refresh_token = { "refresh_token", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerRefreshRemoteSessionRequest, refresh_token), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerRefreshRemoteSessionRequest_Statics::NewProp_refresh_token_MetaData), Z_Construct_UScriptStruct_FLootLockerRefreshRemoteSessionRequest_Statics::NewProp_refresh_token_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerRefreshRemoteSessionRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerRefreshRemoteSessionRequest_Statics::NewProp_refresh_token,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerRefreshRemoteSessionRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		Z_Construct_UScriptStruct_FLootLockerBaseAuthRequest,
		&NewStructOps,
		"LootLockerRefreshRemoteSessionRequest",
		Z_Construct_UScriptStruct_FLootLockerRefreshRemoteSessionRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerRefreshRemoteSessionRequest_Statics::PropPointers),
		sizeof(FLootLockerRefreshRemoteSessionRequest),
		alignof(FLootLockerRefreshRemoteSessionRequest),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerRefreshRemoteSessionRequest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerRefreshRemoteSessionRequest_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerRefreshRemoteSessionRequest_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerRefreshRemoteSessionRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerRefreshRemoteSessionRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerRefreshRemoteSessionRequest.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerRefreshRemoteSessionRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerRefreshRemoteSessionRequest.InnerSingleton;
	}

static_assert(std::is_polymorphic<FLootLockerLeaseRemoteSessionResponse>() == std::is_polymorphic<FLootLockerResponse>(), "USTRUCT FLootLockerLeaseRemoteSessionResponse cannot be polymorphic unless super FLootLockerResponse is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerLeaseRemoteSessionResponse;
class UScriptStruct* FLootLockerLeaseRemoteSessionResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerLeaseRemoteSessionResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerLeaseRemoteSessionResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerLeaseRemoteSessionResponse, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerLeaseRemoteSessionResponse"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerLeaseRemoteSessionResponse.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerLeaseRemoteSessionResponse>()
{
	return FLootLockerLeaseRemoteSessionResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerLeaseRemoteSessionResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Code_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Code;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Nonce_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Nonce;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Redirect_url_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Redirect_url;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Redirect_url_qr_base64_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Redirect_url_qr_base64;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Display_url_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Display_url;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Status_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Status_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Status;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerLeaseRemoteSessionResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "LootLocker" },
		{ "Comment", "/**\n *\n */" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerRemoteSessionRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerLeaseRemoteSessionResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerLeaseRemoteSessionResponse>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerLeaseRemoteSessionResponse_Statics::NewProp_Code_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "Comment", "/**\n     * The unique code for this leasing process, this is what identifies the leasing process and that is used to interact with it\n     */" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerRemoteSessionRequestHandler.h" },
		{ "ToolTip", "The unique code for this leasing process, this is what identifies the leasing process and that is used to interact with it" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerLeaseRemoteSessionResponse_Statics::NewProp_Code = { "Code", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerLeaseRemoteSessionResponse, Code), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerLeaseRemoteSessionResponse_Statics::NewProp_Code_MetaData), Z_Construct_UScriptStruct_FLootLockerLeaseRemoteSessionResponse_Statics::NewProp_Code_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerLeaseRemoteSessionResponse_Statics::NewProp_Nonce_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "Comment", "/**\n     * The nonce used to sign usage of the lease code\n     */" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerRemoteSessionRequestHandler.h" },
		{ "ToolTip", "The nonce used to sign usage of the lease code" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerLeaseRemoteSessionResponse_Statics::NewProp_Nonce = { "Nonce", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerLeaseRemoteSessionResponse, Nonce), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerLeaseRemoteSessionResponse_Statics::NewProp_Nonce_MetaData), Z_Construct_UScriptStruct_FLootLockerLeaseRemoteSessionResponse_Statics::NewProp_Nonce_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerLeaseRemoteSessionResponse_Statics::NewProp_Redirect_url_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "Comment", "/**\n     * A url with the code and nonce baked in that can be used to immediately start the remote authentication process on the device that uses it\n     */" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerRemoteSessionRequestHandler.h" },
		{ "ToolTip", "A url with the code and nonce baked in that can be used to immediately start the remote authentication process on the device that uses it" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerLeaseRemoteSessionResponse_Statics::NewProp_Redirect_url = { "Redirect_url", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerLeaseRemoteSessionResponse, Redirect_url), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerLeaseRemoteSessionResponse_Statics::NewProp_Redirect_url_MetaData), Z_Construct_UScriptStruct_FLootLockerLeaseRemoteSessionResponse_Statics::NewProp_Redirect_url_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerLeaseRemoteSessionResponse_Statics::NewProp_Redirect_url_qr_base64_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "Comment", "/**\n     * A QR code representation of the redirect_url encoded in Base64\n     */" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerRemoteSessionRequestHandler.h" },
		{ "ToolTip", "A QR code representation of the redirect_url encoded in Base64" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerLeaseRemoteSessionResponse_Statics::NewProp_Redirect_url_qr_base64 = { "Redirect_url_qr_base64", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerLeaseRemoteSessionResponse, Redirect_url_qr_base64), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerLeaseRemoteSessionResponse_Statics::NewProp_Redirect_url_qr_base64_MetaData), Z_Construct_UScriptStruct_FLootLockerLeaseRemoteSessionResponse_Statics::NewProp_Redirect_url_qr_base64_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerLeaseRemoteSessionResponse_Statics::NewProp_Display_url_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "Comment", "/**\n     * A clean version of the redirect_url without the code visible that you can use in your UI\n     */" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerRemoteSessionRequestHandler.h" },
		{ "ToolTip", "A clean version of the redirect_url without the code visible that you can use in your UI" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerLeaseRemoteSessionResponse_Statics::NewProp_Display_url = { "Display_url", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerLeaseRemoteSessionResponse, Display_url), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerLeaseRemoteSessionResponse_Statics::NewProp_Display_url_MetaData), Z_Construct_UScriptStruct_FLootLockerLeaseRemoteSessionResponse_Statics::NewProp_Display_url_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLootLockerLeaseRemoteSessionResponse_Statics::NewProp_Status_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerLeaseRemoteSessionResponse_Statics::NewProp_Status_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "Comment", "/**\n     * The status of this lease process\n     */" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerRemoteSessionRequestHandler.h" },
		{ "ToolTip", "The status of this lease process" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FLootLockerLeaseRemoteSessionResponse_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerLeaseRemoteSessionResponse, Status), Z_Construct_UEnum_LootLockerSDK_ELootLockerRemoteSessionLeaseStatus, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerLeaseRemoteSessionResponse_Statics::NewProp_Status_MetaData), Z_Construct_UScriptStruct_FLootLockerLeaseRemoteSessionResponse_Statics::NewProp_Status_MetaData) }; // 2659544955
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerLeaseRemoteSessionResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerLeaseRemoteSessionResponse_Statics::NewProp_Code,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerLeaseRemoteSessionResponse_Statics::NewProp_Nonce,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerLeaseRemoteSessionResponse_Statics::NewProp_Redirect_url,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerLeaseRemoteSessionResponse_Statics::NewProp_Redirect_url_qr_base64,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerLeaseRemoteSessionResponse_Statics::NewProp_Display_url,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerLeaseRemoteSessionResponse_Statics::NewProp_Status_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerLeaseRemoteSessionResponse_Statics::NewProp_Status,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerLeaseRemoteSessionResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		Z_Construct_UScriptStruct_FLootLockerResponse,
		&NewStructOps,
		"LootLockerLeaseRemoteSessionResponse",
		Z_Construct_UScriptStruct_FLootLockerLeaseRemoteSessionResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerLeaseRemoteSessionResponse_Statics::PropPointers),
		sizeof(FLootLockerLeaseRemoteSessionResponse),
		alignof(FLootLockerLeaseRemoteSessionResponse),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerLeaseRemoteSessionResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerLeaseRemoteSessionResponse_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerLeaseRemoteSessionResponse_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerLeaseRemoteSessionResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerLeaseRemoteSessionResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerLeaseRemoteSessionResponse.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerLeaseRemoteSessionResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerLeaseRemoteSessionResponse.InnerSingleton;
	}

static_assert(std::is_polymorphic<FLootLockerRemoteSessionStatusPollingResponse>() == std::is_polymorphic<FLootLockerResponse>(), "USTRUCT FLootLockerRemoteSessionStatusPollingResponse cannot be polymorphic unless super FLootLockerResponse is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerRemoteSessionStatusPollingResponse;
class UScriptStruct* FLootLockerRemoteSessionStatusPollingResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerRemoteSessionStatusPollingResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerRemoteSessionStatusPollingResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerRemoteSessionStatusPollingResponse, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerRemoteSessionStatusPollingResponse"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerRemoteSessionStatusPollingResponse.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerRemoteSessionStatusPollingResponse>()
{
	return FLootLockerRemoteSessionStatusPollingResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerRemoteSessionStatusPollingResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_Lease_status_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Lease_status_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Lease_status;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerRemoteSessionStatusPollingResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "LootLocker" },
		{ "Comment", "/**\n *\n */" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerRemoteSessionRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerRemoteSessionStatusPollingResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerRemoteSessionStatusPollingResponse>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLootLockerRemoteSessionStatusPollingResponse_Statics::NewProp_Lease_status_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerRemoteSessionStatusPollingResponse_Statics::NewProp_Lease_status_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "Comment", "/**\n     * The current status of this lease process.\n     */" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerRemoteSessionRequestHandler.h" },
		{ "ToolTip", "The current status of this lease process." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FLootLockerRemoteSessionStatusPollingResponse_Statics::NewProp_Lease_status = { "Lease_status", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerRemoteSessionStatusPollingResponse, Lease_status), Z_Construct_UEnum_LootLockerSDK_ELootLockerRemoteSessionLeaseStatus, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerRemoteSessionStatusPollingResponse_Statics::NewProp_Lease_status_MetaData), Z_Construct_UScriptStruct_FLootLockerRemoteSessionStatusPollingResponse_Statics::NewProp_Lease_status_MetaData) }; // 2659544955
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerRemoteSessionStatusPollingResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerRemoteSessionStatusPollingResponse_Statics::NewProp_Lease_status_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerRemoteSessionStatusPollingResponse_Statics::NewProp_Lease_status,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerRemoteSessionStatusPollingResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		Z_Construct_UScriptStruct_FLootLockerResponse,
		&NewStructOps,
		"LootLockerRemoteSessionStatusPollingResponse",
		Z_Construct_UScriptStruct_FLootLockerRemoteSessionStatusPollingResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerRemoteSessionStatusPollingResponse_Statics::PropPointers),
		sizeof(FLootLockerRemoteSessionStatusPollingResponse),
		alignof(FLootLockerRemoteSessionStatusPollingResponse),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerRemoteSessionStatusPollingResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerRemoteSessionStatusPollingResponse_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerRemoteSessionStatusPollingResponse_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerRemoteSessionStatusPollingResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerRemoteSessionStatusPollingResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerRemoteSessionStatusPollingResponse.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerRemoteSessionStatusPollingResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerRemoteSessionStatusPollingResponse.InnerSingleton;
	}

static_assert(std::is_polymorphic<FLootLockerStartRemoteSessionResponse>() == std::is_polymorphic<FLootLockerAuthenticationResponse>(), "USTRUCT FLootLockerStartRemoteSessionResponse cannot be polymorphic unless super FLootLockerAuthenticationResponse is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerStartRemoteSessionResponse;
class UScriptStruct* FLootLockerStartRemoteSessionResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerStartRemoteSessionResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerStartRemoteSessionResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerStartRemoteSessionResponse, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerStartRemoteSessionResponse"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerStartRemoteSessionResponse.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerStartRemoteSessionResponse>()
{
	return FLootLockerStartRemoteSessionResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerStartRemoteSessionResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_Lease_Status_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Lease_Status_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Lease_Status;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Refresh_token_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Refresh_token;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerStartRemoteSessionResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "LootLocker" },
		{ "Comment", "/**\n *\n */" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerRemoteSessionRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerStartRemoteSessionResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerStartRemoteSessionResponse>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLootLockerStartRemoteSessionResponse_Statics::NewProp_Lease_Status_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerStartRemoteSessionResponse_Statics::NewProp_Lease_Status_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "Comment", "/**\n     * The current status of this lease process. If this is not of the status Authorized, the rest of the fields in this object will be empty.\n     */" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerRemoteSessionRequestHandler.h" },
		{ "ToolTip", "The current status of this lease process. If this is not of the status Authorized, the rest of the fields in this object will be empty." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FLootLockerStartRemoteSessionResponse_Statics::NewProp_Lease_Status = { "Lease_Status", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerStartRemoteSessionResponse, Lease_Status), Z_Construct_UEnum_LootLockerSDK_ELootLockerRemoteSessionLeaseStatus, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerStartRemoteSessionResponse_Statics::NewProp_Lease_Status_MetaData), Z_Construct_UScriptStruct_FLootLockerStartRemoteSessionResponse_Statics::NewProp_Lease_Status_MetaData) }; // 2659544955
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerStartRemoteSessionResponse_Statics::NewProp_Refresh_token_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "Comment", "/**\n     * A refresh token that can be used to refresh the remote session instead of signing in each time the session token expires\n     */" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerRemoteSessionRequestHandler.h" },
		{ "ToolTip", "A refresh token that can be used to refresh the remote session instead of signing in each time the session token expires" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerStartRemoteSessionResponse_Statics::NewProp_Refresh_token = { "Refresh_token", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerStartRemoteSessionResponse, Refresh_token), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerStartRemoteSessionResponse_Statics::NewProp_Refresh_token_MetaData), Z_Construct_UScriptStruct_FLootLockerStartRemoteSessionResponse_Statics::NewProp_Refresh_token_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerStartRemoteSessionResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerStartRemoteSessionResponse_Statics::NewProp_Lease_Status_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerStartRemoteSessionResponse_Statics::NewProp_Lease_Status,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerStartRemoteSessionResponse_Statics::NewProp_Refresh_token,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerStartRemoteSessionResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		Z_Construct_UScriptStruct_FLootLockerAuthenticationResponse,
		&NewStructOps,
		"LootLockerStartRemoteSessionResponse",
		Z_Construct_UScriptStruct_FLootLockerStartRemoteSessionResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerStartRemoteSessionResponse_Statics::PropPointers),
		sizeof(FLootLockerStartRemoteSessionResponse),
		alignof(FLootLockerStartRemoteSessionResponse),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerStartRemoteSessionResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerStartRemoteSessionResponse_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerStartRemoteSessionResponse_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerStartRemoteSessionResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerStartRemoteSessionResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerStartRemoteSessionResponse.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerStartRemoteSessionResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerStartRemoteSessionResponse.InnerSingleton;
	}

static_assert(std::is_polymorphic<FLootLockerRefreshRemoteSessionResponse>() == std::is_polymorphic<FLootLockerAuthenticationResponse>(), "USTRUCT FLootLockerRefreshRemoteSessionResponse cannot be polymorphic unless super FLootLockerAuthenticationResponse is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerRefreshRemoteSessionResponse;
class UScriptStruct* FLootLockerRefreshRemoteSessionResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerRefreshRemoteSessionResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerRefreshRemoteSessionResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerRefreshRemoteSessionResponse, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerRefreshRemoteSessionResponse"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerRefreshRemoteSessionResponse.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerRefreshRemoteSessionResponse>()
{
	return FLootLockerRefreshRemoteSessionResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerRefreshRemoteSessionResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Refresh_token_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Refresh_token;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerRefreshRemoteSessionResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "LootLocker" },
		{ "Comment", "/**\n *\n */" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerRemoteSessionRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerRefreshRemoteSessionResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerRefreshRemoteSessionResponse>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerRefreshRemoteSessionResponse_Statics::NewProp_Refresh_token_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "Comment", "/**\n     * A refresh token that can be used to refresh the remote session instead of signing in each time the session token expires\n     */" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerRemoteSessionRequestHandler.h" },
		{ "ToolTip", "A refresh token that can be used to refresh the remote session instead of signing in each time the session token expires" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerRefreshRemoteSessionResponse_Statics::NewProp_Refresh_token = { "Refresh_token", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerRefreshRemoteSessionResponse, Refresh_token), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerRefreshRemoteSessionResponse_Statics::NewProp_Refresh_token_MetaData), Z_Construct_UScriptStruct_FLootLockerRefreshRemoteSessionResponse_Statics::NewProp_Refresh_token_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerRefreshRemoteSessionResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerRefreshRemoteSessionResponse_Statics::NewProp_Refresh_token,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerRefreshRemoteSessionResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		Z_Construct_UScriptStruct_FLootLockerAuthenticationResponse,
		&NewStructOps,
		"LootLockerRefreshRemoteSessionResponse",
		Z_Construct_UScriptStruct_FLootLockerRefreshRemoteSessionResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerRefreshRemoteSessionResponse_Statics::PropPointers),
		sizeof(FLootLockerRefreshRemoteSessionResponse),
		alignof(FLootLockerRefreshRemoteSessionResponse),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerRefreshRemoteSessionResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerRefreshRemoteSessionResponse_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerRefreshRemoteSessionResponse_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerRefreshRemoteSessionResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerRefreshRemoteSessionResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerRefreshRemoteSessionResponse.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerRefreshRemoteSessionResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerRefreshRemoteSessionResponse.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerLeaseRemoteSessionResponseDelegateBP__DelegateSignature_Statics
	{
		struct _Script_LootLockerSDK_eventLootLockerLeaseRemoteSessionResponseDelegateBP_Parms
		{
			FLootLockerLeaseRemoteSessionResponse Response;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Response;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerLeaseRemoteSessionResponseDelegateBP__DelegateSignature_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LootLockerSDK_eventLootLockerLeaseRemoteSessionResponseDelegateBP_Parms, Response), Z_Construct_UScriptStruct_FLootLockerLeaseRemoteSessionResponse, METADATA_PARAMS(0, nullptr) }; // 3152955909
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerLeaseRemoteSessionResponseDelegateBP__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerLeaseRemoteSessionResponseDelegateBP__DelegateSignature_Statics::NewProp_Response,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerLeaseRemoteSessionResponseDelegateBP__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n * Blueprint response delegate for receiving the remote session lease information\n */" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerRemoteSessionRequestHandler.h" },
		{ "ToolTip", "Blueprint response delegate for receiving the remote session lease information" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerLeaseRemoteSessionResponseDelegateBP__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LootLockerSDK, nullptr, "LootLockerLeaseRemoteSessionResponseDelegateBP__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerLeaseRemoteSessionResponseDelegateBP__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerLeaseRemoteSessionResponseDelegateBP__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerLeaseRemoteSessionResponseDelegateBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventLootLockerLeaseRemoteSessionResponseDelegateBP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerLeaseRemoteSessionResponseDelegateBP__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerLeaseRemoteSessionResponseDelegateBP__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerLeaseRemoteSessionResponseDelegateBP__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerLeaseRemoteSessionResponseDelegateBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventLootLockerLeaseRemoteSessionResponseDelegateBP_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerLeaseRemoteSessionResponseDelegateBP__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerLeaseRemoteSessionResponseDelegateBP__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FLootLockerLeaseRemoteSessionResponseDelegateBP_DelegateWrapper(const FScriptDelegate& LootLockerLeaseRemoteSessionResponseDelegateBP, FLootLockerLeaseRemoteSessionResponse Response)
{
	struct _Script_LootLockerSDK_eventLootLockerLeaseRemoteSessionResponseDelegateBP_Parms
	{
		FLootLockerLeaseRemoteSessionResponse Response;
	};
	_Script_LootLockerSDK_eventLootLockerLeaseRemoteSessionResponseDelegateBP_Parms Parms;
	Parms.Response=Response;
	LootLockerLeaseRemoteSessionResponseDelegateBP.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerRemoteSessionStatusPollingResponseDelegateBP__DelegateSignature_Statics
	{
		struct _Script_LootLockerSDK_eventLootLockerRemoteSessionStatusPollingResponseDelegateBP_Parms
		{
			FLootLockerRemoteSessionStatusPollingResponse Response;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Response;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerRemoteSessionStatusPollingResponseDelegateBP__DelegateSignature_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LootLockerSDK_eventLootLockerRemoteSessionStatusPollingResponseDelegateBP_Parms, Response), Z_Construct_UScriptStruct_FLootLockerRemoteSessionStatusPollingResponse, METADATA_PARAMS(0, nullptr) }; // 2916781872
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerRemoteSessionStatusPollingResponseDelegateBP__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerRemoteSessionStatusPollingResponseDelegateBP__DelegateSignature_Statics::NewProp_Response,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerRemoteSessionStatusPollingResponseDelegateBP__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n * Blueprint response delegate for receiving continual polling updates\n */" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerRemoteSessionRequestHandler.h" },
		{ "ToolTip", "Blueprint response delegate for receiving continual polling updates" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerRemoteSessionStatusPollingResponseDelegateBP__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LootLockerSDK, nullptr, "LootLockerRemoteSessionStatusPollingResponseDelegateBP__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerRemoteSessionStatusPollingResponseDelegateBP__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerRemoteSessionStatusPollingResponseDelegateBP__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerRemoteSessionStatusPollingResponseDelegateBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventLootLockerRemoteSessionStatusPollingResponseDelegateBP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerRemoteSessionStatusPollingResponseDelegateBP__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerRemoteSessionStatusPollingResponseDelegateBP__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerRemoteSessionStatusPollingResponseDelegateBP__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerRemoteSessionStatusPollingResponseDelegateBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventLootLockerRemoteSessionStatusPollingResponseDelegateBP_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerRemoteSessionStatusPollingResponseDelegateBP__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerRemoteSessionStatusPollingResponseDelegateBP__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FLootLockerRemoteSessionStatusPollingResponseDelegateBP_DelegateWrapper(const FScriptDelegate& LootLockerRemoteSessionStatusPollingResponseDelegateBP, FLootLockerRemoteSessionStatusPollingResponse Response)
{
	struct _Script_LootLockerSDK_eventLootLockerRemoteSessionStatusPollingResponseDelegateBP_Parms
	{
		FLootLockerRemoteSessionStatusPollingResponse Response;
	};
	_Script_LootLockerSDK_eventLootLockerRemoteSessionStatusPollingResponseDelegateBP_Parms Parms;
	Parms.Response=Response;
	LootLockerRemoteSessionStatusPollingResponseDelegateBP.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerStartRemoteSessionResponseDelegateBP__DelegateSignature_Statics
	{
		struct _Script_LootLockerSDK_eventLootLockerStartRemoteSessionResponseDelegateBP_Parms
		{
			FLootLockerStartRemoteSessionResponse Response;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Response;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerStartRemoteSessionResponseDelegateBP__DelegateSignature_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LootLockerSDK_eventLootLockerStartRemoteSessionResponseDelegateBP_Parms, Response), Z_Construct_UScriptStruct_FLootLockerStartRemoteSessionResponse, METADATA_PARAMS(0, nullptr) }; // 2063005229
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerStartRemoteSessionResponseDelegateBP__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerStartRemoteSessionResponseDelegateBP__DelegateSignature_Statics::NewProp_Response,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerStartRemoteSessionResponseDelegateBP__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n * Blueprint response delegate for receiving the finalized remote session data (whether successful or not)\n */" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerRemoteSessionRequestHandler.h" },
		{ "ToolTip", "Blueprint response delegate for receiving the finalized remote session data (whether successful or not)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerStartRemoteSessionResponseDelegateBP__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LootLockerSDK, nullptr, "LootLockerStartRemoteSessionResponseDelegateBP__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerStartRemoteSessionResponseDelegateBP__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerStartRemoteSessionResponseDelegateBP__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerStartRemoteSessionResponseDelegateBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventLootLockerStartRemoteSessionResponseDelegateBP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerStartRemoteSessionResponseDelegateBP__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerStartRemoteSessionResponseDelegateBP__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerStartRemoteSessionResponseDelegateBP__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerStartRemoteSessionResponseDelegateBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventLootLockerStartRemoteSessionResponseDelegateBP_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerStartRemoteSessionResponseDelegateBP__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerStartRemoteSessionResponseDelegateBP__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FLootLockerStartRemoteSessionResponseDelegateBP_DelegateWrapper(const FScriptDelegate& LootLockerStartRemoteSessionResponseDelegateBP, FLootLockerStartRemoteSessionResponse Response)
{
	struct _Script_LootLockerSDK_eventLootLockerStartRemoteSessionResponseDelegateBP_Parms
	{
		FLootLockerStartRemoteSessionResponse Response;
	};
	_Script_LootLockerSDK_eventLootLockerStartRemoteSessionResponseDelegateBP_Parms Parms;
	Parms.Response=Response;
	LootLockerStartRemoteSessionResponseDelegateBP.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerRefreshRemoteSessionResponseDelegateBP__DelegateSignature_Statics
	{
		struct _Script_LootLockerSDK_eventLootLockerRefreshRemoteSessionResponseDelegateBP_Parms
		{
			FLootLockerRefreshRemoteSessionResponse Response;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Response;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerRefreshRemoteSessionResponseDelegateBP__DelegateSignature_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LootLockerSDK_eventLootLockerRefreshRemoteSessionResponseDelegateBP_Parms, Response), Z_Construct_UScriptStruct_FLootLockerRefreshRemoteSessionResponse, METADATA_PARAMS(0, nullptr) }; // 3312674366
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerRefreshRemoteSessionResponseDelegateBP__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerRefreshRemoteSessionResponseDelegateBP__DelegateSignature_Statics::NewProp_Response,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerRefreshRemoteSessionResponseDelegateBP__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n * Blueprint response delegate for receiving the refreshed remote session\n */" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerRemoteSessionRequestHandler.h" },
		{ "ToolTip", "Blueprint response delegate for receiving the refreshed remote session" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerRefreshRemoteSessionResponseDelegateBP__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LootLockerSDK, nullptr, "LootLockerRefreshRemoteSessionResponseDelegateBP__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerRefreshRemoteSessionResponseDelegateBP__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerRefreshRemoteSessionResponseDelegateBP__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerRefreshRemoteSessionResponseDelegateBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventLootLockerRefreshRemoteSessionResponseDelegateBP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerRefreshRemoteSessionResponseDelegateBP__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerRefreshRemoteSessionResponseDelegateBP__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerRefreshRemoteSessionResponseDelegateBP__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerRefreshRemoteSessionResponseDelegateBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventLootLockerRefreshRemoteSessionResponseDelegateBP_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerRefreshRemoteSessionResponseDelegateBP__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerRefreshRemoteSessionResponseDelegateBP__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FLootLockerRefreshRemoteSessionResponseDelegateBP_DelegateWrapper(const FScriptDelegate& LootLockerRefreshRemoteSessionResponseDelegateBP, FLootLockerRefreshRemoteSessionResponse Response)
{
	struct _Script_LootLockerSDK_eventLootLockerRefreshRemoteSessionResponseDelegateBP_Parms
	{
		FLootLockerRefreshRemoteSessionResponse Response;
	};
	_Script_LootLockerSDK_eventLootLockerRefreshRemoteSessionResponseDelegateBP_Parms Parms;
	Parms.Response=Response;
	LootLockerRefreshRemoteSessionResponseDelegateBP.ProcessDelegate<UObject>(&Parms);
}
	void ULootLockerRemoteSessionRequestHandler::StaticRegisterNativesULootLockerRemoteSessionRequestHandler()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULootLockerRemoteSessionRequestHandler);
	UClass* Z_Construct_UClass_ULootLockerRemoteSessionRequestHandler_NoRegister()
	{
		return ULootLockerRemoteSessionRequestHandler::StaticClass();
	}
	struct Z_Construct_UClass_ULootLockerRemoteSessionRequestHandler_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULootLockerRemoteSessionRequestHandler_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULootLockerRemoteSessionRequestHandler_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULootLockerRemoteSessionRequestHandler_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GameAPI/LootLockerRemoteSessionRequestHandler.h" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerRemoteSessionRequestHandler.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULootLockerRemoteSessionRequestHandler_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULootLockerRemoteSessionRequestHandler>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULootLockerRemoteSessionRequestHandler_Statics::ClassParams = {
		&ULootLockerRemoteSessionRequestHandler::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULootLockerRemoteSessionRequestHandler_Statics::Class_MetaDataParams), Z_Construct_UClass_ULootLockerRemoteSessionRequestHandler_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ULootLockerRemoteSessionRequestHandler()
	{
		if (!Z_Registration_Info_UClass_ULootLockerRemoteSessionRequestHandler.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULootLockerRemoteSessionRequestHandler.OuterSingleton, Z_Construct_UClass_ULootLockerRemoteSessionRequestHandler_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULootLockerRemoteSessionRequestHandler.OuterSingleton;
	}
	template<> LOOTLOCKERSDK_API UClass* StaticClass<ULootLockerRemoteSessionRequestHandler>()
	{
		return ULootLockerRemoteSessionRequestHandler::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULootLockerRemoteSessionRequestHandler);
	ULootLockerRemoteSessionRequestHandler::~ULootLockerRemoteSessionRequestHandler() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerRemoteSessionRequestHandler_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerRemoteSessionRequestHandler_h_Statics::EnumInfo[] = {
		{ ELootLockerRemoteSessionLeaseStatus_StaticEnum, TEXT("ELootLockerRemoteSessionLeaseStatus"), &Z_Registration_Info_UEnum_ELootLockerRemoteSessionLeaseStatus, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2659544955U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerRemoteSessionRequestHandler_h_Statics::ScriptStructInfo[] = {
		{ FLootLockerLeaseRemoteSessionRequest::StaticStruct, Z_Construct_UScriptStruct_FLootLockerLeaseRemoteSessionRequest_Statics::NewStructOps, TEXT("LootLockerLeaseRemoteSessionRequest"), &Z_Registration_Info_UScriptStruct_LootLockerLeaseRemoteSessionRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerLeaseRemoteSessionRequest), 700960024U) },
		{ FLootLockerStartRemoteSessionRequest::StaticStruct, Z_Construct_UScriptStruct_FLootLockerStartRemoteSessionRequest_Statics::NewStructOps, TEXT("LootLockerStartRemoteSessionRequest"), &Z_Registration_Info_UScriptStruct_LootLockerStartRemoteSessionRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerStartRemoteSessionRequest), 3265065101U) },
		{ FLootLockerRefreshRemoteSessionRequest::StaticStruct, Z_Construct_UScriptStruct_FLootLockerRefreshRemoteSessionRequest_Statics::NewStructOps, TEXT("LootLockerRefreshRemoteSessionRequest"), &Z_Registration_Info_UScriptStruct_LootLockerRefreshRemoteSessionRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerRefreshRemoteSessionRequest), 844086018U) },
		{ FLootLockerLeaseRemoteSessionResponse::StaticStruct, Z_Construct_UScriptStruct_FLootLockerLeaseRemoteSessionResponse_Statics::NewStructOps, TEXT("LootLockerLeaseRemoteSessionResponse"), &Z_Registration_Info_UScriptStruct_LootLockerLeaseRemoteSessionResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerLeaseRemoteSessionResponse), 3152955909U) },
		{ FLootLockerRemoteSessionStatusPollingResponse::StaticStruct, Z_Construct_UScriptStruct_FLootLockerRemoteSessionStatusPollingResponse_Statics::NewStructOps, TEXT("LootLockerRemoteSessionStatusPollingResponse"), &Z_Registration_Info_UScriptStruct_LootLockerRemoteSessionStatusPollingResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerRemoteSessionStatusPollingResponse), 2916781872U) },
		{ FLootLockerStartRemoteSessionResponse::StaticStruct, Z_Construct_UScriptStruct_FLootLockerStartRemoteSessionResponse_Statics::NewStructOps, TEXT("LootLockerStartRemoteSessionResponse"), &Z_Registration_Info_UScriptStruct_LootLockerStartRemoteSessionResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerStartRemoteSessionResponse), 2063005229U) },
		{ FLootLockerRefreshRemoteSessionResponse::StaticStruct, Z_Construct_UScriptStruct_FLootLockerRefreshRemoteSessionResponse_Statics::NewStructOps, TEXT("LootLockerRefreshRemoteSessionResponse"), &Z_Registration_Info_UScriptStruct_LootLockerRefreshRemoteSessionResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerRefreshRemoteSessionResponse), 3312674366U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerRemoteSessionRequestHandler_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULootLockerRemoteSessionRequestHandler, ULootLockerRemoteSessionRequestHandler::StaticClass, TEXT("ULootLockerRemoteSessionRequestHandler"), &Z_Registration_Info_UClass_ULootLockerRemoteSessionRequestHandler, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULootLockerRemoteSessionRequestHandler), 2725705792U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerRemoteSessionRequestHandler_h_2352312091(TEXT("/Script/LootLockerSDK"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerRemoteSessionRequestHandler_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerRemoteSessionRequestHandler_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerRemoteSessionRequestHandler_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerRemoteSessionRequestHandler_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerRemoteSessionRequestHandler_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerRemoteSessionRequestHandler_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
