// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LootLockerSDK/Public/GameAPI/LootLockerPurchasesRequestHandler.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLootLockerPurchasesRequestHandler() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	LOOTLOCKERSDK_API UClass* Z_Construct_UClass_ULootLockerPurchasesRequestHandler();
	LOOTLOCKERSDK_API UClass* Z_Construct_UClass_ULootLockerPurchasesRequestHandler_NoRegister();
	LOOTLOCKERSDK_API UEnum* Z_Construct_UEnum_LootLockerSDK_ELootLockerSteamPurchaseRedemptionStatus();
	LOOTLOCKERSDK_API UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_ActivateRentalAssetResponseDelegateBP__DelegateSignature();
	LOOTLOCKERSDK_API UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerBeginSteamPurchaseRedemptionDelegateBP__DelegateSignature();
	LOOTLOCKERSDK_API UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerQuerySteamPurchaseRedemptionStatusDelegateBP__DelegateSignature();
	LOOTLOCKERSDK_API UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_OrderStatusDetailsBP__DelegateSignature();
	LOOTLOCKERSDK_API UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_PurchaseResponseDelegateBP__DelegateSignature();
	LOOTLOCKERSDK_API UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_PurchaseStatusResponseDelegateBP__DelegateSignature();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerActivateRentalAssetResponse();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerAndroidAssetPurchaseData();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerAssetPurchaseData();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerBeginSteamPurchaseRedemptionForClassRequest();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerBeginSteamPurchaseRedemptionRequest();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerBeginSteamPurchaseRedemptionResponse();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerCatalogItemAndQuantityPair();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerFinalizeSteamPurchaseRedemptionRequest();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerOrderDetailsResponse();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerProduct();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerPurchaseCatalogItemRequest();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerPurchaseResponse();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerPurchaseStatusResponse();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerQuerySteamPurchaseRedemptionStatusRequest();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerQuerySteamPurchaseRedemptionStatusResponse();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerRedeemAppleAppStorePurchaseForClassRequest();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerRedeemAppleAppStorePurchaseForPlayerRequest();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerRedeemGooglePlayStorePurchaseForClassRequest();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerRedeemGooglePlayStorePurchaseForPlayerRequest();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerResponse();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerVerifyPurchaseIosData();
	UPackage* Z_Construct_UPackage__Script_LootLockerSDK();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerAssetPurchaseData;
class UScriptStruct* FLootLockerAssetPurchaseData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerAssetPurchaseData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerAssetPurchaseData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerAssetPurchaseData, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerAssetPurchaseData"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerAssetPurchaseData.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerAssetPurchaseData>()
{
	return FLootLockerAssetPurchaseData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerAssetPurchaseData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_asset_id_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_asset_id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_variation_id_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_variation_id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rental_option_id_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_rental_option_id;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerAssetPurchaseData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Legacy Purchasing -- TODO: Deprecate\n" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPurchasesRequestHandler.h" },
		{ "ToolTip", "Legacy Purchasing -- TODO: Deprecate" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerAssetPurchaseData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerAssetPurchaseData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerAssetPurchaseData_Statics::NewProp_asset_id_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPurchasesRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLootLockerAssetPurchaseData_Statics::NewProp_asset_id = { "asset_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerAssetPurchaseData, asset_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerAssetPurchaseData_Statics::NewProp_asset_id_MetaData), Z_Construct_UScriptStruct_FLootLockerAssetPurchaseData_Statics::NewProp_asset_id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerAssetPurchaseData_Statics::NewProp_variation_id_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPurchasesRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLootLockerAssetPurchaseData_Statics::NewProp_variation_id = { "variation_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerAssetPurchaseData, variation_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerAssetPurchaseData_Statics::NewProp_variation_id_MetaData), Z_Construct_UScriptStruct_FLootLockerAssetPurchaseData_Statics::NewProp_variation_id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerAssetPurchaseData_Statics::NewProp_rental_option_id_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPurchasesRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLootLockerAssetPurchaseData_Statics::NewProp_rental_option_id = { "rental_option_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerAssetPurchaseData, rental_option_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerAssetPurchaseData_Statics::NewProp_rental_option_id_MetaData), Z_Construct_UScriptStruct_FLootLockerAssetPurchaseData_Statics::NewProp_rental_option_id_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerAssetPurchaseData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerAssetPurchaseData_Statics::NewProp_asset_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerAssetPurchaseData_Statics::NewProp_variation_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerAssetPurchaseData_Statics::NewProp_rental_option_id,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerAssetPurchaseData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		&NewStructOps,
		"LootLockerAssetPurchaseData",
		Z_Construct_UScriptStruct_FLootLockerAssetPurchaseData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerAssetPurchaseData_Statics::PropPointers),
		sizeof(FLootLockerAssetPurchaseData),
		alignof(FLootLockerAssetPurchaseData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerAssetPurchaseData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerAssetPurchaseData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerAssetPurchaseData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerAssetPurchaseData()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerAssetPurchaseData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerAssetPurchaseData.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerAssetPurchaseData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerAssetPurchaseData.InnerSingleton;
	}

static_assert(std::is_polymorphic<FLootLockerAndroidAssetPurchaseData>() == std::is_polymorphic<FLootLockerAssetPurchaseData>(), "USTRUCT FLootLockerAndroidAssetPurchaseData cannot be polymorphic unless super FLootLockerAssetPurchaseData is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerAndroidAssetPurchaseData;
class UScriptStruct* FLootLockerAndroidAssetPurchaseData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerAndroidAssetPurchaseData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerAndroidAssetPurchaseData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerAndroidAssetPurchaseData, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerAndroidAssetPurchaseData"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerAndroidAssetPurchaseData.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerAndroidAssetPurchaseData>()
{
	return FLootLockerAndroidAssetPurchaseData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerAndroidAssetPurchaseData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_purchase_token_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_purchase_token;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerAndroidAssetPurchaseData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPurchasesRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerAndroidAssetPurchaseData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerAndroidAssetPurchaseData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerAndroidAssetPurchaseData_Statics::NewProp_purchase_token_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPurchasesRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerAndroidAssetPurchaseData_Statics::NewProp_purchase_token = { "purchase_token", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerAndroidAssetPurchaseData, purchase_token), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerAndroidAssetPurchaseData_Statics::NewProp_purchase_token_MetaData), Z_Construct_UScriptStruct_FLootLockerAndroidAssetPurchaseData_Statics::NewProp_purchase_token_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerAndroidAssetPurchaseData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerAndroidAssetPurchaseData_Statics::NewProp_purchase_token,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerAndroidAssetPurchaseData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		Z_Construct_UScriptStruct_FLootLockerAssetPurchaseData,
		&NewStructOps,
		"LootLockerAndroidAssetPurchaseData",
		Z_Construct_UScriptStruct_FLootLockerAndroidAssetPurchaseData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerAndroidAssetPurchaseData_Statics::PropPointers),
		sizeof(FLootLockerAndroidAssetPurchaseData),
		alignof(FLootLockerAndroidAssetPurchaseData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerAndroidAssetPurchaseData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerAndroidAssetPurchaseData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerAndroidAssetPurchaseData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerAndroidAssetPurchaseData()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerAndroidAssetPurchaseData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerAndroidAssetPurchaseData.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerAndroidAssetPurchaseData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerAndroidAssetPurchaseData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerVerifyPurchaseIosData;
class UScriptStruct* FLootLockerVerifyPurchaseIosData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerVerifyPurchaseIosData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerVerifyPurchaseIosData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerVerifyPurchaseIosData, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerVerifyPurchaseIosData"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerVerifyPurchaseIosData.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerVerifyPurchaseIosData>()
{
	return FLootLockerVerifyPurchaseIosData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerVerifyPurchaseIosData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_receipt_data_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_receipt_data;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerVerifyPurchaseIosData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPurchasesRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerVerifyPurchaseIosData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerVerifyPurchaseIosData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerVerifyPurchaseIosData_Statics::NewProp_receipt_data_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPurchasesRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerVerifyPurchaseIosData_Statics::NewProp_receipt_data = { "receipt_data", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerVerifyPurchaseIosData, receipt_data), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerVerifyPurchaseIosData_Statics::NewProp_receipt_data_MetaData), Z_Construct_UScriptStruct_FLootLockerVerifyPurchaseIosData_Statics::NewProp_receipt_data_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerVerifyPurchaseIosData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerVerifyPurchaseIosData_Statics::NewProp_receipt_data,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerVerifyPurchaseIosData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		&NewStructOps,
		"LootLockerVerifyPurchaseIosData",
		Z_Construct_UScriptStruct_FLootLockerVerifyPurchaseIosData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerVerifyPurchaseIosData_Statics::PropPointers),
		sizeof(FLootLockerVerifyPurchaseIosData),
		alignof(FLootLockerVerifyPurchaseIosData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerVerifyPurchaseIosData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerVerifyPurchaseIosData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerVerifyPurchaseIosData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerVerifyPurchaseIosData()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerVerifyPurchaseIosData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerVerifyPurchaseIosData.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerVerifyPurchaseIosData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerVerifyPurchaseIosData.InnerSingleton;
	}

static_assert(std::is_polymorphic<FLootLockerPurchaseResponse>() == std::is_polymorphic<FLootLockerResponse>(), "USTRUCT FLootLockerPurchaseResponse cannot be polymorphic unless super FLootLockerResponse is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerPurchaseResponse;
class UScriptStruct* FLootLockerPurchaseResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerPurchaseResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerPurchaseResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerPurchaseResponse, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerPurchaseResponse"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerPurchaseResponse.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerPurchaseResponse>()
{
	return FLootLockerPurchaseResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerPurchaseResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_overlay_MetaData[];
#endif
		static void NewProp_overlay_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_overlay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_order_id_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_order_id;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerPurchaseResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPurchasesRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerPurchaseResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerPurchaseResponse>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerPurchaseResponse_Statics::NewProp_overlay_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPurchasesRequestHandler.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLootLockerPurchaseResponse_Statics::NewProp_overlay_SetBit(void* Obj)
	{
		((FLootLockerPurchaseResponse*)Obj)->overlay = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLootLockerPurchaseResponse_Statics::NewProp_overlay = { "overlay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLootLockerPurchaseResponse), &Z_Construct_UScriptStruct_FLootLockerPurchaseResponse_Statics::NewProp_overlay_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerPurchaseResponse_Statics::NewProp_overlay_MetaData), Z_Construct_UScriptStruct_FLootLockerPurchaseResponse_Statics::NewProp_overlay_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerPurchaseResponse_Statics::NewProp_order_id_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPurchasesRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLootLockerPurchaseResponse_Statics::NewProp_order_id = { "order_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerPurchaseResponse, order_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerPurchaseResponse_Statics::NewProp_order_id_MetaData), Z_Construct_UScriptStruct_FLootLockerPurchaseResponse_Statics::NewProp_order_id_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerPurchaseResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerPurchaseResponse_Statics::NewProp_overlay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerPurchaseResponse_Statics::NewProp_order_id,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerPurchaseResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		Z_Construct_UScriptStruct_FLootLockerResponse,
		&NewStructOps,
		"LootLockerPurchaseResponse",
		Z_Construct_UScriptStruct_FLootLockerPurchaseResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerPurchaseResponse_Statics::PropPointers),
		sizeof(FLootLockerPurchaseResponse),
		alignof(FLootLockerPurchaseResponse),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerPurchaseResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerPurchaseResponse_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerPurchaseResponse_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerPurchaseResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerPurchaseResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerPurchaseResponse.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerPurchaseResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerPurchaseResponse.InnerSingleton;
	}

static_assert(std::is_polymorphic<FLootLockerPurchaseStatusResponse>() == std::is_polymorphic<FLootLockerResponse>(), "USTRUCT FLootLockerPurchaseStatusResponse cannot be polymorphic unless super FLootLockerResponse is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerPurchaseStatusResponse;
class UScriptStruct* FLootLockerPurchaseStatusResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerPurchaseStatusResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerPurchaseStatusResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerPurchaseStatusResponse, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerPurchaseStatusResponse"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerPurchaseStatusResponse.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerPurchaseStatusResponse>()
{
	return FLootLockerPurchaseStatusResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerPurchaseStatusResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_status_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_status;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerPurchaseStatusResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPurchasesRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerPurchaseStatusResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerPurchaseStatusResponse>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerPurchaseStatusResponse_Statics::NewProp_status_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPurchasesRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerPurchaseStatusResponse_Statics::NewProp_status = { "status", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerPurchaseStatusResponse, status), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerPurchaseStatusResponse_Statics::NewProp_status_MetaData), Z_Construct_UScriptStruct_FLootLockerPurchaseStatusResponse_Statics::NewProp_status_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerPurchaseStatusResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerPurchaseStatusResponse_Statics::NewProp_status,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerPurchaseStatusResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		Z_Construct_UScriptStruct_FLootLockerResponse,
		&NewStructOps,
		"LootLockerPurchaseStatusResponse",
		Z_Construct_UScriptStruct_FLootLockerPurchaseStatusResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerPurchaseStatusResponse_Statics::PropPointers),
		sizeof(FLootLockerPurchaseStatusResponse),
		alignof(FLootLockerPurchaseStatusResponse),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerPurchaseStatusResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerPurchaseStatusResponse_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerPurchaseStatusResponse_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerPurchaseStatusResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerPurchaseStatusResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerPurchaseStatusResponse.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerPurchaseStatusResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerPurchaseStatusResponse.InnerSingleton;
	}

static_assert(std::is_polymorphic<FLootLockerActivateRentalAssetResponse>() == std::is_polymorphic<FLootLockerResponse>(), "USTRUCT FLootLockerActivateRentalAssetResponse cannot be polymorphic unless super FLootLockerResponse is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerActivateRentalAssetResponse;
class UScriptStruct* FLootLockerActivateRentalAssetResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerActivateRentalAssetResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerActivateRentalAssetResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerActivateRentalAssetResponse, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerActivateRentalAssetResponse"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerActivateRentalAssetResponse.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerActivateRentalAssetResponse>()
{
	return FLootLockerActivateRentalAssetResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerActivateRentalAssetResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_time_left_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_time_left;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerActivateRentalAssetResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPurchasesRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerActivateRentalAssetResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerActivateRentalAssetResponse>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerActivateRentalAssetResponse_Statics::NewProp_time_left_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPurchasesRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLootLockerActivateRentalAssetResponse_Statics::NewProp_time_left = { "time_left", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerActivateRentalAssetResponse, time_left), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerActivateRentalAssetResponse_Statics::NewProp_time_left_MetaData), Z_Construct_UScriptStruct_FLootLockerActivateRentalAssetResponse_Statics::NewProp_time_left_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerActivateRentalAssetResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerActivateRentalAssetResponse_Statics::NewProp_time_left,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerActivateRentalAssetResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		Z_Construct_UScriptStruct_FLootLockerResponse,
		&NewStructOps,
		"LootLockerActivateRentalAssetResponse",
		Z_Construct_UScriptStruct_FLootLockerActivateRentalAssetResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerActivateRentalAssetResponse_Statics::PropPointers),
		sizeof(FLootLockerActivateRentalAssetResponse),
		alignof(FLootLockerActivateRentalAssetResponse),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerActivateRentalAssetResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerActivateRentalAssetResponse_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerActivateRentalAssetResponse_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerActivateRentalAssetResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerActivateRentalAssetResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerActivateRentalAssetResponse.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerActivateRentalAssetResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerActivateRentalAssetResponse.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerProduct;
class UScriptStruct* FLootLockerProduct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerProduct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerProduct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerProduct, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerProduct"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerProduct.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerProduct>()
{
	return FLootLockerProduct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerProduct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_instance_id_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_instance_id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_variation_id_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_variation_id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rental_option_id_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_rental_option_id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_acquistion_source_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_acquistion_source;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerProduct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPurchasesRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerProduct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerProduct>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerProduct_Statics::NewProp_instance_id_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPurchasesRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLootLockerProduct_Statics::NewProp_instance_id = { "instance_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerProduct, instance_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerProduct_Statics::NewProp_instance_id_MetaData), Z_Construct_UScriptStruct_FLootLockerProduct_Statics::NewProp_instance_id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerProduct_Statics::NewProp_variation_id_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPurchasesRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLootLockerProduct_Statics::NewProp_variation_id = { "variation_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerProduct, variation_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerProduct_Statics::NewProp_variation_id_MetaData), Z_Construct_UScriptStruct_FLootLockerProduct_Statics::NewProp_variation_id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerProduct_Statics::NewProp_rental_option_id_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPurchasesRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLootLockerProduct_Statics::NewProp_rental_option_id = { "rental_option_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerProduct, rental_option_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerProduct_Statics::NewProp_rental_option_id_MetaData), Z_Construct_UScriptStruct_FLootLockerProduct_Statics::NewProp_rental_option_id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerProduct_Statics::NewProp_acquistion_source_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPurchasesRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerProduct_Statics::NewProp_acquistion_source = { "acquistion_source", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerProduct, acquistion_source), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerProduct_Statics::NewProp_acquistion_source_MetaData), Z_Construct_UScriptStruct_FLootLockerProduct_Statics::NewProp_acquistion_source_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerProduct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerProduct_Statics::NewProp_instance_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerProduct_Statics::NewProp_variation_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerProduct_Statics::NewProp_rental_option_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerProduct_Statics::NewProp_acquistion_source,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerProduct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		&NewStructOps,
		"LootLockerProduct",
		Z_Construct_UScriptStruct_FLootLockerProduct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerProduct_Statics::PropPointers),
		sizeof(FLootLockerProduct),
		alignof(FLootLockerProduct),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerProduct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerProduct_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerProduct_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerProduct()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerProduct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerProduct.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerProduct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerProduct.InnerSingleton;
	}

static_assert(std::is_polymorphic<FLootLockerOrderDetailsResponse>() == std::is_polymorphic<FLootLockerResponse>(), "USTRUCT FLootLockerOrderDetailsResponse cannot be polymorphic unless super FLootLockerResponse is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerOrderDetailsResponse;
class UScriptStruct* FLootLockerOrderDetailsResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerOrderDetailsResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerOrderDetailsResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerOrderDetailsResponse, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerOrderDetailsResponse"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerOrderDetailsResponse.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerOrderDetailsResponse>()
{
	return FLootLockerOrderDetailsResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerOrderDetailsResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_order_status_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_order_status;
		static const UECodeGen_Private::FStructPropertyParams NewProp_products_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_products_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_products;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerOrderDetailsResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPurchasesRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerOrderDetailsResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerOrderDetailsResponse>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerOrderDetailsResponse_Statics::NewProp_order_status_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPurchasesRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerOrderDetailsResponse_Statics::NewProp_order_status = { "order_status", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerOrderDetailsResponse, order_status), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerOrderDetailsResponse_Statics::NewProp_order_status_MetaData), Z_Construct_UScriptStruct_FLootLockerOrderDetailsResponse_Statics::NewProp_order_status_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLootLockerOrderDetailsResponse_Statics::NewProp_products_Inner = { "products", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLootLockerProduct, METADATA_PARAMS(0, nullptr) }; // 2939267857
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerOrderDetailsResponse_Statics::NewProp_products_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPurchasesRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLootLockerOrderDetailsResponse_Statics::NewProp_products = { "products", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerOrderDetailsResponse, products), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerOrderDetailsResponse_Statics::NewProp_products_MetaData), Z_Construct_UScriptStruct_FLootLockerOrderDetailsResponse_Statics::NewProp_products_MetaData) }; // 2939267857
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerOrderDetailsResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerOrderDetailsResponse_Statics::NewProp_order_status,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerOrderDetailsResponse_Statics::NewProp_products_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerOrderDetailsResponse_Statics::NewProp_products,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerOrderDetailsResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		Z_Construct_UScriptStruct_FLootLockerResponse,
		&NewStructOps,
		"LootLockerOrderDetailsResponse",
		Z_Construct_UScriptStruct_FLootLockerOrderDetailsResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerOrderDetailsResponse_Statics::PropPointers),
		sizeof(FLootLockerOrderDetailsResponse),
		alignof(FLootLockerOrderDetailsResponse),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerOrderDetailsResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerOrderDetailsResponse_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerOrderDetailsResponse_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerOrderDetailsResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerOrderDetailsResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerOrderDetailsResponse.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerOrderDetailsResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerOrderDetailsResponse.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerCatalogItemAndQuantityPair;
class UScriptStruct* FLootLockerCatalogItemAndQuantityPair::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerCatalogItemAndQuantityPair.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerCatalogItemAndQuantityPair.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerCatalogItemAndQuantityPair, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerCatalogItemAndQuantityPair"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerCatalogItemAndQuantityPair.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerCatalogItemAndQuantityPair>()
{
	return FLootLockerCatalogItemAndQuantityPair::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerCatalogItemAndQuantityPair_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Catalog_listing_id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Catalog_listing_id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Quantity_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Quantity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCatalogItemAndQuantityPair_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "LootLocker" },
		{ "Comment", "/**\n * \n */" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPurchasesRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerCatalogItemAndQuantityPair_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerCatalogItemAndQuantityPair>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCatalogItemAndQuantityPair_Statics::NewProp_Catalog_listing_id_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "Comment", "/**\n     * The unique listing id of the catalog item to purchase\n     */" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPurchasesRequestHandler.h" },
		{ "ToolTip", "The unique listing id of the catalog item to purchase" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerCatalogItemAndQuantityPair_Statics::NewProp_Catalog_listing_id = { "Catalog_listing_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerCatalogItemAndQuantityPair, Catalog_listing_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCatalogItemAndQuantityPair_Statics::NewProp_Catalog_listing_id_MetaData), Z_Construct_UScriptStruct_FLootLockerCatalogItemAndQuantityPair_Statics::NewProp_Catalog_listing_id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCatalogItemAndQuantityPair_Statics::NewProp_Quantity_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "Comment", "/**\n     * The quantity of the specified item to purchase\n     */" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPurchasesRequestHandler.h" },
		{ "ToolTip", "The quantity of the specified item to purchase" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLootLockerCatalogItemAndQuantityPair_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerCatalogItemAndQuantityPair, Quantity), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCatalogItemAndQuantityPair_Statics::NewProp_Quantity_MetaData), Z_Construct_UScriptStruct_FLootLockerCatalogItemAndQuantityPair_Statics::NewProp_Quantity_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerCatalogItemAndQuantityPair_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerCatalogItemAndQuantityPair_Statics::NewProp_Catalog_listing_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerCatalogItemAndQuantityPair_Statics::NewProp_Quantity,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerCatalogItemAndQuantityPair_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		&NewStructOps,
		"LootLockerCatalogItemAndQuantityPair",
		Z_Construct_UScriptStruct_FLootLockerCatalogItemAndQuantityPair_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCatalogItemAndQuantityPair_Statics::PropPointers),
		sizeof(FLootLockerCatalogItemAndQuantityPair),
		alignof(FLootLockerCatalogItemAndQuantityPair),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCatalogItemAndQuantityPair_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerCatalogItemAndQuantityPair_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCatalogItemAndQuantityPair_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerCatalogItemAndQuantityPair()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerCatalogItemAndQuantityPair.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerCatalogItemAndQuantityPair.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerCatalogItemAndQuantityPair_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerCatalogItemAndQuantityPair.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerPurchaseCatalogItemRequest;
class UScriptStruct* FLootLockerPurchaseCatalogItemRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerPurchaseCatalogItemRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerPurchaseCatalogItemRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerPurchaseCatalogItemRequest, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerPurchaseCatalogItemRequest"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerPurchaseCatalogItemRequest.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerPurchaseCatalogItemRequest>()
{
	return FLootLockerPurchaseCatalogItemRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerPurchaseCatalogItemRequest_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Wallet_id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Wallet_id;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Items_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Items_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Items;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerPurchaseCatalogItemRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "LootLocker" },
		{ "Comment", "/**\n * \n */" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPurchasesRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerPurchaseCatalogItemRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerPurchaseCatalogItemRequest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerPurchaseCatalogItemRequest_Statics::NewProp_Wallet_id_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "Comment", "/**\n     * The id of the wallet to be used for the purchase\n     */" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPurchasesRequestHandler.h" },
		{ "ToolTip", "The id of the wallet to be used for the purchase" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerPurchaseCatalogItemRequest_Statics::NewProp_Wallet_id = { "Wallet_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerPurchaseCatalogItemRequest, Wallet_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerPurchaseCatalogItemRequest_Statics::NewProp_Wallet_id_MetaData), Z_Construct_UScriptStruct_FLootLockerPurchaseCatalogItemRequest_Statics::NewProp_Wallet_id_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLootLockerPurchaseCatalogItemRequest_Statics::NewProp_Items_Inner = { "Items", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLootLockerCatalogItemAndQuantityPair, METADATA_PARAMS(0, nullptr) }; // 213346802
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerPurchaseCatalogItemRequest_Statics::NewProp_Items_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "Comment", "/**\n     * A list of items to purchase\n     */" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPurchasesRequestHandler.h" },
		{ "ToolTip", "A list of items to purchase" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLootLockerPurchaseCatalogItemRequest_Statics::NewProp_Items = { "Items", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerPurchaseCatalogItemRequest, Items), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerPurchaseCatalogItemRequest_Statics::NewProp_Items_MetaData), Z_Construct_UScriptStruct_FLootLockerPurchaseCatalogItemRequest_Statics::NewProp_Items_MetaData) }; // 213346802
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerPurchaseCatalogItemRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerPurchaseCatalogItemRequest_Statics::NewProp_Wallet_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerPurchaseCatalogItemRequest_Statics::NewProp_Items_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerPurchaseCatalogItemRequest_Statics::NewProp_Items,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerPurchaseCatalogItemRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		&NewStructOps,
		"LootLockerPurchaseCatalogItemRequest",
		Z_Construct_UScriptStruct_FLootLockerPurchaseCatalogItemRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerPurchaseCatalogItemRequest_Statics::PropPointers),
		sizeof(FLootLockerPurchaseCatalogItemRequest),
		alignof(FLootLockerPurchaseCatalogItemRequest),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerPurchaseCatalogItemRequest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerPurchaseCatalogItemRequest_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerPurchaseCatalogItemRequest_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerPurchaseCatalogItemRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerPurchaseCatalogItemRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerPurchaseCatalogItemRequest.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerPurchaseCatalogItemRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerPurchaseCatalogItemRequest.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerRedeemAppleAppStorePurchaseForPlayerRequest;
class UScriptStruct* FLootLockerRedeemAppleAppStorePurchaseForPlayerRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerRedeemAppleAppStorePurchaseForPlayerRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerRedeemAppleAppStorePurchaseForPlayerRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerRedeemAppleAppStorePurchaseForPlayerRequest, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerRedeemAppleAppStorePurchaseForPlayerRequest"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerRedeemAppleAppStorePurchaseForPlayerRequest.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerRedeemAppleAppStorePurchaseForPlayerRequest>()
{
	return FLootLockerRedeemAppleAppStorePurchaseForPlayerRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerRedeemAppleAppStorePurchaseForPlayerRequest_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sandboxed_MetaData[];
#endif
		static void NewProp_Sandboxed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Sandboxed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transaction_id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Transaction_id;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerRedeemAppleAppStorePurchaseForPlayerRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "LootLocker" },
		{ "Comment", "/**\n *\n */" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPurchasesRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerRedeemAppleAppStorePurchaseForPlayerRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerRedeemAppleAppStorePurchaseForPlayerRequest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerRedeemAppleAppStorePurchaseForPlayerRequest_Statics::NewProp_Sandboxed_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "Comment", "/**\n     * Whether or not to use the app store sandbox for this redemption\n     */" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPurchasesRequestHandler.h" },
		{ "ToolTip", "Whether or not to use the app store sandbox for this redemption" },
	};
#endif
	void Z_Construct_UScriptStruct_FLootLockerRedeemAppleAppStorePurchaseForPlayerRequest_Statics::NewProp_Sandboxed_SetBit(void* Obj)
	{
		((FLootLockerRedeemAppleAppStorePurchaseForPlayerRequest*)Obj)->Sandboxed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLootLockerRedeemAppleAppStorePurchaseForPlayerRequest_Statics::NewProp_Sandboxed = { "Sandboxed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLootLockerRedeemAppleAppStorePurchaseForPlayerRequest), &Z_Construct_UScriptStruct_FLootLockerRedeemAppleAppStorePurchaseForPlayerRequest_Statics::NewProp_Sandboxed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerRedeemAppleAppStorePurchaseForPlayerRequest_Statics::NewProp_Sandboxed_MetaData), Z_Construct_UScriptStruct_FLootLockerRedeemAppleAppStorePurchaseForPlayerRequest_Statics::NewProp_Sandboxed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerRedeemAppleAppStorePurchaseForPlayerRequest_Statics::NewProp_Transaction_id_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "Comment", "/**\n     * The id of the transaction successfully made towards the Apple App Store\n     */" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPurchasesRequestHandler.h" },
		{ "ToolTip", "The id of the transaction successfully made towards the Apple App Store" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerRedeemAppleAppStorePurchaseForPlayerRequest_Statics::NewProp_Transaction_id = { "Transaction_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerRedeemAppleAppStorePurchaseForPlayerRequest, Transaction_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerRedeemAppleAppStorePurchaseForPlayerRequest_Statics::NewProp_Transaction_id_MetaData), Z_Construct_UScriptStruct_FLootLockerRedeemAppleAppStorePurchaseForPlayerRequest_Statics::NewProp_Transaction_id_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerRedeemAppleAppStorePurchaseForPlayerRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerRedeemAppleAppStorePurchaseForPlayerRequest_Statics::NewProp_Sandboxed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerRedeemAppleAppStorePurchaseForPlayerRequest_Statics::NewProp_Transaction_id,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerRedeemAppleAppStorePurchaseForPlayerRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		&NewStructOps,
		"LootLockerRedeemAppleAppStorePurchaseForPlayerRequest",
		Z_Construct_UScriptStruct_FLootLockerRedeemAppleAppStorePurchaseForPlayerRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerRedeemAppleAppStorePurchaseForPlayerRequest_Statics::PropPointers),
		sizeof(FLootLockerRedeemAppleAppStorePurchaseForPlayerRequest),
		alignof(FLootLockerRedeemAppleAppStorePurchaseForPlayerRequest),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerRedeemAppleAppStorePurchaseForPlayerRequest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerRedeemAppleAppStorePurchaseForPlayerRequest_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerRedeemAppleAppStorePurchaseForPlayerRequest_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerRedeemAppleAppStorePurchaseForPlayerRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerRedeemAppleAppStorePurchaseForPlayerRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerRedeemAppleAppStorePurchaseForPlayerRequest.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerRedeemAppleAppStorePurchaseForPlayerRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerRedeemAppleAppStorePurchaseForPlayerRequest.InnerSingleton;
	}

static_assert(std::is_polymorphic<FLootLockerRedeemAppleAppStorePurchaseForClassRequest>() == std::is_polymorphic<FLootLockerRedeemAppleAppStorePurchaseForPlayerRequest>(), "USTRUCT FLootLockerRedeemAppleAppStorePurchaseForClassRequest cannot be polymorphic unless super FLootLockerRedeemAppleAppStorePurchaseForPlayerRequest is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerRedeemAppleAppStorePurchaseForClassRequest;
class UScriptStruct* FLootLockerRedeemAppleAppStorePurchaseForClassRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerRedeemAppleAppStorePurchaseForClassRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerRedeemAppleAppStorePurchaseForClassRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerRedeemAppleAppStorePurchaseForClassRequest, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerRedeemAppleAppStorePurchaseForClassRequest"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerRedeemAppleAppStorePurchaseForClassRequest.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerRedeemAppleAppStorePurchaseForClassRequest>()
{
	return FLootLockerRedeemAppleAppStorePurchaseForClassRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerRedeemAppleAppStorePurchaseForClassRequest_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Class_id_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Class_id;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerRedeemAppleAppStorePurchaseForClassRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "LootLocker" },
		{ "Comment", "/**\n *\n */" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPurchasesRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerRedeemAppleAppStorePurchaseForClassRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerRedeemAppleAppStorePurchaseForClassRequest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerRedeemAppleAppStorePurchaseForClassRequest_Statics::NewProp_Class_id_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "Comment", "/**\n     * The id of the class to redeem this transaction for\n     */" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPurchasesRequestHandler.h" },
		{ "ToolTip", "The id of the class to redeem this transaction for" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLootLockerRedeemAppleAppStorePurchaseForClassRequest_Statics::NewProp_Class_id = { "Class_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerRedeemAppleAppStorePurchaseForClassRequest, Class_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerRedeemAppleAppStorePurchaseForClassRequest_Statics::NewProp_Class_id_MetaData), Z_Construct_UScriptStruct_FLootLockerRedeemAppleAppStorePurchaseForClassRequest_Statics::NewProp_Class_id_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerRedeemAppleAppStorePurchaseForClassRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerRedeemAppleAppStorePurchaseForClassRequest_Statics::NewProp_Class_id,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerRedeemAppleAppStorePurchaseForClassRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		Z_Construct_UScriptStruct_FLootLockerRedeemAppleAppStorePurchaseForPlayerRequest,
		&NewStructOps,
		"LootLockerRedeemAppleAppStorePurchaseForClassRequest",
		Z_Construct_UScriptStruct_FLootLockerRedeemAppleAppStorePurchaseForClassRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerRedeemAppleAppStorePurchaseForClassRequest_Statics::PropPointers),
		sizeof(FLootLockerRedeemAppleAppStorePurchaseForClassRequest),
		alignof(FLootLockerRedeemAppleAppStorePurchaseForClassRequest),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerRedeemAppleAppStorePurchaseForClassRequest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerRedeemAppleAppStorePurchaseForClassRequest_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerRedeemAppleAppStorePurchaseForClassRequest_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerRedeemAppleAppStorePurchaseForClassRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerRedeemAppleAppStorePurchaseForClassRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerRedeemAppleAppStorePurchaseForClassRequest.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerRedeemAppleAppStorePurchaseForClassRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerRedeemAppleAppStorePurchaseForClassRequest.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerRedeemGooglePlayStorePurchaseForPlayerRequest;
class UScriptStruct* FLootLockerRedeemGooglePlayStorePurchaseForPlayerRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerRedeemGooglePlayStorePurchaseForPlayerRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerRedeemGooglePlayStorePurchaseForPlayerRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerRedeemGooglePlayStorePurchaseForPlayerRequest, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerRedeemGooglePlayStorePurchaseForPlayerRequest"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerRedeemGooglePlayStorePurchaseForPlayerRequest.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerRedeemGooglePlayStorePurchaseForPlayerRequest>()
{
	return FLootLockerRedeemGooglePlayStorePurchaseForPlayerRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerRedeemGooglePlayStorePurchaseForPlayerRequest_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Product_id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Product_id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Purchase_token_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Purchase_token;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerRedeemGooglePlayStorePurchaseForPlayerRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "LootLocker" },
		{ "Comment", "/**\n *\n */" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPurchasesRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerRedeemGooglePlayStorePurchaseForPlayerRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerRedeemGooglePlayStorePurchaseForPlayerRequest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerRedeemGooglePlayStorePurchaseForPlayerRequest_Statics::NewProp_Product_id_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "Comment", "/**\n     * The id of the product that this redemption refers to\n     */" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPurchasesRequestHandler.h" },
		{ "ToolTip", "The id of the product that this redemption refers to" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerRedeemGooglePlayStorePurchaseForPlayerRequest_Statics::NewProp_Product_id = { "Product_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerRedeemGooglePlayStorePurchaseForPlayerRequest, Product_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerRedeemGooglePlayStorePurchaseForPlayerRequest_Statics::NewProp_Product_id_MetaData), Z_Construct_UScriptStruct_FLootLockerRedeemGooglePlayStorePurchaseForPlayerRequest_Statics::NewProp_Product_id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerRedeemGooglePlayStorePurchaseForPlayerRequest_Statics::NewProp_Purchase_token_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "Comment", "/**\n     * The token from the purchase successfully made towards the Google Play Store\n     */" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPurchasesRequestHandler.h" },
		{ "ToolTip", "The token from the purchase successfully made towards the Google Play Store" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerRedeemGooglePlayStorePurchaseForPlayerRequest_Statics::NewProp_Purchase_token = { "Purchase_token", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerRedeemGooglePlayStorePurchaseForPlayerRequest, Purchase_token), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerRedeemGooglePlayStorePurchaseForPlayerRequest_Statics::NewProp_Purchase_token_MetaData), Z_Construct_UScriptStruct_FLootLockerRedeemGooglePlayStorePurchaseForPlayerRequest_Statics::NewProp_Purchase_token_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerRedeemGooglePlayStorePurchaseForPlayerRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerRedeemGooglePlayStorePurchaseForPlayerRequest_Statics::NewProp_Product_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerRedeemGooglePlayStorePurchaseForPlayerRequest_Statics::NewProp_Purchase_token,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerRedeemGooglePlayStorePurchaseForPlayerRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		&NewStructOps,
		"LootLockerRedeemGooglePlayStorePurchaseForPlayerRequest",
		Z_Construct_UScriptStruct_FLootLockerRedeemGooglePlayStorePurchaseForPlayerRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerRedeemGooglePlayStorePurchaseForPlayerRequest_Statics::PropPointers),
		sizeof(FLootLockerRedeemGooglePlayStorePurchaseForPlayerRequest),
		alignof(FLootLockerRedeemGooglePlayStorePurchaseForPlayerRequest),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerRedeemGooglePlayStorePurchaseForPlayerRequest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerRedeemGooglePlayStorePurchaseForPlayerRequest_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerRedeemGooglePlayStorePurchaseForPlayerRequest_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerRedeemGooglePlayStorePurchaseForPlayerRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerRedeemGooglePlayStorePurchaseForPlayerRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerRedeemGooglePlayStorePurchaseForPlayerRequest.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerRedeemGooglePlayStorePurchaseForPlayerRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerRedeemGooglePlayStorePurchaseForPlayerRequest.InnerSingleton;
	}

static_assert(std::is_polymorphic<FLootLockerRedeemGooglePlayStorePurchaseForClassRequest>() == std::is_polymorphic<FLootLockerRedeemGooglePlayStorePurchaseForPlayerRequest>(), "USTRUCT FLootLockerRedeemGooglePlayStorePurchaseForClassRequest cannot be polymorphic unless super FLootLockerRedeemGooglePlayStorePurchaseForPlayerRequest is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerRedeemGooglePlayStorePurchaseForClassRequest;
class UScriptStruct* FLootLockerRedeemGooglePlayStorePurchaseForClassRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerRedeemGooglePlayStorePurchaseForClassRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerRedeemGooglePlayStorePurchaseForClassRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerRedeemGooglePlayStorePurchaseForClassRequest, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerRedeemGooglePlayStorePurchaseForClassRequest"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerRedeemGooglePlayStorePurchaseForClassRequest.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerRedeemGooglePlayStorePurchaseForClassRequest>()
{
	return FLootLockerRedeemGooglePlayStorePurchaseForClassRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerRedeemGooglePlayStorePurchaseForClassRequest_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Class_id_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Class_id;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerRedeemGooglePlayStorePurchaseForClassRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "LootLocker" },
		{ "Comment", "/**\n *\n */" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPurchasesRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerRedeemGooglePlayStorePurchaseForClassRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerRedeemGooglePlayStorePurchaseForClassRequest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerRedeemGooglePlayStorePurchaseForClassRequest_Statics::NewProp_Class_id_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "Comment", "/**\n     * The id of the class to redeem this purchase for\n     */" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPurchasesRequestHandler.h" },
		{ "ToolTip", "The id of the class to redeem this purchase for" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLootLockerRedeemGooglePlayStorePurchaseForClassRequest_Statics::NewProp_Class_id = { "Class_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerRedeemGooglePlayStorePurchaseForClassRequest, Class_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerRedeemGooglePlayStorePurchaseForClassRequest_Statics::NewProp_Class_id_MetaData), Z_Construct_UScriptStruct_FLootLockerRedeemGooglePlayStorePurchaseForClassRequest_Statics::NewProp_Class_id_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerRedeemGooglePlayStorePurchaseForClassRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerRedeemGooglePlayStorePurchaseForClassRequest_Statics::NewProp_Class_id,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerRedeemGooglePlayStorePurchaseForClassRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		Z_Construct_UScriptStruct_FLootLockerRedeemGooglePlayStorePurchaseForPlayerRequest,
		&NewStructOps,
		"LootLockerRedeemGooglePlayStorePurchaseForClassRequest",
		Z_Construct_UScriptStruct_FLootLockerRedeemGooglePlayStorePurchaseForClassRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerRedeemGooglePlayStorePurchaseForClassRequest_Statics::PropPointers),
		sizeof(FLootLockerRedeemGooglePlayStorePurchaseForClassRequest),
		alignof(FLootLockerRedeemGooglePlayStorePurchaseForClassRequest),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerRedeemGooglePlayStorePurchaseForClassRequest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerRedeemGooglePlayStorePurchaseForClassRequest_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerRedeemGooglePlayStorePurchaseForClassRequest_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerRedeemGooglePlayStorePurchaseForClassRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerRedeemGooglePlayStorePurchaseForClassRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerRedeemGooglePlayStorePurchaseForClassRequest.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerRedeemGooglePlayStorePurchaseForClassRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerRedeemGooglePlayStorePurchaseForClassRequest.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELootLockerSteamPurchaseRedemptionStatus;
	static UEnum* ELootLockerSteamPurchaseRedemptionStatus_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ELootLockerSteamPurchaseRedemptionStatus.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ELootLockerSteamPurchaseRedemptionStatus.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LootLockerSDK_ELootLockerSteamPurchaseRedemptionStatus, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("ELootLockerSteamPurchaseRedemptionStatus"));
		}
		return Z_Registration_Info_UEnum_ELootLockerSteamPurchaseRedemptionStatus.OuterSingleton;
	}
	template<> LOOTLOCKERSDK_API UEnum* StaticEnum<ELootLockerSteamPurchaseRedemptionStatus>()
	{
		return ELootLockerSteamPurchaseRedemptionStatus_StaticEnum();
	}
	struct Z_Construct_UEnum_LootLockerSDK_ELootLockerSteamPurchaseRedemptionStatus_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_LootLockerSDK_ELootLockerSteamPurchaseRedemptionStatus_Statics::Enumerators[] = {
		{ "ELootLockerSteamPurchaseRedemptionStatus::Init", (int64)ELootLockerSteamPurchaseRedemptionStatus::Init },
		{ "ELootLockerSteamPurchaseRedemptionStatus::Approved", (int64)ELootLockerSteamPurchaseRedemptionStatus::Approved },
		{ "ELootLockerSteamPurchaseRedemptionStatus::Succeeded", (int64)ELootLockerSteamPurchaseRedemptionStatus::Succeeded },
		{ "ELootLockerSteamPurchaseRedemptionStatus::Failed", (int64)ELootLockerSteamPurchaseRedemptionStatus::Failed },
		{ "ELootLockerSteamPurchaseRedemptionStatus::Refunded", (int64)ELootLockerSteamPurchaseRedemptionStatus::Refunded },
		{ "ELootLockerSteamPurchaseRedemptionStatus::PartialRefund", (int64)ELootLockerSteamPurchaseRedemptionStatus::PartialRefund },
		{ "ELootLockerSteamPurchaseRedemptionStatus::ChargedBack", (int64)ELootLockerSteamPurchaseRedemptionStatus::ChargedBack },
		{ "ELootLockerSteamPurchaseRedemptionStatus::RefundedSuspectedFraud", (int64)ELootLockerSteamPurchaseRedemptionStatus::RefundedSuspectedFraud },
		{ "ELootLockerSteamPurchaseRedemptionStatus::RefundedFriendlyFraud", (int64)ELootLockerSteamPurchaseRedemptionStatus::RefundedFriendlyFraud },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_LootLockerSDK_ELootLockerSteamPurchaseRedemptionStatus_Statics::Enum_MetaDataParams[] = {
		{ "Approved.Name", "ELootLockerSteamPurchaseRedemptionStatus::Approved" },
		{ "BlueprintType", "true" },
		{ "Category", "LootLocker" },
		{ "ChargedBack.Name", "ELootLockerSteamPurchaseRedemptionStatus::ChargedBack" },
		{ "Comment", "/**\n * Possible statuses a Steam Purchase can have\n */" },
		{ "Failed.Name", "ELootLockerSteamPurchaseRedemptionStatus::Failed" },
		{ "Init.Name", "ELootLockerSteamPurchaseRedemptionStatus::Init" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPurchasesRequestHandler.h" },
		{ "PartialRefund.Name", "ELootLockerSteamPurchaseRedemptionStatus::PartialRefund" },
		{ "Refunded.Name", "ELootLockerSteamPurchaseRedemptionStatus::Refunded" },
		{ "RefundedFriendlyFraud.Name", "ELootLockerSteamPurchaseRedemptionStatus::RefundedFriendlyFraud" },
		{ "RefundedSuspectedFraud.Name", "ELootLockerSteamPurchaseRedemptionStatus::RefundedSuspectedFraud" },
		{ "Succeeded.Name", "ELootLockerSteamPurchaseRedemptionStatus::Succeeded" },
		{ "ToolTip", "Possible statuses a Steam Purchase can have" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LootLockerSDK_ELootLockerSteamPurchaseRedemptionStatus_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		"ELootLockerSteamPurchaseRedemptionStatus",
		"ELootLockerSteamPurchaseRedemptionStatus",
		Z_Construct_UEnum_LootLockerSDK_ELootLockerSteamPurchaseRedemptionStatus_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_LootLockerSDK_ELootLockerSteamPurchaseRedemptionStatus_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_LootLockerSDK_ELootLockerSteamPurchaseRedemptionStatus_Statics::Enum_MetaDataParams), Z_Construct_UEnum_LootLockerSDK_ELootLockerSteamPurchaseRedemptionStatus_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_LootLockerSDK_ELootLockerSteamPurchaseRedemptionStatus()
	{
		if (!Z_Registration_Info_UEnum_ELootLockerSteamPurchaseRedemptionStatus.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELootLockerSteamPurchaseRedemptionStatus.InnerSingleton, Z_Construct_UEnum_LootLockerSDK_ELootLockerSteamPurchaseRedemptionStatus_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ELootLockerSteamPurchaseRedemptionStatus.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerBeginSteamPurchaseRedemptionRequest;
class UScriptStruct* FLootLockerBeginSteamPurchaseRedemptionRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerBeginSteamPurchaseRedemptionRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerBeginSteamPurchaseRedemptionRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerBeginSteamPurchaseRedemptionRequest, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerBeginSteamPurchaseRedemptionRequest"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerBeginSteamPurchaseRedemptionRequest.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerBeginSteamPurchaseRedemptionRequest>()
{
	return FLootLockerBeginSteamPurchaseRedemptionRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerBeginSteamPurchaseRedemptionRequest_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Steam_id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Steam_id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Currency_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Currency;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Language_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Language;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Catalog_item_id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Catalog_item_id;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerBeginSteamPurchaseRedemptionRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "LootLocker" },
		{ "Comment", "/**\n *\n */" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPurchasesRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerBeginSteamPurchaseRedemptionRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerBeginSteamPurchaseRedemptionRequest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerBeginSteamPurchaseRedemptionRequest_Statics::NewProp_Steam_id_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "Comment", "/**\n     * Id of the Steam User that is making the purchase\n     */" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPurchasesRequestHandler.h" },
		{ "ToolTip", "Id of the Steam User that is making the purchase" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerBeginSteamPurchaseRedemptionRequest_Statics::NewProp_Steam_id = { "Steam_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerBeginSteamPurchaseRedemptionRequest, Steam_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerBeginSteamPurchaseRedemptionRequest_Statics::NewProp_Steam_id_MetaData), Z_Construct_UScriptStruct_FLootLockerBeginSteamPurchaseRedemptionRequest_Statics::NewProp_Steam_id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerBeginSteamPurchaseRedemptionRequest_Statics::NewProp_Currency_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "Comment", "/**\n     * The currency to use for the purchase\n     */" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPurchasesRequestHandler.h" },
		{ "ToolTip", "The currency to use for the purchase" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerBeginSteamPurchaseRedemptionRequest_Statics::NewProp_Currency = { "Currency", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerBeginSteamPurchaseRedemptionRequest, Currency), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerBeginSteamPurchaseRedemptionRequest_Statics::NewProp_Currency_MetaData), Z_Construct_UScriptStruct_FLootLockerBeginSteamPurchaseRedemptionRequest_Statics::NewProp_Currency_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerBeginSteamPurchaseRedemptionRequest_Statics::NewProp_Language_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "Comment", "/**\n     * The language to use for the purchase\n     */" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPurchasesRequestHandler.h" },
		{ "ToolTip", "The language to use for the purchase" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerBeginSteamPurchaseRedemptionRequest_Statics::NewProp_Language = { "Language", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerBeginSteamPurchaseRedemptionRequest, Language), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerBeginSteamPurchaseRedemptionRequest_Statics::NewProp_Language_MetaData), Z_Construct_UScriptStruct_FLootLockerBeginSteamPurchaseRedemptionRequest_Statics::NewProp_Language_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerBeginSteamPurchaseRedemptionRequest_Statics::NewProp_Catalog_item_id_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "Comment", "/**\n     * The LootLocker Catalog Item Id for the item you wish to purchase\n     */" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPurchasesRequestHandler.h" },
		{ "ToolTip", "The LootLocker Catalog Item Id for the item you wish to purchase" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerBeginSteamPurchaseRedemptionRequest_Statics::NewProp_Catalog_item_id = { "Catalog_item_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerBeginSteamPurchaseRedemptionRequest, Catalog_item_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerBeginSteamPurchaseRedemptionRequest_Statics::NewProp_Catalog_item_id_MetaData), Z_Construct_UScriptStruct_FLootLockerBeginSteamPurchaseRedemptionRequest_Statics::NewProp_Catalog_item_id_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerBeginSteamPurchaseRedemptionRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerBeginSteamPurchaseRedemptionRequest_Statics::NewProp_Steam_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerBeginSteamPurchaseRedemptionRequest_Statics::NewProp_Currency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerBeginSteamPurchaseRedemptionRequest_Statics::NewProp_Language,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerBeginSteamPurchaseRedemptionRequest_Statics::NewProp_Catalog_item_id,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerBeginSteamPurchaseRedemptionRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		&NewStructOps,
		"LootLockerBeginSteamPurchaseRedemptionRequest",
		Z_Construct_UScriptStruct_FLootLockerBeginSteamPurchaseRedemptionRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerBeginSteamPurchaseRedemptionRequest_Statics::PropPointers),
		sizeof(FLootLockerBeginSteamPurchaseRedemptionRequest),
		alignof(FLootLockerBeginSteamPurchaseRedemptionRequest),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerBeginSteamPurchaseRedemptionRequest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerBeginSteamPurchaseRedemptionRequest_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerBeginSteamPurchaseRedemptionRequest_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerBeginSteamPurchaseRedemptionRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerBeginSteamPurchaseRedemptionRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerBeginSteamPurchaseRedemptionRequest.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerBeginSteamPurchaseRedemptionRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerBeginSteamPurchaseRedemptionRequest.InnerSingleton;
	}

static_assert(std::is_polymorphic<FLootLockerBeginSteamPurchaseRedemptionForClassRequest>() == std::is_polymorphic<FLootLockerBeginSteamPurchaseRedemptionRequest>(), "USTRUCT FLootLockerBeginSteamPurchaseRedemptionForClassRequest cannot be polymorphic unless super FLootLockerBeginSteamPurchaseRedemptionRequest is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerBeginSteamPurchaseRedemptionForClassRequest;
class UScriptStruct* FLootLockerBeginSteamPurchaseRedemptionForClassRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerBeginSteamPurchaseRedemptionForClassRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerBeginSteamPurchaseRedemptionForClassRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerBeginSteamPurchaseRedemptionForClassRequest, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerBeginSteamPurchaseRedemptionForClassRequest"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerBeginSteamPurchaseRedemptionForClassRequest.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerBeginSteamPurchaseRedemptionForClassRequest>()
{
	return FLootLockerBeginSteamPurchaseRedemptionForClassRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerBeginSteamPurchaseRedemptionForClassRequest_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Class_id_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Class_id;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerBeginSteamPurchaseRedemptionForClassRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "LootLocker" },
		{ "Comment", "/**\n *\n */" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPurchasesRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerBeginSteamPurchaseRedemptionForClassRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerBeginSteamPurchaseRedemptionForClassRequest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerBeginSteamPurchaseRedemptionForClassRequest_Statics::NewProp_Class_id_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "Comment", "/**\n     * Id of the class to make the purchase for\n     */" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPurchasesRequestHandler.h" },
		{ "ToolTip", "Id of the class to make the purchase for" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLootLockerBeginSteamPurchaseRedemptionForClassRequest_Statics::NewProp_Class_id = { "Class_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerBeginSteamPurchaseRedemptionForClassRequest, Class_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerBeginSteamPurchaseRedemptionForClassRequest_Statics::NewProp_Class_id_MetaData), Z_Construct_UScriptStruct_FLootLockerBeginSteamPurchaseRedemptionForClassRequest_Statics::NewProp_Class_id_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerBeginSteamPurchaseRedemptionForClassRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerBeginSteamPurchaseRedemptionForClassRequest_Statics::NewProp_Class_id,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerBeginSteamPurchaseRedemptionForClassRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		Z_Construct_UScriptStruct_FLootLockerBeginSteamPurchaseRedemptionRequest,
		&NewStructOps,
		"LootLockerBeginSteamPurchaseRedemptionForClassRequest",
		Z_Construct_UScriptStruct_FLootLockerBeginSteamPurchaseRedemptionForClassRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerBeginSteamPurchaseRedemptionForClassRequest_Statics::PropPointers),
		sizeof(FLootLockerBeginSteamPurchaseRedemptionForClassRequest),
		alignof(FLootLockerBeginSteamPurchaseRedemptionForClassRequest),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerBeginSteamPurchaseRedemptionForClassRequest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerBeginSteamPurchaseRedemptionForClassRequest_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerBeginSteamPurchaseRedemptionForClassRequest_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerBeginSteamPurchaseRedemptionForClassRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerBeginSteamPurchaseRedemptionForClassRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerBeginSteamPurchaseRedemptionForClassRequest.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerBeginSteamPurchaseRedemptionForClassRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerBeginSteamPurchaseRedemptionForClassRequest.InnerSingleton;
	}

static_assert(std::is_polymorphic<FLootLockerBeginSteamPurchaseRedemptionResponse>() == std::is_polymorphic<FLootLockerResponse>(), "USTRUCT FLootLockerBeginSteamPurchaseRedemptionResponse cannot be polymorphic unless super FLootLockerResponse is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerBeginSteamPurchaseRedemptionResponse;
class UScriptStruct* FLootLockerBeginSteamPurchaseRedemptionResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerBeginSteamPurchaseRedemptionResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerBeginSteamPurchaseRedemptionResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerBeginSteamPurchaseRedemptionResponse, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerBeginSteamPurchaseRedemptionResponse"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerBeginSteamPurchaseRedemptionResponse.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerBeginSteamPurchaseRedemptionResponse>()
{
	return FLootLockerBeginSteamPurchaseRedemptionResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerBeginSteamPurchaseRedemptionResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_isSuccess_MetaData[];
#endif
		static void NewProp_isSuccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isSuccess;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Entitlement_id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Entitlement_id;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerBeginSteamPurchaseRedemptionResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "LootLocker" },
		{ "Comment", "/**\n *\n */" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPurchasesRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerBeginSteamPurchaseRedemptionResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerBeginSteamPurchaseRedemptionResponse>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerBeginSteamPurchaseRedemptionResponse_Statics::NewProp_isSuccess_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "Comment", "/**\n     * Was the purchase redemption process started successfully\n     */" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPurchasesRequestHandler.h" },
		{ "ToolTip", "Was the purchase redemption process started successfully" },
	};
#endif
	void Z_Construct_UScriptStruct_FLootLockerBeginSteamPurchaseRedemptionResponse_Statics::NewProp_isSuccess_SetBit(void* Obj)
	{
		((FLootLockerBeginSteamPurchaseRedemptionResponse*)Obj)->isSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLootLockerBeginSteamPurchaseRedemptionResponse_Statics::NewProp_isSuccess = { "isSuccess", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLootLockerBeginSteamPurchaseRedemptionResponse), &Z_Construct_UScriptStruct_FLootLockerBeginSteamPurchaseRedemptionResponse_Statics::NewProp_isSuccess_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerBeginSteamPurchaseRedemptionResponse_Statics::NewProp_isSuccess_MetaData), Z_Construct_UScriptStruct_FLootLockerBeginSteamPurchaseRedemptionResponse_Statics::NewProp_isSuccess_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerBeginSteamPurchaseRedemptionResponse_Statics::NewProp_Entitlement_id_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "Comment", "/**\n     * The id of the entitlement this purchase relates to\n     */" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPurchasesRequestHandler.h" },
		{ "ToolTip", "The id of the entitlement this purchase relates to" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerBeginSteamPurchaseRedemptionResponse_Statics::NewProp_Entitlement_id = { "Entitlement_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerBeginSteamPurchaseRedemptionResponse, Entitlement_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerBeginSteamPurchaseRedemptionResponse_Statics::NewProp_Entitlement_id_MetaData), Z_Construct_UScriptStruct_FLootLockerBeginSteamPurchaseRedemptionResponse_Statics::NewProp_Entitlement_id_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerBeginSteamPurchaseRedemptionResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerBeginSteamPurchaseRedemptionResponse_Statics::NewProp_isSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerBeginSteamPurchaseRedemptionResponse_Statics::NewProp_Entitlement_id,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerBeginSteamPurchaseRedemptionResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		Z_Construct_UScriptStruct_FLootLockerResponse,
		&NewStructOps,
		"LootLockerBeginSteamPurchaseRedemptionResponse",
		Z_Construct_UScriptStruct_FLootLockerBeginSteamPurchaseRedemptionResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerBeginSteamPurchaseRedemptionResponse_Statics::PropPointers),
		sizeof(FLootLockerBeginSteamPurchaseRedemptionResponse),
		alignof(FLootLockerBeginSteamPurchaseRedemptionResponse),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerBeginSteamPurchaseRedemptionResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerBeginSteamPurchaseRedemptionResponse_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerBeginSteamPurchaseRedemptionResponse_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerBeginSteamPurchaseRedemptionResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerBeginSteamPurchaseRedemptionResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerBeginSteamPurchaseRedemptionResponse.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerBeginSteamPurchaseRedemptionResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerBeginSteamPurchaseRedemptionResponse.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerQuerySteamPurchaseRedemptionStatusRequest;
class UScriptStruct* FLootLockerQuerySteamPurchaseRedemptionStatusRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerQuerySteamPurchaseRedemptionStatusRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerQuerySteamPurchaseRedemptionStatusRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerQuerySteamPurchaseRedemptionStatusRequest, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerQuerySteamPurchaseRedemptionStatusRequest"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerQuerySteamPurchaseRedemptionStatusRequest.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerQuerySteamPurchaseRedemptionStatusRequest>()
{
	return FLootLockerQuerySteamPurchaseRedemptionStatusRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerQuerySteamPurchaseRedemptionStatusRequest_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Entitlement_id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Entitlement_id;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerQuerySteamPurchaseRedemptionStatusRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "LootLocker" },
		{ "Comment", "/**\n *\n */" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPurchasesRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerQuerySteamPurchaseRedemptionStatusRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerQuerySteamPurchaseRedemptionStatusRequest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerQuerySteamPurchaseRedemptionStatusRequest_Statics::NewProp_Entitlement_id_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "Comment", "/**\n     * The id of the entitlement to check the status for\n     */" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPurchasesRequestHandler.h" },
		{ "ToolTip", "The id of the entitlement to check the status for" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerQuerySteamPurchaseRedemptionStatusRequest_Statics::NewProp_Entitlement_id = { "Entitlement_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerQuerySteamPurchaseRedemptionStatusRequest, Entitlement_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerQuerySteamPurchaseRedemptionStatusRequest_Statics::NewProp_Entitlement_id_MetaData), Z_Construct_UScriptStruct_FLootLockerQuerySteamPurchaseRedemptionStatusRequest_Statics::NewProp_Entitlement_id_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerQuerySteamPurchaseRedemptionStatusRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerQuerySteamPurchaseRedemptionStatusRequest_Statics::NewProp_Entitlement_id,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerQuerySteamPurchaseRedemptionStatusRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		&NewStructOps,
		"LootLockerQuerySteamPurchaseRedemptionStatusRequest",
		Z_Construct_UScriptStruct_FLootLockerQuerySteamPurchaseRedemptionStatusRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerQuerySteamPurchaseRedemptionStatusRequest_Statics::PropPointers),
		sizeof(FLootLockerQuerySteamPurchaseRedemptionStatusRequest),
		alignof(FLootLockerQuerySteamPurchaseRedemptionStatusRequest),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerQuerySteamPurchaseRedemptionStatusRequest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerQuerySteamPurchaseRedemptionStatusRequest_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerQuerySteamPurchaseRedemptionStatusRequest_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerQuerySteamPurchaseRedemptionStatusRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerQuerySteamPurchaseRedemptionStatusRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerQuerySteamPurchaseRedemptionStatusRequest.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerQuerySteamPurchaseRedemptionStatusRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerQuerySteamPurchaseRedemptionStatusRequest.InnerSingleton;
	}

static_assert(std::is_polymorphic<FLootLockerQuerySteamPurchaseRedemptionStatusResponse>() == std::is_polymorphic<FLootLockerResponse>(), "USTRUCT FLootLockerQuerySteamPurchaseRedemptionStatusResponse cannot be polymorphic unless super FLootLockerResponse is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerQuerySteamPurchaseRedemptionStatusResponse;
class UScriptStruct* FLootLockerQuerySteamPurchaseRedemptionStatusResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerQuerySteamPurchaseRedemptionStatusResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerQuerySteamPurchaseRedemptionStatusResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerQuerySteamPurchaseRedemptionStatusResponse, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerQuerySteamPurchaseRedemptionStatusResponse"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerQuerySteamPurchaseRedemptionStatusResponse.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerQuerySteamPurchaseRedemptionStatusResponse>()
{
	return FLootLockerQuerySteamPurchaseRedemptionStatusResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerQuerySteamPurchaseRedemptionStatusResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_Status_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Status_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Status;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerQuerySteamPurchaseRedemptionStatusResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "LootLocker" },
		{ "Comment", "/**\n *\n */" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPurchasesRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerQuerySteamPurchaseRedemptionStatusResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerQuerySteamPurchaseRedemptionStatusResponse>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLootLockerQuerySteamPurchaseRedemptionStatusResponse_Statics::NewProp_Status_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerQuerySteamPurchaseRedemptionStatusResponse_Statics::NewProp_Status_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "Comment", "/**\n     * The status of the steam purchase\n     */" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPurchasesRequestHandler.h" },
		{ "ToolTip", "The status of the steam purchase" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FLootLockerQuerySteamPurchaseRedemptionStatusResponse_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerQuerySteamPurchaseRedemptionStatusResponse, Status), Z_Construct_UEnum_LootLockerSDK_ELootLockerSteamPurchaseRedemptionStatus, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerQuerySteamPurchaseRedemptionStatusResponse_Statics::NewProp_Status_MetaData), Z_Construct_UScriptStruct_FLootLockerQuerySteamPurchaseRedemptionStatusResponse_Statics::NewProp_Status_MetaData) }; // 2097804874
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerQuerySteamPurchaseRedemptionStatusResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerQuerySteamPurchaseRedemptionStatusResponse_Statics::NewProp_Status_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerQuerySteamPurchaseRedemptionStatusResponse_Statics::NewProp_Status,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerQuerySteamPurchaseRedemptionStatusResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		Z_Construct_UScriptStruct_FLootLockerResponse,
		&NewStructOps,
		"LootLockerQuerySteamPurchaseRedemptionStatusResponse",
		Z_Construct_UScriptStruct_FLootLockerQuerySteamPurchaseRedemptionStatusResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerQuerySteamPurchaseRedemptionStatusResponse_Statics::PropPointers),
		sizeof(FLootLockerQuerySteamPurchaseRedemptionStatusResponse),
		alignof(FLootLockerQuerySteamPurchaseRedemptionStatusResponse),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerQuerySteamPurchaseRedemptionStatusResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerQuerySteamPurchaseRedemptionStatusResponse_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerQuerySteamPurchaseRedemptionStatusResponse_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerQuerySteamPurchaseRedemptionStatusResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerQuerySteamPurchaseRedemptionStatusResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerQuerySteamPurchaseRedemptionStatusResponse.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerQuerySteamPurchaseRedemptionStatusResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerQuerySteamPurchaseRedemptionStatusResponse.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerFinalizeSteamPurchaseRedemptionRequest;
class UScriptStruct* FLootLockerFinalizeSteamPurchaseRedemptionRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerFinalizeSteamPurchaseRedemptionRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerFinalizeSteamPurchaseRedemptionRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerFinalizeSteamPurchaseRedemptionRequest, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerFinalizeSteamPurchaseRedemptionRequest"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerFinalizeSteamPurchaseRedemptionRequest.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerFinalizeSteamPurchaseRedemptionRequest>()
{
	return FLootLockerFinalizeSteamPurchaseRedemptionRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerFinalizeSteamPurchaseRedemptionRequest_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Entitlement_id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Entitlement_id;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerFinalizeSteamPurchaseRedemptionRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "LootLocker" },
		{ "Comment", "/**\n *\n */" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPurchasesRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerFinalizeSteamPurchaseRedemptionRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerFinalizeSteamPurchaseRedemptionRequest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerFinalizeSteamPurchaseRedemptionRequest_Statics::NewProp_Entitlement_id_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "Comment", "/**\n     * The id of the entitlement to finalize the purchase for\n     */" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPurchasesRequestHandler.h" },
		{ "ToolTip", "The id of the entitlement to finalize the purchase for" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerFinalizeSteamPurchaseRedemptionRequest_Statics::NewProp_Entitlement_id = { "Entitlement_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerFinalizeSteamPurchaseRedemptionRequest, Entitlement_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerFinalizeSteamPurchaseRedemptionRequest_Statics::NewProp_Entitlement_id_MetaData), Z_Construct_UScriptStruct_FLootLockerFinalizeSteamPurchaseRedemptionRequest_Statics::NewProp_Entitlement_id_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerFinalizeSteamPurchaseRedemptionRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerFinalizeSteamPurchaseRedemptionRequest_Statics::NewProp_Entitlement_id,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerFinalizeSteamPurchaseRedemptionRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		&NewStructOps,
		"LootLockerFinalizeSteamPurchaseRedemptionRequest",
		Z_Construct_UScriptStruct_FLootLockerFinalizeSteamPurchaseRedemptionRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerFinalizeSteamPurchaseRedemptionRequest_Statics::PropPointers),
		sizeof(FLootLockerFinalizeSteamPurchaseRedemptionRequest),
		alignof(FLootLockerFinalizeSteamPurchaseRedemptionRequest),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerFinalizeSteamPurchaseRedemptionRequest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerFinalizeSteamPurchaseRedemptionRequest_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerFinalizeSteamPurchaseRedemptionRequest_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerFinalizeSteamPurchaseRedemptionRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerFinalizeSteamPurchaseRedemptionRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerFinalizeSteamPurchaseRedemptionRequest.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerFinalizeSteamPurchaseRedemptionRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerFinalizeSteamPurchaseRedemptionRequest.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_LootLockerSDK_PurchaseResponseDelegateBP__DelegateSignature_Statics
	{
		struct _Script_LootLockerSDK_eventPurchaseResponseDelegateBP_Parms
		{
			FLootLockerPurchaseResponse Response;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Response;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_LootLockerSDK_PurchaseResponseDelegateBP__DelegateSignature_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LootLockerSDK_eventPurchaseResponseDelegateBP_Parms, Response), Z_Construct_UScriptStruct_FLootLockerPurchaseResponse, METADATA_PARAMS(0, nullptr) }; // 130728758
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LootLockerSDK_PurchaseResponseDelegateBP__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LootLockerSDK_PurchaseResponseDelegateBP__DelegateSignature_Statics::NewProp_Response,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LootLockerSDK_PurchaseResponseDelegateBP__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPurchasesRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LootLockerSDK_PurchaseResponseDelegateBP__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LootLockerSDK, nullptr, "PurchaseResponseDelegateBP__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_LootLockerSDK_PurchaseResponseDelegateBP__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_PurchaseResponseDelegateBP__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_PurchaseResponseDelegateBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventPurchaseResponseDelegateBP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_PurchaseResponseDelegateBP__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LootLockerSDK_PurchaseResponseDelegateBP__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_PurchaseResponseDelegateBP__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_PurchaseResponseDelegateBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventPurchaseResponseDelegateBP_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_PurchaseResponseDelegateBP__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LootLockerSDK_PurchaseResponseDelegateBP__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FPurchaseResponseDelegateBP_DelegateWrapper(const FScriptDelegate& PurchaseResponseDelegateBP, FLootLockerPurchaseResponse Response)
{
	struct _Script_LootLockerSDK_eventPurchaseResponseDelegateBP_Parms
	{
		FLootLockerPurchaseResponse Response;
	};
	_Script_LootLockerSDK_eventPurchaseResponseDelegateBP_Parms Parms;
	Parms.Response=Response;
	PurchaseResponseDelegateBP.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_LootLockerSDK_PurchaseStatusResponseDelegateBP__DelegateSignature_Statics
	{
		struct _Script_LootLockerSDK_eventPurchaseStatusResponseDelegateBP_Parms
		{
			FLootLockerPurchaseStatusResponse Response;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Response;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_LootLockerSDK_PurchaseStatusResponseDelegateBP__DelegateSignature_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LootLockerSDK_eventPurchaseStatusResponseDelegateBP_Parms, Response), Z_Construct_UScriptStruct_FLootLockerPurchaseStatusResponse, METADATA_PARAMS(0, nullptr) }; // 2564888840
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LootLockerSDK_PurchaseStatusResponseDelegateBP__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LootLockerSDK_PurchaseStatusResponseDelegateBP__DelegateSignature_Statics::NewProp_Response,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LootLockerSDK_PurchaseStatusResponseDelegateBP__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPurchasesRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LootLockerSDK_PurchaseStatusResponseDelegateBP__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LootLockerSDK, nullptr, "PurchaseStatusResponseDelegateBP__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_LootLockerSDK_PurchaseStatusResponseDelegateBP__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_PurchaseStatusResponseDelegateBP__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_PurchaseStatusResponseDelegateBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventPurchaseStatusResponseDelegateBP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_PurchaseStatusResponseDelegateBP__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LootLockerSDK_PurchaseStatusResponseDelegateBP__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_PurchaseStatusResponseDelegateBP__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_PurchaseStatusResponseDelegateBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventPurchaseStatusResponseDelegateBP_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_PurchaseStatusResponseDelegateBP__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LootLockerSDK_PurchaseStatusResponseDelegateBP__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FPurchaseStatusResponseDelegateBP_DelegateWrapper(const FScriptDelegate& PurchaseStatusResponseDelegateBP, FLootLockerPurchaseStatusResponse Response)
{
	struct _Script_LootLockerSDK_eventPurchaseStatusResponseDelegateBP_Parms
	{
		FLootLockerPurchaseStatusResponse Response;
	};
	_Script_LootLockerSDK_eventPurchaseStatusResponseDelegateBP_Parms Parms;
	Parms.Response=Response;
	PurchaseStatusResponseDelegateBP.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_LootLockerSDK_ActivateRentalAssetResponseDelegateBP__DelegateSignature_Statics
	{
		struct _Script_LootLockerSDK_eventActivateRentalAssetResponseDelegateBP_Parms
		{
			FLootLockerActivateRentalAssetResponse Response;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Response;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_LootLockerSDK_ActivateRentalAssetResponseDelegateBP__DelegateSignature_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LootLockerSDK_eventActivateRentalAssetResponseDelegateBP_Parms, Response), Z_Construct_UScriptStruct_FLootLockerActivateRentalAssetResponse, METADATA_PARAMS(0, nullptr) }; // 3010429706
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LootLockerSDK_ActivateRentalAssetResponseDelegateBP__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LootLockerSDK_ActivateRentalAssetResponseDelegateBP__DelegateSignature_Statics::NewProp_Response,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LootLockerSDK_ActivateRentalAssetResponseDelegateBP__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPurchasesRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LootLockerSDK_ActivateRentalAssetResponseDelegateBP__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LootLockerSDK, nullptr, "ActivateRentalAssetResponseDelegateBP__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_LootLockerSDK_ActivateRentalAssetResponseDelegateBP__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_ActivateRentalAssetResponseDelegateBP__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_ActivateRentalAssetResponseDelegateBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventActivateRentalAssetResponseDelegateBP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_ActivateRentalAssetResponseDelegateBP__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LootLockerSDK_ActivateRentalAssetResponseDelegateBP__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_ActivateRentalAssetResponseDelegateBP__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_ActivateRentalAssetResponseDelegateBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventActivateRentalAssetResponseDelegateBP_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_ActivateRentalAssetResponseDelegateBP__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LootLockerSDK_ActivateRentalAssetResponseDelegateBP__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FActivateRentalAssetResponseDelegateBP_DelegateWrapper(const FScriptDelegate& ActivateRentalAssetResponseDelegateBP, FLootLockerActivateRentalAssetResponse Response)
{
	struct _Script_LootLockerSDK_eventActivateRentalAssetResponseDelegateBP_Parms
	{
		FLootLockerActivateRentalAssetResponse Response;
	};
	_Script_LootLockerSDK_eventActivateRentalAssetResponseDelegateBP_Parms Parms;
	Parms.Response=Response;
	ActivateRentalAssetResponseDelegateBP.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_LootLockerSDK_OrderStatusDetailsBP__DelegateSignature_Statics
	{
		struct _Script_LootLockerSDK_eventOrderStatusDetailsBP_Parms
		{
			FLootLockerOrderDetailsResponse Response;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Response;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_LootLockerSDK_OrderStatusDetailsBP__DelegateSignature_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LootLockerSDK_eventOrderStatusDetailsBP_Parms, Response), Z_Construct_UScriptStruct_FLootLockerOrderDetailsResponse, METADATA_PARAMS(0, nullptr) }; // 2465233604
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LootLockerSDK_OrderStatusDetailsBP__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LootLockerSDK_OrderStatusDetailsBP__DelegateSignature_Statics::NewProp_Response,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LootLockerSDK_OrderStatusDetailsBP__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPurchasesRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LootLockerSDK_OrderStatusDetailsBP__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LootLockerSDK, nullptr, "OrderStatusDetailsBP__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_LootLockerSDK_OrderStatusDetailsBP__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_OrderStatusDetailsBP__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_OrderStatusDetailsBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventOrderStatusDetailsBP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_OrderStatusDetailsBP__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LootLockerSDK_OrderStatusDetailsBP__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_OrderStatusDetailsBP__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_OrderStatusDetailsBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventOrderStatusDetailsBP_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_OrderStatusDetailsBP__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LootLockerSDK_OrderStatusDetailsBP__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOrderStatusDetailsBP_DelegateWrapper(const FScriptDelegate& OrderStatusDetailsBP, FLootLockerOrderDetailsResponse Response)
{
	struct _Script_LootLockerSDK_eventOrderStatusDetailsBP_Parms
	{
		FLootLockerOrderDetailsResponse Response;
	};
	_Script_LootLockerSDK_eventOrderStatusDetailsBP_Parms Parms;
	Parms.Response=Response;
	OrderStatusDetailsBP.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerBeginSteamPurchaseRedemptionDelegateBP__DelegateSignature_Statics
	{
		struct _Script_LootLockerSDK_eventLootLockerBeginSteamPurchaseRedemptionDelegateBP_Parms
		{
			FLootLockerBeginSteamPurchaseRedemptionResponse Response;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Response;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerBeginSteamPurchaseRedemptionDelegateBP__DelegateSignature_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LootLockerSDK_eventLootLockerBeginSteamPurchaseRedemptionDelegateBP_Parms, Response), Z_Construct_UScriptStruct_FLootLockerBeginSteamPurchaseRedemptionResponse, METADATA_PARAMS(0, nullptr) }; // 4214210729
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerBeginSteamPurchaseRedemptionDelegateBP__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerBeginSteamPurchaseRedemptionDelegateBP__DelegateSignature_Statics::NewProp_Response,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerBeginSteamPurchaseRedemptionDelegateBP__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPurchasesRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerBeginSteamPurchaseRedemptionDelegateBP__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LootLockerSDK, nullptr, "LootLockerBeginSteamPurchaseRedemptionDelegateBP__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerBeginSteamPurchaseRedemptionDelegateBP__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerBeginSteamPurchaseRedemptionDelegateBP__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerBeginSteamPurchaseRedemptionDelegateBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventLootLockerBeginSteamPurchaseRedemptionDelegateBP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerBeginSteamPurchaseRedemptionDelegateBP__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerBeginSteamPurchaseRedemptionDelegateBP__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerBeginSteamPurchaseRedemptionDelegateBP__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerBeginSteamPurchaseRedemptionDelegateBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventLootLockerBeginSteamPurchaseRedemptionDelegateBP_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerBeginSteamPurchaseRedemptionDelegateBP__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerBeginSteamPurchaseRedemptionDelegateBP__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FLootLockerBeginSteamPurchaseRedemptionDelegateBP_DelegateWrapper(const FScriptDelegate& LootLockerBeginSteamPurchaseRedemptionDelegateBP, FLootLockerBeginSteamPurchaseRedemptionResponse Response)
{
	struct _Script_LootLockerSDK_eventLootLockerBeginSteamPurchaseRedemptionDelegateBP_Parms
	{
		FLootLockerBeginSteamPurchaseRedemptionResponse Response;
	};
	_Script_LootLockerSDK_eventLootLockerBeginSteamPurchaseRedemptionDelegateBP_Parms Parms;
	Parms.Response=Response;
	LootLockerBeginSteamPurchaseRedemptionDelegateBP.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerQuerySteamPurchaseRedemptionStatusDelegateBP__DelegateSignature_Statics
	{
		struct _Script_LootLockerSDK_eventLootLockerQuerySteamPurchaseRedemptionStatusDelegateBP_Parms
		{
			FLootLockerQuerySteamPurchaseRedemptionStatusResponse Response;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Response;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerQuerySteamPurchaseRedemptionStatusDelegateBP__DelegateSignature_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LootLockerSDK_eventLootLockerQuerySteamPurchaseRedemptionStatusDelegateBP_Parms, Response), Z_Construct_UScriptStruct_FLootLockerQuerySteamPurchaseRedemptionStatusResponse, METADATA_PARAMS(0, nullptr) }; // 3493213465
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerQuerySteamPurchaseRedemptionStatusDelegateBP__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerQuerySteamPurchaseRedemptionStatusDelegateBP__DelegateSignature_Statics::NewProp_Response,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerQuerySteamPurchaseRedemptionStatusDelegateBP__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPurchasesRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerQuerySteamPurchaseRedemptionStatusDelegateBP__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LootLockerSDK, nullptr, "LootLockerQuerySteamPurchaseRedemptionStatusDelegateBP__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerQuerySteamPurchaseRedemptionStatusDelegateBP__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerQuerySteamPurchaseRedemptionStatusDelegateBP__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerQuerySteamPurchaseRedemptionStatusDelegateBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventLootLockerQuerySteamPurchaseRedemptionStatusDelegateBP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerQuerySteamPurchaseRedemptionStatusDelegateBP__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerQuerySteamPurchaseRedemptionStatusDelegateBP__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerQuerySteamPurchaseRedemptionStatusDelegateBP__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerQuerySteamPurchaseRedemptionStatusDelegateBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventLootLockerQuerySteamPurchaseRedemptionStatusDelegateBP_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerQuerySteamPurchaseRedemptionStatusDelegateBP__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerQuerySteamPurchaseRedemptionStatusDelegateBP__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FLootLockerQuerySteamPurchaseRedemptionStatusDelegateBP_DelegateWrapper(const FScriptDelegate& LootLockerQuerySteamPurchaseRedemptionStatusDelegateBP, FLootLockerQuerySteamPurchaseRedemptionStatusResponse Response)
{
	struct _Script_LootLockerSDK_eventLootLockerQuerySteamPurchaseRedemptionStatusDelegateBP_Parms
	{
		FLootLockerQuerySteamPurchaseRedemptionStatusResponse Response;
	};
	_Script_LootLockerSDK_eventLootLockerQuerySteamPurchaseRedemptionStatusDelegateBP_Parms Parms;
	Parms.Response=Response;
	LootLockerQuerySteamPurchaseRedemptionStatusDelegateBP.ProcessDelegate<UObject>(&Parms);
}
	void ULootLockerPurchasesRequestHandler::StaticRegisterNativesULootLockerPurchasesRequestHandler()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULootLockerPurchasesRequestHandler);
	UClass* Z_Construct_UClass_ULootLockerPurchasesRequestHandler_NoRegister()
	{
		return ULootLockerPurchasesRequestHandler::StaticClass();
	}
	struct Z_Construct_UClass_ULootLockerPurchasesRequestHandler_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULootLockerPurchasesRequestHandler_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULootLockerPurchasesRequestHandler_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULootLockerPurchasesRequestHandler_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GameAPI/LootLockerPurchasesRequestHandler.h" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPurchasesRequestHandler.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULootLockerPurchasesRequestHandler_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULootLockerPurchasesRequestHandler>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULootLockerPurchasesRequestHandler_Statics::ClassParams = {
		&ULootLockerPurchasesRequestHandler::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULootLockerPurchasesRequestHandler_Statics::Class_MetaDataParams), Z_Construct_UClass_ULootLockerPurchasesRequestHandler_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ULootLockerPurchasesRequestHandler()
	{
		if (!Z_Registration_Info_UClass_ULootLockerPurchasesRequestHandler.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULootLockerPurchasesRequestHandler.OuterSingleton, Z_Construct_UClass_ULootLockerPurchasesRequestHandler_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULootLockerPurchasesRequestHandler.OuterSingleton;
	}
	template<> LOOTLOCKERSDK_API UClass* StaticClass<ULootLockerPurchasesRequestHandler>()
	{
		return ULootLockerPurchasesRequestHandler::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULootLockerPurchasesRequestHandler);
	ULootLockerPurchasesRequestHandler::~ULootLockerPurchasesRequestHandler() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerPurchasesRequestHandler_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerPurchasesRequestHandler_h_Statics::EnumInfo[] = {
		{ ELootLockerSteamPurchaseRedemptionStatus_StaticEnum, TEXT("ELootLockerSteamPurchaseRedemptionStatus"), &Z_Registration_Info_UEnum_ELootLockerSteamPurchaseRedemptionStatus, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2097804874U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerPurchasesRequestHandler_h_Statics::ScriptStructInfo[] = {
		{ FLootLockerAssetPurchaseData::StaticStruct, Z_Construct_UScriptStruct_FLootLockerAssetPurchaseData_Statics::NewStructOps, TEXT("LootLockerAssetPurchaseData"), &Z_Registration_Info_UScriptStruct_LootLockerAssetPurchaseData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerAssetPurchaseData), 581217787U) },
		{ FLootLockerAndroidAssetPurchaseData::StaticStruct, Z_Construct_UScriptStruct_FLootLockerAndroidAssetPurchaseData_Statics::NewStructOps, TEXT("LootLockerAndroidAssetPurchaseData"), &Z_Registration_Info_UScriptStruct_LootLockerAndroidAssetPurchaseData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerAndroidAssetPurchaseData), 2259296091U) },
		{ FLootLockerVerifyPurchaseIosData::StaticStruct, Z_Construct_UScriptStruct_FLootLockerVerifyPurchaseIosData_Statics::NewStructOps, TEXT("LootLockerVerifyPurchaseIosData"), &Z_Registration_Info_UScriptStruct_LootLockerVerifyPurchaseIosData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerVerifyPurchaseIosData), 2369229008U) },
		{ FLootLockerPurchaseResponse::StaticStruct, Z_Construct_UScriptStruct_FLootLockerPurchaseResponse_Statics::NewStructOps, TEXT("LootLockerPurchaseResponse"), &Z_Registration_Info_UScriptStruct_LootLockerPurchaseResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerPurchaseResponse), 130728758U) },
		{ FLootLockerPurchaseStatusResponse::StaticStruct, Z_Construct_UScriptStruct_FLootLockerPurchaseStatusResponse_Statics::NewStructOps, TEXT("LootLockerPurchaseStatusResponse"), &Z_Registration_Info_UScriptStruct_LootLockerPurchaseStatusResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerPurchaseStatusResponse), 2564888840U) },
		{ FLootLockerActivateRentalAssetResponse::StaticStruct, Z_Construct_UScriptStruct_FLootLockerActivateRentalAssetResponse_Statics::NewStructOps, TEXT("LootLockerActivateRentalAssetResponse"), &Z_Registration_Info_UScriptStruct_LootLockerActivateRentalAssetResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerActivateRentalAssetResponse), 3010429706U) },
		{ FLootLockerProduct::StaticStruct, Z_Construct_UScriptStruct_FLootLockerProduct_Statics::NewStructOps, TEXT("LootLockerProduct"), &Z_Registration_Info_UScriptStruct_LootLockerProduct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerProduct), 2939267857U) },
		{ FLootLockerOrderDetailsResponse::StaticStruct, Z_Construct_UScriptStruct_FLootLockerOrderDetailsResponse_Statics::NewStructOps, TEXT("LootLockerOrderDetailsResponse"), &Z_Registration_Info_UScriptStruct_LootLockerOrderDetailsResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerOrderDetailsResponse), 2465233604U) },
		{ FLootLockerCatalogItemAndQuantityPair::StaticStruct, Z_Construct_UScriptStruct_FLootLockerCatalogItemAndQuantityPair_Statics::NewStructOps, TEXT("LootLockerCatalogItemAndQuantityPair"), &Z_Registration_Info_UScriptStruct_LootLockerCatalogItemAndQuantityPair, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerCatalogItemAndQuantityPair), 213346802U) },
		{ FLootLockerPurchaseCatalogItemRequest::StaticStruct, Z_Construct_UScriptStruct_FLootLockerPurchaseCatalogItemRequest_Statics::NewStructOps, TEXT("LootLockerPurchaseCatalogItemRequest"), &Z_Registration_Info_UScriptStruct_LootLockerPurchaseCatalogItemRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerPurchaseCatalogItemRequest), 3815919530U) },
		{ FLootLockerRedeemAppleAppStorePurchaseForPlayerRequest::StaticStruct, Z_Construct_UScriptStruct_FLootLockerRedeemAppleAppStorePurchaseForPlayerRequest_Statics::NewStructOps, TEXT("LootLockerRedeemAppleAppStorePurchaseForPlayerRequest"), &Z_Registration_Info_UScriptStruct_LootLockerRedeemAppleAppStorePurchaseForPlayerRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerRedeemAppleAppStorePurchaseForPlayerRequest), 595844164U) },
		{ FLootLockerRedeemAppleAppStorePurchaseForClassRequest::StaticStruct, Z_Construct_UScriptStruct_FLootLockerRedeemAppleAppStorePurchaseForClassRequest_Statics::NewStructOps, TEXT("LootLockerRedeemAppleAppStorePurchaseForClassRequest"), &Z_Registration_Info_UScriptStruct_LootLockerRedeemAppleAppStorePurchaseForClassRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerRedeemAppleAppStorePurchaseForClassRequest), 1648956476U) },
		{ FLootLockerRedeemGooglePlayStorePurchaseForPlayerRequest::StaticStruct, Z_Construct_UScriptStruct_FLootLockerRedeemGooglePlayStorePurchaseForPlayerRequest_Statics::NewStructOps, TEXT("LootLockerRedeemGooglePlayStorePurchaseForPlayerRequest"), &Z_Registration_Info_UScriptStruct_LootLockerRedeemGooglePlayStorePurchaseForPlayerRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerRedeemGooglePlayStorePurchaseForPlayerRequest), 1632764001U) },
		{ FLootLockerRedeemGooglePlayStorePurchaseForClassRequest::StaticStruct, Z_Construct_UScriptStruct_FLootLockerRedeemGooglePlayStorePurchaseForClassRequest_Statics::NewStructOps, TEXT("LootLockerRedeemGooglePlayStorePurchaseForClassRequest"), &Z_Registration_Info_UScriptStruct_LootLockerRedeemGooglePlayStorePurchaseForClassRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerRedeemGooglePlayStorePurchaseForClassRequest), 1950556280U) },
		{ FLootLockerBeginSteamPurchaseRedemptionRequest::StaticStruct, Z_Construct_UScriptStruct_FLootLockerBeginSteamPurchaseRedemptionRequest_Statics::NewStructOps, TEXT("LootLockerBeginSteamPurchaseRedemptionRequest"), &Z_Registration_Info_UScriptStruct_LootLockerBeginSteamPurchaseRedemptionRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerBeginSteamPurchaseRedemptionRequest), 343593211U) },
		{ FLootLockerBeginSteamPurchaseRedemptionForClassRequest::StaticStruct, Z_Construct_UScriptStruct_FLootLockerBeginSteamPurchaseRedemptionForClassRequest_Statics::NewStructOps, TEXT("LootLockerBeginSteamPurchaseRedemptionForClassRequest"), &Z_Registration_Info_UScriptStruct_LootLockerBeginSteamPurchaseRedemptionForClassRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerBeginSteamPurchaseRedemptionForClassRequest), 3342274483U) },
		{ FLootLockerBeginSteamPurchaseRedemptionResponse::StaticStruct, Z_Construct_UScriptStruct_FLootLockerBeginSteamPurchaseRedemptionResponse_Statics::NewStructOps, TEXT("LootLockerBeginSteamPurchaseRedemptionResponse"), &Z_Registration_Info_UScriptStruct_LootLockerBeginSteamPurchaseRedemptionResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerBeginSteamPurchaseRedemptionResponse), 4214210729U) },
		{ FLootLockerQuerySteamPurchaseRedemptionStatusRequest::StaticStruct, Z_Construct_UScriptStruct_FLootLockerQuerySteamPurchaseRedemptionStatusRequest_Statics::NewStructOps, TEXT("LootLockerQuerySteamPurchaseRedemptionStatusRequest"), &Z_Registration_Info_UScriptStruct_LootLockerQuerySteamPurchaseRedemptionStatusRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerQuerySteamPurchaseRedemptionStatusRequest), 1417697575U) },
		{ FLootLockerQuerySteamPurchaseRedemptionStatusResponse::StaticStruct, Z_Construct_UScriptStruct_FLootLockerQuerySteamPurchaseRedemptionStatusResponse_Statics::NewStructOps, TEXT("LootLockerQuerySteamPurchaseRedemptionStatusResponse"), &Z_Registration_Info_UScriptStruct_LootLockerQuerySteamPurchaseRedemptionStatusResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerQuerySteamPurchaseRedemptionStatusResponse), 3493213465U) },
		{ FLootLockerFinalizeSteamPurchaseRedemptionRequest::StaticStruct, Z_Construct_UScriptStruct_FLootLockerFinalizeSteamPurchaseRedemptionRequest_Statics::NewStructOps, TEXT("LootLockerFinalizeSteamPurchaseRedemptionRequest"), &Z_Registration_Info_UScriptStruct_LootLockerFinalizeSteamPurchaseRedemptionRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerFinalizeSteamPurchaseRedemptionRequest), 2019353699U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerPurchasesRequestHandler_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULootLockerPurchasesRequestHandler, ULootLockerPurchasesRequestHandler::StaticClass, TEXT("ULootLockerPurchasesRequestHandler"), &Z_Registration_Info_UClass_ULootLockerPurchasesRequestHandler, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULootLockerPurchasesRequestHandler), 4120698514U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerPurchasesRequestHandler_h_2721095807(TEXT("/Script/LootLockerSDK"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerPurchasesRequestHandler_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerPurchasesRequestHandler_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerPurchasesRequestHandler_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerPurchasesRequestHandler_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerPurchasesRequestHandler_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerPurchasesRequestHandler_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
