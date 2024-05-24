// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LootLockerSDK/Public/GameAPI/LootLockerCatalogRequestHandler.h"
#include "LootLockerSDK/Public/LootLockerResponse.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLootLockerCatalogRequestHandler() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	LOOTLOCKERSDK_API UClass* Z_Construct_UClass_ULootLockerCatalogRequestHandler();
	LOOTLOCKERSDK_API UClass* Z_Construct_UClass_ULootLockerCatalogRequestHandler_NoRegister();
	LOOTLOCKERSDK_API UEnum* Z_Construct_UEnum_LootLockerSDK_ELootLockerCatalogEntryEntityKind();
	LOOTLOCKERSDK_API UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_InternalLootLockerListCatalogPricesResponseBP__DelegateSignature();
	LOOTLOCKERSDK_API UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerListCatalogPricesResponseBP__DelegateSignature();
	LOOTLOCKERSDK_API UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerListCatalogsResponseBP__DelegateSignature();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FInternalLootLockerListCatalogPricesResponse();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerAssetDetails();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerCatalog();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerCatalogAppleAppStoreListing();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerCatalogEntry();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerCatalogEntryListings();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerCatalogEntryPrice();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerCatalogGooglePlayStoreListing();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerCatalogSteamStoreListing();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerCatalogSteamStoreListingPrice();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerCurrencyDetails();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerInlinedCatalogEntry();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerKeyBasedPagination();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerListCatalogPricesResponse();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerListCatalogsResponse();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerProgressionPointDetails();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerProgressionResetDetails();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerResponse();
	UPackage* Z_Construct_UPackage__Script_LootLockerSDK();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELootLockerCatalogEntryEntityKind;
	static UEnum* ELootLockerCatalogEntryEntityKind_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ELootLockerCatalogEntryEntityKind.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ELootLockerCatalogEntryEntityKind.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LootLockerSDK_ELootLockerCatalogEntryEntityKind, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("ELootLockerCatalogEntryEntityKind"));
		}
		return Z_Registration_Info_UEnum_ELootLockerCatalogEntryEntityKind.OuterSingleton;
	}
	template<> LOOTLOCKERSDK_API UEnum* StaticEnum<ELootLockerCatalogEntryEntityKind>()
	{
		return ELootLockerCatalogEntryEntityKind_StaticEnum();
	}
	struct Z_Construct_UEnum_LootLockerSDK_ELootLockerCatalogEntryEntityKind_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_LootLockerSDK_ELootLockerCatalogEntryEntityKind_Statics::Enumerators[] = {
		{ "ELootLockerCatalogEntryEntityKind::Asset", (int64)ELootLockerCatalogEntryEntityKind::Asset },
		{ "ELootLockerCatalogEntryEntityKind::Currency", (int64)ELootLockerCatalogEntryEntityKind::Currency },
		{ "ELootLockerCatalogEntryEntityKind::Progression_Points", (int64)ELootLockerCatalogEntryEntityKind::Progression_Points },
		{ "ELootLockerCatalogEntryEntityKind::Progression_Reset", (int64)ELootLockerCatalogEntryEntityKind::Progression_Reset },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_LootLockerSDK_ELootLockerCatalogEntryEntityKind_Statics::Enum_MetaDataParams[] = {
		{ "Asset.Name", "ELootLockerCatalogEntryEntityKind::Asset" },
		{ "BlueprintType", "true" },
		{ "Category", "LootLocker" },
		{ "Comment", "/**\n * Possible entity kinds that catalog entries can have\n */" },
		{ "Currency.Name", "ELootLockerCatalogEntryEntityKind::Currency" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCatalogRequestHandler.h" },
		{ "Progression_Points.Name", "ELootLockerCatalogEntryEntityKind::Progression_Points" },
		{ "Progression_Reset.Name", "ELootLockerCatalogEntryEntityKind::Progression_Reset" },
		{ "ToolTip", "Possible entity kinds that catalog entries can have" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LootLockerSDK_ELootLockerCatalogEntryEntityKind_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		"ELootLockerCatalogEntryEntityKind",
		"ELootLockerCatalogEntryEntityKind",
		Z_Construct_UEnum_LootLockerSDK_ELootLockerCatalogEntryEntityKind_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_LootLockerSDK_ELootLockerCatalogEntryEntityKind_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_LootLockerSDK_ELootLockerCatalogEntryEntityKind_Statics::Enum_MetaDataParams), Z_Construct_UEnum_LootLockerSDK_ELootLockerCatalogEntryEntityKind_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_LootLockerSDK_ELootLockerCatalogEntryEntityKind()
	{
		if (!Z_Registration_Info_UEnum_ELootLockerCatalogEntryEntityKind.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELootLockerCatalogEntryEntityKind.InnerSingleton, Z_Construct_UEnum_LootLockerSDK_ELootLockerCatalogEntryEntityKind_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ELootLockerCatalogEntryEntityKind.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerCatalog;
class UScriptStruct* FLootLockerCatalog::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerCatalog.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerCatalog.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerCatalog, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerCatalog"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerCatalog.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerCatalog>()
{
	return FLootLockerCatalog::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerCatalog_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Created_at_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Created_at;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Deleted_at_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Deleted_at;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCatalog_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "LootLocker" },
		{ "Comment", "/**\n * \n */" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCatalogRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerCatalog_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerCatalog>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCatalog_Statics::NewProp_Created_at_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "Comment", "/**\n     *\n     * The time when this catalog was created\n     */" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCatalogRequestHandler.h" },
		{ "ToolTip", "The time when this catalog was created" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerCatalog_Statics::NewProp_Created_at = { "Created_at", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerCatalog, Created_at), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCatalog_Statics::NewProp_Created_at_MetaData), Z_Construct_UScriptStruct_FLootLockerCatalog_Statics::NewProp_Created_at_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCatalog_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "Comment", "/**\n     *\n     * The name of the catalog\n     */" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCatalogRequestHandler.h" },
		{ "ToolTip", "The name of the catalog" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerCatalog_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerCatalog, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCatalog_Statics::NewProp_Name_MetaData), Z_Construct_UScriptStruct_FLootLockerCatalog_Statics::NewProp_Name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCatalog_Statics::NewProp_Key_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "Comment", "/**\n     *\n     * The unique identifying key of the catalog\n     */" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCatalogRequestHandler.h" },
		{ "ToolTip", "The unique identifying key of the catalog" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerCatalog_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerCatalog, Key), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCatalog_Statics::NewProp_Key_MetaData), Z_Construct_UScriptStruct_FLootLockerCatalog_Statics::NewProp_Key_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCatalog_Statics::NewProp_Id_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "Comment", "/**\n     *\n     * The id of the catalog\n     */" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCatalogRequestHandler.h" },
		{ "ToolTip", "The id of the catalog" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerCatalog_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerCatalog, Id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCatalog_Statics::NewProp_Id_MetaData), Z_Construct_UScriptStruct_FLootLockerCatalog_Statics::NewProp_Id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCatalog_Statics::NewProp_Deleted_at_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "Comment", "/**\n     *\n     * The time when this catalog was deleted, should normally be null\n     */" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCatalogRequestHandler.h" },
		{ "ToolTip", "The time when this catalog was deleted, should normally be null" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerCatalog_Statics::NewProp_Deleted_at = { "Deleted_at", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerCatalog, Deleted_at), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCatalog_Statics::NewProp_Deleted_at_MetaData), Z_Construct_UScriptStruct_FLootLockerCatalog_Statics::NewProp_Deleted_at_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerCatalog_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerCatalog_Statics::NewProp_Created_at,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerCatalog_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerCatalog_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerCatalog_Statics::NewProp_Id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerCatalog_Statics::NewProp_Deleted_at,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerCatalog_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		&NewStructOps,
		"LootLockerCatalog",
		Z_Construct_UScriptStruct_FLootLockerCatalog_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCatalog_Statics::PropPointers),
		sizeof(FLootLockerCatalog),
		alignof(FLootLockerCatalog),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCatalog_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerCatalog_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCatalog_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerCatalog()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerCatalog.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerCatalog.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerCatalog_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerCatalog.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerCatalogEntryPrice;
class UScriptStruct* FLootLockerCatalogEntryPrice::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerCatalogEntryPrice.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerCatalogEntryPrice.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerCatalogEntryPrice, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerCatalogEntryPrice"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerCatalogEntryPrice.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerCatalogEntryPrice>()
{
	return FLootLockerCatalogEntryPrice::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerCatalogEntryPrice_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Amount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Amount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Display_amount_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Display_amount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Currency_code_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Currency_code;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Currency_name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Currency_name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Price_id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Price_id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Currency_id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Currency_id;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCatalogEntryPrice_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "LootLocker" },
		{ "Comment", "/**\n *\n */" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCatalogRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerCatalogEntryPrice_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerCatalogEntryPrice>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCatalogEntryPrice_Statics::NewProp_Amount_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "Comment", "/**\n     * The amount (cost) set for this price\n     */" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCatalogRequestHandler.h" },
		{ "ToolTip", "The amount (cost) set for this price" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLootLockerCatalogEntryPrice_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerCatalogEntryPrice, Amount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCatalogEntryPrice_Statics::NewProp_Amount_MetaData), Z_Construct_UScriptStruct_FLootLockerCatalogEntryPrice_Statics::NewProp_Amount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCatalogEntryPrice_Statics::NewProp_Display_amount_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "Comment", "/**\n     * A prettified version of the amount to use for display\n     */" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCatalogRequestHandler.h" },
		{ "ToolTip", "A prettified version of the amount to use for display" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerCatalogEntryPrice_Statics::NewProp_Display_amount = { "Display_amount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerCatalogEntryPrice, Display_amount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCatalogEntryPrice_Statics::NewProp_Display_amount_MetaData), Z_Construct_UScriptStruct_FLootLockerCatalogEntryPrice_Statics::NewProp_Display_amount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCatalogEntryPrice_Statics::NewProp_Currency_code_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "Comment", "/**\n     * The short code for the currency this price is in\n     */" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCatalogRequestHandler.h" },
		{ "ToolTip", "The short code for the currency this price is in" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerCatalogEntryPrice_Statics::NewProp_Currency_code = { "Currency_code", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerCatalogEntryPrice, Currency_code), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCatalogEntryPrice_Statics::NewProp_Currency_code_MetaData), Z_Construct_UScriptStruct_FLootLockerCatalogEntryPrice_Statics::NewProp_Currency_code_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCatalogEntryPrice_Statics::NewProp_Currency_name_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "Comment", "/**\n     * The name of the currency this price is in\n     */" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCatalogRequestHandler.h" },
		{ "ToolTip", "The name of the currency this price is in" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerCatalogEntryPrice_Statics::NewProp_Currency_name = { "Currency_name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerCatalogEntryPrice, Currency_name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCatalogEntryPrice_Statics::NewProp_Currency_name_MetaData), Z_Construct_UScriptStruct_FLootLockerCatalogEntryPrice_Statics::NewProp_Currency_name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCatalogEntryPrice_Statics::NewProp_Price_id_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "Comment", "/**\n     * The unique id of this price\n     */" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCatalogRequestHandler.h" },
		{ "ToolTip", "The unique id of this price" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerCatalogEntryPrice_Statics::NewProp_Price_id = { "Price_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerCatalogEntryPrice, Price_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCatalogEntryPrice_Statics::NewProp_Price_id_MetaData), Z_Construct_UScriptStruct_FLootLockerCatalogEntryPrice_Statics::NewProp_Price_id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCatalogEntryPrice_Statics::NewProp_Currency_id_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "Comment", "/**\n     * The unique id of the currency this price is in\n     */" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCatalogRequestHandler.h" },
		{ "ToolTip", "The unique id of the currency this price is in" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerCatalogEntryPrice_Statics::NewProp_Currency_id = { "Currency_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerCatalogEntryPrice, Currency_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCatalogEntryPrice_Statics::NewProp_Currency_id_MetaData), Z_Construct_UScriptStruct_FLootLockerCatalogEntryPrice_Statics::NewProp_Currency_id_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerCatalogEntryPrice_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerCatalogEntryPrice_Statics::NewProp_Amount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerCatalogEntryPrice_Statics::NewProp_Display_amount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerCatalogEntryPrice_Statics::NewProp_Currency_code,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerCatalogEntryPrice_Statics::NewProp_Currency_name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerCatalogEntryPrice_Statics::NewProp_Price_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerCatalogEntryPrice_Statics::NewProp_Currency_id,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerCatalogEntryPrice_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		&NewStructOps,
		"LootLockerCatalogEntryPrice",
		Z_Construct_UScriptStruct_FLootLockerCatalogEntryPrice_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCatalogEntryPrice_Statics::PropPointers),
		sizeof(FLootLockerCatalogEntryPrice),
		alignof(FLootLockerCatalogEntryPrice),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCatalogEntryPrice_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerCatalogEntryPrice_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCatalogEntryPrice_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerCatalogEntryPrice()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerCatalogEntryPrice.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerCatalogEntryPrice.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerCatalogEntryPrice_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerCatalogEntryPrice.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerCatalogAppleAppStoreListing;
class UScriptStruct* FLootLockerCatalogAppleAppStoreListing::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerCatalogAppleAppStoreListing.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerCatalogAppleAppStoreListing.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerCatalogAppleAppStoreListing, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerCatalogAppleAppStoreListing"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerCatalogAppleAppStoreListing.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerCatalogAppleAppStoreListing>()
{
	return FLootLockerCatalogAppleAppStoreListing::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerCatalogAppleAppStoreListing_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Product_id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Product_id;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCatalogAppleAppStoreListing_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "LootLocker" },
		{ "Comment", "/**\n *\n */" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCatalogRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerCatalogAppleAppStoreListing_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerCatalogAppleAppStoreListing>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCatalogAppleAppStoreListing_Statics::NewProp_Product_id_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "Comment", "/**\n     * The id of the product in Apple App Store that can be purchased and then used to redeem this catalog entry\n     */" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCatalogRequestHandler.h" },
		{ "ToolTip", "The id of the product in Apple App Store that can be purchased and then used to redeem this catalog entry" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerCatalogAppleAppStoreListing_Statics::NewProp_Product_id = { "Product_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerCatalogAppleAppStoreListing, Product_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCatalogAppleAppStoreListing_Statics::NewProp_Product_id_MetaData), Z_Construct_UScriptStruct_FLootLockerCatalogAppleAppStoreListing_Statics::NewProp_Product_id_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerCatalogAppleAppStoreListing_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerCatalogAppleAppStoreListing_Statics::NewProp_Product_id,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerCatalogAppleAppStoreListing_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		&NewStructOps,
		"LootLockerCatalogAppleAppStoreListing",
		Z_Construct_UScriptStruct_FLootLockerCatalogAppleAppStoreListing_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCatalogAppleAppStoreListing_Statics::PropPointers),
		sizeof(FLootLockerCatalogAppleAppStoreListing),
		alignof(FLootLockerCatalogAppleAppStoreListing),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCatalogAppleAppStoreListing_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerCatalogAppleAppStoreListing_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCatalogAppleAppStoreListing_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerCatalogAppleAppStoreListing()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerCatalogAppleAppStoreListing.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerCatalogAppleAppStoreListing.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerCatalogAppleAppStoreListing_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerCatalogAppleAppStoreListing.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerCatalogGooglePlayStoreListing;
class UScriptStruct* FLootLockerCatalogGooglePlayStoreListing::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerCatalogGooglePlayStoreListing.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerCatalogGooglePlayStoreListing.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerCatalogGooglePlayStoreListing, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerCatalogGooglePlayStoreListing"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerCatalogGooglePlayStoreListing.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerCatalogGooglePlayStoreListing>()
{
	return FLootLockerCatalogGooglePlayStoreListing::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerCatalogGooglePlayStoreListing_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Product_id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Product_id;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCatalogGooglePlayStoreListing_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "LootLocker" },
		{ "Comment", "/**\n *\n */" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCatalogRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerCatalogGooglePlayStoreListing_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerCatalogGooglePlayStoreListing>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCatalogGooglePlayStoreListing_Statics::NewProp_Product_id_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "Comment", "/**\n     * The id of the product in Apple App Store that can be purchased and then used to redeem this catalog entry\n     */" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCatalogRequestHandler.h" },
		{ "ToolTip", "The id of the product in Apple App Store that can be purchased and then used to redeem this catalog entry" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerCatalogGooglePlayStoreListing_Statics::NewProp_Product_id = { "Product_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerCatalogGooglePlayStoreListing, Product_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCatalogGooglePlayStoreListing_Statics::NewProp_Product_id_MetaData), Z_Construct_UScriptStruct_FLootLockerCatalogGooglePlayStoreListing_Statics::NewProp_Product_id_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerCatalogGooglePlayStoreListing_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerCatalogGooglePlayStoreListing_Statics::NewProp_Product_id,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerCatalogGooglePlayStoreListing_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		&NewStructOps,
		"LootLockerCatalogGooglePlayStoreListing",
		Z_Construct_UScriptStruct_FLootLockerCatalogGooglePlayStoreListing_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCatalogGooglePlayStoreListing_Statics::PropPointers),
		sizeof(FLootLockerCatalogGooglePlayStoreListing),
		alignof(FLootLockerCatalogGooglePlayStoreListing),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCatalogGooglePlayStoreListing_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerCatalogGooglePlayStoreListing_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCatalogGooglePlayStoreListing_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerCatalogGooglePlayStoreListing()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerCatalogGooglePlayStoreListing.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerCatalogGooglePlayStoreListing.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerCatalogGooglePlayStoreListing_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerCatalogGooglePlayStoreListing.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerCatalogSteamStoreListingPrice;
class UScriptStruct* FLootLockerCatalogSteamStoreListingPrice::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerCatalogSteamStoreListingPrice.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerCatalogSteamStoreListingPrice.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerCatalogSteamStoreListingPrice, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerCatalogSteamStoreListingPrice"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerCatalogSteamStoreListingPrice.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerCatalogSteamStoreListingPrice>()
{
	return FLootLockerCatalogSteamStoreListingPrice::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerCatalogSteamStoreListingPrice_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Currency_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Currency;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_amount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_amount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCatalogSteamStoreListingPrice_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "LootLocker" },
		{ "Comment", "/**\n *\n */" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCatalogRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerCatalogSteamStoreListingPrice_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerCatalogSteamStoreListingPrice>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCatalogSteamStoreListingPrice_Statics::NewProp_Currency_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "Comment", "/**\n     * Currency code of the currency to be used for purchasing this listing\n     */" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCatalogRequestHandler.h" },
		{ "ToolTip", "Currency code of the currency to be used for purchasing this listing" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerCatalogSteamStoreListingPrice_Statics::NewProp_Currency = { "Currency", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerCatalogSteamStoreListingPrice, Currency), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCatalogSteamStoreListingPrice_Statics::NewProp_Currency_MetaData), Z_Construct_UScriptStruct_FLootLockerCatalogSteamStoreListingPrice_Statics::NewProp_Currency_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCatalogSteamStoreListingPrice_Statics::NewProp_amount_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "Comment", "/**\n     * Amount of the base value of the specified currency that this listing costs to purchase\n     */" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCatalogRequestHandler.h" },
		{ "ToolTip", "Amount of the base value of the specified currency that this listing costs to purchase" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLootLockerCatalogSteamStoreListingPrice_Statics::NewProp_amount = { "amount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerCatalogSteamStoreListingPrice, amount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCatalogSteamStoreListingPrice_Statics::NewProp_amount_MetaData), Z_Construct_UScriptStruct_FLootLockerCatalogSteamStoreListingPrice_Statics::NewProp_amount_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerCatalogSteamStoreListingPrice_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerCatalogSteamStoreListingPrice_Statics::NewProp_Currency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerCatalogSteamStoreListingPrice_Statics::NewProp_amount,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerCatalogSteamStoreListingPrice_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		&NewStructOps,
		"LootLockerCatalogSteamStoreListingPrice",
		Z_Construct_UScriptStruct_FLootLockerCatalogSteamStoreListingPrice_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCatalogSteamStoreListingPrice_Statics::PropPointers),
		sizeof(FLootLockerCatalogSteamStoreListingPrice),
		alignof(FLootLockerCatalogSteamStoreListingPrice),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCatalogSteamStoreListingPrice_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerCatalogSteamStoreListingPrice_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCatalogSteamStoreListingPrice_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerCatalogSteamStoreListingPrice()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerCatalogSteamStoreListingPrice.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerCatalogSteamStoreListingPrice.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerCatalogSteamStoreListingPrice_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerCatalogSteamStoreListingPrice.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerCatalogSteamStoreListing;
class UScriptStruct* FLootLockerCatalogSteamStoreListing::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerCatalogSteamStoreListing.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerCatalogSteamStoreListing.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerCatalogSteamStoreListing, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerCatalogSteamStoreListing"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerCatalogSteamStoreListing.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerCatalogSteamStoreListing>()
{
	return FLootLockerCatalogSteamStoreListing::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerCatalogSteamStoreListing_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Prices_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Prices_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Prices;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCatalogSteamStoreListing_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "LootLocker" },
		{ "Comment", "/**\n *\n */" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCatalogRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerCatalogSteamStoreListing_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerCatalogSteamStoreListing>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCatalogSteamStoreListing_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "Comment", "/**\n     * Description of this listing\n     */" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCatalogRequestHandler.h" },
		{ "ToolTip", "Description of this listing" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerCatalogSteamStoreListing_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerCatalogSteamStoreListing, Description), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCatalogSteamStoreListing_Statics::NewProp_Description_MetaData), Z_Construct_UScriptStruct_FLootLockerCatalogSteamStoreListing_Statics::NewProp_Description_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLootLockerCatalogSteamStoreListing_Statics::NewProp_Prices_Inner = { "Prices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLootLockerCatalogSteamStoreListingPrice, METADATA_PARAMS(0, nullptr) }; // 58959911
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCatalogSteamStoreListing_Statics::NewProp_Prices_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "Comment", "/**\n     * List of prices for this listing\n     */" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCatalogRequestHandler.h" },
		{ "ToolTip", "List of prices for this listing" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLootLockerCatalogSteamStoreListing_Statics::NewProp_Prices = { "Prices", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerCatalogSteamStoreListing, Prices), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCatalogSteamStoreListing_Statics::NewProp_Prices_MetaData), Z_Construct_UScriptStruct_FLootLockerCatalogSteamStoreListing_Statics::NewProp_Prices_MetaData) }; // 58959911
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerCatalogSteamStoreListing_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerCatalogSteamStoreListing_Statics::NewProp_Description,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerCatalogSteamStoreListing_Statics::NewProp_Prices_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerCatalogSteamStoreListing_Statics::NewProp_Prices,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerCatalogSteamStoreListing_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		&NewStructOps,
		"LootLockerCatalogSteamStoreListing",
		Z_Construct_UScriptStruct_FLootLockerCatalogSteamStoreListing_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCatalogSteamStoreListing_Statics::PropPointers),
		sizeof(FLootLockerCatalogSteamStoreListing),
		alignof(FLootLockerCatalogSteamStoreListing),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCatalogSteamStoreListing_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerCatalogSteamStoreListing_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCatalogSteamStoreListing_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerCatalogSteamStoreListing()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerCatalogSteamStoreListing.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerCatalogSteamStoreListing.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerCatalogSteamStoreListing_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerCatalogSteamStoreListing.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerCatalogEntryListings;
class UScriptStruct* FLootLockerCatalogEntryListings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerCatalogEntryListings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerCatalogEntryListings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerCatalogEntryListings, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerCatalogEntryListings"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerCatalogEntryListings.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerCatalogEntryListings>()
{
	return FLootLockerCatalogEntryListings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerCatalogEntryListings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Apple_app_store_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Apple_app_store;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Google_play_store_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Google_play_store;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Steam_store_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Steam_store;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCatalogEntryListings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "LootLocker" },
		{ "Comment", "/**\n *\n */" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCatalogRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerCatalogEntryListings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerCatalogEntryListings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCatalogEntryListings_Statics::NewProp_Apple_app_store_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "Comment", "/**\n     * The listing information (if configured) for Apple App Store\n     */" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCatalogRequestHandler.h" },
		{ "ToolTip", "The listing information (if configured) for Apple App Store" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLootLockerCatalogEntryListings_Statics::NewProp_Apple_app_store = { "Apple_app_store", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerCatalogEntryListings, Apple_app_store), Z_Construct_UScriptStruct_FLootLockerCatalogAppleAppStoreListing, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCatalogEntryListings_Statics::NewProp_Apple_app_store_MetaData), Z_Construct_UScriptStruct_FLootLockerCatalogEntryListings_Statics::NewProp_Apple_app_store_MetaData) }; // 3252586183
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCatalogEntryListings_Statics::NewProp_Google_play_store_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "Comment", "/**\n     * The listing information (if configured) for Google Play Store\n     */" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCatalogRequestHandler.h" },
		{ "ToolTip", "The listing information (if configured) for Google Play Store" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLootLockerCatalogEntryListings_Statics::NewProp_Google_play_store = { "Google_play_store", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerCatalogEntryListings, Google_play_store), Z_Construct_UScriptStruct_FLootLockerCatalogGooglePlayStoreListing, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCatalogEntryListings_Statics::NewProp_Google_play_store_MetaData), Z_Construct_UScriptStruct_FLootLockerCatalogEntryListings_Statics::NewProp_Google_play_store_MetaData) }; // 1046962332
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCatalogEntryListings_Statics::NewProp_Steam_store_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "Comment", "/**\n     * The listing information (if configured) for Steam Store\n     */" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCatalogRequestHandler.h" },
		{ "ToolTip", "The listing information (if configured) for Steam Store" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLootLockerCatalogEntryListings_Statics::NewProp_Steam_store = { "Steam_store", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerCatalogEntryListings, Steam_store), Z_Construct_UScriptStruct_FLootLockerCatalogSteamStoreListing, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCatalogEntryListings_Statics::NewProp_Steam_store_MetaData), Z_Construct_UScriptStruct_FLootLockerCatalogEntryListings_Statics::NewProp_Steam_store_MetaData) }; // 3599584224
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerCatalogEntryListings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerCatalogEntryListings_Statics::NewProp_Apple_app_store,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerCatalogEntryListings_Statics::NewProp_Google_play_store,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerCatalogEntryListings_Statics::NewProp_Steam_store,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerCatalogEntryListings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		&NewStructOps,
		"LootLockerCatalogEntryListings",
		Z_Construct_UScriptStruct_FLootLockerCatalogEntryListings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCatalogEntryListings_Statics::PropPointers),
		sizeof(FLootLockerCatalogEntryListings),
		alignof(FLootLockerCatalogEntryListings),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCatalogEntryListings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerCatalogEntryListings_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCatalogEntryListings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerCatalogEntryListings()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerCatalogEntryListings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerCatalogEntryListings.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerCatalogEntryListings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerCatalogEntryListings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerCatalogEntry;
class UScriptStruct* FLootLockerCatalogEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerCatalogEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerCatalogEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerCatalogEntry, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerCatalogEntry"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerCatalogEntry.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerCatalogEntry>()
{
	return FLootLockerCatalogEntry::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerCatalogEntry_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Created_at_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Created_at;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Entity_kind_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Entity_kind_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Entity_kind;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Listings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Listings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Entity_name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Entity_name;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Prices_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Prices_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Prices;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Entity_id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Entity_id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Catalog_listing_id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Catalog_listing_id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Purchasable_MetaData[];
#endif
		static void NewProp_Purchasable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Purchasable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCatalogEntry_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "LootLocker" },
		{ "Comment", "/**\n *\n */" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCatalogRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerCatalogEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerCatalogEntry>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCatalogEntry_Statics::NewProp_Created_at_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "Comment", "/**\n     * The time when this catalog entry was created\n     */" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCatalogRequestHandler.h" },
		{ "ToolTip", "The time when this catalog entry was created" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerCatalogEntry_Statics::NewProp_Created_at = { "Created_at", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerCatalogEntry, Created_at), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCatalogEntry_Statics::NewProp_Created_at_MetaData), Z_Construct_UScriptStruct_FLootLockerCatalogEntry_Statics::NewProp_Created_at_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLootLockerCatalogEntry_Statics::NewProp_Entity_kind_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCatalogEntry_Statics::NewProp_Entity_kind_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "Comment", "/**\n     * The kind of entity that this entry is. This signifies in which lookup structure to find the details of this entry by using the Catalog_listing_id.\n     */" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCatalogRequestHandler.h" },
		{ "ToolTip", "The kind of entity that this entry is. This signifies in which lookup structure to find the details of this entry by using the Catalog_listing_id." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FLootLockerCatalogEntry_Statics::NewProp_Entity_kind = { "Entity_kind", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerCatalogEntry, Entity_kind), Z_Construct_UEnum_LootLockerSDK_ELootLockerCatalogEntryEntityKind, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCatalogEntry_Statics::NewProp_Entity_kind_MetaData), Z_Construct_UScriptStruct_FLootLockerCatalogEntry_Statics::NewProp_Entity_kind_MetaData) }; // 6893246
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCatalogEntry_Statics::NewProp_Listings_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "Comment", "/**\n     * All the listings configured for this catalog entry\n     */" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCatalogRequestHandler.h" },
		{ "ToolTip", "All the listings configured for this catalog entry" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLootLockerCatalogEntry_Statics::NewProp_Listings = { "Listings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerCatalogEntry, Listings), Z_Construct_UScriptStruct_FLootLockerCatalogEntryListings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCatalogEntry_Statics::NewProp_Listings_MetaData), Z_Construct_UScriptStruct_FLootLockerCatalogEntry_Statics::NewProp_Listings_MetaData) }; // 3452416733
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCatalogEntry_Statics::NewProp_Entity_name_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "Comment", "/**\n     * The name of this entity\n     */" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCatalogRequestHandler.h" },
		{ "ToolTip", "The name of this entity" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerCatalogEntry_Statics::NewProp_Entity_name = { "Entity_name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerCatalogEntry, Entity_name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCatalogEntry_Statics::NewProp_Entity_name_MetaData), Z_Construct_UScriptStruct_FLootLockerCatalogEntry_Statics::NewProp_Entity_name_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLootLockerCatalogEntry_Statics::NewProp_Prices_Inner = { "Prices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLootLockerCatalogEntryPrice, METADATA_PARAMS(0, nullptr) }; // 1841530861
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCatalogEntry_Statics::NewProp_Prices_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "Comment", "/**\n     * A list of prices for this catalog entry\n     */" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCatalogRequestHandler.h" },
		{ "ToolTip", "A list of prices for this catalog entry" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLootLockerCatalogEntry_Statics::NewProp_Prices = { "Prices", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerCatalogEntry, Prices), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCatalogEntry_Statics::NewProp_Prices_MetaData), Z_Construct_UScriptStruct_FLootLockerCatalogEntry_Statics::NewProp_Prices_MetaData) }; // 1841530861
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCatalogEntry_Statics::NewProp_Entity_id_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "Comment", "/**\n     * The unique id of the entity that this entry refers to.\n     */" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCatalogRequestHandler.h" },
		{ "ToolTip", "The unique id of the entity that this entry refers to." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerCatalogEntry_Statics::NewProp_Entity_id = { "Entity_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerCatalogEntry, Entity_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCatalogEntry_Statics::NewProp_Entity_id_MetaData), Z_Construct_UScriptStruct_FLootLockerCatalogEntry_Statics::NewProp_Entity_id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCatalogEntry_Statics::NewProp_Catalog_listing_id_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "Comment", "/**\n     * A unique listing id for this entry in this catalog, grouping the entity and the prices. This is the key you use to look up details about the entity in the structure signified by the entity_kind.\n     */" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCatalogRequestHandler.h" },
		{ "ToolTip", "A unique listing id for this entry in this catalog, grouping the entity and the prices. This is the key you use to look up details about the entity in the structure signified by the entity_kind." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerCatalogEntry_Statics::NewProp_Catalog_listing_id = { "Catalog_listing_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerCatalogEntry, Catalog_listing_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCatalogEntry_Statics::NewProp_Catalog_listing_id_MetaData), Z_Construct_UScriptStruct_FLootLockerCatalogEntry_Statics::NewProp_Catalog_listing_id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCatalogEntry_Statics::NewProp_Purchasable_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "Comment", "/**\n     * Whether this entry is currently purchasable\n     */" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCatalogRequestHandler.h" },
		{ "ToolTip", "Whether this entry is currently purchasable" },
	};
#endif
	void Z_Construct_UScriptStruct_FLootLockerCatalogEntry_Statics::NewProp_Purchasable_SetBit(void* Obj)
	{
		((FLootLockerCatalogEntry*)Obj)->Purchasable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLootLockerCatalogEntry_Statics::NewProp_Purchasable = { "Purchasable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLootLockerCatalogEntry), &Z_Construct_UScriptStruct_FLootLockerCatalogEntry_Statics::NewProp_Purchasable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCatalogEntry_Statics::NewProp_Purchasable_MetaData), Z_Construct_UScriptStruct_FLootLockerCatalogEntry_Statics::NewProp_Purchasable_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerCatalogEntry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerCatalogEntry_Statics::NewProp_Created_at,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerCatalogEntry_Statics::NewProp_Entity_kind_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerCatalogEntry_Statics::NewProp_Entity_kind,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerCatalogEntry_Statics::NewProp_Listings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerCatalogEntry_Statics::NewProp_Entity_name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerCatalogEntry_Statics::NewProp_Prices_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerCatalogEntry_Statics::NewProp_Prices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerCatalogEntry_Statics::NewProp_Entity_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerCatalogEntry_Statics::NewProp_Catalog_listing_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerCatalogEntry_Statics::NewProp_Purchasable,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerCatalogEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		&NewStructOps,
		"LootLockerCatalogEntry",
		Z_Construct_UScriptStruct_FLootLockerCatalogEntry_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCatalogEntry_Statics::PropPointers),
		sizeof(FLootLockerCatalogEntry),
		alignof(FLootLockerCatalogEntry),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCatalogEntry_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerCatalogEntry_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCatalogEntry_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerCatalogEntry()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerCatalogEntry.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerCatalogEntry.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerCatalogEntry_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerCatalogEntry.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerAssetDetails;
class UScriptStruct* FLootLockerAssetDetails::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerAssetDetails.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerAssetDetails.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerAssetDetails, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerAssetDetails"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerAssetDetails.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerAssetDetails>()
{
	return FLootLockerAssetDetails::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerAssetDetails_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Variation_id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Variation_id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rental_option_id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Rental_option_id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Legacy_id_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Legacy_id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Thumbnail_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Thumbnail;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Catalog_listing_id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Catalog_listing_id;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerAssetDetails_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "LootLocker" },
		{ "Comment", "/**\n *\n */" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCatalogRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerAssetDetails_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerAssetDetails>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerAssetDetails_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "Comment", "/**\n     * The name of this asset\n     */" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCatalogRequestHandler.h" },
		{ "ToolTip", "The name of this asset" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerAssetDetails_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerAssetDetails, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerAssetDetails_Statics::NewProp_Name_MetaData), Z_Construct_UScriptStruct_FLootLockerAssetDetails_Statics::NewProp_Name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerAssetDetails_Statics::NewProp_Variation_id_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "Comment", "/**\n     * The id of the specific variation of this asset that this refers to\n     */" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCatalogRequestHandler.h" },
		{ "ToolTip", "The id of the specific variation of this asset that this refers to" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerAssetDetails_Statics::NewProp_Variation_id = { "Variation_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerAssetDetails, Variation_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerAssetDetails_Statics::NewProp_Variation_id_MetaData), Z_Construct_UScriptStruct_FLootLockerAssetDetails_Statics::NewProp_Variation_id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerAssetDetails_Statics::NewProp_Rental_option_id_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "Comment", "/**\n     * The id of the specific rental option of this asset that this refers to\n     */" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCatalogRequestHandler.h" },
		{ "ToolTip", "The id of the specific rental option of this asset that this refers to" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerAssetDetails_Statics::NewProp_Rental_option_id = { "Rental_option_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerAssetDetails, Rental_option_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerAssetDetails_Statics::NewProp_Rental_option_id_MetaData), Z_Construct_UScriptStruct_FLootLockerAssetDetails_Statics::NewProp_Rental_option_id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerAssetDetails_Statics::NewProp_Legacy_id_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "Comment", "/**\n     * The legacy id of this asset\n     */" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCatalogRequestHandler.h" },
		{ "ToolTip", "The legacy id of this asset" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLootLockerAssetDetails_Statics::NewProp_Legacy_id = { "Legacy_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerAssetDetails, Legacy_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerAssetDetails_Statics::NewProp_Legacy_id_MetaData), Z_Construct_UScriptStruct_FLootLockerAssetDetails_Statics::NewProp_Legacy_id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerAssetDetails_Statics::NewProp_Id_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "Comment", "/**\n     * The unique identifying id of this asset.\n     */" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCatalogRequestHandler.h" },
		{ "ToolTip", "The unique identifying id of this asset." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerAssetDetails_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerAssetDetails, Id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerAssetDetails_Statics::NewProp_Id_MetaData), Z_Construct_UScriptStruct_FLootLockerAssetDetails_Statics::NewProp_Id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerAssetDetails_Statics::NewProp_Thumbnail_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "Comment", "/**\n     * The thumbnail for this asset\n     */" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCatalogRequestHandler.h" },
		{ "ToolTip", "The thumbnail for this asset" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerAssetDetails_Statics::NewProp_Thumbnail = { "Thumbnail", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerAssetDetails, Thumbnail), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerAssetDetails_Statics::NewProp_Thumbnail_MetaData), Z_Construct_UScriptStruct_FLootLockerAssetDetails_Statics::NewProp_Thumbnail_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerAssetDetails_Statics::NewProp_Catalog_listing_id_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "Comment", "/**\n     * The Catalog listing ID for this asset detail\n     */" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCatalogRequestHandler.h" },
		{ "ToolTip", "The Catalog listing ID for this asset detail" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerAssetDetails_Statics::NewProp_Catalog_listing_id = { "Catalog_listing_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerAssetDetails, Catalog_listing_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerAssetDetails_Statics::NewProp_Catalog_listing_id_MetaData), Z_Construct_UScriptStruct_FLootLockerAssetDetails_Statics::NewProp_Catalog_listing_id_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerAssetDetails_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerAssetDetails_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerAssetDetails_Statics::NewProp_Variation_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerAssetDetails_Statics::NewProp_Rental_option_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerAssetDetails_Statics::NewProp_Legacy_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerAssetDetails_Statics::NewProp_Id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerAssetDetails_Statics::NewProp_Thumbnail,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerAssetDetails_Statics::NewProp_Catalog_listing_id,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerAssetDetails_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		&NewStructOps,
		"LootLockerAssetDetails",
		Z_Construct_UScriptStruct_FLootLockerAssetDetails_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerAssetDetails_Statics::PropPointers),
		sizeof(FLootLockerAssetDetails),
		alignof(FLootLockerAssetDetails),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerAssetDetails_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerAssetDetails_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerAssetDetails_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerAssetDetails()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerAssetDetails.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerAssetDetails.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerAssetDetails_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerAssetDetails.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerProgressionPointDetails;
class UScriptStruct* FLootLockerProgressionPointDetails::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerProgressionPointDetails.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerProgressionPointDetails.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerProgressionPointDetails, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerProgressionPointDetails"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerProgressionPointDetails.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerProgressionPointDetails>()
{
	return FLootLockerProgressionPointDetails::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerProgressionPointDetails_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Amount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Amount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Catalog_listing_id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Catalog_listing_id;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerProgressionPointDetails_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "LootLocker" },
		{ "Comment", "/**\n *\n */" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCatalogRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerProgressionPointDetails_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerProgressionPointDetails>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerProgressionPointDetails_Statics::NewProp_Key_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "Comment", "/**\n     * The unique key of the progression that this refers to\n     */" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCatalogRequestHandler.h" },
		{ "ToolTip", "The unique key of the progression that this refers to" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerProgressionPointDetails_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerProgressionPointDetails, Key), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerProgressionPointDetails_Statics::NewProp_Key_MetaData), Z_Construct_UScriptStruct_FLootLockerProgressionPointDetails_Statics::NewProp_Key_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerProgressionPointDetails_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "Comment", "/**\n     * The name of the progression that this refers to\n     */" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCatalogRequestHandler.h" },
		{ "ToolTip", "The name of the progression that this refers to" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerProgressionPointDetails_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerProgressionPointDetails, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerProgressionPointDetails_Statics::NewProp_Name_MetaData), Z_Construct_UScriptStruct_FLootLockerProgressionPointDetails_Statics::NewProp_Name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerProgressionPointDetails_Statics::NewProp_Amount_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "Comment", "/**\n     * The amount of points to be added to the progression in question\n     */" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCatalogRequestHandler.h" },
		{ "ToolTip", "The amount of points to be added to the progression in question" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLootLockerProgressionPointDetails_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerProgressionPointDetails, Amount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerProgressionPointDetails_Statics::NewProp_Amount_MetaData), Z_Construct_UScriptStruct_FLootLockerProgressionPointDetails_Statics::NewProp_Amount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerProgressionPointDetails_Statics::NewProp_Id_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "Comment", "/**\n     * The unique id of the progression that this refers to\n     */" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCatalogRequestHandler.h" },
		{ "ToolTip", "The unique id of the progression that this refers to" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerProgressionPointDetails_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerProgressionPointDetails, Id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerProgressionPointDetails_Statics::NewProp_Id_MetaData), Z_Construct_UScriptStruct_FLootLockerProgressionPointDetails_Statics::NewProp_Id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerProgressionPointDetails_Statics::NewProp_Catalog_listing_id_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "Comment", "/**\n     * The Catalog listing ID for this progression point detail\n     */" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCatalogRequestHandler.h" },
		{ "ToolTip", "The Catalog listing ID for this progression point detail" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerProgressionPointDetails_Statics::NewProp_Catalog_listing_id = { "Catalog_listing_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerProgressionPointDetails, Catalog_listing_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerProgressionPointDetails_Statics::NewProp_Catalog_listing_id_MetaData), Z_Construct_UScriptStruct_FLootLockerProgressionPointDetails_Statics::NewProp_Catalog_listing_id_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerProgressionPointDetails_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerProgressionPointDetails_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerProgressionPointDetails_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerProgressionPointDetails_Statics::NewProp_Amount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerProgressionPointDetails_Statics::NewProp_Id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerProgressionPointDetails_Statics::NewProp_Catalog_listing_id,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerProgressionPointDetails_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		&NewStructOps,
		"LootLockerProgressionPointDetails",
		Z_Construct_UScriptStruct_FLootLockerProgressionPointDetails_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerProgressionPointDetails_Statics::PropPointers),
		sizeof(FLootLockerProgressionPointDetails),
		alignof(FLootLockerProgressionPointDetails),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerProgressionPointDetails_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerProgressionPointDetails_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerProgressionPointDetails_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerProgressionPointDetails()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerProgressionPointDetails.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerProgressionPointDetails.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerProgressionPointDetails_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerProgressionPointDetails.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerProgressionResetDetails;
class UScriptStruct* FLootLockerProgressionResetDetails::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerProgressionResetDetails.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerProgressionResetDetails.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerProgressionResetDetails, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerProgressionResetDetails"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerProgressionResetDetails.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerProgressionResetDetails>()
{
	return FLootLockerProgressionResetDetails::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerProgressionResetDetails_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Catalog_listing_id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Catalog_listing_id;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerProgressionResetDetails_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "LootLocker" },
		{ "Comment", "/**\n *\n */" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCatalogRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerProgressionResetDetails_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerProgressionResetDetails>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerProgressionResetDetails_Statics::NewProp_Key_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "Comment", "/**\n     * The unique key of the progression that this refers to\n     */" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCatalogRequestHandler.h" },
		{ "ToolTip", "The unique key of the progression that this refers to" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerProgressionResetDetails_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerProgressionResetDetails, Key), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerProgressionResetDetails_Statics::NewProp_Key_MetaData), Z_Construct_UScriptStruct_FLootLockerProgressionResetDetails_Statics::NewProp_Key_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerProgressionResetDetails_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "Comment", "/**\n     * The name of the progression that this refers to\n     */" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCatalogRequestHandler.h" },
		{ "ToolTip", "The name of the progression that this refers to" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerProgressionResetDetails_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerProgressionResetDetails, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerProgressionResetDetails_Statics::NewProp_Name_MetaData), Z_Construct_UScriptStruct_FLootLockerProgressionResetDetails_Statics::NewProp_Name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerProgressionResetDetails_Statics::NewProp_Id_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "Comment", "/**\n     * The unique id of the progression that this refers to\n     */" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCatalogRequestHandler.h" },
		{ "ToolTip", "The unique id of the progression that this refers to" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerProgressionResetDetails_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerProgressionResetDetails, Id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerProgressionResetDetails_Statics::NewProp_Id_MetaData), Z_Construct_UScriptStruct_FLootLockerProgressionResetDetails_Statics::NewProp_Id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerProgressionResetDetails_Statics::NewProp_Catalog_listing_id_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "Comment", "/**\n     * The Catalog listing ID for this progression reset detail\n     */" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCatalogRequestHandler.h" },
		{ "ToolTip", "The Catalog listing ID for this progression reset detail" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerProgressionResetDetails_Statics::NewProp_Catalog_listing_id = { "Catalog_listing_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerProgressionResetDetails, Catalog_listing_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerProgressionResetDetails_Statics::NewProp_Catalog_listing_id_MetaData), Z_Construct_UScriptStruct_FLootLockerProgressionResetDetails_Statics::NewProp_Catalog_listing_id_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerProgressionResetDetails_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerProgressionResetDetails_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerProgressionResetDetails_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerProgressionResetDetails_Statics::NewProp_Id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerProgressionResetDetails_Statics::NewProp_Catalog_listing_id,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerProgressionResetDetails_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		&NewStructOps,
		"LootLockerProgressionResetDetails",
		Z_Construct_UScriptStruct_FLootLockerProgressionResetDetails_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerProgressionResetDetails_Statics::PropPointers),
		sizeof(FLootLockerProgressionResetDetails),
		alignof(FLootLockerProgressionResetDetails),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerProgressionResetDetails_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerProgressionResetDetails_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerProgressionResetDetails_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerProgressionResetDetails()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerProgressionResetDetails.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerProgressionResetDetails.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerProgressionResetDetails_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerProgressionResetDetails.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerCurrencyDetails;
class UScriptStruct* FLootLockerCurrencyDetails::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerCurrencyDetails.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerCurrencyDetails.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerCurrencyDetails, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerCurrencyDetails"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerCurrencyDetails.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerCurrencyDetails>()
{
	return FLootLockerCurrencyDetails::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerCurrencyDetails_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Code_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Code;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Amount_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Amount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Catalog_listing_id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Catalog_listing_id;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCurrencyDetails_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "LootLocker" },
		{ "Comment", "/**\n *\n */" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCatalogRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerCurrencyDetails_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerCurrencyDetails>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCurrencyDetails_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "Comment", "/**\n     * The name of the currency that this refers to\n     */" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCatalogRequestHandler.h" },
		{ "ToolTip", "The name of the currency that this refers to" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerCurrencyDetails_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerCurrencyDetails, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCurrencyDetails_Statics::NewProp_Name_MetaData), Z_Construct_UScriptStruct_FLootLockerCurrencyDetails_Statics::NewProp_Name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCurrencyDetails_Statics::NewProp_Code_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "Comment", "/**\n     * The unique code of the currency that this refers to\n     */" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCatalogRequestHandler.h" },
		{ "ToolTip", "The unique code of the currency that this refers to" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerCurrencyDetails_Statics::NewProp_Code = { "Code", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerCurrencyDetails, Code), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCurrencyDetails_Statics::NewProp_Code_MetaData), Z_Construct_UScriptStruct_FLootLockerCurrencyDetails_Statics::NewProp_Code_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCurrencyDetails_Statics::NewProp_Amount_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "Comment", "/**\n     * The amount of this currency to be awarded\n     */" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCatalogRequestHandler.h" },
		{ "ToolTip", "The amount of this currency to be awarded" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerCurrencyDetails_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerCurrencyDetails, Amount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCurrencyDetails_Statics::NewProp_Amount_MetaData), Z_Construct_UScriptStruct_FLootLockerCurrencyDetails_Statics::NewProp_Amount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCurrencyDetails_Statics::NewProp_Id_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "Comment", "/**\n     * The unique id of the currency that this refers to\n     */" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCatalogRequestHandler.h" },
		{ "ToolTip", "The unique id of the currency that this refers to" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerCurrencyDetails_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerCurrencyDetails, Id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCurrencyDetails_Statics::NewProp_Id_MetaData), Z_Construct_UScriptStruct_FLootLockerCurrencyDetails_Statics::NewProp_Id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCurrencyDetails_Statics::NewProp_Catalog_listing_id_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "Comment", "/**\n     * The Catalog listing ID for this currency detail\n     */" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCatalogRequestHandler.h" },
		{ "ToolTip", "The Catalog listing ID for this currency detail" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerCurrencyDetails_Statics::NewProp_Catalog_listing_id = { "Catalog_listing_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerCurrencyDetails, Catalog_listing_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCurrencyDetails_Statics::NewProp_Catalog_listing_id_MetaData), Z_Construct_UScriptStruct_FLootLockerCurrencyDetails_Statics::NewProp_Catalog_listing_id_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerCurrencyDetails_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerCurrencyDetails_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerCurrencyDetails_Statics::NewProp_Code,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerCurrencyDetails_Statics::NewProp_Amount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerCurrencyDetails_Statics::NewProp_Id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerCurrencyDetails_Statics::NewProp_Catalog_listing_id,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerCurrencyDetails_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		&NewStructOps,
		"LootLockerCurrencyDetails",
		Z_Construct_UScriptStruct_FLootLockerCurrencyDetails_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCurrencyDetails_Statics::PropPointers),
		sizeof(FLootLockerCurrencyDetails),
		alignof(FLootLockerCurrencyDetails),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCurrencyDetails_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerCurrencyDetails_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCurrencyDetails_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerCurrencyDetails()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerCurrencyDetails.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerCurrencyDetails.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerCurrencyDetails_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerCurrencyDetails.InnerSingleton;
	}

static_assert(std::is_polymorphic<FLootLockerListCatalogsResponse>() == std::is_polymorphic<FLootLockerResponse>(), "USTRUCT FLootLockerListCatalogsResponse cannot be polymorphic unless super FLootLockerResponse is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerListCatalogsResponse;
class UScriptStruct* FLootLockerListCatalogsResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerListCatalogsResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerListCatalogsResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerListCatalogsResponse, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerListCatalogsResponse"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerListCatalogsResponse.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerListCatalogsResponse>()
{
	return FLootLockerListCatalogsResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerListCatalogsResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Catalogs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Catalogs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Catalogs;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerListCatalogsResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "LootLocker" },
		{ "Comment", "/**\n *\n */" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCatalogRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerListCatalogsResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerListCatalogsResponse>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLootLockerListCatalogsResponse_Statics::NewProp_Catalogs_Inner = { "Catalogs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLootLockerCatalog, METADATA_PARAMS(0, nullptr) }; // 2028343804
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerListCatalogsResponse_Statics::NewProp_Catalogs_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "Comment", "/**\n     * A list of the prices for the game\n     */" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCatalogRequestHandler.h" },
		{ "ToolTip", "A list of the prices for the game" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLootLockerListCatalogsResponse_Statics::NewProp_Catalogs = { "Catalogs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerListCatalogsResponse, Catalogs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerListCatalogsResponse_Statics::NewProp_Catalogs_MetaData), Z_Construct_UScriptStruct_FLootLockerListCatalogsResponse_Statics::NewProp_Catalogs_MetaData) }; // 2028343804
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerListCatalogsResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerListCatalogsResponse_Statics::NewProp_Catalogs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerListCatalogsResponse_Statics::NewProp_Catalogs,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerListCatalogsResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		Z_Construct_UScriptStruct_FLootLockerResponse,
		&NewStructOps,
		"LootLockerListCatalogsResponse",
		Z_Construct_UScriptStruct_FLootLockerListCatalogsResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerListCatalogsResponse_Statics::PropPointers),
		sizeof(FLootLockerListCatalogsResponse),
		alignof(FLootLockerListCatalogsResponse),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerListCatalogsResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerListCatalogsResponse_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerListCatalogsResponse_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerListCatalogsResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerListCatalogsResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerListCatalogsResponse.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerListCatalogsResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerListCatalogsResponse.InnerSingleton;
	}

static_assert(std::is_polymorphic<FInternalLootLockerListCatalogPricesResponse>() == std::is_polymorphic<FLootLockerResponse>(), "USTRUCT FInternalLootLockerListCatalogPricesResponse cannot be polymorphic unless super FLootLockerResponse is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InternalLootLockerListCatalogPricesResponse;
class UScriptStruct* FInternalLootLockerListCatalogPricesResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InternalLootLockerListCatalogPricesResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InternalLootLockerListCatalogPricesResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInternalLootLockerListCatalogPricesResponse, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("InternalLootLockerListCatalogPricesResponse"));
	}
	return Z_Registration_Info_UScriptStruct_InternalLootLockerListCatalogPricesResponse.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FInternalLootLockerListCatalogPricesResponse>()
{
	return FInternalLootLockerListCatalogPricesResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FInternalLootLockerListCatalogPricesResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Catalog_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Catalog;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Entries_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Entries_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Entries;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Assets_Details_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Assets_Details_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Assets_Details;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Progression_Points_Details_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Progression_Points_Details_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Progression_Points_Details;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Progression_Resets_Details_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Progression_Resets_Details_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Progression_Resets_Details;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Currency_Details_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Currency_Details_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Currency_Details;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Pagination_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Pagination;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInternalLootLockerListCatalogPricesResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "LootLocker" },
		{ "Comment", "/**\n * This is what the response looks like, but we want to expose the Mapped variant\n */" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCatalogRequestHandler.h" },
		{ "ToolTip", "This is what the response looks like, but we want to expose the Mapped variant" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInternalLootLockerListCatalogPricesResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInternalLootLockerListCatalogPricesResponse>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInternalLootLockerListCatalogPricesResponse_Statics::NewProp_Catalog_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCatalogRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInternalLootLockerListCatalogPricesResponse_Statics::NewProp_Catalog = { "Catalog", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInternalLootLockerListCatalogPricesResponse, Catalog), Z_Construct_UScriptStruct_FLootLockerCatalog, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInternalLootLockerListCatalogPricesResponse_Statics::NewProp_Catalog_MetaData), Z_Construct_UScriptStruct_FInternalLootLockerListCatalogPricesResponse_Statics::NewProp_Catalog_MetaData) }; // 2028343804
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInternalLootLockerListCatalogPricesResponse_Statics::NewProp_Entries_Inner = { "Entries", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLootLockerCatalogEntry, METADATA_PARAMS(0, nullptr) }; // 2674470963
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInternalLootLockerListCatalogPricesResponse_Statics::NewProp_Entries_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCatalogRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FInternalLootLockerListCatalogPricesResponse_Statics::NewProp_Entries = { "Entries", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInternalLootLockerListCatalogPricesResponse, Entries), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInternalLootLockerListCatalogPricesResponse_Statics::NewProp_Entries_MetaData), Z_Construct_UScriptStruct_FInternalLootLockerListCatalogPricesResponse_Statics::NewProp_Entries_MetaData) }; // 2674470963
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInternalLootLockerListCatalogPricesResponse_Statics::NewProp_Assets_Details_Inner = { "Assets_Details", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLootLockerAssetDetails, METADATA_PARAMS(0, nullptr) }; // 3275389688
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInternalLootLockerListCatalogPricesResponse_Statics::NewProp_Assets_Details_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCatalogRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FInternalLootLockerListCatalogPricesResponse_Statics::NewProp_Assets_Details = { "Assets_Details", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInternalLootLockerListCatalogPricesResponse, Assets_Details), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInternalLootLockerListCatalogPricesResponse_Statics::NewProp_Assets_Details_MetaData), Z_Construct_UScriptStruct_FInternalLootLockerListCatalogPricesResponse_Statics::NewProp_Assets_Details_MetaData) }; // 3275389688
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInternalLootLockerListCatalogPricesResponse_Statics::NewProp_Progression_Points_Details_Inner = { "Progression_Points_Details", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLootLockerProgressionPointDetails, METADATA_PARAMS(0, nullptr) }; // 3608130112
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInternalLootLockerListCatalogPricesResponse_Statics::NewProp_Progression_Points_Details_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCatalogRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FInternalLootLockerListCatalogPricesResponse_Statics::NewProp_Progression_Points_Details = { "Progression_Points_Details", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInternalLootLockerListCatalogPricesResponse, Progression_Points_Details), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInternalLootLockerListCatalogPricesResponse_Statics::NewProp_Progression_Points_Details_MetaData), Z_Construct_UScriptStruct_FInternalLootLockerListCatalogPricesResponse_Statics::NewProp_Progression_Points_Details_MetaData) }; // 3608130112
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInternalLootLockerListCatalogPricesResponse_Statics::NewProp_Progression_Resets_Details_Inner = { "Progression_Resets_Details", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLootLockerProgressionResetDetails, METADATA_PARAMS(0, nullptr) }; // 1354315539
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInternalLootLockerListCatalogPricesResponse_Statics::NewProp_Progression_Resets_Details_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCatalogRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FInternalLootLockerListCatalogPricesResponse_Statics::NewProp_Progression_Resets_Details = { "Progression_Resets_Details", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInternalLootLockerListCatalogPricesResponse, Progression_Resets_Details), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInternalLootLockerListCatalogPricesResponse_Statics::NewProp_Progression_Resets_Details_MetaData), Z_Construct_UScriptStruct_FInternalLootLockerListCatalogPricesResponse_Statics::NewProp_Progression_Resets_Details_MetaData) }; // 1354315539
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInternalLootLockerListCatalogPricesResponse_Statics::NewProp_Currency_Details_Inner = { "Currency_Details", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLootLockerCurrencyDetails, METADATA_PARAMS(0, nullptr) }; // 908722085
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInternalLootLockerListCatalogPricesResponse_Statics::NewProp_Currency_Details_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCatalogRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FInternalLootLockerListCatalogPricesResponse_Statics::NewProp_Currency_Details = { "Currency_Details", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInternalLootLockerListCatalogPricesResponse, Currency_Details), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInternalLootLockerListCatalogPricesResponse_Statics::NewProp_Currency_Details_MetaData), Z_Construct_UScriptStruct_FInternalLootLockerListCatalogPricesResponse_Statics::NewProp_Currency_Details_MetaData) }; // 908722085
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInternalLootLockerListCatalogPricesResponse_Statics::NewProp_Pagination_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCatalogRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInternalLootLockerListCatalogPricesResponse_Statics::NewProp_Pagination = { "Pagination", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInternalLootLockerListCatalogPricesResponse, Pagination), Z_Construct_UScriptStruct_FLootLockerKeyBasedPagination, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInternalLootLockerListCatalogPricesResponse_Statics::NewProp_Pagination_MetaData), Z_Construct_UScriptStruct_FInternalLootLockerListCatalogPricesResponse_Statics::NewProp_Pagination_MetaData) }; // 1245497498
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInternalLootLockerListCatalogPricesResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInternalLootLockerListCatalogPricesResponse_Statics::NewProp_Catalog,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInternalLootLockerListCatalogPricesResponse_Statics::NewProp_Entries_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInternalLootLockerListCatalogPricesResponse_Statics::NewProp_Entries,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInternalLootLockerListCatalogPricesResponse_Statics::NewProp_Assets_Details_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInternalLootLockerListCatalogPricesResponse_Statics::NewProp_Assets_Details,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInternalLootLockerListCatalogPricesResponse_Statics::NewProp_Progression_Points_Details_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInternalLootLockerListCatalogPricesResponse_Statics::NewProp_Progression_Points_Details,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInternalLootLockerListCatalogPricesResponse_Statics::NewProp_Progression_Resets_Details_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInternalLootLockerListCatalogPricesResponse_Statics::NewProp_Progression_Resets_Details,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInternalLootLockerListCatalogPricesResponse_Statics::NewProp_Currency_Details_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInternalLootLockerListCatalogPricesResponse_Statics::NewProp_Currency_Details,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInternalLootLockerListCatalogPricesResponse_Statics::NewProp_Pagination,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInternalLootLockerListCatalogPricesResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		Z_Construct_UScriptStruct_FLootLockerResponse,
		&NewStructOps,
		"InternalLootLockerListCatalogPricesResponse",
		Z_Construct_UScriptStruct_FInternalLootLockerListCatalogPricesResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInternalLootLockerListCatalogPricesResponse_Statics::PropPointers),
		sizeof(FInternalLootLockerListCatalogPricesResponse),
		alignof(FInternalLootLockerListCatalogPricesResponse),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInternalLootLockerListCatalogPricesResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInternalLootLockerListCatalogPricesResponse_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInternalLootLockerListCatalogPricesResponse_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FInternalLootLockerListCatalogPricesResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_InternalLootLockerListCatalogPricesResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InternalLootLockerListCatalogPricesResponse.InnerSingleton, Z_Construct_UScriptStruct_FInternalLootLockerListCatalogPricesResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_InternalLootLockerListCatalogPricesResponse.InnerSingleton;
	}

static_assert(std::is_polymorphic<FLootLockerInlinedCatalogEntry>() == std::is_polymorphic<FLootLockerCatalogEntry>(), "USTRUCT FLootLockerInlinedCatalogEntry cannot be polymorphic unless super FLootLockerCatalogEntry is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerInlinedCatalogEntry;
class UScriptStruct* FLootLockerInlinedCatalogEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerInlinedCatalogEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerInlinedCatalogEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerInlinedCatalogEntry, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerInlinedCatalogEntry"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerInlinedCatalogEntry.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerInlinedCatalogEntry>()
{
	return FLootLockerInlinedCatalogEntry::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerInlinedCatalogEntry_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetDetails_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AssetDetails;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProgressionPointDetails_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ProgressionPointDetails;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProgressionResetDetails_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ProgressionResetDetails;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrencyDetails_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CurrencyDetails;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerInlinedCatalogEntry_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "LootLocker" },
		{ "Comment", "/**\n * A Convenience type to use when you need inlined catalog items\n */" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCatalogRequestHandler.h" },
		{ "ToolTip", "A Convenience type to use when you need inlined catalog items" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerInlinedCatalogEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerInlinedCatalogEntry>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerInlinedCatalogEntry_Statics::NewProp_AssetDetails_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "Comment", "/**\n     * Asset details inlined for this catalog entry, will be Empty if the entity_kind is not asset\n     */" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCatalogRequestHandler.h" },
		{ "ToolTip", "Asset details inlined for this catalog entry, will be Empty if the entity_kind is not asset" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLootLockerInlinedCatalogEntry_Statics::NewProp_AssetDetails = { "AssetDetails", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerInlinedCatalogEntry, AssetDetails), Z_Construct_UScriptStruct_FLootLockerAssetDetails, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerInlinedCatalogEntry_Statics::NewProp_AssetDetails_MetaData), Z_Construct_UScriptStruct_FLootLockerInlinedCatalogEntry_Statics::NewProp_AssetDetails_MetaData) }; // 3275389688
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerInlinedCatalogEntry_Statics::NewProp_ProgressionPointDetails_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "Comment", "/**\n     * Progression point details inlined for this catalog entry, will be Empty if the entity_kind is not progression_points\n     */" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCatalogRequestHandler.h" },
		{ "ToolTip", "Progression point details inlined for this catalog entry, will be Empty if the entity_kind is not progression_points" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLootLockerInlinedCatalogEntry_Statics::NewProp_ProgressionPointDetails = { "ProgressionPointDetails", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerInlinedCatalogEntry, ProgressionPointDetails), Z_Construct_UScriptStruct_FLootLockerProgressionPointDetails, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerInlinedCatalogEntry_Statics::NewProp_ProgressionPointDetails_MetaData), Z_Construct_UScriptStruct_FLootLockerInlinedCatalogEntry_Statics::NewProp_ProgressionPointDetails_MetaData) }; // 3608130112
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerInlinedCatalogEntry_Statics::NewProp_ProgressionResetDetails_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "Comment", "/**\n     * Progression reset details inlined for this catalog entry, will be Empty if the entity_kind is not progression_reset\n     */" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCatalogRequestHandler.h" },
		{ "ToolTip", "Progression reset details inlined for this catalog entry, will be Empty if the entity_kind is not progression_reset" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLootLockerInlinedCatalogEntry_Statics::NewProp_ProgressionResetDetails = { "ProgressionResetDetails", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerInlinedCatalogEntry, ProgressionResetDetails), Z_Construct_UScriptStruct_FLootLockerProgressionResetDetails, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerInlinedCatalogEntry_Statics::NewProp_ProgressionResetDetails_MetaData), Z_Construct_UScriptStruct_FLootLockerInlinedCatalogEntry_Statics::NewProp_ProgressionResetDetails_MetaData) }; // 1354315539
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerInlinedCatalogEntry_Statics::NewProp_CurrencyDetails_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "Comment", "/**\n     * Currency details inlined for this catalog entry, will be Empty if the entity_kind is not currency\n     */" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCatalogRequestHandler.h" },
		{ "ToolTip", "Currency details inlined for this catalog entry, will be Empty if the entity_kind is not currency" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLootLockerInlinedCatalogEntry_Statics::NewProp_CurrencyDetails = { "CurrencyDetails", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerInlinedCatalogEntry, CurrencyDetails), Z_Construct_UScriptStruct_FLootLockerCurrencyDetails, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerInlinedCatalogEntry_Statics::NewProp_CurrencyDetails_MetaData), Z_Construct_UScriptStruct_FLootLockerInlinedCatalogEntry_Statics::NewProp_CurrencyDetails_MetaData) }; // 908722085
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerInlinedCatalogEntry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerInlinedCatalogEntry_Statics::NewProp_AssetDetails,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerInlinedCatalogEntry_Statics::NewProp_ProgressionPointDetails,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerInlinedCatalogEntry_Statics::NewProp_ProgressionResetDetails,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerInlinedCatalogEntry_Statics::NewProp_CurrencyDetails,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerInlinedCatalogEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		Z_Construct_UScriptStruct_FLootLockerCatalogEntry,
		&NewStructOps,
		"LootLockerInlinedCatalogEntry",
		Z_Construct_UScriptStruct_FLootLockerInlinedCatalogEntry_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerInlinedCatalogEntry_Statics::PropPointers),
		sizeof(FLootLockerInlinedCatalogEntry),
		alignof(FLootLockerInlinedCatalogEntry),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerInlinedCatalogEntry_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerInlinedCatalogEntry_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerInlinedCatalogEntry_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerInlinedCatalogEntry()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerInlinedCatalogEntry.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerInlinedCatalogEntry.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerInlinedCatalogEntry_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerInlinedCatalogEntry.InnerSingleton;
	}

static_assert(std::is_polymorphic<FLootLockerListCatalogPricesResponse>() == std::is_polymorphic<FLootLockerResponse>(), "USTRUCT FLootLockerListCatalogPricesResponse cannot be polymorphic unless super FLootLockerResponse is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerListCatalogPricesResponse;
class UScriptStruct* FLootLockerListCatalogPricesResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerListCatalogPricesResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerListCatalogPricesResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerListCatalogPricesResponse, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerListCatalogPricesResponse"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerListCatalogPricesResponse.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerListCatalogPricesResponse>()
{
	return FLootLockerListCatalogPricesResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerListCatalogPricesResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Catalog_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Catalog;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Entries_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Entries_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Entries;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Asset_Details_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Asset_Details_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Asset_Details_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Asset_Details;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Progression_Point_Details_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Progression_Point_Details_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Progression_Point_Details_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Progression_Point_Details;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Progression_Reset_Details_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Progression_Reset_Details_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Progression_Reset_Details_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Progression_Reset_Details;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Currency_Details_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Currency_Details_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Currency_Details_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Currency_Details;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Pagination_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Pagination;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerListCatalogPricesResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "LootLocker" },
		{ "Comment", "/**\n *\n */" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCatalogRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerListCatalogPricesResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerListCatalogPricesResponse>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerListCatalogPricesResponse_Statics::NewProp_Catalog_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "Comment", "/**\n     * Details about the catalog that the prices is in\n     */" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCatalogRequestHandler.h" },
		{ "ToolTip", "Details about the catalog that the prices is in" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLootLockerListCatalogPricesResponse_Statics::NewProp_Catalog = { "Catalog", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerListCatalogPricesResponse, Catalog), Z_Construct_UScriptStruct_FLootLockerCatalog, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerListCatalogPricesResponse_Statics::NewProp_Catalog_MetaData), Z_Construct_UScriptStruct_FLootLockerListCatalogPricesResponse_Statics::NewProp_Catalog_MetaData) }; // 2028343804
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLootLockerListCatalogPricesResponse_Statics::NewProp_Entries_Inner = { "Entries", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLootLockerCatalogEntry, METADATA_PARAMS(0, nullptr) }; // 2674470963
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerListCatalogPricesResponse_Statics::NewProp_Entries_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "Comment", "/**\n     * A list of entries available in this catalog\n     */" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCatalogRequestHandler.h" },
		{ "ToolTip", "A list of entries available in this catalog" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLootLockerListCatalogPricesResponse_Statics::NewProp_Entries = { "Entries", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerListCatalogPricesResponse, Entries), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerListCatalogPricesResponse_Statics::NewProp_Entries_MetaData), Z_Construct_UScriptStruct_FLootLockerListCatalogPricesResponse_Statics::NewProp_Entries_MetaData) }; // 2674470963
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLootLockerListCatalogPricesResponse_Statics::NewProp_Asset_Details_ValueProp = { "Asset_Details", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FLootLockerAssetDetails, METADATA_PARAMS(0, nullptr) }; // 3275389688
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerListCatalogPricesResponse_Statics::NewProp_Asset_Details_Key_KeyProp = { "Asset_Details_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerListCatalogPricesResponse_Statics::NewProp_Asset_Details_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "Comment", "/*Catalog_listing_id*/" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCatalogRequestHandler.h" },
		{ "ToolTip", "Catalog_listing_id" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FLootLockerListCatalogPricesResponse_Statics::NewProp_Asset_Details = { "Asset_Details", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerListCatalogPricesResponse, Asset_Details), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerListCatalogPricesResponse_Statics::NewProp_Asset_Details_MetaData), Z_Construct_UScriptStruct_FLootLockerListCatalogPricesResponse_Statics::NewProp_Asset_Details_MetaData) }; // 3275389688
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLootLockerListCatalogPricesResponse_Statics::NewProp_Progression_Point_Details_ValueProp = { "Progression_Point_Details", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FLootLockerProgressionPointDetails, METADATA_PARAMS(0, nullptr) }; // 3608130112
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerListCatalogPricesResponse_Statics::NewProp_Progression_Point_Details_Key_KeyProp = { "Progression_Point_Details_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerListCatalogPricesResponse_Statics::NewProp_Progression_Point_Details_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "Comment", "/*Catalog_listing_id*/" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCatalogRequestHandler.h" },
		{ "ToolTip", "Catalog_listing_id" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FLootLockerListCatalogPricesResponse_Statics::NewProp_Progression_Point_Details = { "Progression_Point_Details", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerListCatalogPricesResponse, Progression_Point_Details), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerListCatalogPricesResponse_Statics::NewProp_Progression_Point_Details_MetaData), Z_Construct_UScriptStruct_FLootLockerListCatalogPricesResponse_Statics::NewProp_Progression_Point_Details_MetaData) }; // 3608130112
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLootLockerListCatalogPricesResponse_Statics::NewProp_Progression_Reset_Details_ValueProp = { "Progression_Reset_Details", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FLootLockerProgressionResetDetails, METADATA_PARAMS(0, nullptr) }; // 1354315539
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerListCatalogPricesResponse_Statics::NewProp_Progression_Reset_Details_Key_KeyProp = { "Progression_Reset_Details_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerListCatalogPricesResponse_Statics::NewProp_Progression_Reset_Details_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "Comment", "/*Catalog_listing_id*/" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCatalogRequestHandler.h" },
		{ "ToolTip", "Catalog_listing_id" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FLootLockerListCatalogPricesResponse_Statics::NewProp_Progression_Reset_Details = { "Progression_Reset_Details", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerListCatalogPricesResponse, Progression_Reset_Details), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerListCatalogPricesResponse_Statics::NewProp_Progression_Reset_Details_MetaData), Z_Construct_UScriptStruct_FLootLockerListCatalogPricesResponse_Statics::NewProp_Progression_Reset_Details_MetaData) }; // 1354315539
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLootLockerListCatalogPricesResponse_Statics::NewProp_Currency_Details_ValueProp = { "Currency_Details", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FLootLockerCurrencyDetails, METADATA_PARAMS(0, nullptr) }; // 908722085
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerListCatalogPricesResponse_Statics::NewProp_Currency_Details_Key_KeyProp = { "Currency_Details_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerListCatalogPricesResponse_Statics::NewProp_Currency_Details_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "Comment", "/*Catalog_listing_id*/" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCatalogRequestHandler.h" },
		{ "ToolTip", "Catalog_listing_id" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FLootLockerListCatalogPricesResponse_Statics::NewProp_Currency_Details = { "Currency_Details", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerListCatalogPricesResponse, Currency_Details), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerListCatalogPricesResponse_Statics::NewProp_Currency_Details_MetaData), Z_Construct_UScriptStruct_FLootLockerListCatalogPricesResponse_Statics::NewProp_Currency_Details_MetaData) }; // 908722085
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerListCatalogPricesResponse_Statics::NewProp_Pagination_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "Comment", "/**\n     * Pagination data to use for subsequent requests\n     */" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCatalogRequestHandler.h" },
		{ "ToolTip", "Pagination data to use for subsequent requests" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLootLockerListCatalogPricesResponse_Statics::NewProp_Pagination = { "Pagination", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerListCatalogPricesResponse, Pagination), Z_Construct_UScriptStruct_FLootLockerKeyBasedPagination, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerListCatalogPricesResponse_Statics::NewProp_Pagination_MetaData), Z_Construct_UScriptStruct_FLootLockerListCatalogPricesResponse_Statics::NewProp_Pagination_MetaData) }; // 1245497498
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerListCatalogPricesResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerListCatalogPricesResponse_Statics::NewProp_Catalog,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerListCatalogPricesResponse_Statics::NewProp_Entries_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerListCatalogPricesResponse_Statics::NewProp_Entries,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerListCatalogPricesResponse_Statics::NewProp_Asset_Details_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerListCatalogPricesResponse_Statics::NewProp_Asset_Details_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerListCatalogPricesResponse_Statics::NewProp_Asset_Details,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerListCatalogPricesResponse_Statics::NewProp_Progression_Point_Details_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerListCatalogPricesResponse_Statics::NewProp_Progression_Point_Details_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerListCatalogPricesResponse_Statics::NewProp_Progression_Point_Details,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerListCatalogPricesResponse_Statics::NewProp_Progression_Reset_Details_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerListCatalogPricesResponse_Statics::NewProp_Progression_Reset_Details_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerListCatalogPricesResponse_Statics::NewProp_Progression_Reset_Details,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerListCatalogPricesResponse_Statics::NewProp_Currency_Details_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerListCatalogPricesResponse_Statics::NewProp_Currency_Details_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerListCatalogPricesResponse_Statics::NewProp_Currency_Details,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerListCatalogPricesResponse_Statics::NewProp_Pagination,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerListCatalogPricesResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		Z_Construct_UScriptStruct_FLootLockerResponse,
		&NewStructOps,
		"LootLockerListCatalogPricesResponse",
		Z_Construct_UScriptStruct_FLootLockerListCatalogPricesResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerListCatalogPricesResponse_Statics::PropPointers),
		sizeof(FLootLockerListCatalogPricesResponse),
		alignof(FLootLockerListCatalogPricesResponse),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerListCatalogPricesResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerListCatalogPricesResponse_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerListCatalogPricesResponse_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerListCatalogPricesResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerListCatalogPricesResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerListCatalogPricesResponse.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerListCatalogPricesResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerListCatalogPricesResponse.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerListCatalogsResponseBP__DelegateSignature_Statics
	{
		struct _Script_LootLockerSDK_eventLootLockerListCatalogsResponseBP_Parms
		{
			FLootLockerListCatalogsResponse Response;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Response;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerListCatalogsResponseBP__DelegateSignature_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LootLockerSDK_eventLootLockerListCatalogsResponseBP_Parms, Response), Z_Construct_UScriptStruct_FLootLockerListCatalogsResponse, METADATA_PARAMS(0, nullptr) }; // 1401051587
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerListCatalogsResponseBP__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerListCatalogsResponseBP__DelegateSignature_Statics::NewProp_Response,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerListCatalogsResponseBP__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n * Blueprint response delegate for listing catalogs\n */" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCatalogRequestHandler.h" },
		{ "ToolTip", "Blueprint response delegate for listing catalogs" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerListCatalogsResponseBP__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LootLockerSDK, nullptr, "LootLockerListCatalogsResponseBP__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerListCatalogsResponseBP__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerListCatalogsResponseBP__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerListCatalogsResponseBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventLootLockerListCatalogsResponseBP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerListCatalogsResponseBP__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerListCatalogsResponseBP__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerListCatalogsResponseBP__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerListCatalogsResponseBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventLootLockerListCatalogsResponseBP_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerListCatalogsResponseBP__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerListCatalogsResponseBP__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FLootLockerListCatalogsResponseBP_DelegateWrapper(const FScriptDelegate& LootLockerListCatalogsResponseBP, FLootLockerListCatalogsResponse Response)
{
	struct _Script_LootLockerSDK_eventLootLockerListCatalogsResponseBP_Parms
	{
		FLootLockerListCatalogsResponse Response;
	};
	_Script_LootLockerSDK_eventLootLockerListCatalogsResponseBP_Parms Parms;
	Parms.Response=Response;
	LootLockerListCatalogsResponseBP.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerListCatalogPricesResponseBP__DelegateSignature_Statics
	{
		struct _Script_LootLockerSDK_eventLootLockerListCatalogPricesResponseBP_Parms
		{
			FLootLockerListCatalogPricesResponse Response;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Response;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerListCatalogPricesResponseBP__DelegateSignature_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LootLockerSDK_eventLootLockerListCatalogPricesResponseBP_Parms, Response), Z_Construct_UScriptStruct_FLootLockerListCatalogPricesResponse, METADATA_PARAMS(0, nullptr) }; // 1353524592
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerListCatalogPricesResponseBP__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerListCatalogPricesResponseBP__DelegateSignature_Statics::NewProp_Response,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerListCatalogPricesResponseBP__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n * Blueprint response delegate for listing items and prices in a catalog\n */" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCatalogRequestHandler.h" },
		{ "ToolTip", "Blueprint response delegate for listing items and prices in a catalog" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerListCatalogPricesResponseBP__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LootLockerSDK, nullptr, "LootLockerListCatalogPricesResponseBP__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerListCatalogPricesResponseBP__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerListCatalogPricesResponseBP__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerListCatalogPricesResponseBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventLootLockerListCatalogPricesResponseBP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerListCatalogPricesResponseBP__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerListCatalogPricesResponseBP__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerListCatalogPricesResponseBP__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerListCatalogPricesResponseBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventLootLockerListCatalogPricesResponseBP_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerListCatalogPricesResponseBP__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerListCatalogPricesResponseBP__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FLootLockerListCatalogPricesResponseBP_DelegateWrapper(const FScriptDelegate& LootLockerListCatalogPricesResponseBP, FLootLockerListCatalogPricesResponse Response)
{
	struct _Script_LootLockerSDK_eventLootLockerListCatalogPricesResponseBP_Parms
	{
		FLootLockerListCatalogPricesResponse Response;
	};
	_Script_LootLockerSDK_eventLootLockerListCatalogPricesResponseBP_Parms Parms;
	Parms.Response=Response;
	LootLockerListCatalogPricesResponseBP.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_LootLockerSDK_InternalLootLockerListCatalogPricesResponseBP__DelegateSignature_Statics
	{
		struct _Script_LootLockerSDK_eventInternalLootLockerListCatalogPricesResponseBP_Parms
		{
			FInternalLootLockerListCatalogPricesResponse Response;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Response;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_LootLockerSDK_InternalLootLockerListCatalogPricesResponseBP__DelegateSignature_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LootLockerSDK_eventInternalLootLockerListCatalogPricesResponseBP_Parms, Response), Z_Construct_UScriptStruct_FInternalLootLockerListCatalogPricesResponse, METADATA_PARAMS(0, nullptr) }; // 4223430734
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LootLockerSDK_InternalLootLockerListCatalogPricesResponseBP__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LootLockerSDK_InternalLootLockerListCatalogPricesResponseBP__DelegateSignature_Statics::NewProp_Response,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LootLockerSDK_InternalLootLockerListCatalogPricesResponseBP__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n * Internal Blueprint response delegate for listing items and prices in a catalog with details as arrays\n */" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCatalogRequestHandler.h" },
		{ "ToolTip", "Internal Blueprint response delegate for listing items and prices in a catalog with details as arrays" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LootLockerSDK_InternalLootLockerListCatalogPricesResponseBP__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LootLockerSDK, nullptr, "InternalLootLockerListCatalogPricesResponseBP__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_LootLockerSDK_InternalLootLockerListCatalogPricesResponseBP__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_InternalLootLockerListCatalogPricesResponseBP__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_InternalLootLockerListCatalogPricesResponseBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventInternalLootLockerListCatalogPricesResponseBP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_InternalLootLockerListCatalogPricesResponseBP__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LootLockerSDK_InternalLootLockerListCatalogPricesResponseBP__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_InternalLootLockerListCatalogPricesResponseBP__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_InternalLootLockerListCatalogPricesResponseBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventInternalLootLockerListCatalogPricesResponseBP_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_InternalLootLockerListCatalogPricesResponseBP__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LootLockerSDK_InternalLootLockerListCatalogPricesResponseBP__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FInternalLootLockerListCatalogPricesResponseBP_DelegateWrapper(const FScriptDelegate& InternalLootLockerListCatalogPricesResponseBP, FInternalLootLockerListCatalogPricesResponse Response)
{
	struct _Script_LootLockerSDK_eventInternalLootLockerListCatalogPricesResponseBP_Parms
	{
		FInternalLootLockerListCatalogPricesResponse Response;
	};
	_Script_LootLockerSDK_eventInternalLootLockerListCatalogPricesResponseBP_Parms Parms;
	Parms.Response=Response;
	InternalLootLockerListCatalogPricesResponseBP.ProcessDelegate<UObject>(&Parms);
}
	void ULootLockerCatalogRequestHandler::StaticRegisterNativesULootLockerCatalogRequestHandler()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULootLockerCatalogRequestHandler);
	UClass* Z_Construct_UClass_ULootLockerCatalogRequestHandler_NoRegister()
	{
		return ULootLockerCatalogRequestHandler::StaticClass();
	}
	struct Z_Construct_UClass_ULootLockerCatalogRequestHandler_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULootLockerCatalogRequestHandler_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULootLockerCatalogRequestHandler_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULootLockerCatalogRequestHandler_Statics::Class_MetaDataParams[] = {
		{ "Comment", "//==================================================\n// API Class Definition\n//==================================================\n" },
		{ "IncludePath", "GameAPI/LootLockerCatalogRequestHandler.h" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCatalogRequestHandler.h" },
		{ "ToolTip", "API Class Definition" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULootLockerCatalogRequestHandler_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULootLockerCatalogRequestHandler>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULootLockerCatalogRequestHandler_Statics::ClassParams = {
		&ULootLockerCatalogRequestHandler::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULootLockerCatalogRequestHandler_Statics::Class_MetaDataParams), Z_Construct_UClass_ULootLockerCatalogRequestHandler_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ULootLockerCatalogRequestHandler()
	{
		if (!Z_Registration_Info_UClass_ULootLockerCatalogRequestHandler.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULootLockerCatalogRequestHandler.OuterSingleton, Z_Construct_UClass_ULootLockerCatalogRequestHandler_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULootLockerCatalogRequestHandler.OuterSingleton;
	}
	template<> LOOTLOCKERSDK_API UClass* StaticClass<ULootLockerCatalogRequestHandler>()
	{
		return ULootLockerCatalogRequestHandler::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULootLockerCatalogRequestHandler);
	ULootLockerCatalogRequestHandler::~ULootLockerCatalogRequestHandler() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerCatalogRequestHandler_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerCatalogRequestHandler_h_Statics::EnumInfo[] = {
		{ ELootLockerCatalogEntryEntityKind_StaticEnum, TEXT("ELootLockerCatalogEntryEntityKind"), &Z_Registration_Info_UEnum_ELootLockerCatalogEntryEntityKind, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 6893246U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerCatalogRequestHandler_h_Statics::ScriptStructInfo[] = {
		{ FLootLockerCatalog::StaticStruct, Z_Construct_UScriptStruct_FLootLockerCatalog_Statics::NewStructOps, TEXT("LootLockerCatalog"), &Z_Registration_Info_UScriptStruct_LootLockerCatalog, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerCatalog), 2028343804U) },
		{ FLootLockerCatalogEntryPrice::StaticStruct, Z_Construct_UScriptStruct_FLootLockerCatalogEntryPrice_Statics::NewStructOps, TEXT("LootLockerCatalogEntryPrice"), &Z_Registration_Info_UScriptStruct_LootLockerCatalogEntryPrice, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerCatalogEntryPrice), 1841530861U) },
		{ FLootLockerCatalogAppleAppStoreListing::StaticStruct, Z_Construct_UScriptStruct_FLootLockerCatalogAppleAppStoreListing_Statics::NewStructOps, TEXT("LootLockerCatalogAppleAppStoreListing"), &Z_Registration_Info_UScriptStruct_LootLockerCatalogAppleAppStoreListing, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerCatalogAppleAppStoreListing), 3252586183U) },
		{ FLootLockerCatalogGooglePlayStoreListing::StaticStruct, Z_Construct_UScriptStruct_FLootLockerCatalogGooglePlayStoreListing_Statics::NewStructOps, TEXT("LootLockerCatalogGooglePlayStoreListing"), &Z_Registration_Info_UScriptStruct_LootLockerCatalogGooglePlayStoreListing, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerCatalogGooglePlayStoreListing), 1046962332U) },
		{ FLootLockerCatalogSteamStoreListingPrice::StaticStruct, Z_Construct_UScriptStruct_FLootLockerCatalogSteamStoreListingPrice_Statics::NewStructOps, TEXT("LootLockerCatalogSteamStoreListingPrice"), &Z_Registration_Info_UScriptStruct_LootLockerCatalogSteamStoreListingPrice, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerCatalogSteamStoreListingPrice), 58959911U) },
		{ FLootLockerCatalogSteamStoreListing::StaticStruct, Z_Construct_UScriptStruct_FLootLockerCatalogSteamStoreListing_Statics::NewStructOps, TEXT("LootLockerCatalogSteamStoreListing"), &Z_Registration_Info_UScriptStruct_LootLockerCatalogSteamStoreListing, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerCatalogSteamStoreListing), 3599584224U) },
		{ FLootLockerCatalogEntryListings::StaticStruct, Z_Construct_UScriptStruct_FLootLockerCatalogEntryListings_Statics::NewStructOps, TEXT("LootLockerCatalogEntryListings"), &Z_Registration_Info_UScriptStruct_LootLockerCatalogEntryListings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerCatalogEntryListings), 3452416733U) },
		{ FLootLockerCatalogEntry::StaticStruct, Z_Construct_UScriptStruct_FLootLockerCatalogEntry_Statics::NewStructOps, TEXT("LootLockerCatalogEntry"), &Z_Registration_Info_UScriptStruct_LootLockerCatalogEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerCatalogEntry), 2674470963U) },
		{ FLootLockerAssetDetails::StaticStruct, Z_Construct_UScriptStruct_FLootLockerAssetDetails_Statics::NewStructOps, TEXT("LootLockerAssetDetails"), &Z_Registration_Info_UScriptStruct_LootLockerAssetDetails, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerAssetDetails), 3275389688U) },
		{ FLootLockerProgressionPointDetails::StaticStruct, Z_Construct_UScriptStruct_FLootLockerProgressionPointDetails_Statics::NewStructOps, TEXT("LootLockerProgressionPointDetails"), &Z_Registration_Info_UScriptStruct_LootLockerProgressionPointDetails, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerProgressionPointDetails), 3608130112U) },
		{ FLootLockerProgressionResetDetails::StaticStruct, Z_Construct_UScriptStruct_FLootLockerProgressionResetDetails_Statics::NewStructOps, TEXT("LootLockerProgressionResetDetails"), &Z_Registration_Info_UScriptStruct_LootLockerProgressionResetDetails, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerProgressionResetDetails), 1354315539U) },
		{ FLootLockerCurrencyDetails::StaticStruct, Z_Construct_UScriptStruct_FLootLockerCurrencyDetails_Statics::NewStructOps, TEXT("LootLockerCurrencyDetails"), &Z_Registration_Info_UScriptStruct_LootLockerCurrencyDetails, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerCurrencyDetails), 908722085U) },
		{ FLootLockerListCatalogsResponse::StaticStruct, Z_Construct_UScriptStruct_FLootLockerListCatalogsResponse_Statics::NewStructOps, TEXT("LootLockerListCatalogsResponse"), &Z_Registration_Info_UScriptStruct_LootLockerListCatalogsResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerListCatalogsResponse), 1401051587U) },
		{ FInternalLootLockerListCatalogPricesResponse::StaticStruct, Z_Construct_UScriptStruct_FInternalLootLockerListCatalogPricesResponse_Statics::NewStructOps, TEXT("InternalLootLockerListCatalogPricesResponse"), &Z_Registration_Info_UScriptStruct_InternalLootLockerListCatalogPricesResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInternalLootLockerListCatalogPricesResponse), 4223430734U) },
		{ FLootLockerInlinedCatalogEntry::StaticStruct, Z_Construct_UScriptStruct_FLootLockerInlinedCatalogEntry_Statics::NewStructOps, TEXT("LootLockerInlinedCatalogEntry"), &Z_Registration_Info_UScriptStruct_LootLockerInlinedCatalogEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerInlinedCatalogEntry), 2270780196U) },
		{ FLootLockerListCatalogPricesResponse::StaticStruct, Z_Construct_UScriptStruct_FLootLockerListCatalogPricesResponse_Statics::NewStructOps, TEXT("LootLockerListCatalogPricesResponse"), &Z_Registration_Info_UScriptStruct_LootLockerListCatalogPricesResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerListCatalogPricesResponse), 1353524592U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerCatalogRequestHandler_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULootLockerCatalogRequestHandler, ULootLockerCatalogRequestHandler::StaticClass, TEXT("ULootLockerCatalogRequestHandler"), &Z_Registration_Info_UClass_ULootLockerCatalogRequestHandler, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULootLockerCatalogRequestHandler), 1078061901U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerCatalogRequestHandler_h_1952077862(TEXT("/Script/LootLockerSDK"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerCatalogRequestHandler_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerCatalogRequestHandler_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerCatalogRequestHandler_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerCatalogRequestHandler_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerCatalogRequestHandler_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerCatalogRequestHandler_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
