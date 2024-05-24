// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LootLockerSDK/Public/GameAPI/LootLockerConnectedAccountsRequestHandler.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLootLockerConnectedAccountsRequestHandler() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	LOOTLOCKERSDK_API UClass* Z_Construct_UClass_ULootLockerConnectedAccountsRequestHandler();
	LOOTLOCKERSDK_API UClass* Z_Construct_UClass_ULootLockerConnectedAccountsRequestHandler_NoRegister();
	LOOTLOCKERSDK_API UEnum* Z_Construct_UEnum_LootLockerSDK_EGoogleAccountProviderPlatform();
	LOOTLOCKERSDK_API UEnum* Z_Construct_UEnum_LootLockerSDK_ELootLockerAccountProvider();
	LOOTLOCKERSDK_API UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerAccountConnectedResponseBP__DelegateSignature();
	LOOTLOCKERSDK_API UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerListConnectedAccountsResponseBP__DelegateSignature();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerAccountConnectedResponse();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerConnectAppleRestProviderToAccountRequest();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerConnectedAccountProvider();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerConnectGoogleProviderToAccountRequest();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerConnectGoogleProviderToAccountWithPlatformRequest();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerListConnectedAccountsResponse();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerResponse();
	UPackage* Z_Construct_UPackage__Script_LootLockerSDK();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELootLockerAccountProvider;
	static UEnum* ELootLockerAccountProvider_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ELootLockerAccountProvider.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ELootLockerAccountProvider.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LootLockerSDK_ELootLockerAccountProvider, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("ELootLockerAccountProvider"));
		}
		return Z_Registration_Info_UEnum_ELootLockerAccountProvider.OuterSingleton;
	}
	template<> LOOTLOCKERSDK_API UEnum* StaticEnum<ELootLockerAccountProvider>()
	{
		return ELootLockerAccountProvider_StaticEnum();
	}
	struct Z_Construct_UEnum_LootLockerSDK_ELootLockerAccountProvider_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_LootLockerSDK_ELootLockerAccountProvider_Statics::Enumerators[] = {
		{ "ELootLockerAccountProvider::Guest", (int64)ELootLockerAccountProvider::Guest },
		{ "ELootLockerAccountProvider::Google", (int64)ELootLockerAccountProvider::Google },
		{ "ELootLockerAccountProvider::Apple", (int64)ELootLockerAccountProvider::Apple },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_LootLockerSDK_ELootLockerAccountProvider_Statics::Enum_MetaDataParams[] = {
		{ "Apple.Name", "ELootLockerAccountProvider::Apple" },
		{ "BlueprintType", "true" },
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Account providers possible to use for connected accounts\n */" },
#endif
		{ "Google.Name", "ELootLockerAccountProvider::Google" },
		{ "Guest.Name", "ELootLockerAccountProvider::Guest" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerConnectedAccountsRequestHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Account providers possible to use for connected accounts" },
#endif
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LootLockerSDK_ELootLockerAccountProvider_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		"ELootLockerAccountProvider",
		"ELootLockerAccountProvider",
		Z_Construct_UEnum_LootLockerSDK_ELootLockerAccountProvider_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_LootLockerSDK_ELootLockerAccountProvider_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_LootLockerSDK_ELootLockerAccountProvider_Statics::Enum_MetaDataParams), Z_Construct_UEnum_LootLockerSDK_ELootLockerAccountProvider_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_LootLockerSDK_ELootLockerAccountProvider()
	{
		if (!Z_Registration_Info_UEnum_ELootLockerAccountProvider.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELootLockerAccountProvider.InnerSingleton, Z_Construct_UEnum_LootLockerSDK_ELootLockerAccountProvider_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ELootLockerAccountProvider.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGoogleAccountProviderPlatform;
	static UEnum* EGoogleAccountProviderPlatform_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGoogleAccountProviderPlatform.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGoogleAccountProviderPlatform.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LootLockerSDK_EGoogleAccountProviderPlatform, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("EGoogleAccountProviderPlatform"));
		}
		return Z_Registration_Info_UEnum_EGoogleAccountProviderPlatform.OuterSingleton;
	}
	template<> LOOTLOCKERSDK_API UEnum* StaticEnum<EGoogleAccountProviderPlatform>()
	{
		return EGoogleAccountProviderPlatform_StaticEnum();
	}
	struct Z_Construct_UEnum_LootLockerSDK_EGoogleAccountProviderPlatform_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_LootLockerSDK_EGoogleAccountProviderPlatform_Statics::Enumerators[] = {
		{ "EGoogleAccountProviderPlatform::web", (int64)EGoogleAccountProviderPlatform::web },
		{ "EGoogleAccountProviderPlatform::android", (int64)EGoogleAccountProviderPlatform::android },
		{ "EGoogleAccountProviderPlatform::ios", (int64)EGoogleAccountProviderPlatform::ios },
		{ "EGoogleAccountProviderPlatform::desktop", (int64)EGoogleAccountProviderPlatform::desktop },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_LootLockerSDK_EGoogleAccountProviderPlatform_Statics::Enum_MetaDataParams[] = {
		{ "android.Name", "EGoogleAccountProviderPlatform::android" },
		{ "BlueprintType", "true" },
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Google OAuth2 Client platform\n */" },
#endif
		{ "desktop.Name", "EGoogleAccountProviderPlatform::desktop" },
		{ "ios.Name", "EGoogleAccountProviderPlatform::ios" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerConnectedAccountsRequestHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Google OAuth2 Client platform" },
#endif
		{ "web.Name", "EGoogleAccountProviderPlatform::web" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LootLockerSDK_EGoogleAccountProviderPlatform_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		"EGoogleAccountProviderPlatform",
		"EGoogleAccountProviderPlatform",
		Z_Construct_UEnum_LootLockerSDK_EGoogleAccountProviderPlatform_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_LootLockerSDK_EGoogleAccountProviderPlatform_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_LootLockerSDK_EGoogleAccountProviderPlatform_Statics::Enum_MetaDataParams), Z_Construct_UEnum_LootLockerSDK_EGoogleAccountProviderPlatform_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_LootLockerSDK_EGoogleAccountProviderPlatform()
	{
		if (!Z_Registration_Info_UEnum_EGoogleAccountProviderPlatform.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGoogleAccountProviderPlatform.InnerSingleton, Z_Construct_UEnum_LootLockerSDK_EGoogleAccountProviderPlatform_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGoogleAccountProviderPlatform.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerConnectedAccountProvider;
class UScriptStruct* FLootLockerConnectedAccountProvider::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerConnectedAccountProvider.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerConnectedAccountProvider.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerConnectedAccountProvider, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerConnectedAccountProvider"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerConnectedAccountProvider.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerConnectedAccountProvider>()
{
	return FLootLockerConnectedAccountProvider::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerConnectedAccountProvider_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_Provider_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Provider_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Provider;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Provider_name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Provider_name;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerConnectedAccountProvider_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerConnectedAccountsRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerConnectedAccountProvider_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerConnectedAccountProvider>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLootLockerConnectedAccountProvider_Statics::NewProp_Provider_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerConnectedAccountProvider_Statics::NewProp_Provider_MetaData[] = {
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * The account provider\n     */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerConnectedAccountsRequestHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The account provider" },
#endif
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FLootLockerConnectedAccountProvider_Statics::NewProp_Provider = { "Provider", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerConnectedAccountProvider, Provider), Z_Construct_UEnum_LootLockerSDK_ELootLockerAccountProvider, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerConnectedAccountProvider_Statics::NewProp_Provider_MetaData), Z_Construct_UScriptStruct_FLootLockerConnectedAccountProvider_Statics::NewProp_Provider_MetaData) }; // 2316471426
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerConnectedAccountProvider_Statics::NewProp_Provider_name_MetaData[] = {
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Decorated name of this provider to use for displaying\n     */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerConnectedAccountsRequestHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Decorated name of this provider to use for displaying" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerConnectedAccountProvider_Statics::NewProp_Provider_name = { "Provider_name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerConnectedAccountProvider, Provider_name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerConnectedAccountProvider_Statics::NewProp_Provider_name_MetaData), Z_Construct_UScriptStruct_FLootLockerConnectedAccountProvider_Statics::NewProp_Provider_name_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerConnectedAccountProvider_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerConnectedAccountProvider_Statics::NewProp_Provider_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerConnectedAccountProvider_Statics::NewProp_Provider,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerConnectedAccountProvider_Statics::NewProp_Provider_name,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerConnectedAccountProvider_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		&NewStructOps,
		"LootLockerConnectedAccountProvider",
		Z_Construct_UScriptStruct_FLootLockerConnectedAccountProvider_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerConnectedAccountProvider_Statics::PropPointers),
		sizeof(FLootLockerConnectedAccountProvider),
		alignof(FLootLockerConnectedAccountProvider),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerConnectedAccountProvider_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerConnectedAccountProvider_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerConnectedAccountProvider_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerConnectedAccountProvider()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerConnectedAccountProvider.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerConnectedAccountProvider.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerConnectedAccountProvider_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerConnectedAccountProvider.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerConnectGoogleProviderToAccountRequest;
class UScriptStruct* FLootLockerConnectGoogleProviderToAccountRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerConnectGoogleProviderToAccountRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerConnectGoogleProviderToAccountRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerConnectGoogleProviderToAccountRequest, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerConnectGoogleProviderToAccountRequest"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerConnectGoogleProviderToAccountRequest.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerConnectGoogleProviderToAccountRequest>()
{
	return FLootLockerConnectGoogleProviderToAccountRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerConnectGoogleProviderToAccountRequest_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Id_token_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Id_token;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerConnectGoogleProviderToAccountRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerConnectedAccountsRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerConnectGoogleProviderToAccountRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerConnectGoogleProviderToAccountRequest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerConnectGoogleProviderToAccountRequest_Statics::NewProp_Id_token_MetaData[] = {
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * The Id Token from google sign in\n     */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerConnectedAccountsRequestHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Id Token from google sign in" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerConnectGoogleProviderToAccountRequest_Statics::NewProp_Id_token = { "Id_token", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerConnectGoogleProviderToAccountRequest, Id_token), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerConnectGoogleProviderToAccountRequest_Statics::NewProp_Id_token_MetaData), Z_Construct_UScriptStruct_FLootLockerConnectGoogleProviderToAccountRequest_Statics::NewProp_Id_token_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerConnectGoogleProviderToAccountRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerConnectGoogleProviderToAccountRequest_Statics::NewProp_Id_token,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerConnectGoogleProviderToAccountRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		&NewStructOps,
		"LootLockerConnectGoogleProviderToAccountRequest",
		Z_Construct_UScriptStruct_FLootLockerConnectGoogleProviderToAccountRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerConnectGoogleProviderToAccountRequest_Statics::PropPointers),
		sizeof(FLootLockerConnectGoogleProviderToAccountRequest),
		alignof(FLootLockerConnectGoogleProviderToAccountRequest),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerConnectGoogleProviderToAccountRequest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerConnectGoogleProviderToAccountRequest_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerConnectGoogleProviderToAccountRequest_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerConnectGoogleProviderToAccountRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerConnectGoogleProviderToAccountRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerConnectGoogleProviderToAccountRequest.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerConnectGoogleProviderToAccountRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerConnectGoogleProviderToAccountRequest.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerConnectGoogleProviderToAccountWithPlatformRequest;
class UScriptStruct* FLootLockerConnectGoogleProviderToAccountWithPlatformRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerConnectGoogleProviderToAccountWithPlatformRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerConnectGoogleProviderToAccountWithPlatformRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerConnectGoogleProviderToAccountWithPlatformRequest, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerConnectGoogleProviderToAccountWithPlatformRequest"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerConnectGoogleProviderToAccountWithPlatformRequest.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerConnectGoogleProviderToAccountWithPlatformRequest>()
{
	return FLootLockerConnectGoogleProviderToAccountWithPlatformRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerConnectGoogleProviderToAccountWithPlatformRequest_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Id_token_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Id_token;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Platform_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Platform;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerConnectGoogleProviderToAccountWithPlatformRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerConnectedAccountsRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerConnectGoogleProviderToAccountWithPlatformRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerConnectGoogleProviderToAccountWithPlatformRequest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerConnectGoogleProviderToAccountWithPlatformRequest_Statics::NewProp_Id_token_MetaData[] = {
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * The Id Token from google sign in\n     */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerConnectedAccountsRequestHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Id Token from google sign in" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerConnectGoogleProviderToAccountWithPlatformRequest_Statics::NewProp_Id_token = { "Id_token", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerConnectGoogleProviderToAccountWithPlatformRequest, Id_token), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerConnectGoogleProviderToAccountWithPlatformRequest_Statics::NewProp_Id_token_MetaData), Z_Construct_UScriptStruct_FLootLockerConnectGoogleProviderToAccountWithPlatformRequest_Statics::NewProp_Id_token_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerConnectGoogleProviderToAccountWithPlatformRequest_Statics::NewProp_Platform_MetaData[] = {
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Google OAuth2 ClientID platform\n     */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerConnectedAccountsRequestHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Google OAuth2 ClientID platform" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerConnectGoogleProviderToAccountWithPlatformRequest_Statics::NewProp_Platform = { "Platform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerConnectGoogleProviderToAccountWithPlatformRequest, Platform), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerConnectGoogleProviderToAccountWithPlatformRequest_Statics::NewProp_Platform_MetaData), Z_Construct_UScriptStruct_FLootLockerConnectGoogleProviderToAccountWithPlatformRequest_Statics::NewProp_Platform_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerConnectGoogleProviderToAccountWithPlatformRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerConnectGoogleProviderToAccountWithPlatformRequest_Statics::NewProp_Id_token,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerConnectGoogleProviderToAccountWithPlatformRequest_Statics::NewProp_Platform,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerConnectGoogleProviderToAccountWithPlatformRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		&NewStructOps,
		"LootLockerConnectGoogleProviderToAccountWithPlatformRequest",
		Z_Construct_UScriptStruct_FLootLockerConnectGoogleProviderToAccountWithPlatformRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerConnectGoogleProviderToAccountWithPlatformRequest_Statics::PropPointers),
		sizeof(FLootLockerConnectGoogleProviderToAccountWithPlatformRequest),
		alignof(FLootLockerConnectGoogleProviderToAccountWithPlatformRequest),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerConnectGoogleProviderToAccountWithPlatformRequest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerConnectGoogleProviderToAccountWithPlatformRequest_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerConnectGoogleProviderToAccountWithPlatformRequest_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerConnectGoogleProviderToAccountWithPlatformRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerConnectGoogleProviderToAccountWithPlatformRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerConnectGoogleProviderToAccountWithPlatformRequest.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerConnectGoogleProviderToAccountWithPlatformRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerConnectGoogleProviderToAccountWithPlatformRequest.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerConnectAppleRestProviderToAccountRequest;
class UScriptStruct* FLootLockerConnectAppleRestProviderToAccountRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerConnectAppleRestProviderToAccountRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerConnectAppleRestProviderToAccountRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerConnectAppleRestProviderToAccountRequest, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerConnectAppleRestProviderToAccountRequest"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerConnectAppleRestProviderToAccountRequest.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerConnectAppleRestProviderToAccountRequest>()
{
	return FLootLockerConnectAppleRestProviderToAccountRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerConnectAppleRestProviderToAccountRequest_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Authorization_code_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Authorization_code;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerConnectAppleRestProviderToAccountRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerConnectedAccountsRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerConnectAppleRestProviderToAccountRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerConnectAppleRestProviderToAccountRequest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerConnectAppleRestProviderToAccountRequest_Statics::NewProp_Authorization_code_MetaData[] = {
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Authorization code, provided by apple during Sign In\n     */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerConnectedAccountsRequestHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Authorization code, provided by apple during Sign In" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerConnectAppleRestProviderToAccountRequest_Statics::NewProp_Authorization_code = { "Authorization_code", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerConnectAppleRestProviderToAccountRequest, Authorization_code), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerConnectAppleRestProviderToAccountRequest_Statics::NewProp_Authorization_code_MetaData), Z_Construct_UScriptStruct_FLootLockerConnectAppleRestProviderToAccountRequest_Statics::NewProp_Authorization_code_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerConnectAppleRestProviderToAccountRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerConnectAppleRestProviderToAccountRequest_Statics::NewProp_Authorization_code,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerConnectAppleRestProviderToAccountRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		&NewStructOps,
		"LootLockerConnectAppleRestProviderToAccountRequest",
		Z_Construct_UScriptStruct_FLootLockerConnectAppleRestProviderToAccountRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerConnectAppleRestProviderToAccountRequest_Statics::PropPointers),
		sizeof(FLootLockerConnectAppleRestProviderToAccountRequest),
		alignof(FLootLockerConnectAppleRestProviderToAccountRequest),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerConnectAppleRestProviderToAccountRequest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerConnectAppleRestProviderToAccountRequest_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerConnectAppleRestProviderToAccountRequest_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerConnectAppleRestProviderToAccountRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerConnectAppleRestProviderToAccountRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerConnectAppleRestProviderToAccountRequest.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerConnectAppleRestProviderToAccountRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerConnectAppleRestProviderToAccountRequest.InnerSingleton;
	}

static_assert(std::is_polymorphic<FLootLockerAccountConnectedResponse>() == std::is_polymorphic<FLootLockerResponse>(), "USTRUCT FLootLockerAccountConnectedResponse cannot be polymorphic unless super FLootLockerResponse is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerAccountConnectedResponse;
class UScriptStruct* FLootLockerAccountConnectedResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerAccountConnectedResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerAccountConnectedResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerAccountConnectedResponse, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerAccountConnectedResponse"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerAccountConnectedResponse.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerAccountConnectedResponse>()
{
	return FLootLockerAccountConnectedResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerAccountConnectedResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_Provider_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Provider_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Provider;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Provider_name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Provider_name;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerAccountConnectedResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerConnectedAccountsRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerAccountConnectedResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerAccountConnectedResponse>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLootLockerAccountConnectedResponse_Statics::NewProp_Provider_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerAccountConnectedResponse_Statics::NewProp_Provider_MetaData[] = {
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * The account provider\n     */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerConnectedAccountsRequestHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The account provider" },
#endif
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FLootLockerAccountConnectedResponse_Statics::NewProp_Provider = { "Provider", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerAccountConnectedResponse, Provider), Z_Construct_UEnum_LootLockerSDK_ELootLockerAccountProvider, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerAccountConnectedResponse_Statics::NewProp_Provider_MetaData), Z_Construct_UScriptStruct_FLootLockerAccountConnectedResponse_Statics::NewProp_Provider_MetaData) }; // 2316471426
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerAccountConnectedResponse_Statics::NewProp_Provider_name_MetaData[] = {
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Decorated name of this provider to use for displaying\n     */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerConnectedAccountsRequestHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Decorated name of this provider to use for displaying" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerAccountConnectedResponse_Statics::NewProp_Provider_name = { "Provider_name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerAccountConnectedResponse, Provider_name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerAccountConnectedResponse_Statics::NewProp_Provider_name_MetaData), Z_Construct_UScriptStruct_FLootLockerAccountConnectedResponse_Statics::NewProp_Provider_name_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerAccountConnectedResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerAccountConnectedResponse_Statics::NewProp_Provider_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerAccountConnectedResponse_Statics::NewProp_Provider,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerAccountConnectedResponse_Statics::NewProp_Provider_name,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerAccountConnectedResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		Z_Construct_UScriptStruct_FLootLockerResponse,
		&NewStructOps,
		"LootLockerAccountConnectedResponse",
		Z_Construct_UScriptStruct_FLootLockerAccountConnectedResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerAccountConnectedResponse_Statics::PropPointers),
		sizeof(FLootLockerAccountConnectedResponse),
		alignof(FLootLockerAccountConnectedResponse),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerAccountConnectedResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerAccountConnectedResponse_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerAccountConnectedResponse_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerAccountConnectedResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerAccountConnectedResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerAccountConnectedResponse.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerAccountConnectedResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerAccountConnectedResponse.InnerSingleton;
	}

static_assert(std::is_polymorphic<FLootLockerListConnectedAccountsResponse>() == std::is_polymorphic<FLootLockerResponse>(), "USTRUCT FLootLockerListConnectedAccountsResponse cannot be polymorphic unless super FLootLockerResponse is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerListConnectedAccountsResponse;
class UScriptStruct* FLootLockerListConnectedAccountsResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerListConnectedAccountsResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerListConnectedAccountsResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerListConnectedAccountsResponse, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerListConnectedAccountsResponse"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerListConnectedAccountsResponse.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerListConnectedAccountsResponse>()
{
	return FLootLockerListConnectedAccountsResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerListConnectedAccountsResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_ConnectedAccounts_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConnectedAccounts_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ConnectedAccounts;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerListConnectedAccountsResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerConnectedAccountsRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerListConnectedAccountsResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerListConnectedAccountsResponse>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLootLockerListConnectedAccountsResponse_Statics::NewProp_ConnectedAccounts_Inner = { "ConnectedAccounts", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLootLockerConnectedAccountProvider, METADATA_PARAMS(0, nullptr) }; // 4009437952
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerListConnectedAccountsResponse_Statics::NewProp_ConnectedAccounts_MetaData[] = {
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * List of the accounts connected (allowed to start sessions for) to this LootLocker account\n     */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerConnectedAccountsRequestHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of the accounts connected (allowed to start sessions for) to this LootLocker account" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLootLockerListConnectedAccountsResponse_Statics::NewProp_ConnectedAccounts = { "ConnectedAccounts", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerListConnectedAccountsResponse, ConnectedAccounts), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerListConnectedAccountsResponse_Statics::NewProp_ConnectedAccounts_MetaData), Z_Construct_UScriptStruct_FLootLockerListConnectedAccountsResponse_Statics::NewProp_ConnectedAccounts_MetaData) }; // 4009437952
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerListConnectedAccountsResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerListConnectedAccountsResponse_Statics::NewProp_ConnectedAccounts_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerListConnectedAccountsResponse_Statics::NewProp_ConnectedAccounts,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerListConnectedAccountsResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		Z_Construct_UScriptStruct_FLootLockerResponse,
		&NewStructOps,
		"LootLockerListConnectedAccountsResponse",
		Z_Construct_UScriptStruct_FLootLockerListConnectedAccountsResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerListConnectedAccountsResponse_Statics::PropPointers),
		sizeof(FLootLockerListConnectedAccountsResponse),
		alignof(FLootLockerListConnectedAccountsResponse),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerListConnectedAccountsResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerListConnectedAccountsResponse_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerListConnectedAccountsResponse_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerListConnectedAccountsResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerListConnectedAccountsResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerListConnectedAccountsResponse.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerListConnectedAccountsResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerListConnectedAccountsResponse.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerAccountConnectedResponseBP__DelegateSignature_Statics
	{
		struct _Script_LootLockerSDK_eventLootLockerAccountConnectedResponseBP_Parms
		{
			FLootLockerAccountConnectedResponse Response;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Response;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerAccountConnectedResponseBP__DelegateSignature_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LootLockerSDK_eventLootLockerAccountConnectedResponseBP_Parms, Response), Z_Construct_UScriptStruct_FLootLockerAccountConnectedResponse, METADATA_PARAMS(0, nullptr) }; // 257069676
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerAccountConnectedResponseBP__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerAccountConnectedResponseBP__DelegateSignature_Statics::NewProp_Response,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerAccountConnectedResponseBP__DelegateSignature_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Blueprint response delegate for connecting a provider to an account\n */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerConnectedAccountsRequestHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blueprint response delegate for connecting a provider to an account" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerAccountConnectedResponseBP__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LootLockerSDK, nullptr, "LootLockerAccountConnectedResponseBP__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerAccountConnectedResponseBP__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerAccountConnectedResponseBP__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerAccountConnectedResponseBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventLootLockerAccountConnectedResponseBP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerAccountConnectedResponseBP__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerAccountConnectedResponseBP__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerAccountConnectedResponseBP__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerAccountConnectedResponseBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventLootLockerAccountConnectedResponseBP_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerAccountConnectedResponseBP__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerAccountConnectedResponseBP__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FLootLockerAccountConnectedResponseBP_DelegateWrapper(const FScriptDelegate& LootLockerAccountConnectedResponseBP, FLootLockerAccountConnectedResponse Response)
{
	struct _Script_LootLockerSDK_eventLootLockerAccountConnectedResponseBP_Parms
	{
		FLootLockerAccountConnectedResponse Response;
	};
	_Script_LootLockerSDK_eventLootLockerAccountConnectedResponseBP_Parms Parms;
	Parms.Response=Response;
	LootLockerAccountConnectedResponseBP.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerListConnectedAccountsResponseBP__DelegateSignature_Statics
	{
		struct _Script_LootLockerSDK_eventLootLockerListConnectedAccountsResponseBP_Parms
		{
			FLootLockerListConnectedAccountsResponse Response;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Response;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerListConnectedAccountsResponseBP__DelegateSignature_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LootLockerSDK_eventLootLockerListConnectedAccountsResponseBP_Parms, Response), Z_Construct_UScriptStruct_FLootLockerListConnectedAccountsResponse, METADATA_PARAMS(0, nullptr) }; // 1720873456
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerListConnectedAccountsResponseBP__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerListConnectedAccountsResponseBP__DelegateSignature_Statics::NewProp_Response,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerListConnectedAccountsResponseBP__DelegateSignature_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Blueprint response delegate for listing connected accounts\n */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerConnectedAccountsRequestHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blueprint response delegate for listing connected accounts" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerListConnectedAccountsResponseBP__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LootLockerSDK, nullptr, "LootLockerListConnectedAccountsResponseBP__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerListConnectedAccountsResponseBP__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerListConnectedAccountsResponseBP__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerListConnectedAccountsResponseBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventLootLockerListConnectedAccountsResponseBP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerListConnectedAccountsResponseBP__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerListConnectedAccountsResponseBP__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerListConnectedAccountsResponseBP__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerListConnectedAccountsResponseBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventLootLockerListConnectedAccountsResponseBP_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerListConnectedAccountsResponseBP__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerListConnectedAccountsResponseBP__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FLootLockerListConnectedAccountsResponseBP_DelegateWrapper(const FScriptDelegate& LootLockerListConnectedAccountsResponseBP, FLootLockerListConnectedAccountsResponse Response)
{
	struct _Script_LootLockerSDK_eventLootLockerListConnectedAccountsResponseBP_Parms
	{
		FLootLockerListConnectedAccountsResponse Response;
	};
	_Script_LootLockerSDK_eventLootLockerListConnectedAccountsResponseBP_Parms Parms;
	Parms.Response=Response;
	LootLockerListConnectedAccountsResponseBP.ProcessDelegate<UObject>(&Parms);
}
	void ULootLockerConnectedAccountsRequestHandler::StaticRegisterNativesULootLockerConnectedAccountsRequestHandler()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULootLockerConnectedAccountsRequestHandler);
	UClass* Z_Construct_UClass_ULootLockerConnectedAccountsRequestHandler_NoRegister()
	{
		return ULootLockerConnectedAccountsRequestHandler::StaticClass();
	}
	struct Z_Construct_UClass_ULootLockerConnectedAccountsRequestHandler_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULootLockerConnectedAccountsRequestHandler_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULootLockerConnectedAccountsRequestHandler_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULootLockerConnectedAccountsRequestHandler_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//==================================================\n// API Class Definition\n//==================================================\n" },
#endif
		{ "IncludePath", "GameAPI/LootLockerConnectedAccountsRequestHandler.h" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerConnectedAccountsRequestHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "API Class Definition" },
#endif
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULootLockerConnectedAccountsRequestHandler_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULootLockerConnectedAccountsRequestHandler>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULootLockerConnectedAccountsRequestHandler_Statics::ClassParams = {
		&ULootLockerConnectedAccountsRequestHandler::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULootLockerConnectedAccountsRequestHandler_Statics::Class_MetaDataParams), Z_Construct_UClass_ULootLockerConnectedAccountsRequestHandler_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ULootLockerConnectedAccountsRequestHandler()
	{
		if (!Z_Registration_Info_UClass_ULootLockerConnectedAccountsRequestHandler.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULootLockerConnectedAccountsRequestHandler.OuterSingleton, Z_Construct_UClass_ULootLockerConnectedAccountsRequestHandler_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULootLockerConnectedAccountsRequestHandler.OuterSingleton;
	}
	template<> LOOTLOCKERSDK_API UClass* StaticClass<ULootLockerConnectedAccountsRequestHandler>()
	{
		return ULootLockerConnectedAccountsRequestHandler::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULootLockerConnectedAccountsRequestHandler);
	ULootLockerConnectedAccountsRequestHandler::~ULootLockerConnectedAccountsRequestHandler() {}
	struct Z_CompiledInDeferFile_FID_Projects_cicadashell_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerConnectedAccountsRequestHandler_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_cicadashell_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerConnectedAccountsRequestHandler_h_Statics::EnumInfo[] = {
		{ ELootLockerAccountProvider_StaticEnum, TEXT("ELootLockerAccountProvider"), &Z_Registration_Info_UEnum_ELootLockerAccountProvider, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2316471426U) },
		{ EGoogleAccountProviderPlatform_StaticEnum, TEXT("EGoogleAccountProviderPlatform"), &Z_Registration_Info_UEnum_EGoogleAccountProviderPlatform, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3315947019U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_cicadashell_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerConnectedAccountsRequestHandler_h_Statics::ScriptStructInfo[] = {
		{ FLootLockerConnectedAccountProvider::StaticStruct, Z_Construct_UScriptStruct_FLootLockerConnectedAccountProvider_Statics::NewStructOps, TEXT("LootLockerConnectedAccountProvider"), &Z_Registration_Info_UScriptStruct_LootLockerConnectedAccountProvider, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerConnectedAccountProvider), 4009437952U) },
		{ FLootLockerConnectGoogleProviderToAccountRequest::StaticStruct, Z_Construct_UScriptStruct_FLootLockerConnectGoogleProviderToAccountRequest_Statics::NewStructOps, TEXT("LootLockerConnectGoogleProviderToAccountRequest"), &Z_Registration_Info_UScriptStruct_LootLockerConnectGoogleProviderToAccountRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerConnectGoogleProviderToAccountRequest), 2033908567U) },
		{ FLootLockerConnectGoogleProviderToAccountWithPlatformRequest::StaticStruct, Z_Construct_UScriptStruct_FLootLockerConnectGoogleProviderToAccountWithPlatformRequest_Statics::NewStructOps, TEXT("LootLockerConnectGoogleProviderToAccountWithPlatformRequest"), &Z_Registration_Info_UScriptStruct_LootLockerConnectGoogleProviderToAccountWithPlatformRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerConnectGoogleProviderToAccountWithPlatformRequest), 2222615762U) },
		{ FLootLockerConnectAppleRestProviderToAccountRequest::StaticStruct, Z_Construct_UScriptStruct_FLootLockerConnectAppleRestProviderToAccountRequest_Statics::NewStructOps, TEXT("LootLockerConnectAppleRestProviderToAccountRequest"), &Z_Registration_Info_UScriptStruct_LootLockerConnectAppleRestProviderToAccountRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerConnectAppleRestProviderToAccountRequest), 3589048184U) },
		{ FLootLockerAccountConnectedResponse::StaticStruct, Z_Construct_UScriptStruct_FLootLockerAccountConnectedResponse_Statics::NewStructOps, TEXT("LootLockerAccountConnectedResponse"), &Z_Registration_Info_UScriptStruct_LootLockerAccountConnectedResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerAccountConnectedResponse), 257069676U) },
		{ FLootLockerListConnectedAccountsResponse::StaticStruct, Z_Construct_UScriptStruct_FLootLockerListConnectedAccountsResponse_Statics::NewStructOps, TEXT("LootLockerListConnectedAccountsResponse"), &Z_Registration_Info_UScriptStruct_LootLockerListConnectedAccountsResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerListConnectedAccountsResponse), 1720873456U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_cicadashell_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerConnectedAccountsRequestHandler_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULootLockerConnectedAccountsRequestHandler, ULootLockerConnectedAccountsRequestHandler::StaticClass, TEXT("ULootLockerConnectedAccountsRequestHandler"), &Z_Registration_Info_UClass_ULootLockerConnectedAccountsRequestHandler, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULootLockerConnectedAccountsRequestHandler), 2034896416U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_cicadashell_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerConnectedAccountsRequestHandler_h_3300823655(TEXT("/Script/LootLockerSDK"),
		Z_CompiledInDeferFile_FID_Projects_cicadashell_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerConnectedAccountsRequestHandler_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_cicadashell_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerConnectedAccountsRequestHandler_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Projects_cicadashell_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerConnectedAccountsRequestHandler_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_cicadashell_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerConnectedAccountsRequestHandler_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Projects_cicadashell_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerConnectedAccountsRequestHandler_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_cicadashell_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerConnectedAccountsRequestHandler_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
