// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LootLockerSDK/Public/GameAPI/LootLockerEntitlementRequestHandler.h"
#include "LootLockerSDK/Public/LootLockerResponse.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLootLockerEntitlementRequestHandler() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	LOOTLOCKERSDK_API UClass* Z_Construct_UClass_ULootLockerEntitlementRequestHandler();
	LOOTLOCKERSDK_API UClass* Z_Construct_UClass_ULootLockerEntitlementRequestHandler_NoRegister();
	LOOTLOCKERSDK_API UEnum* Z_Construct_UEnum_LootLockerSDK_ELootLockerEntitlementHistoryListingStatus();
	LOOTLOCKERSDK_API UEnum* Z_Construct_UEnum_LootLockerSDK_ELootLockerEntitlementHistoryListingStore();
	LOOTLOCKERSDK_API UEnum* Z_Construct_UEnum_LootLockerSDK_ELootLockerEntitlementHistoryListingType();
	LOOTLOCKERSDK_API UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerListEntitlementsResponseBP__DelegateSignature();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerEntitlementHistoryItem();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerEntitlementHistoryMetadata();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerEntitlementHistoryResponse();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerEntitlementHistoryReward();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerEntitlementListing();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerKeyBasedPagination();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerResponse();
	UPackage* Z_Construct_UPackage__Script_LootLockerSDK();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELootLockerEntitlementHistoryListingStore;
	static UEnum* ELootLockerEntitlementHistoryListingStore_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ELootLockerEntitlementHistoryListingStore.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ELootLockerEntitlementHistoryListingStore.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LootLockerSDK_ELootLockerEntitlementHistoryListingStore, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("ELootLockerEntitlementHistoryListingStore"));
		}
		return Z_Registration_Info_UEnum_ELootLockerEntitlementHistoryListingStore.OuterSingleton;
	}
	template<> LOOTLOCKERSDK_API UEnum* StaticEnum<ELootLockerEntitlementHistoryListingStore>()
	{
		return ELootLockerEntitlementHistoryListingStore_StaticEnum();
	}
	struct Z_Construct_UEnum_LootLockerSDK_ELootLockerEntitlementHistoryListingStore_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_LootLockerSDK_ELootLockerEntitlementHistoryListingStore_Statics::Enumerators[] = {
		{ "ELootLockerEntitlementHistoryListingStore::None", (int64)ELootLockerEntitlementHistoryListingStore::None },
		{ "ELootLockerEntitlementHistoryListingStore::Apple_app_store", (int64)ELootLockerEntitlementHistoryListingStore::Apple_app_store },
		{ "ELootLockerEntitlementHistoryListingStore::Google_play_store", (int64)ELootLockerEntitlementHistoryListingStore::Google_play_store },
		{ "ELootLockerEntitlementHistoryListingStore::Steam_store", (int64)ELootLockerEntitlementHistoryListingStore::Steam_store },
		{ "ELootLockerEntitlementHistoryListingStore::Playstation_network", (int64)ELootLockerEntitlementHistoryListingStore::Playstation_network },
		{ "ELootLockerEntitlementHistoryListingStore::Nintendo_eshop", (int64)ELootLockerEntitlementHistoryListingStore::Nintendo_eshop },
		{ "ELootLockerEntitlementHistoryListingStore::Lootlocker", (int64)ELootLockerEntitlementHistoryListingStore::Lootlocker },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_LootLockerSDK_ELootLockerEntitlementHistoryListingStore_Statics::Enum_MetaDataParams[] = {
		{ "Apple_app_store.Name", "ELootLockerEntitlementHistoryListingStore::Apple_app_store" },
		{ "BlueprintType", "true" },
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n * An enum with the supported stores that can generate entitlements\n */" },
#endif
		{ "Google_play_store.Name", "ELootLockerEntitlementHistoryListingStore::Google_play_store" },
		{ "Lootlocker.Name", "ELootLockerEntitlementHistoryListingStore::Lootlocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerEntitlementRequestHandler.h" },
		{ "Nintendo_eshop.Name", "ELootLockerEntitlementHistoryListingStore::Nintendo_eshop" },
		{ "None.Name", "ELootLockerEntitlementHistoryListingStore::None" },
		{ "Playstation_network.Name", "ELootLockerEntitlementHistoryListingStore::Playstation_network" },
		{ "Steam_store.Name", "ELootLockerEntitlementHistoryListingStore::Steam_store" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* An enum with the supported stores that can generate entitlements" },
#endif
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LootLockerSDK_ELootLockerEntitlementHistoryListingStore_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		"ELootLockerEntitlementHistoryListingStore",
		"ELootLockerEntitlementHistoryListingStore",
		Z_Construct_UEnum_LootLockerSDK_ELootLockerEntitlementHistoryListingStore_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_LootLockerSDK_ELootLockerEntitlementHistoryListingStore_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_LootLockerSDK_ELootLockerEntitlementHistoryListingStore_Statics::Enum_MetaDataParams), Z_Construct_UEnum_LootLockerSDK_ELootLockerEntitlementHistoryListingStore_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_LootLockerSDK_ELootLockerEntitlementHistoryListingStore()
	{
		if (!Z_Registration_Info_UEnum_ELootLockerEntitlementHistoryListingStore.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELootLockerEntitlementHistoryListingStore.InnerSingleton, Z_Construct_UEnum_LootLockerSDK_ELootLockerEntitlementHistoryListingStore_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ELootLockerEntitlementHistoryListingStore.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELootLockerEntitlementHistoryListingStatus;
	static UEnum* ELootLockerEntitlementHistoryListingStatus_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ELootLockerEntitlementHistoryListingStatus.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ELootLockerEntitlementHistoryListingStatus.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LootLockerSDK_ELootLockerEntitlementHistoryListingStatus, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("ELootLockerEntitlementHistoryListingStatus"));
		}
		return Z_Registration_Info_UEnum_ELootLockerEntitlementHistoryListingStatus.OuterSingleton;
	}
	template<> LOOTLOCKERSDK_API UEnum* StaticEnum<ELootLockerEntitlementHistoryListingStatus>()
	{
		return ELootLockerEntitlementHistoryListingStatus_StaticEnum();
	}
	struct Z_Construct_UEnum_LootLockerSDK_ELootLockerEntitlementHistoryListingStatus_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_LootLockerSDK_ELootLockerEntitlementHistoryListingStatus_Statics::Enumerators[] = {
		{ "ELootLockerEntitlementHistoryListingStatus::None", (int64)ELootLockerEntitlementHistoryListingStatus::None },
		{ "ELootLockerEntitlementHistoryListingStatus::Active", (int64)ELootLockerEntitlementHistoryListingStatus::Active },
		{ "ELootLockerEntitlementHistoryListingStatus::Pending", (int64)ELootLockerEntitlementHistoryListingStatus::Pending },
		{ "ELootLockerEntitlementHistoryListingStatus::Expired", (int64)ELootLockerEntitlementHistoryListingStatus::Expired },
		{ "ELootLockerEntitlementHistoryListingStatus::Canceled", (int64)ELootLockerEntitlementHistoryListingStatus::Canceled },
		{ "ELootLockerEntitlementHistoryListingStatus::Refunded", (int64)ELootLockerEntitlementHistoryListingStatus::Refunded },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_LootLockerSDK_ELootLockerEntitlementHistoryListingStatus_Statics::Enum_MetaDataParams[] = {
		{ "Active.Name", "ELootLockerEntitlementHistoryListingStatus::Active" },
		{ "BlueprintType", "true" },
		{ "Canceled.Name", "ELootLockerEntitlementHistoryListingStatus::Canceled" },
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n * Status of the entitlement\n */" },
#endif
		{ "Expired.Name", "ELootLockerEntitlementHistoryListingStatus::Expired" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerEntitlementRequestHandler.h" },
		{ "None.Name", "ELootLockerEntitlementHistoryListingStatus::None" },
		{ "Pending.Name", "ELootLockerEntitlementHistoryListingStatus::Pending" },
		{ "Refunded.Name", "ELootLockerEntitlementHistoryListingStatus::Refunded" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* Status of the entitlement" },
#endif
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LootLockerSDK_ELootLockerEntitlementHistoryListingStatus_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		"ELootLockerEntitlementHistoryListingStatus",
		"ELootLockerEntitlementHistoryListingStatus",
		Z_Construct_UEnum_LootLockerSDK_ELootLockerEntitlementHistoryListingStatus_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_LootLockerSDK_ELootLockerEntitlementHistoryListingStatus_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_LootLockerSDK_ELootLockerEntitlementHistoryListingStatus_Statics::Enum_MetaDataParams), Z_Construct_UEnum_LootLockerSDK_ELootLockerEntitlementHistoryListingStatus_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_LootLockerSDK_ELootLockerEntitlementHistoryListingStatus()
	{
		if (!Z_Registration_Info_UEnum_ELootLockerEntitlementHistoryListingStatus.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELootLockerEntitlementHistoryListingStatus.InnerSingleton, Z_Construct_UEnum_LootLockerSDK_ELootLockerEntitlementHistoryListingStatus_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ELootLockerEntitlementHistoryListingStatus.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELootLockerEntitlementHistoryListingType;
	static UEnum* ELootLockerEntitlementHistoryListingType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ELootLockerEntitlementHistoryListingType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ELootLockerEntitlementHistoryListingType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LootLockerSDK_ELootLockerEntitlementHistoryListingType, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("ELootLockerEntitlementHistoryListingType"));
		}
		return Z_Registration_Info_UEnum_ELootLockerEntitlementHistoryListingType.OuterSingleton;
	}
	template<> LOOTLOCKERSDK_API UEnum* StaticEnum<ELootLockerEntitlementHistoryListingType>()
	{
		return ELootLockerEntitlementHistoryListingType_StaticEnum();
	}
	struct Z_Construct_UEnum_LootLockerSDK_ELootLockerEntitlementHistoryListingType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_LootLockerSDK_ELootLockerEntitlementHistoryListingType_Statics::Enumerators[] = {
		{ "ELootLockerEntitlementHistoryListingType::Undefined", (int64)ELootLockerEntitlementHistoryListingType::Undefined },
		{ "ELootLockerEntitlementHistoryListingType::One_time_purchase", (int64)ELootLockerEntitlementHistoryListingType::One_time_purchase },
		{ "ELootLockerEntitlementHistoryListingType::Leaderboard_reward", (int64)ELootLockerEntitlementHistoryListingType::Leaderboard_reward },
		{ "ELootLockerEntitlementHistoryListingType::Subscription", (int64)ELootLockerEntitlementHistoryListingType::Subscription },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_LootLockerSDK_ELootLockerEntitlementHistoryListingType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n * Status of the entitlement\n */" },
#endif
		{ "Leaderboard_reward.Name", "ELootLockerEntitlementHistoryListingType::Leaderboard_reward" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerEntitlementRequestHandler.h" },
		{ "One_time_purchase.Name", "ELootLockerEntitlementHistoryListingType::One_time_purchase" },
		{ "Subscription.Name", "ELootLockerEntitlementHistoryListingType::Subscription" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* Status of the entitlement" },
#endif
		{ "Undefined.Name", "ELootLockerEntitlementHistoryListingType::Undefined" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LootLockerSDK_ELootLockerEntitlementHistoryListingType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		"ELootLockerEntitlementHistoryListingType",
		"ELootLockerEntitlementHistoryListingType",
		Z_Construct_UEnum_LootLockerSDK_ELootLockerEntitlementHistoryListingType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_LootLockerSDK_ELootLockerEntitlementHistoryListingType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_LootLockerSDK_ELootLockerEntitlementHistoryListingType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_LootLockerSDK_ELootLockerEntitlementHistoryListingType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_LootLockerSDK_ELootLockerEntitlementHistoryListingType()
	{
		if (!Z_Registration_Info_UEnum_ELootLockerEntitlementHistoryListingType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELootLockerEntitlementHistoryListingType.InnerSingleton, Z_Construct_UEnum_LootLockerSDK_ELootLockerEntitlementHistoryListingType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ELootLockerEntitlementHistoryListingType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerEntitlementHistoryItem;
class UScriptStruct* FLootLockerEntitlementHistoryItem::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerEntitlementHistoryItem.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerEntitlementHistoryItem.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerEntitlementHistoryItem, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerEntitlementHistoryItem"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerEntitlementHistoryItem.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerEntitlementHistoryItem>()
{
	return FLootLockerEntitlementHistoryItem::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerEntitlementHistoryItem_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Reward_kind_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Reward_kind;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Reward_id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Reward_id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Catalog_id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Catalog_id;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerEntitlementHistoryItem_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n *\n */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerEntitlementRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerEntitlementHistoryItem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerEntitlementHistoryItem>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerEntitlementHistoryItem_Statics::NewProp_Created_at_MetaData[] = {
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n     * When this item was created\n     */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerEntitlementRequestHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* When this item was created" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerEntitlementHistoryItem_Statics::NewProp_Created_at = { "Created_at", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerEntitlementHistoryItem, Created_at), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerEntitlementHistoryItem_Statics::NewProp_Created_at_MetaData), Z_Construct_UScriptStruct_FLootLockerEntitlementHistoryItem_Statics::NewProp_Created_at_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerEntitlementHistoryItem_Statics::NewProp_Reward_kind_MetaData[] = {
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n     * What kind of reward this item is\n     */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerEntitlementRequestHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* What kind of reward this item is" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerEntitlementHistoryItem_Statics::NewProp_Reward_kind = { "Reward_kind", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerEntitlementHistoryItem, Reward_kind), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerEntitlementHistoryItem_Statics::NewProp_Reward_kind_MetaData), Z_Construct_UScriptStruct_FLootLockerEntitlementHistoryItem_Statics::NewProp_Reward_kind_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerEntitlementHistoryItem_Statics::NewProp_Id_MetaData[] = {
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n     * The unique identifier of this specific item\n     */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerEntitlementRequestHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* The unique identifier of this specific item" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerEntitlementHistoryItem_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerEntitlementHistoryItem, Id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerEntitlementHistoryItem_Statics::NewProp_Id_MetaData), Z_Construct_UScriptStruct_FLootLockerEntitlementHistoryItem_Statics::NewProp_Id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerEntitlementHistoryItem_Statics::NewProp_Reward_id_MetaData[] = {
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n     * The id of the reward this item is in\n     */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerEntitlementRequestHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* The id of the reward this item is in" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerEntitlementHistoryItem_Statics::NewProp_Reward_id = { "Reward_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerEntitlementHistoryItem, Reward_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerEntitlementHistoryItem_Statics::NewProp_Reward_id_MetaData), Z_Construct_UScriptStruct_FLootLockerEntitlementHistoryItem_Statics::NewProp_Reward_id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerEntitlementHistoryItem_Statics::NewProp_Catalog_id_MetaData[] = {
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n     * The id of the catalog item that this item is in\n     */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerEntitlementRequestHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* The id of the catalog item that this item is in" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerEntitlementHistoryItem_Statics::NewProp_Catalog_id = { "Catalog_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerEntitlementHistoryItem, Catalog_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerEntitlementHistoryItem_Statics::NewProp_Catalog_id_MetaData), Z_Construct_UScriptStruct_FLootLockerEntitlementHistoryItem_Statics::NewProp_Catalog_id_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerEntitlementHistoryItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerEntitlementHistoryItem_Statics::NewProp_Created_at,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerEntitlementHistoryItem_Statics::NewProp_Reward_kind,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerEntitlementHistoryItem_Statics::NewProp_Id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerEntitlementHistoryItem_Statics::NewProp_Reward_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerEntitlementHistoryItem_Statics::NewProp_Catalog_id,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerEntitlementHistoryItem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		&NewStructOps,
		"LootLockerEntitlementHistoryItem",
		Z_Construct_UScriptStruct_FLootLockerEntitlementHistoryItem_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerEntitlementHistoryItem_Statics::PropPointers),
		sizeof(FLootLockerEntitlementHistoryItem),
		alignof(FLootLockerEntitlementHistoryItem),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerEntitlementHistoryItem_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerEntitlementHistoryItem_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerEntitlementHistoryItem_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerEntitlementHistoryItem()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerEntitlementHistoryItem.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerEntitlementHistoryItem.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerEntitlementHistoryItem_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerEntitlementHistoryItem.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerEntitlementHistoryMetadata;
class UScriptStruct* FLootLockerEntitlementHistoryMetadata::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerEntitlementHistoryMetadata.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerEntitlementHistoryMetadata.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerEntitlementHistoryMetadata, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerEntitlementHistoryMetadata"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerEntitlementHistoryMetadata.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerEntitlementHistoryMetadata>()
{
	return FLootLockerEntitlementHistoryMetadata::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerEntitlementHistoryMetadata_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerEntitlementHistoryMetadata_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n *\n */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerEntitlementRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerEntitlementHistoryMetadata_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerEntitlementHistoryMetadata>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerEntitlementHistoryMetadata_Statics::NewProp_Key_MetaData[] = {
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n     * The key of this pair, describes what the value is\n     */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerEntitlementRequestHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* The key of this pair, describes what the value is" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerEntitlementHistoryMetadata_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerEntitlementHistoryMetadata, Key), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerEntitlementHistoryMetadata_Statics::NewProp_Key_MetaData), Z_Construct_UScriptStruct_FLootLockerEntitlementHistoryMetadata_Statics::NewProp_Key_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerEntitlementHistoryMetadata_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n     * The value of this pair, contains the information of the metadata\n     */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerEntitlementRequestHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* The value of this pair, contains the information of the metadata" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerEntitlementHistoryMetadata_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerEntitlementHistoryMetadata, Value), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerEntitlementHistoryMetadata_Statics::NewProp_Value_MetaData), Z_Construct_UScriptStruct_FLootLockerEntitlementHistoryMetadata_Statics::NewProp_Value_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerEntitlementHistoryMetadata_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerEntitlementHistoryMetadata_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerEntitlementHistoryMetadata_Statics::NewProp_Value,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerEntitlementHistoryMetadata_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		&NewStructOps,
		"LootLockerEntitlementHistoryMetadata",
		Z_Construct_UScriptStruct_FLootLockerEntitlementHistoryMetadata_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerEntitlementHistoryMetadata_Statics::PropPointers),
		sizeof(FLootLockerEntitlementHistoryMetadata),
		alignof(FLootLockerEntitlementHistoryMetadata),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerEntitlementHistoryMetadata_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerEntitlementHistoryMetadata_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerEntitlementHistoryMetadata_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerEntitlementHistoryMetadata()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerEntitlementHistoryMetadata.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerEntitlementHistoryMetadata.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerEntitlementHistoryMetadata_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerEntitlementHistoryMetadata.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerEntitlementHistoryReward;
class UScriptStruct* FLootLockerEntitlementHistoryReward::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerEntitlementHistoryReward.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerEntitlementHistoryReward.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerEntitlementHistoryReward, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerEntitlementHistoryReward"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerEntitlementHistoryReward.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerEntitlementHistoryReward>()
{
	return FLootLockerEntitlementHistoryReward::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerEntitlementHistoryReward_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Entitlement_id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Entitlement_id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Id;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerEntitlementHistoryReward_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n *\n */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerEntitlementRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerEntitlementHistoryReward_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerEntitlementHistoryReward>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerEntitlementHistoryReward_Statics::NewProp_Created_at_MetaData[] = {
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n     * When this reward was created\n     */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerEntitlementRequestHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* When this reward was created" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerEntitlementHistoryReward_Statics::NewProp_Created_at = { "Created_at", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerEntitlementHistoryReward, Created_at), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerEntitlementHistoryReward_Statics::NewProp_Created_at_MetaData), Z_Construct_UScriptStruct_FLootLockerEntitlementHistoryReward_Statics::NewProp_Created_at_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerEntitlementHistoryReward_Statics::NewProp_Entitlement_id_MetaData[] = {
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n     * The id of this entitlement\n     */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerEntitlementRequestHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* The id of this entitlement" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerEntitlementHistoryReward_Statics::NewProp_Entitlement_id = { "Entitlement_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerEntitlementHistoryReward, Entitlement_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerEntitlementHistoryReward_Statics::NewProp_Entitlement_id_MetaData), Z_Construct_UScriptStruct_FLootLockerEntitlementHistoryReward_Statics::NewProp_Entitlement_id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerEntitlementHistoryReward_Statics::NewProp_Id_MetaData[] = {
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n     * The unique identifier of this reward\n     */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerEntitlementRequestHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* The unique identifier of this reward" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerEntitlementHistoryReward_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerEntitlementHistoryReward, Id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerEntitlementHistoryReward_Statics::NewProp_Id_MetaData), Z_Construct_UScriptStruct_FLootLockerEntitlementHistoryReward_Statics::NewProp_Id_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerEntitlementHistoryReward_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerEntitlementHistoryReward_Statics::NewProp_Created_at,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerEntitlementHistoryReward_Statics::NewProp_Entitlement_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerEntitlementHistoryReward_Statics::NewProp_Id,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerEntitlementHistoryReward_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		&NewStructOps,
		"LootLockerEntitlementHistoryReward",
		Z_Construct_UScriptStruct_FLootLockerEntitlementHistoryReward_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerEntitlementHistoryReward_Statics::PropPointers),
		sizeof(FLootLockerEntitlementHistoryReward),
		alignof(FLootLockerEntitlementHistoryReward),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerEntitlementHistoryReward_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerEntitlementHistoryReward_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerEntitlementHistoryReward_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerEntitlementHistoryReward()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerEntitlementHistoryReward.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerEntitlementHistoryReward.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerEntitlementHistoryReward_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerEntitlementHistoryReward.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerEntitlementListing;
class UScriptStruct* FLootLockerEntitlementListing::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerEntitlementListing.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerEntitlementListing.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerEntitlementListing, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerEntitlementListing"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerEntitlementListing.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerEntitlementListing>()
{
	return FLootLockerEntitlementListing::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerEntitlementListing_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Id;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Items_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Items_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Items;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rewards_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rewards_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Rewards;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Metadata_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Metadata_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Metadata;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Status_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Status_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Status;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Store_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Store_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Store;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerEntitlementListing_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n *\n */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerEntitlementRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerEntitlementListing_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerEntitlementListing>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerEntitlementListing_Statics::NewProp_Created_at_MetaData[] = {
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n     * When this entitlement listing was created\n     */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerEntitlementRequestHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* When this entitlement listing was created" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerEntitlementListing_Statics::NewProp_Created_at = { "Created_at", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerEntitlementListing, Created_at), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerEntitlementListing_Statics::NewProp_Created_at_MetaData), Z_Construct_UScriptStruct_FLootLockerEntitlementListing_Statics::NewProp_Created_at_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerEntitlementListing_Statics::NewProp_Id_MetaData[] = {
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n     * The unique identifier of this entitlement listing\n     */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerEntitlementRequestHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* The unique identifier of this entitlement listing" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerEntitlementListing_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerEntitlementListing, Id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerEntitlementListing_Statics::NewProp_Id_MetaData), Z_Construct_UScriptStruct_FLootLockerEntitlementListing_Statics::NewProp_Id_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLootLockerEntitlementListing_Statics::NewProp_Items_Inner = { "Items", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLootLockerEntitlementHistoryItem, METADATA_PARAMS(0, nullptr) }; // 4092438164
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerEntitlementListing_Statics::NewProp_Items_MetaData[] = {
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n     * List of items in this entitlement (items are related to the catalog)\n     */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerEntitlementRequestHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* List of items in this entitlement (items are related to the catalog)" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLootLockerEntitlementListing_Statics::NewProp_Items = { "Items", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerEntitlementListing, Items), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerEntitlementListing_Statics::NewProp_Items_MetaData), Z_Construct_UScriptStruct_FLootLockerEntitlementListing_Statics::NewProp_Items_MetaData) }; // 4092438164
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLootLockerEntitlementListing_Statics::NewProp_Rewards_Inner = { "Rewards", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLootLockerEntitlementHistoryReward, METADATA_PARAMS(0, nullptr) }; // 1013258120
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerEntitlementListing_Statics::NewProp_Rewards_MetaData[] = {
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n     * List of rewards in this entitlement (these are rewards from systems such as leaderboards, progressions, etc.)\n     */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerEntitlementRequestHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* List of rewards in this entitlement (these are rewards from systems such as leaderboards, progressions, etc.)" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLootLockerEntitlementListing_Statics::NewProp_Rewards = { "Rewards", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerEntitlementListing, Rewards), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerEntitlementListing_Statics::NewProp_Rewards_MetaData), Z_Construct_UScriptStruct_FLootLockerEntitlementListing_Statics::NewProp_Rewards_MetaData) }; // 1013258120
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLootLockerEntitlementListing_Statics::NewProp_Metadata_Inner = { "Metadata", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLootLockerEntitlementHistoryMetadata, METADATA_PARAMS(0, nullptr) }; // 4197785928
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerEntitlementListing_Statics::NewProp_Metadata_MetaData[] = {
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n     * Metadata related to this entitlement listing\n     * This array consists of key value pairs and contains various pieces of information about the entitlement, such as information from third party stores etc.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerEntitlementRequestHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* Metadata related to this entitlement listing\n* This array consists of key value pairs and contains various pieces of information about the entitlement, such as information from third party stores etc." },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLootLockerEntitlementListing_Statics::NewProp_Metadata = { "Metadata", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerEntitlementListing, Metadata), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerEntitlementListing_Statics::NewProp_Metadata_MetaData), Z_Construct_UScriptStruct_FLootLockerEntitlementListing_Statics::NewProp_Metadata_MetaData) }; // 4197785928
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLootLockerEntitlementListing_Statics::NewProp_Status_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerEntitlementListing_Statics::NewProp_Status_MetaData[] = {
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n     * The status of this entitlement listing\n     */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerEntitlementRequestHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* The status of this entitlement listing" },
#endif
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FLootLockerEntitlementListing_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerEntitlementListing, Status), Z_Construct_UEnum_LootLockerSDK_ELootLockerEntitlementHistoryListingStatus, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerEntitlementListing_Statics::NewProp_Status_MetaData), Z_Construct_UScriptStruct_FLootLockerEntitlementListing_Statics::NewProp_Status_MetaData) }; // 927999263
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLootLockerEntitlementListing_Statics::NewProp_Store_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerEntitlementListing_Statics::NewProp_Store_MetaData[] = {
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n     * Which store (if any) that this entitlement listing relates to\n     */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerEntitlementRequestHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* Which store (if any) that this entitlement listing relates to" },
#endif
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FLootLockerEntitlementListing_Statics::NewProp_Store = { "Store", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerEntitlementListing, Store), Z_Construct_UEnum_LootLockerSDK_ELootLockerEntitlementHistoryListingStore, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerEntitlementListing_Statics::NewProp_Store_MetaData), Z_Construct_UScriptStruct_FLootLockerEntitlementListing_Statics::NewProp_Store_MetaData) }; // 3612407625
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLootLockerEntitlementListing_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerEntitlementListing_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n     * Which type this entitlement listing is\n     */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerEntitlementRequestHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* Which type this entitlement listing is" },
#endif
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FLootLockerEntitlementListing_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerEntitlementListing, Type), Z_Construct_UEnum_LootLockerSDK_ELootLockerEntitlementHistoryListingType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerEntitlementListing_Statics::NewProp_Type_MetaData), Z_Construct_UScriptStruct_FLootLockerEntitlementListing_Statics::NewProp_Type_MetaData) }; // 3300025130
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerEntitlementListing_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerEntitlementListing_Statics::NewProp_Created_at,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerEntitlementListing_Statics::NewProp_Id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerEntitlementListing_Statics::NewProp_Items_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerEntitlementListing_Statics::NewProp_Items,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerEntitlementListing_Statics::NewProp_Rewards_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerEntitlementListing_Statics::NewProp_Rewards,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerEntitlementListing_Statics::NewProp_Metadata_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerEntitlementListing_Statics::NewProp_Metadata,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerEntitlementListing_Statics::NewProp_Status_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerEntitlementListing_Statics::NewProp_Status,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerEntitlementListing_Statics::NewProp_Store_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerEntitlementListing_Statics::NewProp_Store,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerEntitlementListing_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerEntitlementListing_Statics::NewProp_Type,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerEntitlementListing_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		&NewStructOps,
		"LootLockerEntitlementListing",
		Z_Construct_UScriptStruct_FLootLockerEntitlementListing_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerEntitlementListing_Statics::PropPointers),
		sizeof(FLootLockerEntitlementListing),
		alignof(FLootLockerEntitlementListing),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerEntitlementListing_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerEntitlementListing_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerEntitlementListing_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerEntitlementListing()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerEntitlementListing.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerEntitlementListing.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerEntitlementListing_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerEntitlementListing.InnerSingleton;
	}

static_assert(std::is_polymorphic<FLootLockerEntitlementHistoryResponse>() == std::is_polymorphic<FLootLockerResponse>(), "USTRUCT FLootLockerEntitlementHistoryResponse cannot be polymorphic unless super FLootLockerResponse is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerEntitlementHistoryResponse;
class UScriptStruct* FLootLockerEntitlementHistoryResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerEntitlementHistoryResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerEntitlementHistoryResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerEntitlementHistoryResponse, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerEntitlementHistoryResponse"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerEntitlementHistoryResponse.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerEntitlementHistoryResponse>()
{
	return FLootLockerEntitlementHistoryResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerEntitlementHistoryResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Listings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Listings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Listings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Pagination_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Pagination;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerEntitlementHistoryResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n *\n */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerEntitlementRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerEntitlementHistoryResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerEntitlementHistoryResponse>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLootLockerEntitlementHistoryResponse_Statics::NewProp_Listings_Inner = { "Listings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLootLockerEntitlementListing, METADATA_PARAMS(0, nullptr) }; // 4136139210
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerEntitlementHistoryResponse_Statics::NewProp_Listings_MetaData[] = {
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n     * List of entitlement history entries\n     */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerEntitlementRequestHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* List of entitlement history entries" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLootLockerEntitlementHistoryResponse_Statics::NewProp_Listings = { "Listings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerEntitlementHistoryResponse, Listings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerEntitlementHistoryResponse_Statics::NewProp_Listings_MetaData), Z_Construct_UScriptStruct_FLootLockerEntitlementHistoryResponse_Statics::NewProp_Listings_MetaData) }; // 4136139210
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerEntitlementHistoryResponse_Statics::NewProp_Pagination_MetaData[] = {
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n     * Pagination data to use for subsequent requests\n     */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerEntitlementRequestHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* Pagination data to use for subsequent requests" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLootLockerEntitlementHistoryResponse_Statics::NewProp_Pagination = { "Pagination", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerEntitlementHistoryResponse, Pagination), Z_Construct_UScriptStruct_FLootLockerKeyBasedPagination, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerEntitlementHistoryResponse_Statics::NewProp_Pagination_MetaData), Z_Construct_UScriptStruct_FLootLockerEntitlementHistoryResponse_Statics::NewProp_Pagination_MetaData) }; // 1245497498
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerEntitlementHistoryResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerEntitlementHistoryResponse_Statics::NewProp_Listings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerEntitlementHistoryResponse_Statics::NewProp_Listings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerEntitlementHistoryResponse_Statics::NewProp_Pagination,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerEntitlementHistoryResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		Z_Construct_UScriptStruct_FLootLockerResponse,
		&NewStructOps,
		"LootLockerEntitlementHistoryResponse",
		Z_Construct_UScriptStruct_FLootLockerEntitlementHistoryResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerEntitlementHistoryResponse_Statics::PropPointers),
		sizeof(FLootLockerEntitlementHistoryResponse),
		alignof(FLootLockerEntitlementHistoryResponse),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerEntitlementHistoryResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerEntitlementHistoryResponse_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerEntitlementHistoryResponse_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerEntitlementHistoryResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerEntitlementHistoryResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerEntitlementHistoryResponse.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerEntitlementHistoryResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerEntitlementHistoryResponse.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerListEntitlementsResponseBP__DelegateSignature_Statics
	{
		struct _Script_LootLockerSDK_eventLootLockerListEntitlementsResponseBP_Parms
		{
			FLootLockerEntitlementHistoryResponse Response;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Response;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerListEntitlementsResponseBP__DelegateSignature_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LootLockerSDK_eventLootLockerListEntitlementsResponseBP_Parms, Response), Z_Construct_UScriptStruct_FLootLockerEntitlementHistoryResponse, METADATA_PARAMS(0, nullptr) }; // 3189947799
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerListEntitlementsResponseBP__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerListEntitlementsResponseBP__DelegateSignature_Statics::NewProp_Response,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerListEntitlementsResponseBP__DelegateSignature_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Blueprint response delegate for listing entitlement history\n */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerEntitlementRequestHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blueprint response delegate for listing entitlement history" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerListEntitlementsResponseBP__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LootLockerSDK, nullptr, "LootLockerListEntitlementsResponseBP__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerListEntitlementsResponseBP__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerListEntitlementsResponseBP__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerListEntitlementsResponseBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventLootLockerListEntitlementsResponseBP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerListEntitlementsResponseBP__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerListEntitlementsResponseBP__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerListEntitlementsResponseBP__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerListEntitlementsResponseBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventLootLockerListEntitlementsResponseBP_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerListEntitlementsResponseBP__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerListEntitlementsResponseBP__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FLootLockerListEntitlementsResponseBP_DelegateWrapper(const FScriptDelegate& LootLockerListEntitlementsResponseBP, FLootLockerEntitlementHistoryResponse Response)
{
	struct _Script_LootLockerSDK_eventLootLockerListEntitlementsResponseBP_Parms
	{
		FLootLockerEntitlementHistoryResponse Response;
	};
	_Script_LootLockerSDK_eventLootLockerListEntitlementsResponseBP_Parms Parms;
	Parms.Response=Response;
	LootLockerListEntitlementsResponseBP.ProcessDelegate<UObject>(&Parms);
}
	void ULootLockerEntitlementRequestHandler::StaticRegisterNativesULootLockerEntitlementRequestHandler()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULootLockerEntitlementRequestHandler);
	UClass* Z_Construct_UClass_ULootLockerEntitlementRequestHandler_NoRegister()
	{
		return ULootLockerEntitlementRequestHandler::StaticClass();
	}
	struct Z_Construct_UClass_ULootLockerEntitlementRequestHandler_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULootLockerEntitlementRequestHandler_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULootLockerEntitlementRequestHandler_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULootLockerEntitlementRequestHandler_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//==================================================\n// API Class Definition\n//==================================================\n" },
#endif
		{ "IncludePath", "GameAPI/LootLockerEntitlementRequestHandler.h" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerEntitlementRequestHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "API Class Definition" },
#endif
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULootLockerEntitlementRequestHandler_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULootLockerEntitlementRequestHandler>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULootLockerEntitlementRequestHandler_Statics::ClassParams = {
		&ULootLockerEntitlementRequestHandler::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULootLockerEntitlementRequestHandler_Statics::Class_MetaDataParams), Z_Construct_UClass_ULootLockerEntitlementRequestHandler_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ULootLockerEntitlementRequestHandler()
	{
		if (!Z_Registration_Info_UClass_ULootLockerEntitlementRequestHandler.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULootLockerEntitlementRequestHandler.OuterSingleton, Z_Construct_UClass_ULootLockerEntitlementRequestHandler_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULootLockerEntitlementRequestHandler.OuterSingleton;
	}
	template<> LOOTLOCKERSDK_API UClass* StaticClass<ULootLockerEntitlementRequestHandler>()
	{
		return ULootLockerEntitlementRequestHandler::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULootLockerEntitlementRequestHandler);
	ULootLockerEntitlementRequestHandler::~ULootLockerEntitlementRequestHandler() {}
	struct Z_CompiledInDeferFile_FID_Projects_cicadashell_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerEntitlementRequestHandler_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_cicadashell_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerEntitlementRequestHandler_h_Statics::EnumInfo[] = {
		{ ELootLockerEntitlementHistoryListingStore_StaticEnum, TEXT("ELootLockerEntitlementHistoryListingStore"), &Z_Registration_Info_UEnum_ELootLockerEntitlementHistoryListingStore, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3612407625U) },
		{ ELootLockerEntitlementHistoryListingStatus_StaticEnum, TEXT("ELootLockerEntitlementHistoryListingStatus"), &Z_Registration_Info_UEnum_ELootLockerEntitlementHistoryListingStatus, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 927999263U) },
		{ ELootLockerEntitlementHistoryListingType_StaticEnum, TEXT("ELootLockerEntitlementHistoryListingType"), &Z_Registration_Info_UEnum_ELootLockerEntitlementHistoryListingType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3300025130U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_cicadashell_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerEntitlementRequestHandler_h_Statics::ScriptStructInfo[] = {
		{ FLootLockerEntitlementHistoryItem::StaticStruct, Z_Construct_UScriptStruct_FLootLockerEntitlementHistoryItem_Statics::NewStructOps, TEXT("LootLockerEntitlementHistoryItem"), &Z_Registration_Info_UScriptStruct_LootLockerEntitlementHistoryItem, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerEntitlementHistoryItem), 4092438164U) },
		{ FLootLockerEntitlementHistoryMetadata::StaticStruct, Z_Construct_UScriptStruct_FLootLockerEntitlementHistoryMetadata_Statics::NewStructOps, TEXT("LootLockerEntitlementHistoryMetadata"), &Z_Registration_Info_UScriptStruct_LootLockerEntitlementHistoryMetadata, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerEntitlementHistoryMetadata), 4197785928U) },
		{ FLootLockerEntitlementHistoryReward::StaticStruct, Z_Construct_UScriptStruct_FLootLockerEntitlementHistoryReward_Statics::NewStructOps, TEXT("LootLockerEntitlementHistoryReward"), &Z_Registration_Info_UScriptStruct_LootLockerEntitlementHistoryReward, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerEntitlementHistoryReward), 1013258120U) },
		{ FLootLockerEntitlementListing::StaticStruct, Z_Construct_UScriptStruct_FLootLockerEntitlementListing_Statics::NewStructOps, TEXT("LootLockerEntitlementListing"), &Z_Registration_Info_UScriptStruct_LootLockerEntitlementListing, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerEntitlementListing), 4136139210U) },
		{ FLootLockerEntitlementHistoryResponse::StaticStruct, Z_Construct_UScriptStruct_FLootLockerEntitlementHistoryResponse_Statics::NewStructOps, TEXT("LootLockerEntitlementHistoryResponse"), &Z_Registration_Info_UScriptStruct_LootLockerEntitlementHistoryResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerEntitlementHistoryResponse), 3189947799U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_cicadashell_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerEntitlementRequestHandler_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULootLockerEntitlementRequestHandler, ULootLockerEntitlementRequestHandler::StaticClass, TEXT("ULootLockerEntitlementRequestHandler"), &Z_Registration_Info_UClass_ULootLockerEntitlementRequestHandler, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULootLockerEntitlementRequestHandler), 2471658548U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_cicadashell_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerEntitlementRequestHandler_h_3240483401(TEXT("/Script/LootLockerSDK"),
		Z_CompiledInDeferFile_FID_Projects_cicadashell_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerEntitlementRequestHandler_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_cicadashell_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerEntitlementRequestHandler_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Projects_cicadashell_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerEntitlementRequestHandler_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_cicadashell_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerEntitlementRequestHandler_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Projects_cicadashell_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerEntitlementRequestHandler_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_cicadashell_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerEntitlementRequestHandler_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
