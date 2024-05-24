// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LootLockerSDK/Public/GameAPI/LootLockerLeaderboardRequestHandler.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLootLockerLeaderboardRequestHandler() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	LOOTLOCKERSDK_API UClass* Z_Construct_UClass_ULootLockerLeaderboardRequestHandler();
	LOOTLOCKERSDK_API UClass* Z_Construct_UClass_ULootLockerLeaderboardRequestHandler_NoRegister();
	LOOTLOCKERSDK_API UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerGetAllMemberRanksResponseBP__DelegateSignature();
	LOOTLOCKERSDK_API UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerGetByListOfMembersResponseBP__DelegateSignature();
	LOOTLOCKERSDK_API UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerGetMemberRankResponseBP__DelegateSignature();
	LOOTLOCKERSDK_API UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerGetScoreListResponseBP__DelegateSignature();
	LOOTLOCKERSDK_API UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerLeaderboardDetailsResponseBP__DelegateSignature();
	LOOTLOCKERSDK_API UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerSubmitScoreResponseBP__DelegateSignature();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerAssetRewardDetails();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerCurrencyRewardDetails();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerGetAllMemberRanksRequest();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerGetAllMemberRanksResponse();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerGetByListMembersRequest();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerGetByListOfMembersResponse();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerGetMemberRankRequest();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerGetMemberRankResponse();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerGetScoreListRequest();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerGetScoreListResponse();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerLeaderboard();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerLeaderboardAssetReward();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerLeaderboardCurrencyReward();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerLeaderboardDetailPredicates();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerLeaderboardDetailsResponse();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerLeaderboardProgressionPointsReward();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerLeaderboardProgressionResetReward();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerLeaderboardReward();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerLeaderboardRewardArgs();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerLeaderboardSchedule();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerMember();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerPagination();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerPlayer();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerProgressionPointRewardDetails();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerProgressionResetRewardDetails();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerResponse();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerSubmitScoreRequest();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerSubmitScoreResponse();
	UPackage* Z_Construct_UPackage__Script_LootLockerSDK();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerPlayer;
class UScriptStruct* FLootLockerPlayer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerPlayer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerPlayer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerPlayer, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerPlayer"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerPlayer.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerPlayer>()
{
	return FLootLockerPlayer::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerPlayer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_id_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_public_uid_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_public_uid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_name;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerPlayer_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerLeaderboardRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerPlayer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerPlayer>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerPlayer_Statics::NewProp_id_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerLeaderboardRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLootLockerPlayer_Statics::NewProp_id = { "id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerPlayer, id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerPlayer_Statics::NewProp_id_MetaData), Z_Construct_UScriptStruct_FLootLockerPlayer_Statics::NewProp_id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerPlayer_Statics::NewProp_public_uid_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerLeaderboardRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerPlayer_Statics::NewProp_public_uid = { "public_uid", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerPlayer, public_uid), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerPlayer_Statics::NewProp_public_uid_MetaData), Z_Construct_UScriptStruct_FLootLockerPlayer_Statics::NewProp_public_uid_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerPlayer_Statics::NewProp_name_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerLeaderboardRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerPlayer_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerPlayer, name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerPlayer_Statics::NewProp_name_MetaData), Z_Construct_UScriptStruct_FLootLockerPlayer_Statics::NewProp_name_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerPlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerPlayer_Statics::NewProp_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerPlayer_Statics::NewProp_public_uid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerPlayer_Statics::NewProp_name,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerPlayer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		&NewStructOps,
		"LootLockerPlayer",
		Z_Construct_UScriptStruct_FLootLockerPlayer_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerPlayer_Statics::PropPointers),
		sizeof(FLootLockerPlayer),
		alignof(FLootLockerPlayer),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerPlayer_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerPlayer_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerPlayer_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerPlayer()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerPlayer.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerPlayer.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerPlayer_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerPlayer.InnerSingleton;
	}

static_assert(std::is_polymorphic<FLootLockerGetMemberRankResponse>() == std::is_polymorphic<FLootLockerResponse>(), "USTRUCT FLootLockerGetMemberRankResponse cannot be polymorphic unless super FLootLockerResponse is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerGetMemberRankResponse;
class UScriptStruct* FLootLockerGetMemberRankResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerGetMemberRankResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerGetMemberRankResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerGetMemberRankResponse, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerGetMemberRankResponse"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerGetMemberRankResponse.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerGetMemberRankResponse>()
{
	return FLootLockerGetMemberRankResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerGetMemberRankResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_member_id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_member_id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rank_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_rank;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_score_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_score;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_player_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_player;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_metadata_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_metadata;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerGetMemberRankResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerLeaderboardRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerGetMemberRankResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerGetMemberRankResponse>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerGetMemberRankResponse_Statics::NewProp_member_id_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerLeaderboardRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerGetMemberRankResponse_Statics::NewProp_member_id = { "member_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerGetMemberRankResponse, member_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerGetMemberRankResponse_Statics::NewProp_member_id_MetaData), Z_Construct_UScriptStruct_FLootLockerGetMemberRankResponse_Statics::NewProp_member_id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerGetMemberRankResponse_Statics::NewProp_rank_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerLeaderboardRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLootLockerGetMemberRankResponse_Statics::NewProp_rank = { "rank", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerGetMemberRankResponse, rank), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerGetMemberRankResponse_Statics::NewProp_rank_MetaData), Z_Construct_UScriptStruct_FLootLockerGetMemberRankResponse_Statics::NewProp_rank_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerGetMemberRankResponse_Statics::NewProp_score_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerLeaderboardRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLootLockerGetMemberRankResponse_Statics::NewProp_score = { "score", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerGetMemberRankResponse, score), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerGetMemberRankResponse_Statics::NewProp_score_MetaData), Z_Construct_UScriptStruct_FLootLockerGetMemberRankResponse_Statics::NewProp_score_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerGetMemberRankResponse_Statics::NewProp_player_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerLeaderboardRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLootLockerGetMemberRankResponse_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerGetMemberRankResponse, player), Z_Construct_UScriptStruct_FLootLockerPlayer, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerGetMemberRankResponse_Statics::NewProp_player_MetaData), Z_Construct_UScriptStruct_FLootLockerGetMemberRankResponse_Statics::NewProp_player_MetaData) }; // 2329132360
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerGetMemberRankResponse_Statics::NewProp_metadata_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerLeaderboardRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerGetMemberRankResponse_Statics::NewProp_metadata = { "metadata", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerGetMemberRankResponse, metadata), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerGetMemberRankResponse_Statics::NewProp_metadata_MetaData), Z_Construct_UScriptStruct_FLootLockerGetMemberRankResponse_Statics::NewProp_metadata_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerGetMemberRankResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerGetMemberRankResponse_Statics::NewProp_member_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerGetMemberRankResponse_Statics::NewProp_rank,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerGetMemberRankResponse_Statics::NewProp_score,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerGetMemberRankResponse_Statics::NewProp_player,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerGetMemberRankResponse_Statics::NewProp_metadata,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerGetMemberRankResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		Z_Construct_UScriptStruct_FLootLockerResponse,
		&NewStructOps,
		"LootLockerGetMemberRankResponse",
		Z_Construct_UScriptStruct_FLootLockerGetMemberRankResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerGetMemberRankResponse_Statics::PropPointers),
		sizeof(FLootLockerGetMemberRankResponse),
		alignof(FLootLockerGetMemberRankResponse),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerGetMemberRankResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerGetMemberRankResponse_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerGetMemberRankResponse_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerGetMemberRankResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerGetMemberRankResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerGetMemberRankResponse.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerGetMemberRankResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerGetMemberRankResponse.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerMember;
class UScriptStruct* FLootLockerMember::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerMember.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerMember.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerMember, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerMember"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerMember.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerMember>()
{
	return FLootLockerMember::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerMember_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_member_id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_member_id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rank_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_rank;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_score_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_score;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_player_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_player;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_metadata_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_metadata;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerMember_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerLeaderboardRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerMember_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerMember>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerMember_Statics::NewProp_member_id_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerLeaderboardRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerMember_Statics::NewProp_member_id = { "member_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerMember, member_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerMember_Statics::NewProp_member_id_MetaData), Z_Construct_UScriptStruct_FLootLockerMember_Statics::NewProp_member_id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerMember_Statics::NewProp_rank_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerLeaderboardRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLootLockerMember_Statics::NewProp_rank = { "rank", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerMember, rank), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerMember_Statics::NewProp_rank_MetaData), Z_Construct_UScriptStruct_FLootLockerMember_Statics::NewProp_rank_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerMember_Statics::NewProp_score_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerLeaderboardRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLootLockerMember_Statics::NewProp_score = { "score", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerMember, score), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerMember_Statics::NewProp_score_MetaData), Z_Construct_UScriptStruct_FLootLockerMember_Statics::NewProp_score_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerMember_Statics::NewProp_player_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerLeaderboardRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLootLockerMember_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerMember, player), Z_Construct_UScriptStruct_FLootLockerPlayer, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerMember_Statics::NewProp_player_MetaData), Z_Construct_UScriptStruct_FLootLockerMember_Statics::NewProp_player_MetaData) }; // 2329132360
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerMember_Statics::NewProp_metadata_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerLeaderboardRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerMember_Statics::NewProp_metadata = { "metadata", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerMember, metadata), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerMember_Statics::NewProp_metadata_MetaData), Z_Construct_UScriptStruct_FLootLockerMember_Statics::NewProp_metadata_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerMember_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerMember_Statics::NewProp_member_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerMember_Statics::NewProp_rank,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerMember_Statics::NewProp_score,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerMember_Statics::NewProp_player,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerMember_Statics::NewProp_metadata,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerMember_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		&NewStructOps,
		"LootLockerMember",
		Z_Construct_UScriptStruct_FLootLockerMember_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerMember_Statics::PropPointers),
		sizeof(FLootLockerMember),
		alignof(FLootLockerMember),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerMember_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerMember_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerMember_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerMember()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerMember.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerMember.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerMember_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerMember.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerLeaderboard;
class UScriptStruct* FLootLockerLeaderboard::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerLeaderboard.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerLeaderboard.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerLeaderboard, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerLeaderboard"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerLeaderboard.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerLeaderboard>()
{
	return FLootLockerLeaderboard::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerLeaderboard_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_leaderboard_id_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_leaderboard_id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_leaderboard_key_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_leaderboard_key;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rank_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_rank;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerLeaderboard_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerLeaderboardRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerLeaderboard_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerLeaderboard>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerLeaderboard_Statics::NewProp_leaderboard_id_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerLeaderboardRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLootLockerLeaderboard_Statics::NewProp_leaderboard_id = { "leaderboard_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerLeaderboard, leaderboard_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerLeaderboard_Statics::NewProp_leaderboard_id_MetaData), Z_Construct_UScriptStruct_FLootLockerLeaderboard_Statics::NewProp_leaderboard_id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerLeaderboard_Statics::NewProp_leaderboard_key_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerLeaderboardRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerLeaderboard_Statics::NewProp_leaderboard_key = { "leaderboard_key", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerLeaderboard, leaderboard_key), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerLeaderboard_Statics::NewProp_leaderboard_key_MetaData), Z_Construct_UScriptStruct_FLootLockerLeaderboard_Statics::NewProp_leaderboard_key_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerLeaderboard_Statics::NewProp_rank_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerLeaderboardRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLootLockerLeaderboard_Statics::NewProp_rank = { "rank", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerLeaderboard, rank), Z_Construct_UScriptStruct_FLootLockerGetMemberRankResponse, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerLeaderboard_Statics::NewProp_rank_MetaData), Z_Construct_UScriptStruct_FLootLockerLeaderboard_Statics::NewProp_rank_MetaData) }; // 2701142109
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerLeaderboard_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerLeaderboard_Statics::NewProp_leaderboard_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerLeaderboard_Statics::NewProp_leaderboard_key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerLeaderboard_Statics::NewProp_rank,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerLeaderboard_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		&NewStructOps,
		"LootLockerLeaderboard",
		Z_Construct_UScriptStruct_FLootLockerLeaderboard_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerLeaderboard_Statics::PropPointers),
		sizeof(FLootLockerLeaderboard),
		alignof(FLootLockerLeaderboard),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerLeaderboard_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerLeaderboard_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerLeaderboard_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerLeaderboard()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerLeaderboard.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerLeaderboard.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerLeaderboard_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerLeaderboard.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerPagination;
class UScriptStruct* FLootLockerPagination::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerPagination.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerPagination.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerPagination, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerPagination"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerPagination.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerPagination>()
{
	return FLootLockerPagination::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerPagination_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_total_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_total;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_next_cursor_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_next_cursor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerPagination_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerLeaderboardRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerPagination_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerPagination>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerPagination_Statics::NewProp_total_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerLeaderboardRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLootLockerPagination_Statics::NewProp_total = { "total", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerPagination, total), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerPagination_Statics::NewProp_total_MetaData), Z_Construct_UScriptStruct_FLootLockerPagination_Statics::NewProp_total_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerPagination_Statics::NewProp_next_cursor_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerLeaderboardRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLootLockerPagination_Statics::NewProp_next_cursor = { "next_cursor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerPagination, next_cursor), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerPagination_Statics::NewProp_next_cursor_MetaData), Z_Construct_UScriptStruct_FLootLockerPagination_Statics::NewProp_next_cursor_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerPagination_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerPagination_Statics::NewProp_total,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerPagination_Statics::NewProp_next_cursor,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerPagination_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		&NewStructOps,
		"LootLockerPagination",
		Z_Construct_UScriptStruct_FLootLockerPagination_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerPagination_Statics::PropPointers),
		sizeof(FLootLockerPagination),
		alignof(FLootLockerPagination),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerPagination_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerPagination_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerPagination_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerPagination()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerPagination.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerPagination.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerPagination_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerPagination.InnerSingleton;
	}

static_assert(std::is_polymorphic<FLootLockerGetByListOfMembersResponse>() == std::is_polymorphic<FLootLockerResponse>(), "USTRUCT FLootLockerGetByListOfMembersResponse cannot be polymorphic unless super FLootLockerResponse is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerGetByListOfMembersResponse;
class UScriptStruct* FLootLockerGetByListOfMembersResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerGetByListOfMembersResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerGetByListOfMembersResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerGetByListOfMembersResponse, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerGetByListOfMembersResponse"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerGetByListOfMembersResponse.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerGetByListOfMembersResponse>()
{
	return FLootLockerGetByListOfMembersResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerGetByListOfMembersResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_members_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_members_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_members;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerGetByListOfMembersResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerLeaderboardRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerGetByListOfMembersResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerGetByListOfMembersResponse>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLootLockerGetByListOfMembersResponse_Statics::NewProp_members_Inner = { "members", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLootLockerMember, METADATA_PARAMS(0, nullptr) }; // 1524089696
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerGetByListOfMembersResponse_Statics::NewProp_members_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerLeaderboardRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLootLockerGetByListOfMembersResponse_Statics::NewProp_members = { "members", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerGetByListOfMembersResponse, members), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerGetByListOfMembersResponse_Statics::NewProp_members_MetaData), Z_Construct_UScriptStruct_FLootLockerGetByListOfMembersResponse_Statics::NewProp_members_MetaData) }; // 1524089696
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerGetByListOfMembersResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerGetByListOfMembersResponse_Statics::NewProp_members_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerGetByListOfMembersResponse_Statics::NewProp_members,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerGetByListOfMembersResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		Z_Construct_UScriptStruct_FLootLockerResponse,
		&NewStructOps,
		"LootLockerGetByListOfMembersResponse",
		Z_Construct_UScriptStruct_FLootLockerGetByListOfMembersResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerGetByListOfMembersResponse_Statics::PropPointers),
		sizeof(FLootLockerGetByListOfMembersResponse),
		alignof(FLootLockerGetByListOfMembersResponse),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerGetByListOfMembersResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerGetByListOfMembersResponse_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerGetByListOfMembersResponse_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerGetByListOfMembersResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerGetByListOfMembersResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerGetByListOfMembersResponse.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerGetByListOfMembersResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerGetByListOfMembersResponse.InnerSingleton;
	}

static_assert(std::is_polymorphic<FLootLockerGetScoreListResponse>() == std::is_polymorphic<FLootLockerResponse>(), "USTRUCT FLootLockerGetScoreListResponse cannot be polymorphic unless super FLootLockerResponse is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerGetScoreListResponse;
class UScriptStruct* FLootLockerGetScoreListResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerGetScoreListResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerGetScoreListResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerGetScoreListResponse, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerGetScoreListResponse"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerGetScoreListResponse.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerGetScoreListResponse>()
{
	return FLootLockerGetScoreListResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerGetScoreListResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_pagination_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_pagination;
		static const UECodeGen_Private::FStructPropertyParams NewProp_items_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_items_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_items;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerGetScoreListResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerLeaderboardRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerGetScoreListResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerGetScoreListResponse>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerGetScoreListResponse_Statics::NewProp_pagination_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerLeaderboardRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLootLockerGetScoreListResponse_Statics::NewProp_pagination = { "pagination", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerGetScoreListResponse, pagination), Z_Construct_UScriptStruct_FLootLockerPagination, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerGetScoreListResponse_Statics::NewProp_pagination_MetaData), Z_Construct_UScriptStruct_FLootLockerGetScoreListResponse_Statics::NewProp_pagination_MetaData) }; // 428704484
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLootLockerGetScoreListResponse_Statics::NewProp_items_Inner = { "items", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLootLockerMember, METADATA_PARAMS(0, nullptr) }; // 1524089696
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerGetScoreListResponse_Statics::NewProp_items_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerLeaderboardRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLootLockerGetScoreListResponse_Statics::NewProp_items = { "items", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerGetScoreListResponse, items), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerGetScoreListResponse_Statics::NewProp_items_MetaData), Z_Construct_UScriptStruct_FLootLockerGetScoreListResponse_Statics::NewProp_items_MetaData) }; // 1524089696
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerGetScoreListResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerGetScoreListResponse_Statics::NewProp_pagination,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerGetScoreListResponse_Statics::NewProp_items_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerGetScoreListResponse_Statics::NewProp_items,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerGetScoreListResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		Z_Construct_UScriptStruct_FLootLockerResponse,
		&NewStructOps,
		"LootLockerGetScoreListResponse",
		Z_Construct_UScriptStruct_FLootLockerGetScoreListResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerGetScoreListResponse_Statics::PropPointers),
		sizeof(FLootLockerGetScoreListResponse),
		alignof(FLootLockerGetScoreListResponse),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerGetScoreListResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerGetScoreListResponse_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerGetScoreListResponse_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerGetScoreListResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerGetScoreListResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerGetScoreListResponse.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerGetScoreListResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerGetScoreListResponse.InnerSingleton;
	}

static_assert(std::is_polymorphic<FLootLockerGetAllMemberRanksResponse>() == std::is_polymorphic<FLootLockerResponse>(), "USTRUCT FLootLockerGetAllMemberRanksResponse cannot be polymorphic unless super FLootLockerResponse is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerGetAllMemberRanksResponse;
class UScriptStruct* FLootLockerGetAllMemberRanksResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerGetAllMemberRanksResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerGetAllMemberRanksResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerGetAllMemberRanksResponse, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerGetAllMemberRanksResponse"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerGetAllMemberRanksResponse.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerGetAllMemberRanksResponse>()
{
	return FLootLockerGetAllMemberRanksResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerGetAllMemberRanksResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_pagination_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_pagination;
		static const UECodeGen_Private::FStructPropertyParams NewProp_leaderboards_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_leaderboards_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_leaderboards;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerGetAllMemberRanksResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerLeaderboardRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerGetAllMemberRanksResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerGetAllMemberRanksResponse>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerGetAllMemberRanksResponse_Statics::NewProp_pagination_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerLeaderboardRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLootLockerGetAllMemberRanksResponse_Statics::NewProp_pagination = { "pagination", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerGetAllMemberRanksResponse, pagination), Z_Construct_UScriptStruct_FLootLockerPagination, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerGetAllMemberRanksResponse_Statics::NewProp_pagination_MetaData), Z_Construct_UScriptStruct_FLootLockerGetAllMemberRanksResponse_Statics::NewProp_pagination_MetaData) }; // 428704484
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLootLockerGetAllMemberRanksResponse_Statics::NewProp_leaderboards_Inner = { "leaderboards", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLootLockerLeaderboard, METADATA_PARAMS(0, nullptr) }; // 1140110353
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerGetAllMemberRanksResponse_Statics::NewProp_leaderboards_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerLeaderboardRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLootLockerGetAllMemberRanksResponse_Statics::NewProp_leaderboards = { "leaderboards", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerGetAllMemberRanksResponse, leaderboards), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerGetAllMemberRanksResponse_Statics::NewProp_leaderboards_MetaData), Z_Construct_UScriptStruct_FLootLockerGetAllMemberRanksResponse_Statics::NewProp_leaderboards_MetaData) }; // 1140110353
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerGetAllMemberRanksResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerGetAllMemberRanksResponse_Statics::NewProp_pagination,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerGetAllMemberRanksResponse_Statics::NewProp_leaderboards_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerGetAllMemberRanksResponse_Statics::NewProp_leaderboards,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerGetAllMemberRanksResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		Z_Construct_UScriptStruct_FLootLockerResponse,
		&NewStructOps,
		"LootLockerGetAllMemberRanksResponse",
		Z_Construct_UScriptStruct_FLootLockerGetAllMemberRanksResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerGetAllMemberRanksResponse_Statics::PropPointers),
		sizeof(FLootLockerGetAllMemberRanksResponse),
		alignof(FLootLockerGetAllMemberRanksResponse),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerGetAllMemberRanksResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerGetAllMemberRanksResponse_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerGetAllMemberRanksResponse_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerGetAllMemberRanksResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerGetAllMemberRanksResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerGetAllMemberRanksResponse.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerGetAllMemberRanksResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerGetAllMemberRanksResponse.InnerSingleton;
	}

static_assert(std::is_polymorphic<FLootLockerSubmitScoreResponse>() == std::is_polymorphic<FLootLockerResponse>(), "USTRUCT FLootLockerSubmitScoreResponse cannot be polymorphic unless super FLootLockerResponse is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerSubmitScoreResponse;
class UScriptStruct* FLootLockerSubmitScoreResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerSubmitScoreResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerSubmitScoreResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerSubmitScoreResponse, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerSubmitScoreResponse"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerSubmitScoreResponse.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerSubmitScoreResponse>()
{
	return FLootLockerSubmitScoreResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerSubmitScoreResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_member_id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_member_id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rank_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_rank;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_score_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_score;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_metadata_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_metadata;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerSubmitScoreResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerLeaderboardRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerSubmitScoreResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerSubmitScoreResponse>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerSubmitScoreResponse_Statics::NewProp_member_id_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerLeaderboardRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerSubmitScoreResponse_Statics::NewProp_member_id = { "member_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerSubmitScoreResponse, member_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerSubmitScoreResponse_Statics::NewProp_member_id_MetaData), Z_Construct_UScriptStruct_FLootLockerSubmitScoreResponse_Statics::NewProp_member_id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerSubmitScoreResponse_Statics::NewProp_rank_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerLeaderboardRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLootLockerSubmitScoreResponse_Statics::NewProp_rank = { "rank", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerSubmitScoreResponse, rank), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerSubmitScoreResponse_Statics::NewProp_rank_MetaData), Z_Construct_UScriptStruct_FLootLockerSubmitScoreResponse_Statics::NewProp_rank_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerSubmitScoreResponse_Statics::NewProp_score_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerLeaderboardRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLootLockerSubmitScoreResponse_Statics::NewProp_score = { "score", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerSubmitScoreResponse, score), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerSubmitScoreResponse_Statics::NewProp_score_MetaData), Z_Construct_UScriptStruct_FLootLockerSubmitScoreResponse_Statics::NewProp_score_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerSubmitScoreResponse_Statics::NewProp_metadata_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerLeaderboardRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerSubmitScoreResponse_Statics::NewProp_metadata = { "metadata", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerSubmitScoreResponse, metadata), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerSubmitScoreResponse_Statics::NewProp_metadata_MetaData), Z_Construct_UScriptStruct_FLootLockerSubmitScoreResponse_Statics::NewProp_metadata_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerSubmitScoreResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerSubmitScoreResponse_Statics::NewProp_member_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerSubmitScoreResponse_Statics::NewProp_rank,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerSubmitScoreResponse_Statics::NewProp_score,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerSubmitScoreResponse_Statics::NewProp_metadata,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerSubmitScoreResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		Z_Construct_UScriptStruct_FLootLockerResponse,
		&NewStructOps,
		"LootLockerSubmitScoreResponse",
		Z_Construct_UScriptStruct_FLootLockerSubmitScoreResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerSubmitScoreResponse_Statics::PropPointers),
		sizeof(FLootLockerSubmitScoreResponse),
		alignof(FLootLockerSubmitScoreResponse),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerSubmitScoreResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerSubmitScoreResponse_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerSubmitScoreResponse_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerSubmitScoreResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerSubmitScoreResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerSubmitScoreResponse.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerSubmitScoreResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerSubmitScoreResponse.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerAssetRewardDetails;
class UScriptStruct* FLootLockerAssetRewardDetails::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerAssetRewardDetails.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerAssetRewardDetails.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerAssetRewardDetails, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerAssetRewardDetails"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerAssetRewardDetails.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerAssetRewardDetails>()
{
	return FLootLockerAssetRewardDetails::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerAssetRewardDetails_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_thumbnail_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_thumbnail;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_variation_name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_variation_name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rental_option_name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_rental_option_name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_variation_id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_variation_id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rental_option_id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_rental_option_id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_legacy_id_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_legacy_id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_id;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerAssetRewardDetails_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerLeaderboardRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerAssetRewardDetails_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerAssetRewardDetails>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerAssetRewardDetails_Statics::NewProp_name_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerLeaderboardRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerAssetRewardDetails_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerAssetRewardDetails, name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerAssetRewardDetails_Statics::NewProp_name_MetaData), Z_Construct_UScriptStruct_FLootLockerAssetRewardDetails_Statics::NewProp_name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerAssetRewardDetails_Statics::NewProp_thumbnail_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerLeaderboardRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerAssetRewardDetails_Statics::NewProp_thumbnail = { "thumbnail", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerAssetRewardDetails, thumbnail), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerAssetRewardDetails_Statics::NewProp_thumbnail_MetaData), Z_Construct_UScriptStruct_FLootLockerAssetRewardDetails_Statics::NewProp_thumbnail_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerAssetRewardDetails_Statics::NewProp_variation_name_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerLeaderboardRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerAssetRewardDetails_Statics::NewProp_variation_name = { "variation_name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerAssetRewardDetails, variation_name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerAssetRewardDetails_Statics::NewProp_variation_name_MetaData), Z_Construct_UScriptStruct_FLootLockerAssetRewardDetails_Statics::NewProp_variation_name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerAssetRewardDetails_Statics::NewProp_rental_option_name_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerLeaderboardRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerAssetRewardDetails_Statics::NewProp_rental_option_name = { "rental_option_name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerAssetRewardDetails, rental_option_name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerAssetRewardDetails_Statics::NewProp_rental_option_name_MetaData), Z_Construct_UScriptStruct_FLootLockerAssetRewardDetails_Statics::NewProp_rental_option_name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerAssetRewardDetails_Statics::NewProp_variation_id_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerLeaderboardRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerAssetRewardDetails_Statics::NewProp_variation_id = { "variation_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerAssetRewardDetails, variation_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerAssetRewardDetails_Statics::NewProp_variation_id_MetaData), Z_Construct_UScriptStruct_FLootLockerAssetRewardDetails_Statics::NewProp_variation_id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerAssetRewardDetails_Statics::NewProp_rental_option_id_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerLeaderboardRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerAssetRewardDetails_Statics::NewProp_rental_option_id = { "rental_option_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerAssetRewardDetails, rental_option_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerAssetRewardDetails_Statics::NewProp_rental_option_id_MetaData), Z_Construct_UScriptStruct_FLootLockerAssetRewardDetails_Statics::NewProp_rental_option_id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerAssetRewardDetails_Statics::NewProp_legacy_id_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerLeaderboardRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLootLockerAssetRewardDetails_Statics::NewProp_legacy_id = { "legacy_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerAssetRewardDetails, legacy_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerAssetRewardDetails_Statics::NewProp_legacy_id_MetaData), Z_Construct_UScriptStruct_FLootLockerAssetRewardDetails_Statics::NewProp_legacy_id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerAssetRewardDetails_Statics::NewProp_id_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerLeaderboardRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerAssetRewardDetails_Statics::NewProp_id = { "id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerAssetRewardDetails, id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerAssetRewardDetails_Statics::NewProp_id_MetaData), Z_Construct_UScriptStruct_FLootLockerAssetRewardDetails_Statics::NewProp_id_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerAssetRewardDetails_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerAssetRewardDetails_Statics::NewProp_name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerAssetRewardDetails_Statics::NewProp_thumbnail,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerAssetRewardDetails_Statics::NewProp_variation_name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerAssetRewardDetails_Statics::NewProp_rental_option_name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerAssetRewardDetails_Statics::NewProp_variation_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerAssetRewardDetails_Statics::NewProp_rental_option_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerAssetRewardDetails_Statics::NewProp_legacy_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerAssetRewardDetails_Statics::NewProp_id,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerAssetRewardDetails_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		&NewStructOps,
		"LootLockerAssetRewardDetails",
		Z_Construct_UScriptStruct_FLootLockerAssetRewardDetails_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerAssetRewardDetails_Statics::PropPointers),
		sizeof(FLootLockerAssetRewardDetails),
		alignof(FLootLockerAssetRewardDetails),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerAssetRewardDetails_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerAssetRewardDetails_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerAssetRewardDetails_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerAssetRewardDetails()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerAssetRewardDetails.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerAssetRewardDetails.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerAssetRewardDetails_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerAssetRewardDetails.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerLeaderboardAssetReward;
class UScriptStruct* FLootLockerLeaderboardAssetReward::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerLeaderboardAssetReward.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerLeaderboardAssetReward.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerLeaderboardAssetReward, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerLeaderboardAssetReward"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerLeaderboardAssetReward.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerLeaderboardAssetReward>()
{
	return FLootLockerLeaderboardAssetReward::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerLeaderboardAssetReward_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_created_at_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_created_at;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_updated_at_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_updated_at;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_details_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_details;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_asset_variation_id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_asset_variation_id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_asset_rental_option_id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_asset_rental_option_id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_asset_id_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_asset_id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_reward_id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_reward_id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_asset_ulid_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_asset_ulid;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerLeaderboardAssetReward_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerLeaderboardRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerLeaderboardAssetReward_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerLeaderboardAssetReward>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerLeaderboardAssetReward_Statics::NewProp_created_at_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerLeaderboardRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerLeaderboardAssetReward_Statics::NewProp_created_at = { "created_at", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerLeaderboardAssetReward, created_at), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerLeaderboardAssetReward_Statics::NewProp_created_at_MetaData), Z_Construct_UScriptStruct_FLootLockerLeaderboardAssetReward_Statics::NewProp_created_at_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerLeaderboardAssetReward_Statics::NewProp_updated_at_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerLeaderboardRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerLeaderboardAssetReward_Statics::NewProp_updated_at = { "updated_at", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerLeaderboardAssetReward, updated_at), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerLeaderboardAssetReward_Statics::NewProp_updated_at_MetaData), Z_Construct_UScriptStruct_FLootLockerLeaderboardAssetReward_Statics::NewProp_updated_at_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerLeaderboardAssetReward_Statics::NewProp_details_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerLeaderboardRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLootLockerLeaderboardAssetReward_Statics::NewProp_details = { "details", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerLeaderboardAssetReward, details), Z_Construct_UScriptStruct_FLootLockerAssetRewardDetails, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerLeaderboardAssetReward_Statics::NewProp_details_MetaData), Z_Construct_UScriptStruct_FLootLockerLeaderboardAssetReward_Statics::NewProp_details_MetaData) }; // 1330725059
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerLeaderboardAssetReward_Statics::NewProp_asset_variation_id_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerLeaderboardRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerLeaderboardAssetReward_Statics::NewProp_asset_variation_id = { "asset_variation_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerLeaderboardAssetReward, asset_variation_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerLeaderboardAssetReward_Statics::NewProp_asset_variation_id_MetaData), Z_Construct_UScriptStruct_FLootLockerLeaderboardAssetReward_Statics::NewProp_asset_variation_id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerLeaderboardAssetReward_Statics::NewProp_asset_rental_option_id_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerLeaderboardRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerLeaderboardAssetReward_Statics::NewProp_asset_rental_option_id = { "asset_rental_option_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerLeaderboardAssetReward, asset_rental_option_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerLeaderboardAssetReward_Statics::NewProp_asset_rental_option_id_MetaData), Z_Construct_UScriptStruct_FLootLockerLeaderboardAssetReward_Statics::NewProp_asset_rental_option_id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerLeaderboardAssetReward_Statics::NewProp_asset_id_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerLeaderboardRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLootLockerLeaderboardAssetReward_Statics::NewProp_asset_id = { "asset_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerLeaderboardAssetReward, asset_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerLeaderboardAssetReward_Statics::NewProp_asset_id_MetaData), Z_Construct_UScriptStruct_FLootLockerLeaderboardAssetReward_Statics::NewProp_asset_id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerLeaderboardAssetReward_Statics::NewProp_reward_id_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerLeaderboardRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerLeaderboardAssetReward_Statics::NewProp_reward_id = { "reward_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerLeaderboardAssetReward, reward_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerLeaderboardAssetReward_Statics::NewProp_reward_id_MetaData), Z_Construct_UScriptStruct_FLootLockerLeaderboardAssetReward_Statics::NewProp_reward_id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerLeaderboardAssetReward_Statics::NewProp_asset_ulid_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerLeaderboardRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerLeaderboardAssetReward_Statics::NewProp_asset_ulid = { "asset_ulid", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerLeaderboardAssetReward, asset_ulid), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerLeaderboardAssetReward_Statics::NewProp_asset_ulid_MetaData), Z_Construct_UScriptStruct_FLootLockerLeaderboardAssetReward_Statics::NewProp_asset_ulid_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerLeaderboardAssetReward_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerLeaderboardAssetReward_Statics::NewProp_created_at,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerLeaderboardAssetReward_Statics::NewProp_updated_at,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerLeaderboardAssetReward_Statics::NewProp_details,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerLeaderboardAssetReward_Statics::NewProp_asset_variation_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerLeaderboardAssetReward_Statics::NewProp_asset_rental_option_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerLeaderboardAssetReward_Statics::NewProp_asset_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerLeaderboardAssetReward_Statics::NewProp_reward_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerLeaderboardAssetReward_Statics::NewProp_asset_ulid,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerLeaderboardAssetReward_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		&NewStructOps,
		"LootLockerLeaderboardAssetReward",
		Z_Construct_UScriptStruct_FLootLockerLeaderboardAssetReward_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerLeaderboardAssetReward_Statics::PropPointers),
		sizeof(FLootLockerLeaderboardAssetReward),
		alignof(FLootLockerLeaderboardAssetReward),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerLeaderboardAssetReward_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerLeaderboardAssetReward_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerLeaderboardAssetReward_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerLeaderboardAssetReward()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerLeaderboardAssetReward.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerLeaderboardAssetReward.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerLeaderboardAssetReward_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerLeaderboardAssetReward.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerCurrencyRewardDetails;
class UScriptStruct* FLootLockerCurrencyRewardDetails::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerCurrencyRewardDetails.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerCurrencyRewardDetails.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerCurrencyRewardDetails, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerCurrencyRewardDetails"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerCurrencyRewardDetails.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerCurrencyRewardDetails>()
{
	return FLootLockerCurrencyRewardDetails::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerCurrencyRewardDetails_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_code_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_code;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_amount_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_amount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_id;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCurrencyRewardDetails_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerLeaderboardRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerCurrencyRewardDetails_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerCurrencyRewardDetails>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCurrencyRewardDetails_Statics::NewProp_name_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerLeaderboardRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerCurrencyRewardDetails_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerCurrencyRewardDetails, name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCurrencyRewardDetails_Statics::NewProp_name_MetaData), Z_Construct_UScriptStruct_FLootLockerCurrencyRewardDetails_Statics::NewProp_name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCurrencyRewardDetails_Statics::NewProp_code_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerLeaderboardRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerCurrencyRewardDetails_Statics::NewProp_code = { "code", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerCurrencyRewardDetails, code), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCurrencyRewardDetails_Statics::NewProp_code_MetaData), Z_Construct_UScriptStruct_FLootLockerCurrencyRewardDetails_Statics::NewProp_code_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCurrencyRewardDetails_Statics::NewProp_amount_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerLeaderboardRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerCurrencyRewardDetails_Statics::NewProp_amount = { "amount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerCurrencyRewardDetails, amount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCurrencyRewardDetails_Statics::NewProp_amount_MetaData), Z_Construct_UScriptStruct_FLootLockerCurrencyRewardDetails_Statics::NewProp_amount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCurrencyRewardDetails_Statics::NewProp_id_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerLeaderboardRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerCurrencyRewardDetails_Statics::NewProp_id = { "id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerCurrencyRewardDetails, id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCurrencyRewardDetails_Statics::NewProp_id_MetaData), Z_Construct_UScriptStruct_FLootLockerCurrencyRewardDetails_Statics::NewProp_id_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerCurrencyRewardDetails_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerCurrencyRewardDetails_Statics::NewProp_name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerCurrencyRewardDetails_Statics::NewProp_code,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerCurrencyRewardDetails_Statics::NewProp_amount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerCurrencyRewardDetails_Statics::NewProp_id,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerCurrencyRewardDetails_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		&NewStructOps,
		"LootLockerCurrencyRewardDetails",
		Z_Construct_UScriptStruct_FLootLockerCurrencyRewardDetails_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCurrencyRewardDetails_Statics::PropPointers),
		sizeof(FLootLockerCurrencyRewardDetails),
		alignof(FLootLockerCurrencyRewardDetails),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCurrencyRewardDetails_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerCurrencyRewardDetails_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCurrencyRewardDetails_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerCurrencyRewardDetails()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerCurrencyRewardDetails.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerCurrencyRewardDetails.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerCurrencyRewardDetails_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerCurrencyRewardDetails.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerLeaderboardCurrencyReward;
class UScriptStruct* FLootLockerLeaderboardCurrencyReward::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerLeaderboardCurrencyReward.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerLeaderboardCurrencyReward.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerLeaderboardCurrencyReward, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerLeaderboardCurrencyReward"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerLeaderboardCurrencyReward.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerLeaderboardCurrencyReward>()
{
	return FLootLockerLeaderboardCurrencyReward::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerLeaderboardCurrencyReward_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_created_at_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_created_at;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_updated_at_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_updated_at;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_amount_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_amount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_details_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_details;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_reward_id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_reward_id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_currency_id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_currency_id;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerLeaderboardCurrencyReward_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerLeaderboardRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerLeaderboardCurrencyReward_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerLeaderboardCurrencyReward>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerLeaderboardCurrencyReward_Statics::NewProp_created_at_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerLeaderboardRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerLeaderboardCurrencyReward_Statics::NewProp_created_at = { "created_at", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerLeaderboardCurrencyReward, created_at), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerLeaderboardCurrencyReward_Statics::NewProp_created_at_MetaData), Z_Construct_UScriptStruct_FLootLockerLeaderboardCurrencyReward_Statics::NewProp_created_at_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerLeaderboardCurrencyReward_Statics::NewProp_updated_at_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerLeaderboardRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerLeaderboardCurrencyReward_Statics::NewProp_updated_at = { "updated_at", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerLeaderboardCurrencyReward, updated_at), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerLeaderboardCurrencyReward_Statics::NewProp_updated_at_MetaData), Z_Construct_UScriptStruct_FLootLockerLeaderboardCurrencyReward_Statics::NewProp_updated_at_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerLeaderboardCurrencyReward_Statics::NewProp_amount_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerLeaderboardRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerLeaderboardCurrencyReward_Statics::NewProp_amount = { "amount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerLeaderboardCurrencyReward, amount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerLeaderboardCurrencyReward_Statics::NewProp_amount_MetaData), Z_Construct_UScriptStruct_FLootLockerLeaderboardCurrencyReward_Statics::NewProp_amount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerLeaderboardCurrencyReward_Statics::NewProp_details_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerLeaderboardRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLootLockerLeaderboardCurrencyReward_Statics::NewProp_details = { "details", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerLeaderboardCurrencyReward, details), Z_Construct_UScriptStruct_FLootLockerCurrencyRewardDetails, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerLeaderboardCurrencyReward_Statics::NewProp_details_MetaData), Z_Construct_UScriptStruct_FLootLockerLeaderboardCurrencyReward_Statics::NewProp_details_MetaData) }; // 4266614157
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerLeaderboardCurrencyReward_Statics::NewProp_reward_id_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerLeaderboardRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerLeaderboardCurrencyReward_Statics::NewProp_reward_id = { "reward_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerLeaderboardCurrencyReward, reward_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerLeaderboardCurrencyReward_Statics::NewProp_reward_id_MetaData), Z_Construct_UScriptStruct_FLootLockerLeaderboardCurrencyReward_Statics::NewProp_reward_id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerLeaderboardCurrencyReward_Statics::NewProp_currency_id_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerLeaderboardRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerLeaderboardCurrencyReward_Statics::NewProp_currency_id = { "currency_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerLeaderboardCurrencyReward, currency_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerLeaderboardCurrencyReward_Statics::NewProp_currency_id_MetaData), Z_Construct_UScriptStruct_FLootLockerLeaderboardCurrencyReward_Statics::NewProp_currency_id_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerLeaderboardCurrencyReward_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerLeaderboardCurrencyReward_Statics::NewProp_created_at,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerLeaderboardCurrencyReward_Statics::NewProp_updated_at,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerLeaderboardCurrencyReward_Statics::NewProp_amount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerLeaderboardCurrencyReward_Statics::NewProp_details,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerLeaderboardCurrencyReward_Statics::NewProp_reward_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerLeaderboardCurrencyReward_Statics::NewProp_currency_id,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerLeaderboardCurrencyReward_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		&NewStructOps,
		"LootLockerLeaderboardCurrencyReward",
		Z_Construct_UScriptStruct_FLootLockerLeaderboardCurrencyReward_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerLeaderboardCurrencyReward_Statics::PropPointers),
		sizeof(FLootLockerLeaderboardCurrencyReward),
		alignof(FLootLockerLeaderboardCurrencyReward),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerLeaderboardCurrencyReward_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerLeaderboardCurrencyReward_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerLeaderboardCurrencyReward_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerLeaderboardCurrencyReward()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerLeaderboardCurrencyReward.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerLeaderboardCurrencyReward.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerLeaderboardCurrencyReward_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerLeaderboardCurrencyReward.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerProgressionResetRewardDetails;
class UScriptStruct* FLootLockerProgressionResetRewardDetails::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerProgressionResetRewardDetails.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerProgressionResetRewardDetails.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerProgressionResetRewardDetails, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerProgressionResetRewardDetails"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerProgressionResetRewardDetails.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerProgressionResetRewardDetails>()
{
	return FLootLockerProgressionResetRewardDetails::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerProgressionResetRewardDetails_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_key_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_key;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_id;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerProgressionResetRewardDetails_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerLeaderboardRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerProgressionResetRewardDetails_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerProgressionResetRewardDetails>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerProgressionResetRewardDetails_Statics::NewProp_key_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerLeaderboardRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerProgressionResetRewardDetails_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerProgressionResetRewardDetails, key), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerProgressionResetRewardDetails_Statics::NewProp_key_MetaData), Z_Construct_UScriptStruct_FLootLockerProgressionResetRewardDetails_Statics::NewProp_key_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerProgressionResetRewardDetails_Statics::NewProp_name_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerLeaderboardRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerProgressionResetRewardDetails_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerProgressionResetRewardDetails, name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerProgressionResetRewardDetails_Statics::NewProp_name_MetaData), Z_Construct_UScriptStruct_FLootLockerProgressionResetRewardDetails_Statics::NewProp_name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerProgressionResetRewardDetails_Statics::NewProp_id_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerLeaderboardRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerProgressionResetRewardDetails_Statics::NewProp_id = { "id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerProgressionResetRewardDetails, id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerProgressionResetRewardDetails_Statics::NewProp_id_MetaData), Z_Construct_UScriptStruct_FLootLockerProgressionResetRewardDetails_Statics::NewProp_id_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerProgressionResetRewardDetails_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerProgressionResetRewardDetails_Statics::NewProp_key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerProgressionResetRewardDetails_Statics::NewProp_name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerProgressionResetRewardDetails_Statics::NewProp_id,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerProgressionResetRewardDetails_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		&NewStructOps,
		"LootLockerProgressionResetRewardDetails",
		Z_Construct_UScriptStruct_FLootLockerProgressionResetRewardDetails_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerProgressionResetRewardDetails_Statics::PropPointers),
		sizeof(FLootLockerProgressionResetRewardDetails),
		alignof(FLootLockerProgressionResetRewardDetails),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerProgressionResetRewardDetails_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerProgressionResetRewardDetails_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerProgressionResetRewardDetails_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerProgressionResetRewardDetails()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerProgressionResetRewardDetails.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerProgressionResetRewardDetails.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerProgressionResetRewardDetails_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerProgressionResetRewardDetails.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerLeaderboardProgressionResetReward;
class UScriptStruct* FLootLockerLeaderboardProgressionResetReward::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerLeaderboardProgressionResetReward.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerLeaderboardProgressionResetReward.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerLeaderboardProgressionResetReward, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerLeaderboardProgressionResetReward"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerLeaderboardProgressionResetReward.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerLeaderboardProgressionResetReward>()
{
	return FLootLockerLeaderboardProgressionResetReward::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerLeaderboardProgressionResetReward_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_created_at_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_created_at;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_updated_at_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_updated_at;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_progression_id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_progression_id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_details_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_details;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_reward_id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_reward_id;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerLeaderboardProgressionResetReward_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerLeaderboardRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerLeaderboardProgressionResetReward_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerLeaderboardProgressionResetReward>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerLeaderboardProgressionResetReward_Statics::NewProp_created_at_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerLeaderboardRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerLeaderboardProgressionResetReward_Statics::NewProp_created_at = { "created_at", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerLeaderboardProgressionResetReward, created_at), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerLeaderboardProgressionResetReward_Statics::NewProp_created_at_MetaData), Z_Construct_UScriptStruct_FLootLockerLeaderboardProgressionResetReward_Statics::NewProp_created_at_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerLeaderboardProgressionResetReward_Statics::NewProp_updated_at_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerLeaderboardRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerLeaderboardProgressionResetReward_Statics::NewProp_updated_at = { "updated_at", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerLeaderboardProgressionResetReward, updated_at), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerLeaderboardProgressionResetReward_Statics::NewProp_updated_at_MetaData), Z_Construct_UScriptStruct_FLootLockerLeaderboardProgressionResetReward_Statics::NewProp_updated_at_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerLeaderboardProgressionResetReward_Statics::NewProp_progression_id_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerLeaderboardRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerLeaderboardProgressionResetReward_Statics::NewProp_progression_id = { "progression_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerLeaderboardProgressionResetReward, progression_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerLeaderboardProgressionResetReward_Statics::NewProp_progression_id_MetaData), Z_Construct_UScriptStruct_FLootLockerLeaderboardProgressionResetReward_Statics::NewProp_progression_id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerLeaderboardProgressionResetReward_Statics::NewProp_details_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerLeaderboardRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLootLockerLeaderboardProgressionResetReward_Statics::NewProp_details = { "details", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerLeaderboardProgressionResetReward, details), Z_Construct_UScriptStruct_FLootLockerProgressionResetRewardDetails, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerLeaderboardProgressionResetReward_Statics::NewProp_details_MetaData), Z_Construct_UScriptStruct_FLootLockerLeaderboardProgressionResetReward_Statics::NewProp_details_MetaData) }; // 3551977745
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerLeaderboardProgressionResetReward_Statics::NewProp_reward_id_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerLeaderboardRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerLeaderboardProgressionResetReward_Statics::NewProp_reward_id = { "reward_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerLeaderboardProgressionResetReward, reward_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerLeaderboardProgressionResetReward_Statics::NewProp_reward_id_MetaData), Z_Construct_UScriptStruct_FLootLockerLeaderboardProgressionResetReward_Statics::NewProp_reward_id_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerLeaderboardProgressionResetReward_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerLeaderboardProgressionResetReward_Statics::NewProp_created_at,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerLeaderboardProgressionResetReward_Statics::NewProp_updated_at,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerLeaderboardProgressionResetReward_Statics::NewProp_progression_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerLeaderboardProgressionResetReward_Statics::NewProp_details,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerLeaderboardProgressionResetReward_Statics::NewProp_reward_id,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerLeaderboardProgressionResetReward_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		&NewStructOps,
		"LootLockerLeaderboardProgressionResetReward",
		Z_Construct_UScriptStruct_FLootLockerLeaderboardProgressionResetReward_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerLeaderboardProgressionResetReward_Statics::PropPointers),
		sizeof(FLootLockerLeaderboardProgressionResetReward),
		alignof(FLootLockerLeaderboardProgressionResetReward),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerLeaderboardProgressionResetReward_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerLeaderboardProgressionResetReward_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerLeaderboardProgressionResetReward_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerLeaderboardProgressionResetReward()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerLeaderboardProgressionResetReward.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerLeaderboardProgressionResetReward.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerLeaderboardProgressionResetReward_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerLeaderboardProgressionResetReward.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerProgressionPointRewardDetails;
class UScriptStruct* FLootLockerProgressionPointRewardDetails::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerProgressionPointRewardDetails.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerProgressionPointRewardDetails.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerProgressionPointRewardDetails, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerProgressionPointRewardDetails"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerProgressionPointRewardDetails.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerProgressionPointRewardDetails>()
{
	return FLootLockerProgressionPointRewardDetails::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerProgressionPointRewardDetails_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_key_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_key;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_amount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_amount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_id;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerProgressionPointRewardDetails_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerLeaderboardRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerProgressionPointRewardDetails_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerProgressionPointRewardDetails>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerProgressionPointRewardDetails_Statics::NewProp_key_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerLeaderboardRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerProgressionPointRewardDetails_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerProgressionPointRewardDetails, key), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerProgressionPointRewardDetails_Statics::NewProp_key_MetaData), Z_Construct_UScriptStruct_FLootLockerProgressionPointRewardDetails_Statics::NewProp_key_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerProgressionPointRewardDetails_Statics::NewProp_name_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerLeaderboardRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerProgressionPointRewardDetails_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerProgressionPointRewardDetails, name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerProgressionPointRewardDetails_Statics::NewProp_name_MetaData), Z_Construct_UScriptStruct_FLootLockerProgressionPointRewardDetails_Statics::NewProp_name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerProgressionPointRewardDetails_Statics::NewProp_amount_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerLeaderboardRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLootLockerProgressionPointRewardDetails_Statics::NewProp_amount = { "amount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerProgressionPointRewardDetails, amount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerProgressionPointRewardDetails_Statics::NewProp_amount_MetaData), Z_Construct_UScriptStruct_FLootLockerProgressionPointRewardDetails_Statics::NewProp_amount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerProgressionPointRewardDetails_Statics::NewProp_id_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerLeaderboardRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerProgressionPointRewardDetails_Statics::NewProp_id = { "id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerProgressionPointRewardDetails, id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerProgressionPointRewardDetails_Statics::NewProp_id_MetaData), Z_Construct_UScriptStruct_FLootLockerProgressionPointRewardDetails_Statics::NewProp_id_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerProgressionPointRewardDetails_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerProgressionPointRewardDetails_Statics::NewProp_key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerProgressionPointRewardDetails_Statics::NewProp_name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerProgressionPointRewardDetails_Statics::NewProp_amount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerProgressionPointRewardDetails_Statics::NewProp_id,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerProgressionPointRewardDetails_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		&NewStructOps,
		"LootLockerProgressionPointRewardDetails",
		Z_Construct_UScriptStruct_FLootLockerProgressionPointRewardDetails_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerProgressionPointRewardDetails_Statics::PropPointers),
		sizeof(FLootLockerProgressionPointRewardDetails),
		alignof(FLootLockerProgressionPointRewardDetails),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerProgressionPointRewardDetails_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerProgressionPointRewardDetails_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerProgressionPointRewardDetails_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerProgressionPointRewardDetails()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerProgressionPointRewardDetails.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerProgressionPointRewardDetails.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerProgressionPointRewardDetails_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerProgressionPointRewardDetails.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerLeaderboardProgressionPointsReward;
class UScriptStruct* FLootLockerLeaderboardProgressionPointsReward::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerLeaderboardProgressionPointsReward.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerLeaderboardProgressionPointsReward.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerLeaderboardProgressionPointsReward, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerLeaderboardProgressionPointsReward"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerLeaderboardProgressionPointsReward.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerLeaderboardProgressionPointsReward>()
{
	return FLootLockerLeaderboardProgressionPointsReward::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerLeaderboardProgressionPointsReward_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_created_at_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_created_at;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_updated_at_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_updated_at;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_details_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_details;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_amount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_amount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_progression_id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_progression_id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_reward_id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_reward_id;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerLeaderboardProgressionPointsReward_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerLeaderboardRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerLeaderboardProgressionPointsReward_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerLeaderboardProgressionPointsReward>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerLeaderboardProgressionPointsReward_Statics::NewProp_created_at_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerLeaderboardRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerLeaderboardProgressionPointsReward_Statics::NewProp_created_at = { "created_at", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerLeaderboardProgressionPointsReward, created_at), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerLeaderboardProgressionPointsReward_Statics::NewProp_created_at_MetaData), Z_Construct_UScriptStruct_FLootLockerLeaderboardProgressionPointsReward_Statics::NewProp_created_at_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerLeaderboardProgressionPointsReward_Statics::NewProp_updated_at_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerLeaderboardRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerLeaderboardProgressionPointsReward_Statics::NewProp_updated_at = { "updated_at", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerLeaderboardProgressionPointsReward, updated_at), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerLeaderboardProgressionPointsReward_Statics::NewProp_updated_at_MetaData), Z_Construct_UScriptStruct_FLootLockerLeaderboardProgressionPointsReward_Statics::NewProp_updated_at_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerLeaderboardProgressionPointsReward_Statics::NewProp_details_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerLeaderboardRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLootLockerLeaderboardProgressionPointsReward_Statics::NewProp_details = { "details", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerLeaderboardProgressionPointsReward, details), Z_Construct_UScriptStruct_FLootLockerProgressionPointRewardDetails, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerLeaderboardProgressionPointsReward_Statics::NewProp_details_MetaData), Z_Construct_UScriptStruct_FLootLockerLeaderboardProgressionPointsReward_Statics::NewProp_details_MetaData) }; // 1307625769
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerLeaderboardProgressionPointsReward_Statics::NewProp_amount_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerLeaderboardRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLootLockerLeaderboardProgressionPointsReward_Statics::NewProp_amount = { "amount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerLeaderboardProgressionPointsReward, amount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerLeaderboardProgressionPointsReward_Statics::NewProp_amount_MetaData), Z_Construct_UScriptStruct_FLootLockerLeaderboardProgressionPointsReward_Statics::NewProp_amount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerLeaderboardProgressionPointsReward_Statics::NewProp_progression_id_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerLeaderboardRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerLeaderboardProgressionPointsReward_Statics::NewProp_progression_id = { "progression_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerLeaderboardProgressionPointsReward, progression_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerLeaderboardProgressionPointsReward_Statics::NewProp_progression_id_MetaData), Z_Construct_UScriptStruct_FLootLockerLeaderboardProgressionPointsReward_Statics::NewProp_progression_id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerLeaderboardProgressionPointsReward_Statics::NewProp_reward_id_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerLeaderboardRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerLeaderboardProgressionPointsReward_Statics::NewProp_reward_id = { "reward_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerLeaderboardProgressionPointsReward, reward_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerLeaderboardProgressionPointsReward_Statics::NewProp_reward_id_MetaData), Z_Construct_UScriptStruct_FLootLockerLeaderboardProgressionPointsReward_Statics::NewProp_reward_id_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerLeaderboardProgressionPointsReward_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerLeaderboardProgressionPointsReward_Statics::NewProp_created_at,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerLeaderboardProgressionPointsReward_Statics::NewProp_updated_at,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerLeaderboardProgressionPointsReward_Statics::NewProp_details,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerLeaderboardProgressionPointsReward_Statics::NewProp_amount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerLeaderboardProgressionPointsReward_Statics::NewProp_progression_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerLeaderboardProgressionPointsReward_Statics::NewProp_reward_id,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerLeaderboardProgressionPointsReward_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		&NewStructOps,
		"LootLockerLeaderboardProgressionPointsReward",
		Z_Construct_UScriptStruct_FLootLockerLeaderboardProgressionPointsReward_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerLeaderboardProgressionPointsReward_Statics::PropPointers),
		sizeof(FLootLockerLeaderboardProgressionPointsReward),
		alignof(FLootLockerLeaderboardProgressionPointsReward),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerLeaderboardProgressionPointsReward_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerLeaderboardProgressionPointsReward_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerLeaderboardProgressionPointsReward_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerLeaderboardProgressionPointsReward()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerLeaderboardProgressionPointsReward.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerLeaderboardProgressionPointsReward.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerLeaderboardProgressionPointsReward_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerLeaderboardProgressionPointsReward.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerLeaderboardRewardArgs;
class UScriptStruct* FLootLockerLeaderboardRewardArgs::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerLeaderboardRewardArgs.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerLeaderboardRewardArgs.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerLeaderboardRewardArgs, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerLeaderboardRewardArgs"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerLeaderboardRewardArgs.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerLeaderboardRewardArgs>()
{
	return FLootLockerLeaderboardRewardArgs::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerLeaderboardRewardArgs_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_max_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_max;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_min_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_min;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_method_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_method;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_direction_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_direction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerLeaderboardRewardArgs_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerLeaderboardRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerLeaderboardRewardArgs_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerLeaderboardRewardArgs>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerLeaderboardRewardArgs_Statics::NewProp_max_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerLeaderboardRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLootLockerLeaderboardRewardArgs_Statics::NewProp_max = { "max", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerLeaderboardRewardArgs, max), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerLeaderboardRewardArgs_Statics::NewProp_max_MetaData), Z_Construct_UScriptStruct_FLootLockerLeaderboardRewardArgs_Statics::NewProp_max_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerLeaderboardRewardArgs_Statics::NewProp_min_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerLeaderboardRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLootLockerLeaderboardRewardArgs_Statics::NewProp_min = { "min", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerLeaderboardRewardArgs, min), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerLeaderboardRewardArgs_Statics::NewProp_min_MetaData), Z_Construct_UScriptStruct_FLootLockerLeaderboardRewardArgs_Statics::NewProp_min_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerLeaderboardRewardArgs_Statics::NewProp_method_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerLeaderboardRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerLeaderboardRewardArgs_Statics::NewProp_method = { "method", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerLeaderboardRewardArgs, method), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerLeaderboardRewardArgs_Statics::NewProp_method_MetaData), Z_Construct_UScriptStruct_FLootLockerLeaderboardRewardArgs_Statics::NewProp_method_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerLeaderboardRewardArgs_Statics::NewProp_direction_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerLeaderboardRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerLeaderboardRewardArgs_Statics::NewProp_direction = { "direction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerLeaderboardRewardArgs, direction), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerLeaderboardRewardArgs_Statics::NewProp_direction_MetaData), Z_Construct_UScriptStruct_FLootLockerLeaderboardRewardArgs_Statics::NewProp_direction_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerLeaderboardRewardArgs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerLeaderboardRewardArgs_Statics::NewProp_max,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerLeaderboardRewardArgs_Statics::NewProp_min,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerLeaderboardRewardArgs_Statics::NewProp_method,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerLeaderboardRewardArgs_Statics::NewProp_direction,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerLeaderboardRewardArgs_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		&NewStructOps,
		"LootLockerLeaderboardRewardArgs",
		Z_Construct_UScriptStruct_FLootLockerLeaderboardRewardArgs_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerLeaderboardRewardArgs_Statics::PropPointers),
		sizeof(FLootLockerLeaderboardRewardArgs),
		alignof(FLootLockerLeaderboardRewardArgs),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerLeaderboardRewardArgs_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerLeaderboardRewardArgs_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerLeaderboardRewardArgs_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerLeaderboardRewardArgs()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerLeaderboardRewardArgs.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerLeaderboardRewardArgs.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerLeaderboardRewardArgs_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerLeaderboardRewardArgs.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerLeaderboardDetailPredicates;
class UScriptStruct* FLootLockerLeaderboardDetailPredicates::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerLeaderboardDetailPredicates.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerLeaderboardDetailPredicates.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerLeaderboardDetailPredicates, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerLeaderboardDetailPredicates"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerLeaderboardDetailPredicates.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerLeaderboardDetailPredicates>()
{
	return FLootLockerLeaderboardDetailPredicates::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerLeaderboardDetailPredicates_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_type_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_type;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_args_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_args;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerLeaderboardDetailPredicates_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerLeaderboardRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerLeaderboardDetailPredicates_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerLeaderboardDetailPredicates>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerLeaderboardDetailPredicates_Statics::NewProp_id_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerLeaderboardRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerLeaderboardDetailPredicates_Statics::NewProp_id = { "id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerLeaderboardDetailPredicates, id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerLeaderboardDetailPredicates_Statics::NewProp_id_MetaData), Z_Construct_UScriptStruct_FLootLockerLeaderboardDetailPredicates_Statics::NewProp_id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerLeaderboardDetailPredicates_Statics::NewProp_type_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerLeaderboardRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerLeaderboardDetailPredicates_Statics::NewProp_type = { "type", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerLeaderboardDetailPredicates, type), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerLeaderboardDetailPredicates_Statics::NewProp_type_MetaData), Z_Construct_UScriptStruct_FLootLockerLeaderboardDetailPredicates_Statics::NewProp_type_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerLeaderboardDetailPredicates_Statics::NewProp_args_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerLeaderboardRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLootLockerLeaderboardDetailPredicates_Statics::NewProp_args = { "args", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerLeaderboardDetailPredicates, args), Z_Construct_UScriptStruct_FLootLockerLeaderboardRewardArgs, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerLeaderboardDetailPredicates_Statics::NewProp_args_MetaData), Z_Construct_UScriptStruct_FLootLockerLeaderboardDetailPredicates_Statics::NewProp_args_MetaData) }; // 2442964386
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerLeaderboardDetailPredicates_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerLeaderboardDetailPredicates_Statics::NewProp_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerLeaderboardDetailPredicates_Statics::NewProp_type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerLeaderboardDetailPredicates_Statics::NewProp_args,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerLeaderboardDetailPredicates_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		&NewStructOps,
		"LootLockerLeaderboardDetailPredicates",
		Z_Construct_UScriptStruct_FLootLockerLeaderboardDetailPredicates_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerLeaderboardDetailPredicates_Statics::PropPointers),
		sizeof(FLootLockerLeaderboardDetailPredicates),
		alignof(FLootLockerLeaderboardDetailPredicates),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerLeaderboardDetailPredicates_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerLeaderboardDetailPredicates_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerLeaderboardDetailPredicates_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerLeaderboardDetailPredicates()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerLeaderboardDetailPredicates.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerLeaderboardDetailPredicates.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerLeaderboardDetailPredicates_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerLeaderboardDetailPredicates.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerLeaderboardSchedule;
class UScriptStruct* FLootLockerLeaderboardSchedule::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerLeaderboardSchedule.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerLeaderboardSchedule.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerLeaderboardSchedule, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerLeaderboardSchedule"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerLeaderboardSchedule.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerLeaderboardSchedule>()
{
	return FLootLockerLeaderboardSchedule::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerLeaderboardSchedule_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_cron_expression_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_cron_expression;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_next_run_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_next_run;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_last_run_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_last_run;
		static const UECodeGen_Private::FStrPropertyParams NewProp_schedule_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_schedule_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_schedule;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerLeaderboardSchedule_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerLeaderboardRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerLeaderboardSchedule_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerLeaderboardSchedule>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerLeaderboardSchedule_Statics::NewProp_cron_expression_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerLeaderboardRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerLeaderboardSchedule_Statics::NewProp_cron_expression = { "cron_expression", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerLeaderboardSchedule, cron_expression), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerLeaderboardSchedule_Statics::NewProp_cron_expression_MetaData), Z_Construct_UScriptStruct_FLootLockerLeaderboardSchedule_Statics::NewProp_cron_expression_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerLeaderboardSchedule_Statics::NewProp_next_run_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerLeaderboardRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerLeaderboardSchedule_Statics::NewProp_next_run = { "next_run", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerLeaderboardSchedule, next_run), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerLeaderboardSchedule_Statics::NewProp_next_run_MetaData), Z_Construct_UScriptStruct_FLootLockerLeaderboardSchedule_Statics::NewProp_next_run_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerLeaderboardSchedule_Statics::NewProp_last_run_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerLeaderboardRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerLeaderboardSchedule_Statics::NewProp_last_run = { "last_run", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerLeaderboardSchedule, last_run), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerLeaderboardSchedule_Statics::NewProp_last_run_MetaData), Z_Construct_UScriptStruct_FLootLockerLeaderboardSchedule_Statics::NewProp_last_run_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerLeaderboardSchedule_Statics::NewProp_schedule_Inner = { "schedule", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerLeaderboardSchedule_Statics::NewProp_schedule_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerLeaderboardRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLootLockerLeaderboardSchedule_Statics::NewProp_schedule = { "schedule", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerLeaderboardSchedule, schedule), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerLeaderboardSchedule_Statics::NewProp_schedule_MetaData), Z_Construct_UScriptStruct_FLootLockerLeaderboardSchedule_Statics::NewProp_schedule_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerLeaderboardSchedule_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerLeaderboardSchedule_Statics::NewProp_cron_expression,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerLeaderboardSchedule_Statics::NewProp_next_run,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerLeaderboardSchedule_Statics::NewProp_last_run,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerLeaderboardSchedule_Statics::NewProp_schedule_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerLeaderboardSchedule_Statics::NewProp_schedule,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerLeaderboardSchedule_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		&NewStructOps,
		"LootLockerLeaderboardSchedule",
		Z_Construct_UScriptStruct_FLootLockerLeaderboardSchedule_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerLeaderboardSchedule_Statics::PropPointers),
		sizeof(FLootLockerLeaderboardSchedule),
		alignof(FLootLockerLeaderboardSchedule),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerLeaderboardSchedule_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerLeaderboardSchedule_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerLeaderboardSchedule_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerLeaderboardSchedule()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerLeaderboardSchedule.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerLeaderboardSchedule.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerLeaderboardSchedule_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerLeaderboardSchedule.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerLeaderboardReward;
class UScriptStruct* FLootLockerLeaderboardReward::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerLeaderboardReward.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerLeaderboardReward.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerLeaderboardReward, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerLeaderboardReward"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerLeaderboardReward.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerLeaderboardReward>()
{
	return FLootLockerLeaderboardReward::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerLeaderboardReward_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_reward_kind_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_reward_kind;
		static const UECodeGen_Private::FStructPropertyParams NewProp_predicates_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_predicates_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_predicates;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_currency_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_currency;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_progression_reset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_progression_reset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_progression_points_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_progression_points;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_asset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_asset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_reward_id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_reward_id;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerLeaderboardReward_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerLeaderboardRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerLeaderboardReward_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerLeaderboardReward>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerLeaderboardReward_Statics::NewProp_reward_kind_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerLeaderboardRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerLeaderboardReward_Statics::NewProp_reward_kind = { "reward_kind", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerLeaderboardReward, reward_kind), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerLeaderboardReward_Statics::NewProp_reward_kind_MetaData), Z_Construct_UScriptStruct_FLootLockerLeaderboardReward_Statics::NewProp_reward_kind_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLootLockerLeaderboardReward_Statics::NewProp_predicates_Inner = { "predicates", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLootLockerLeaderboardDetailPredicates, METADATA_PARAMS(0, nullptr) }; // 1875242320
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerLeaderboardReward_Statics::NewProp_predicates_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerLeaderboardRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLootLockerLeaderboardReward_Statics::NewProp_predicates = { "predicates", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerLeaderboardReward, predicates), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerLeaderboardReward_Statics::NewProp_predicates_MetaData), Z_Construct_UScriptStruct_FLootLockerLeaderboardReward_Statics::NewProp_predicates_MetaData) }; // 1875242320
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerLeaderboardReward_Statics::NewProp_currency_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerLeaderboardRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLootLockerLeaderboardReward_Statics::NewProp_currency = { "currency", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerLeaderboardReward, currency), Z_Construct_UScriptStruct_FLootLockerLeaderboardCurrencyReward, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerLeaderboardReward_Statics::NewProp_currency_MetaData), Z_Construct_UScriptStruct_FLootLockerLeaderboardReward_Statics::NewProp_currency_MetaData) }; // 2762992134
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerLeaderboardReward_Statics::NewProp_progression_reset_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerLeaderboardRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLootLockerLeaderboardReward_Statics::NewProp_progression_reset = { "progression_reset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerLeaderboardReward, progression_reset), Z_Construct_UScriptStruct_FLootLockerLeaderboardProgressionResetReward, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerLeaderboardReward_Statics::NewProp_progression_reset_MetaData), Z_Construct_UScriptStruct_FLootLockerLeaderboardReward_Statics::NewProp_progression_reset_MetaData) }; // 3176762983
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerLeaderboardReward_Statics::NewProp_progression_points_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerLeaderboardRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLootLockerLeaderboardReward_Statics::NewProp_progression_points = { "progression_points", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerLeaderboardReward, progression_points), Z_Construct_UScriptStruct_FLootLockerLeaderboardProgressionPointsReward, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerLeaderboardReward_Statics::NewProp_progression_points_MetaData), Z_Construct_UScriptStruct_FLootLockerLeaderboardReward_Statics::NewProp_progression_points_MetaData) }; // 3104925530
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerLeaderboardReward_Statics::NewProp_asset_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerLeaderboardRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLootLockerLeaderboardReward_Statics::NewProp_asset = { "asset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerLeaderboardReward, asset), Z_Construct_UScriptStruct_FLootLockerLeaderboardAssetReward, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerLeaderboardReward_Statics::NewProp_asset_MetaData), Z_Construct_UScriptStruct_FLootLockerLeaderboardReward_Statics::NewProp_asset_MetaData) }; // 1817144448
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerLeaderboardReward_Statics::NewProp_reward_id_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerLeaderboardRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerLeaderboardReward_Statics::NewProp_reward_id = { "reward_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerLeaderboardReward, reward_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerLeaderboardReward_Statics::NewProp_reward_id_MetaData), Z_Construct_UScriptStruct_FLootLockerLeaderboardReward_Statics::NewProp_reward_id_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerLeaderboardReward_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerLeaderboardReward_Statics::NewProp_reward_kind,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerLeaderboardReward_Statics::NewProp_predicates_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerLeaderboardReward_Statics::NewProp_predicates,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerLeaderboardReward_Statics::NewProp_currency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerLeaderboardReward_Statics::NewProp_progression_reset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerLeaderboardReward_Statics::NewProp_progression_points,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerLeaderboardReward_Statics::NewProp_asset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerLeaderboardReward_Statics::NewProp_reward_id,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerLeaderboardReward_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		&NewStructOps,
		"LootLockerLeaderboardReward",
		Z_Construct_UScriptStruct_FLootLockerLeaderboardReward_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerLeaderboardReward_Statics::PropPointers),
		sizeof(FLootLockerLeaderboardReward),
		alignof(FLootLockerLeaderboardReward),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerLeaderboardReward_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerLeaderboardReward_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerLeaderboardReward_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerLeaderboardReward()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerLeaderboardReward.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerLeaderboardReward.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerLeaderboardReward_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerLeaderboardReward.InnerSingleton;
	}

static_assert(std::is_polymorphic<FLootLockerLeaderboardDetailsResponse>() == std::is_polymorphic<FLootLockerResponse>(), "USTRUCT FLootLockerLeaderboardDetailsResponse cannot be polymorphic unless super FLootLockerResponse is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerLeaderboardDetailsResponse;
class UScriptStruct* FLootLockerLeaderboardDetailsResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerLeaderboardDetailsResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerLeaderboardDetailsResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerLeaderboardDetailsResponse, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerLeaderboardDetailsResponse"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerLeaderboardDetailsResponse.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerLeaderboardDetailsResponse>()
{
	return FLootLockerLeaderboardDetailsResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerLeaderboardDetailsResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_created_at_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_created_at;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_updated_at_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_updated_at;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_key_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_key;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_direction_method_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_direction_method;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_type_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_type;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_id_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_game_id_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_game_id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_enable_game_api_writes_MetaData[];
#endif
		static void NewProp_enable_game_api_writes_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_enable_game_api_writes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_overwrite_score_on_submit_MetaData[];
#endif
		static void NewProp_overwrite_score_on_submit_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_overwrite_score_on_submit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_has_metadata_MetaData[];
#endif
		static void NewProp_has_metadata_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_has_metadata;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_schedule_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_schedule;
		static const UECodeGen_Private::FStructPropertyParams NewProp_rewards_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rewards_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_rewards;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerLeaderboardDetailsResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerLeaderboardRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerLeaderboardDetailsResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerLeaderboardDetailsResponse>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerLeaderboardDetailsResponse_Statics::NewProp_created_at_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerLeaderboardRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerLeaderboardDetailsResponse_Statics::NewProp_created_at = { "created_at", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerLeaderboardDetailsResponse, created_at), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerLeaderboardDetailsResponse_Statics::NewProp_created_at_MetaData), Z_Construct_UScriptStruct_FLootLockerLeaderboardDetailsResponse_Statics::NewProp_created_at_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerLeaderboardDetailsResponse_Statics::NewProp_updated_at_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerLeaderboardRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerLeaderboardDetailsResponse_Statics::NewProp_updated_at = { "updated_at", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerLeaderboardDetailsResponse, updated_at), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerLeaderboardDetailsResponse_Statics::NewProp_updated_at_MetaData), Z_Construct_UScriptStruct_FLootLockerLeaderboardDetailsResponse_Statics::NewProp_updated_at_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerLeaderboardDetailsResponse_Statics::NewProp_key_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerLeaderboardRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerLeaderboardDetailsResponse_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerLeaderboardDetailsResponse, key), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerLeaderboardDetailsResponse_Statics::NewProp_key_MetaData), Z_Construct_UScriptStruct_FLootLockerLeaderboardDetailsResponse_Statics::NewProp_key_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerLeaderboardDetailsResponse_Statics::NewProp_direction_method_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerLeaderboardRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerLeaderboardDetailsResponse_Statics::NewProp_direction_method = { "direction_method", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerLeaderboardDetailsResponse, direction_method), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerLeaderboardDetailsResponse_Statics::NewProp_direction_method_MetaData), Z_Construct_UScriptStruct_FLootLockerLeaderboardDetailsResponse_Statics::NewProp_direction_method_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerLeaderboardDetailsResponse_Statics::NewProp_name_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerLeaderboardRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerLeaderboardDetailsResponse_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerLeaderboardDetailsResponse, name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerLeaderboardDetailsResponse_Statics::NewProp_name_MetaData), Z_Construct_UScriptStruct_FLootLockerLeaderboardDetailsResponse_Statics::NewProp_name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerLeaderboardDetailsResponse_Statics::NewProp_type_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerLeaderboardRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerLeaderboardDetailsResponse_Statics::NewProp_type = { "type", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerLeaderboardDetailsResponse, type), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerLeaderboardDetailsResponse_Statics::NewProp_type_MetaData), Z_Construct_UScriptStruct_FLootLockerLeaderboardDetailsResponse_Statics::NewProp_type_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerLeaderboardDetailsResponse_Statics::NewProp_id_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerLeaderboardRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLootLockerLeaderboardDetailsResponse_Statics::NewProp_id = { "id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerLeaderboardDetailsResponse, id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerLeaderboardDetailsResponse_Statics::NewProp_id_MetaData), Z_Construct_UScriptStruct_FLootLockerLeaderboardDetailsResponse_Statics::NewProp_id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerLeaderboardDetailsResponse_Statics::NewProp_game_id_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerLeaderboardRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLootLockerLeaderboardDetailsResponse_Statics::NewProp_game_id = { "game_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerLeaderboardDetailsResponse, game_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerLeaderboardDetailsResponse_Statics::NewProp_game_id_MetaData), Z_Construct_UScriptStruct_FLootLockerLeaderboardDetailsResponse_Statics::NewProp_game_id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerLeaderboardDetailsResponse_Statics::NewProp_enable_game_api_writes_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerLeaderboardRequestHandler.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLootLockerLeaderboardDetailsResponse_Statics::NewProp_enable_game_api_writes_SetBit(void* Obj)
	{
		((FLootLockerLeaderboardDetailsResponse*)Obj)->enable_game_api_writes = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLootLockerLeaderboardDetailsResponse_Statics::NewProp_enable_game_api_writes = { "enable_game_api_writes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLootLockerLeaderboardDetailsResponse), &Z_Construct_UScriptStruct_FLootLockerLeaderboardDetailsResponse_Statics::NewProp_enable_game_api_writes_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerLeaderboardDetailsResponse_Statics::NewProp_enable_game_api_writes_MetaData), Z_Construct_UScriptStruct_FLootLockerLeaderboardDetailsResponse_Statics::NewProp_enable_game_api_writes_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerLeaderboardDetailsResponse_Statics::NewProp_overwrite_score_on_submit_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerLeaderboardRequestHandler.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLootLockerLeaderboardDetailsResponse_Statics::NewProp_overwrite_score_on_submit_SetBit(void* Obj)
	{
		((FLootLockerLeaderboardDetailsResponse*)Obj)->overwrite_score_on_submit = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLootLockerLeaderboardDetailsResponse_Statics::NewProp_overwrite_score_on_submit = { "overwrite_score_on_submit", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLootLockerLeaderboardDetailsResponse), &Z_Construct_UScriptStruct_FLootLockerLeaderboardDetailsResponse_Statics::NewProp_overwrite_score_on_submit_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerLeaderboardDetailsResponse_Statics::NewProp_overwrite_score_on_submit_MetaData), Z_Construct_UScriptStruct_FLootLockerLeaderboardDetailsResponse_Statics::NewProp_overwrite_score_on_submit_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerLeaderboardDetailsResponse_Statics::NewProp_has_metadata_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerLeaderboardRequestHandler.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLootLockerLeaderboardDetailsResponse_Statics::NewProp_has_metadata_SetBit(void* Obj)
	{
		((FLootLockerLeaderboardDetailsResponse*)Obj)->has_metadata = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLootLockerLeaderboardDetailsResponse_Statics::NewProp_has_metadata = { "has_metadata", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLootLockerLeaderboardDetailsResponse), &Z_Construct_UScriptStruct_FLootLockerLeaderboardDetailsResponse_Statics::NewProp_has_metadata_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerLeaderboardDetailsResponse_Statics::NewProp_has_metadata_MetaData), Z_Construct_UScriptStruct_FLootLockerLeaderboardDetailsResponse_Statics::NewProp_has_metadata_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerLeaderboardDetailsResponse_Statics::NewProp_schedule_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerLeaderboardRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLootLockerLeaderboardDetailsResponse_Statics::NewProp_schedule = { "schedule", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerLeaderboardDetailsResponse, schedule), Z_Construct_UScriptStruct_FLootLockerLeaderboardSchedule, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerLeaderboardDetailsResponse_Statics::NewProp_schedule_MetaData), Z_Construct_UScriptStruct_FLootLockerLeaderboardDetailsResponse_Statics::NewProp_schedule_MetaData) }; // 3106391300
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLootLockerLeaderboardDetailsResponse_Statics::NewProp_rewards_Inner = { "rewards", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLootLockerLeaderboardReward, METADATA_PARAMS(0, nullptr) }; // 327682531
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerLeaderboardDetailsResponse_Statics::NewProp_rewards_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerLeaderboardRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLootLockerLeaderboardDetailsResponse_Statics::NewProp_rewards = { "rewards", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerLeaderboardDetailsResponse, rewards), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerLeaderboardDetailsResponse_Statics::NewProp_rewards_MetaData), Z_Construct_UScriptStruct_FLootLockerLeaderboardDetailsResponse_Statics::NewProp_rewards_MetaData) }; // 327682531
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerLeaderboardDetailsResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerLeaderboardDetailsResponse_Statics::NewProp_created_at,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerLeaderboardDetailsResponse_Statics::NewProp_updated_at,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerLeaderboardDetailsResponse_Statics::NewProp_key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerLeaderboardDetailsResponse_Statics::NewProp_direction_method,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerLeaderboardDetailsResponse_Statics::NewProp_name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerLeaderboardDetailsResponse_Statics::NewProp_type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerLeaderboardDetailsResponse_Statics::NewProp_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerLeaderboardDetailsResponse_Statics::NewProp_game_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerLeaderboardDetailsResponse_Statics::NewProp_enable_game_api_writes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerLeaderboardDetailsResponse_Statics::NewProp_overwrite_score_on_submit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerLeaderboardDetailsResponse_Statics::NewProp_has_metadata,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerLeaderboardDetailsResponse_Statics::NewProp_schedule,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerLeaderboardDetailsResponse_Statics::NewProp_rewards_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerLeaderboardDetailsResponse_Statics::NewProp_rewards,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerLeaderboardDetailsResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		Z_Construct_UScriptStruct_FLootLockerResponse,
		&NewStructOps,
		"LootLockerLeaderboardDetailsResponse",
		Z_Construct_UScriptStruct_FLootLockerLeaderboardDetailsResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerLeaderboardDetailsResponse_Statics::PropPointers),
		sizeof(FLootLockerLeaderboardDetailsResponse),
		alignof(FLootLockerLeaderboardDetailsResponse),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerLeaderboardDetailsResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerLeaderboardDetailsResponse_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerLeaderboardDetailsResponse_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerLeaderboardDetailsResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerLeaderboardDetailsResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerLeaderboardDetailsResponse.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerLeaderboardDetailsResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerLeaderboardDetailsResponse.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerSubmitScoreRequest;
class UScriptStruct* FLootLockerSubmitScoreRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerSubmitScoreRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerSubmitScoreRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerSubmitScoreRequest, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerSubmitScoreRequest"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerSubmitScoreRequest.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerSubmitScoreRequest>()
{
	return FLootLockerSubmitScoreRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerSubmitScoreRequest_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_member_id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_member_id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_score_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_score;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_metadata_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_metadata;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerSubmitScoreRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerLeaderboardRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerSubmitScoreRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerSubmitScoreRequest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerSubmitScoreRequest_Statics::NewProp_member_id_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerLeaderboardRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerSubmitScoreRequest_Statics::NewProp_member_id = { "member_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerSubmitScoreRequest, member_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerSubmitScoreRequest_Statics::NewProp_member_id_MetaData), Z_Construct_UScriptStruct_FLootLockerSubmitScoreRequest_Statics::NewProp_member_id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerSubmitScoreRequest_Statics::NewProp_score_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerLeaderboardRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLootLockerSubmitScoreRequest_Statics::NewProp_score = { "score", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerSubmitScoreRequest, score), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerSubmitScoreRequest_Statics::NewProp_score_MetaData), Z_Construct_UScriptStruct_FLootLockerSubmitScoreRequest_Statics::NewProp_score_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerSubmitScoreRequest_Statics::NewProp_metadata_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerLeaderboardRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerSubmitScoreRequest_Statics::NewProp_metadata = { "metadata", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerSubmitScoreRequest, metadata), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerSubmitScoreRequest_Statics::NewProp_metadata_MetaData), Z_Construct_UScriptStruct_FLootLockerSubmitScoreRequest_Statics::NewProp_metadata_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerSubmitScoreRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerSubmitScoreRequest_Statics::NewProp_member_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerSubmitScoreRequest_Statics::NewProp_score,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerSubmitScoreRequest_Statics::NewProp_metadata,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerSubmitScoreRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		&NewStructOps,
		"LootLockerSubmitScoreRequest",
		Z_Construct_UScriptStruct_FLootLockerSubmitScoreRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerSubmitScoreRequest_Statics::PropPointers),
		sizeof(FLootLockerSubmitScoreRequest),
		alignof(FLootLockerSubmitScoreRequest),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerSubmitScoreRequest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerSubmitScoreRequest_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerSubmitScoreRequest_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerSubmitScoreRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerSubmitScoreRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerSubmitScoreRequest.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerSubmitScoreRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerSubmitScoreRequest.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerGetMemberRankRequest;
class UScriptStruct* FLootLockerGetMemberRankRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerGetMemberRankRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerGetMemberRankRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerGetMemberRankRequest, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerGetMemberRankRequest"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerGetMemberRankRequest.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerGetMemberRankRequest>()
{
	return FLootLockerGetMemberRankRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerGetMemberRankRequest_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_leaderboard_key_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_leaderboard_key;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_member_id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_member_id;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerGetMemberRankRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerLeaderboardRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerGetMemberRankRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerGetMemberRankRequest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerGetMemberRankRequest_Statics::NewProp_leaderboard_key_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerLeaderboardRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerGetMemberRankRequest_Statics::NewProp_leaderboard_key = { "leaderboard_key", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerGetMemberRankRequest, leaderboard_key), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerGetMemberRankRequest_Statics::NewProp_leaderboard_key_MetaData), Z_Construct_UScriptStruct_FLootLockerGetMemberRankRequest_Statics::NewProp_leaderboard_key_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerGetMemberRankRequest_Statics::NewProp_member_id_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerLeaderboardRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerGetMemberRankRequest_Statics::NewProp_member_id = { "member_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerGetMemberRankRequest, member_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerGetMemberRankRequest_Statics::NewProp_member_id_MetaData), Z_Construct_UScriptStruct_FLootLockerGetMemberRankRequest_Statics::NewProp_member_id_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerGetMemberRankRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerGetMemberRankRequest_Statics::NewProp_leaderboard_key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerGetMemberRankRequest_Statics::NewProp_member_id,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerGetMemberRankRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		&NewStructOps,
		"LootLockerGetMemberRankRequest",
		Z_Construct_UScriptStruct_FLootLockerGetMemberRankRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerGetMemberRankRequest_Statics::PropPointers),
		sizeof(FLootLockerGetMemberRankRequest),
		alignof(FLootLockerGetMemberRankRequest),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerGetMemberRankRequest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerGetMemberRankRequest_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerGetMemberRankRequest_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerGetMemberRankRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerGetMemberRankRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerGetMemberRankRequest.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerGetMemberRankRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerGetMemberRankRequest.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerGetScoreListRequest;
class UScriptStruct* FLootLockerGetScoreListRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerGetScoreListRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerGetScoreListRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerGetScoreListRequest, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerGetScoreListRequest"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerGetScoreListRequest.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerGetScoreListRequest>()
{
	return FLootLockerGetScoreListRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerGetScoreListRequest_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_leaderboard_key_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_leaderboard_key;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_count_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_count;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_after_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_after;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerGetScoreListRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerLeaderboardRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerGetScoreListRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerGetScoreListRequest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerGetScoreListRequest_Statics::NewProp_leaderboard_key_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerLeaderboardRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerGetScoreListRequest_Statics::NewProp_leaderboard_key = { "leaderboard_key", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerGetScoreListRequest, leaderboard_key), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerGetScoreListRequest_Statics::NewProp_leaderboard_key_MetaData), Z_Construct_UScriptStruct_FLootLockerGetScoreListRequest_Statics::NewProp_leaderboard_key_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerGetScoreListRequest_Statics::NewProp_count_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerLeaderboardRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLootLockerGetScoreListRequest_Statics::NewProp_count = { "count", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerGetScoreListRequest, count), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerGetScoreListRequest_Statics::NewProp_count_MetaData), Z_Construct_UScriptStruct_FLootLockerGetScoreListRequest_Statics::NewProp_count_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerGetScoreListRequest_Statics::NewProp_after_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerLeaderboardRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLootLockerGetScoreListRequest_Statics::NewProp_after = { "after", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerGetScoreListRequest, after), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerGetScoreListRequest_Statics::NewProp_after_MetaData), Z_Construct_UScriptStruct_FLootLockerGetScoreListRequest_Statics::NewProp_after_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerGetScoreListRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerGetScoreListRequest_Statics::NewProp_leaderboard_key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerGetScoreListRequest_Statics::NewProp_count,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerGetScoreListRequest_Statics::NewProp_after,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerGetScoreListRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		&NewStructOps,
		"LootLockerGetScoreListRequest",
		Z_Construct_UScriptStruct_FLootLockerGetScoreListRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerGetScoreListRequest_Statics::PropPointers),
		sizeof(FLootLockerGetScoreListRequest),
		alignof(FLootLockerGetScoreListRequest),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerGetScoreListRequest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerGetScoreListRequest_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerGetScoreListRequest_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerGetScoreListRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerGetScoreListRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerGetScoreListRequest.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerGetScoreListRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerGetScoreListRequest.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerGetAllMemberRanksRequest;
class UScriptStruct* FLootLockerGetAllMemberRanksRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerGetAllMemberRanksRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerGetAllMemberRanksRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerGetAllMemberRanksRequest, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerGetAllMemberRanksRequest"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerGetAllMemberRanksRequest.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerGetAllMemberRanksRequest>()
{
	return FLootLockerGetAllMemberRanksRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerGetAllMemberRanksRequest_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_member_id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_member_id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_count_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_count;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_after_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_after;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerGetAllMemberRanksRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerLeaderboardRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerGetAllMemberRanksRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerGetAllMemberRanksRequest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerGetAllMemberRanksRequest_Statics::NewProp_member_id_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerLeaderboardRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerGetAllMemberRanksRequest_Statics::NewProp_member_id = { "member_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerGetAllMemberRanksRequest, member_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerGetAllMemberRanksRequest_Statics::NewProp_member_id_MetaData), Z_Construct_UScriptStruct_FLootLockerGetAllMemberRanksRequest_Statics::NewProp_member_id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerGetAllMemberRanksRequest_Statics::NewProp_count_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerLeaderboardRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLootLockerGetAllMemberRanksRequest_Statics::NewProp_count = { "count", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerGetAllMemberRanksRequest, count), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerGetAllMemberRanksRequest_Statics::NewProp_count_MetaData), Z_Construct_UScriptStruct_FLootLockerGetAllMemberRanksRequest_Statics::NewProp_count_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerGetAllMemberRanksRequest_Statics::NewProp_after_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerLeaderboardRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLootLockerGetAllMemberRanksRequest_Statics::NewProp_after = { "after", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerGetAllMemberRanksRequest, after), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerGetAllMemberRanksRequest_Statics::NewProp_after_MetaData), Z_Construct_UScriptStruct_FLootLockerGetAllMemberRanksRequest_Statics::NewProp_after_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerGetAllMemberRanksRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerGetAllMemberRanksRequest_Statics::NewProp_member_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerGetAllMemberRanksRequest_Statics::NewProp_count,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerGetAllMemberRanksRequest_Statics::NewProp_after,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerGetAllMemberRanksRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		&NewStructOps,
		"LootLockerGetAllMemberRanksRequest",
		Z_Construct_UScriptStruct_FLootLockerGetAllMemberRanksRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerGetAllMemberRanksRequest_Statics::PropPointers),
		sizeof(FLootLockerGetAllMemberRanksRequest),
		alignof(FLootLockerGetAllMemberRanksRequest),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerGetAllMemberRanksRequest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerGetAllMemberRanksRequest_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerGetAllMemberRanksRequest_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerGetAllMemberRanksRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerGetAllMemberRanksRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerGetAllMemberRanksRequest.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerGetAllMemberRanksRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerGetAllMemberRanksRequest.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerGetByListMembersRequest;
class UScriptStruct* FLootLockerGetByListMembersRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerGetByListMembersRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerGetByListMembersRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerGetByListMembersRequest, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerGetByListMembersRequest"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerGetByListMembersRequest.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerGetByListMembersRequest>()
{
	return FLootLockerGetByListMembersRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerGetByListMembersRequest_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStrPropertyParams NewProp_members_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_members_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_members;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerGetByListMembersRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerLeaderboardRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerGetByListMembersRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerGetByListMembersRequest>();
	}
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerGetByListMembersRequest_Statics::NewProp_members_Inner = { "members", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerGetByListMembersRequest_Statics::NewProp_members_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerLeaderboardRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLootLockerGetByListMembersRequest_Statics::NewProp_members = { "members", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerGetByListMembersRequest, members), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerGetByListMembersRequest_Statics::NewProp_members_MetaData), Z_Construct_UScriptStruct_FLootLockerGetByListMembersRequest_Statics::NewProp_members_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerGetByListMembersRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerGetByListMembersRequest_Statics::NewProp_members_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerGetByListMembersRequest_Statics::NewProp_members,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerGetByListMembersRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		&NewStructOps,
		"LootLockerGetByListMembersRequest",
		Z_Construct_UScriptStruct_FLootLockerGetByListMembersRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerGetByListMembersRequest_Statics::PropPointers),
		sizeof(FLootLockerGetByListMembersRequest),
		alignof(FLootLockerGetByListMembersRequest),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerGetByListMembersRequest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerGetByListMembersRequest_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerGetByListMembersRequest_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerGetByListMembersRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerGetByListMembersRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerGetByListMembersRequest.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerGetByListMembersRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerGetByListMembersRequest.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerGetMemberRankResponseBP__DelegateSignature_Statics
	{
		struct _Script_LootLockerSDK_eventLootLockerGetMemberRankResponseBP_Parms
		{
			FLootLockerGetMemberRankResponse Response;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Response;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerGetMemberRankResponseBP__DelegateSignature_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LootLockerSDK_eventLootLockerGetMemberRankResponseBP_Parms, Response), Z_Construct_UScriptStruct_FLootLockerGetMemberRankResponse, METADATA_PARAMS(0, nullptr) }; // 2701142109
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerGetMemberRankResponseBP__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerGetMemberRankResponseBP__DelegateSignature_Statics::NewProp_Response,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerGetMemberRankResponseBP__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerLeaderboardRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerGetMemberRankResponseBP__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LootLockerSDK, nullptr, "LootLockerGetMemberRankResponseBP__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerGetMemberRankResponseBP__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerGetMemberRankResponseBP__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerGetMemberRankResponseBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventLootLockerGetMemberRankResponseBP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerGetMemberRankResponseBP__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerGetMemberRankResponseBP__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerGetMemberRankResponseBP__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerGetMemberRankResponseBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventLootLockerGetMemberRankResponseBP_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerGetMemberRankResponseBP__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerGetMemberRankResponseBP__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FLootLockerGetMemberRankResponseBP_DelegateWrapper(const FScriptDelegate& LootLockerGetMemberRankResponseBP, FLootLockerGetMemberRankResponse Response)
{
	struct _Script_LootLockerSDK_eventLootLockerGetMemberRankResponseBP_Parms
	{
		FLootLockerGetMemberRankResponse Response;
	};
	_Script_LootLockerSDK_eventLootLockerGetMemberRankResponseBP_Parms Parms;
	Parms.Response=Response;
	LootLockerGetMemberRankResponseBP.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerGetByListOfMembersResponseBP__DelegateSignature_Statics
	{
		struct _Script_LootLockerSDK_eventLootLockerGetByListOfMembersResponseBP_Parms
		{
			FLootLockerGetByListOfMembersResponse Response;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Response;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerGetByListOfMembersResponseBP__DelegateSignature_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LootLockerSDK_eventLootLockerGetByListOfMembersResponseBP_Parms, Response), Z_Construct_UScriptStruct_FLootLockerGetByListOfMembersResponse, METADATA_PARAMS(0, nullptr) }; // 2990504241
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerGetByListOfMembersResponseBP__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerGetByListOfMembersResponseBP__DelegateSignature_Statics::NewProp_Response,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerGetByListOfMembersResponseBP__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerLeaderboardRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerGetByListOfMembersResponseBP__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LootLockerSDK, nullptr, "LootLockerGetByListOfMembersResponseBP__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerGetByListOfMembersResponseBP__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerGetByListOfMembersResponseBP__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerGetByListOfMembersResponseBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventLootLockerGetByListOfMembersResponseBP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerGetByListOfMembersResponseBP__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerGetByListOfMembersResponseBP__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerGetByListOfMembersResponseBP__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerGetByListOfMembersResponseBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventLootLockerGetByListOfMembersResponseBP_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerGetByListOfMembersResponseBP__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerGetByListOfMembersResponseBP__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FLootLockerGetByListOfMembersResponseBP_DelegateWrapper(const FScriptDelegate& LootLockerGetByListOfMembersResponseBP, FLootLockerGetByListOfMembersResponse Response)
{
	struct _Script_LootLockerSDK_eventLootLockerGetByListOfMembersResponseBP_Parms
	{
		FLootLockerGetByListOfMembersResponse Response;
	};
	_Script_LootLockerSDK_eventLootLockerGetByListOfMembersResponseBP_Parms Parms;
	Parms.Response=Response;
	LootLockerGetByListOfMembersResponseBP.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerGetScoreListResponseBP__DelegateSignature_Statics
	{
		struct _Script_LootLockerSDK_eventLootLockerGetScoreListResponseBP_Parms
		{
			FLootLockerGetScoreListResponse Response;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Response;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerGetScoreListResponseBP__DelegateSignature_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LootLockerSDK_eventLootLockerGetScoreListResponseBP_Parms, Response), Z_Construct_UScriptStruct_FLootLockerGetScoreListResponse, METADATA_PARAMS(0, nullptr) }; // 2994945265
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerGetScoreListResponseBP__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerGetScoreListResponseBP__DelegateSignature_Statics::NewProp_Response,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerGetScoreListResponseBP__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerLeaderboardRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerGetScoreListResponseBP__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LootLockerSDK, nullptr, "LootLockerGetScoreListResponseBP__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerGetScoreListResponseBP__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerGetScoreListResponseBP__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerGetScoreListResponseBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventLootLockerGetScoreListResponseBP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerGetScoreListResponseBP__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerGetScoreListResponseBP__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerGetScoreListResponseBP__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerGetScoreListResponseBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventLootLockerGetScoreListResponseBP_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerGetScoreListResponseBP__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerGetScoreListResponseBP__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FLootLockerGetScoreListResponseBP_DelegateWrapper(const FScriptDelegate& LootLockerGetScoreListResponseBP, FLootLockerGetScoreListResponse Response)
{
	struct _Script_LootLockerSDK_eventLootLockerGetScoreListResponseBP_Parms
	{
		FLootLockerGetScoreListResponse Response;
	};
	_Script_LootLockerSDK_eventLootLockerGetScoreListResponseBP_Parms Parms;
	Parms.Response=Response;
	LootLockerGetScoreListResponseBP.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerSubmitScoreResponseBP__DelegateSignature_Statics
	{
		struct _Script_LootLockerSDK_eventLootLockerSubmitScoreResponseBP_Parms
		{
			FLootLockerSubmitScoreResponse Response;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Response;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerSubmitScoreResponseBP__DelegateSignature_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LootLockerSDK_eventLootLockerSubmitScoreResponseBP_Parms, Response), Z_Construct_UScriptStruct_FLootLockerSubmitScoreResponse, METADATA_PARAMS(0, nullptr) }; // 1696526086
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerSubmitScoreResponseBP__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerSubmitScoreResponseBP__DelegateSignature_Statics::NewProp_Response,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerSubmitScoreResponseBP__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerLeaderboardRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerSubmitScoreResponseBP__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LootLockerSDK, nullptr, "LootLockerSubmitScoreResponseBP__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerSubmitScoreResponseBP__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerSubmitScoreResponseBP__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerSubmitScoreResponseBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventLootLockerSubmitScoreResponseBP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerSubmitScoreResponseBP__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerSubmitScoreResponseBP__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerSubmitScoreResponseBP__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerSubmitScoreResponseBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventLootLockerSubmitScoreResponseBP_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerSubmitScoreResponseBP__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerSubmitScoreResponseBP__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FLootLockerSubmitScoreResponseBP_DelegateWrapper(const FScriptDelegate& LootLockerSubmitScoreResponseBP, FLootLockerSubmitScoreResponse Response)
{
	struct _Script_LootLockerSDK_eventLootLockerSubmitScoreResponseBP_Parms
	{
		FLootLockerSubmitScoreResponse Response;
	};
	_Script_LootLockerSDK_eventLootLockerSubmitScoreResponseBP_Parms Parms;
	Parms.Response=Response;
	LootLockerSubmitScoreResponseBP.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerGetAllMemberRanksResponseBP__DelegateSignature_Statics
	{
		struct _Script_LootLockerSDK_eventLootLockerGetAllMemberRanksResponseBP_Parms
		{
			FLootLockerGetAllMemberRanksResponse Response;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Response;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerGetAllMemberRanksResponseBP__DelegateSignature_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LootLockerSDK_eventLootLockerGetAllMemberRanksResponseBP_Parms, Response), Z_Construct_UScriptStruct_FLootLockerGetAllMemberRanksResponse, METADATA_PARAMS(0, nullptr) }; // 1767535797
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerGetAllMemberRanksResponseBP__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerGetAllMemberRanksResponseBP__DelegateSignature_Statics::NewProp_Response,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerGetAllMemberRanksResponseBP__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerLeaderboardRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerGetAllMemberRanksResponseBP__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LootLockerSDK, nullptr, "LootLockerGetAllMemberRanksResponseBP__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerGetAllMemberRanksResponseBP__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerGetAllMemberRanksResponseBP__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerGetAllMemberRanksResponseBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventLootLockerGetAllMemberRanksResponseBP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerGetAllMemberRanksResponseBP__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerGetAllMemberRanksResponseBP__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerGetAllMemberRanksResponseBP__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerGetAllMemberRanksResponseBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventLootLockerGetAllMemberRanksResponseBP_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerGetAllMemberRanksResponseBP__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerGetAllMemberRanksResponseBP__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FLootLockerGetAllMemberRanksResponseBP_DelegateWrapper(const FScriptDelegate& LootLockerGetAllMemberRanksResponseBP, FLootLockerGetAllMemberRanksResponse Response)
{
	struct _Script_LootLockerSDK_eventLootLockerGetAllMemberRanksResponseBP_Parms
	{
		FLootLockerGetAllMemberRanksResponse Response;
	};
	_Script_LootLockerSDK_eventLootLockerGetAllMemberRanksResponseBP_Parms Parms;
	Parms.Response=Response;
	LootLockerGetAllMemberRanksResponseBP.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerLeaderboardDetailsResponseBP__DelegateSignature_Statics
	{
		struct _Script_LootLockerSDK_eventLootLockerLeaderboardDetailsResponseBP_Parms
		{
			FLootLockerLeaderboardDetailsResponse Response;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Response;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerLeaderboardDetailsResponseBP__DelegateSignature_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LootLockerSDK_eventLootLockerLeaderboardDetailsResponseBP_Parms, Response), Z_Construct_UScriptStruct_FLootLockerLeaderboardDetailsResponse, METADATA_PARAMS(0, nullptr) }; // 2151071593
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerLeaderboardDetailsResponseBP__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerLeaderboardDetailsResponseBP__DelegateSignature_Statics::NewProp_Response,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerLeaderboardDetailsResponseBP__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerLeaderboardRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerLeaderboardDetailsResponseBP__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LootLockerSDK, nullptr, "LootLockerLeaderboardDetailsResponseBP__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerLeaderboardDetailsResponseBP__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerLeaderboardDetailsResponseBP__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerLeaderboardDetailsResponseBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventLootLockerLeaderboardDetailsResponseBP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerLeaderboardDetailsResponseBP__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerLeaderboardDetailsResponseBP__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerLeaderboardDetailsResponseBP__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerLeaderboardDetailsResponseBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventLootLockerLeaderboardDetailsResponseBP_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerLeaderboardDetailsResponseBP__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerLeaderboardDetailsResponseBP__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FLootLockerLeaderboardDetailsResponseBP_DelegateWrapper(const FScriptDelegate& LootLockerLeaderboardDetailsResponseBP, FLootLockerLeaderboardDetailsResponse Response)
{
	struct _Script_LootLockerSDK_eventLootLockerLeaderboardDetailsResponseBP_Parms
	{
		FLootLockerLeaderboardDetailsResponse Response;
	};
	_Script_LootLockerSDK_eventLootLockerLeaderboardDetailsResponseBP_Parms Parms;
	Parms.Response=Response;
	LootLockerLeaderboardDetailsResponseBP.ProcessDelegate<UObject>(&Parms);
}
	void ULootLockerLeaderboardRequestHandler::StaticRegisterNativesULootLockerLeaderboardRequestHandler()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULootLockerLeaderboardRequestHandler);
	UClass* Z_Construct_UClass_ULootLockerLeaderboardRequestHandler_NoRegister()
	{
		return ULootLockerLeaderboardRequestHandler::StaticClass();
	}
	struct Z_Construct_UClass_ULootLockerLeaderboardRequestHandler_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULootLockerLeaderboardRequestHandler_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULootLockerLeaderboardRequestHandler_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULootLockerLeaderboardRequestHandler_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GameAPI/LootLockerLeaderboardRequestHandler.h" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerLeaderboardRequestHandler.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULootLockerLeaderboardRequestHandler_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULootLockerLeaderboardRequestHandler>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULootLockerLeaderboardRequestHandler_Statics::ClassParams = {
		&ULootLockerLeaderboardRequestHandler::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULootLockerLeaderboardRequestHandler_Statics::Class_MetaDataParams), Z_Construct_UClass_ULootLockerLeaderboardRequestHandler_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ULootLockerLeaderboardRequestHandler()
	{
		if (!Z_Registration_Info_UClass_ULootLockerLeaderboardRequestHandler.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULootLockerLeaderboardRequestHandler.OuterSingleton, Z_Construct_UClass_ULootLockerLeaderboardRequestHandler_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULootLockerLeaderboardRequestHandler.OuterSingleton;
	}
	template<> LOOTLOCKERSDK_API UClass* StaticClass<ULootLockerLeaderboardRequestHandler>()
	{
		return ULootLockerLeaderboardRequestHandler::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULootLockerLeaderboardRequestHandler);
	ULootLockerLeaderboardRequestHandler::~ULootLockerLeaderboardRequestHandler() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerLeaderboardRequestHandler_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerLeaderboardRequestHandler_h_Statics::ScriptStructInfo[] = {
		{ FLootLockerPlayer::StaticStruct, Z_Construct_UScriptStruct_FLootLockerPlayer_Statics::NewStructOps, TEXT("LootLockerPlayer"), &Z_Registration_Info_UScriptStruct_LootLockerPlayer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerPlayer), 2329132360U) },
		{ FLootLockerGetMemberRankResponse::StaticStruct, Z_Construct_UScriptStruct_FLootLockerGetMemberRankResponse_Statics::NewStructOps, TEXT("LootLockerGetMemberRankResponse"), &Z_Registration_Info_UScriptStruct_LootLockerGetMemberRankResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerGetMemberRankResponse), 2701142109U) },
		{ FLootLockerMember::StaticStruct, Z_Construct_UScriptStruct_FLootLockerMember_Statics::NewStructOps, TEXT("LootLockerMember"), &Z_Registration_Info_UScriptStruct_LootLockerMember, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerMember), 1524089696U) },
		{ FLootLockerLeaderboard::StaticStruct, Z_Construct_UScriptStruct_FLootLockerLeaderboard_Statics::NewStructOps, TEXT("LootLockerLeaderboard"), &Z_Registration_Info_UScriptStruct_LootLockerLeaderboard, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerLeaderboard), 1140110353U) },
		{ FLootLockerPagination::StaticStruct, Z_Construct_UScriptStruct_FLootLockerPagination_Statics::NewStructOps, TEXT("LootLockerPagination"), &Z_Registration_Info_UScriptStruct_LootLockerPagination, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerPagination), 428704484U) },
		{ FLootLockerGetByListOfMembersResponse::StaticStruct, Z_Construct_UScriptStruct_FLootLockerGetByListOfMembersResponse_Statics::NewStructOps, TEXT("LootLockerGetByListOfMembersResponse"), &Z_Registration_Info_UScriptStruct_LootLockerGetByListOfMembersResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerGetByListOfMembersResponse), 2990504241U) },
		{ FLootLockerGetScoreListResponse::StaticStruct, Z_Construct_UScriptStruct_FLootLockerGetScoreListResponse_Statics::NewStructOps, TEXT("LootLockerGetScoreListResponse"), &Z_Registration_Info_UScriptStruct_LootLockerGetScoreListResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerGetScoreListResponse), 2994945265U) },
		{ FLootLockerGetAllMemberRanksResponse::StaticStruct, Z_Construct_UScriptStruct_FLootLockerGetAllMemberRanksResponse_Statics::NewStructOps, TEXT("LootLockerGetAllMemberRanksResponse"), &Z_Registration_Info_UScriptStruct_LootLockerGetAllMemberRanksResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerGetAllMemberRanksResponse), 1767535797U) },
		{ FLootLockerSubmitScoreResponse::StaticStruct, Z_Construct_UScriptStruct_FLootLockerSubmitScoreResponse_Statics::NewStructOps, TEXT("LootLockerSubmitScoreResponse"), &Z_Registration_Info_UScriptStruct_LootLockerSubmitScoreResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerSubmitScoreResponse), 1696526086U) },
		{ FLootLockerAssetRewardDetails::StaticStruct, Z_Construct_UScriptStruct_FLootLockerAssetRewardDetails_Statics::NewStructOps, TEXT("LootLockerAssetRewardDetails"), &Z_Registration_Info_UScriptStruct_LootLockerAssetRewardDetails, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerAssetRewardDetails), 1330725059U) },
		{ FLootLockerLeaderboardAssetReward::StaticStruct, Z_Construct_UScriptStruct_FLootLockerLeaderboardAssetReward_Statics::NewStructOps, TEXT("LootLockerLeaderboardAssetReward"), &Z_Registration_Info_UScriptStruct_LootLockerLeaderboardAssetReward, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerLeaderboardAssetReward), 1817144448U) },
		{ FLootLockerCurrencyRewardDetails::StaticStruct, Z_Construct_UScriptStruct_FLootLockerCurrencyRewardDetails_Statics::NewStructOps, TEXT("LootLockerCurrencyRewardDetails"), &Z_Registration_Info_UScriptStruct_LootLockerCurrencyRewardDetails, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerCurrencyRewardDetails), 4266614157U) },
		{ FLootLockerLeaderboardCurrencyReward::StaticStruct, Z_Construct_UScriptStruct_FLootLockerLeaderboardCurrencyReward_Statics::NewStructOps, TEXT("LootLockerLeaderboardCurrencyReward"), &Z_Registration_Info_UScriptStruct_LootLockerLeaderboardCurrencyReward, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerLeaderboardCurrencyReward), 2762992134U) },
		{ FLootLockerProgressionResetRewardDetails::StaticStruct, Z_Construct_UScriptStruct_FLootLockerProgressionResetRewardDetails_Statics::NewStructOps, TEXT("LootLockerProgressionResetRewardDetails"), &Z_Registration_Info_UScriptStruct_LootLockerProgressionResetRewardDetails, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerProgressionResetRewardDetails), 3551977745U) },
		{ FLootLockerLeaderboardProgressionResetReward::StaticStruct, Z_Construct_UScriptStruct_FLootLockerLeaderboardProgressionResetReward_Statics::NewStructOps, TEXT("LootLockerLeaderboardProgressionResetReward"), &Z_Registration_Info_UScriptStruct_LootLockerLeaderboardProgressionResetReward, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerLeaderboardProgressionResetReward), 3176762983U) },
		{ FLootLockerProgressionPointRewardDetails::StaticStruct, Z_Construct_UScriptStruct_FLootLockerProgressionPointRewardDetails_Statics::NewStructOps, TEXT("LootLockerProgressionPointRewardDetails"), &Z_Registration_Info_UScriptStruct_LootLockerProgressionPointRewardDetails, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerProgressionPointRewardDetails), 1307625769U) },
		{ FLootLockerLeaderboardProgressionPointsReward::StaticStruct, Z_Construct_UScriptStruct_FLootLockerLeaderboardProgressionPointsReward_Statics::NewStructOps, TEXT("LootLockerLeaderboardProgressionPointsReward"), &Z_Registration_Info_UScriptStruct_LootLockerLeaderboardProgressionPointsReward, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerLeaderboardProgressionPointsReward), 3104925530U) },
		{ FLootLockerLeaderboardRewardArgs::StaticStruct, Z_Construct_UScriptStruct_FLootLockerLeaderboardRewardArgs_Statics::NewStructOps, TEXT("LootLockerLeaderboardRewardArgs"), &Z_Registration_Info_UScriptStruct_LootLockerLeaderboardRewardArgs, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerLeaderboardRewardArgs), 2442964386U) },
		{ FLootLockerLeaderboardDetailPredicates::StaticStruct, Z_Construct_UScriptStruct_FLootLockerLeaderboardDetailPredicates_Statics::NewStructOps, TEXT("LootLockerLeaderboardDetailPredicates"), &Z_Registration_Info_UScriptStruct_LootLockerLeaderboardDetailPredicates, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerLeaderboardDetailPredicates), 1875242320U) },
		{ FLootLockerLeaderboardSchedule::StaticStruct, Z_Construct_UScriptStruct_FLootLockerLeaderboardSchedule_Statics::NewStructOps, TEXT("LootLockerLeaderboardSchedule"), &Z_Registration_Info_UScriptStruct_LootLockerLeaderboardSchedule, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerLeaderboardSchedule), 3106391300U) },
		{ FLootLockerLeaderboardReward::StaticStruct, Z_Construct_UScriptStruct_FLootLockerLeaderboardReward_Statics::NewStructOps, TEXT("LootLockerLeaderboardReward"), &Z_Registration_Info_UScriptStruct_LootLockerLeaderboardReward, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerLeaderboardReward), 327682531U) },
		{ FLootLockerLeaderboardDetailsResponse::StaticStruct, Z_Construct_UScriptStruct_FLootLockerLeaderboardDetailsResponse_Statics::NewStructOps, TEXT("LootLockerLeaderboardDetailsResponse"), &Z_Registration_Info_UScriptStruct_LootLockerLeaderboardDetailsResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerLeaderboardDetailsResponse), 2151071593U) },
		{ FLootLockerSubmitScoreRequest::StaticStruct, Z_Construct_UScriptStruct_FLootLockerSubmitScoreRequest_Statics::NewStructOps, TEXT("LootLockerSubmitScoreRequest"), &Z_Registration_Info_UScriptStruct_LootLockerSubmitScoreRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerSubmitScoreRequest), 471699540U) },
		{ FLootLockerGetMemberRankRequest::StaticStruct, Z_Construct_UScriptStruct_FLootLockerGetMemberRankRequest_Statics::NewStructOps, TEXT("LootLockerGetMemberRankRequest"), &Z_Registration_Info_UScriptStruct_LootLockerGetMemberRankRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerGetMemberRankRequest), 93046545U) },
		{ FLootLockerGetScoreListRequest::StaticStruct, Z_Construct_UScriptStruct_FLootLockerGetScoreListRequest_Statics::NewStructOps, TEXT("LootLockerGetScoreListRequest"), &Z_Registration_Info_UScriptStruct_LootLockerGetScoreListRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerGetScoreListRequest), 1645093753U) },
		{ FLootLockerGetAllMemberRanksRequest::StaticStruct, Z_Construct_UScriptStruct_FLootLockerGetAllMemberRanksRequest_Statics::NewStructOps, TEXT("LootLockerGetAllMemberRanksRequest"), &Z_Registration_Info_UScriptStruct_LootLockerGetAllMemberRanksRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerGetAllMemberRanksRequest), 2340534989U) },
		{ FLootLockerGetByListMembersRequest::StaticStruct, Z_Construct_UScriptStruct_FLootLockerGetByListMembersRequest_Statics::NewStructOps, TEXT("LootLockerGetByListMembersRequest"), &Z_Registration_Info_UScriptStruct_LootLockerGetByListMembersRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerGetByListMembersRequest), 94728048U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerLeaderboardRequestHandler_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULootLockerLeaderboardRequestHandler, ULootLockerLeaderboardRequestHandler::StaticClass, TEXT("ULootLockerLeaderboardRequestHandler"), &Z_Registration_Info_UClass_ULootLockerLeaderboardRequestHandler, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULootLockerLeaderboardRequestHandler), 1852643527U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerLeaderboardRequestHandler_h_3446035348(TEXT("/Script/LootLockerSDK"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerLeaderboardRequestHandler_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerLeaderboardRequestHandler_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerLeaderboardRequestHandler_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerLeaderboardRequestHandler_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
