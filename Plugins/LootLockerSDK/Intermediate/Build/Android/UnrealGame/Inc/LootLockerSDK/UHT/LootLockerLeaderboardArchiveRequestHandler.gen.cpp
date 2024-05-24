// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LootLockerSDK/Public/GameAPI/LootLockerLeaderboardArchiveRequestHandler.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLootLockerLeaderboardArchiveRequestHandler() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	LOOTLOCKERSDK_API UClass* Z_Construct_UClass_ULootLockerLeaderboardArchiveRequestHandler();
	LOOTLOCKERSDK_API UClass* Z_Construct_UClass_ULootLockerLeaderboardArchiveRequestHandler_NoRegister();
	LOOTLOCKERSDK_API UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerLeaderboardArchiveDetailReponseBP__DelegateSignature();
	LOOTLOCKERSDK_API UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerLeaderboardArchiveResponseBP__DelegateSignature();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerLeaderboardArchive();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerLeaderboardArchiveDetails();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerLeaderboardArchiveDetailsResponse();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerLeaderboardArchivePlayer();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerLeaderboardArchiveResponse();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerResponse();
	UPackage* Z_Construct_UPackage__Script_LootLockerSDK();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerLeaderboardArchivePlayer;
class UScriptStruct* FLootLockerLeaderboardArchivePlayer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerLeaderboardArchivePlayer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerLeaderboardArchivePlayer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerLeaderboardArchivePlayer, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerLeaderboardArchivePlayer"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerLeaderboardArchivePlayer.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerLeaderboardArchivePlayer>()
{
	return FLootLockerLeaderboardArchivePlayer::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerLeaderboardArchivePlayer_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_public_uid_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_public_uid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_id_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_player_ulid_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_player_ulid;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerLeaderboardArchivePlayer_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerLeaderboardArchiveRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerLeaderboardArchivePlayer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerLeaderboardArchivePlayer>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerLeaderboardArchivePlayer_Statics::NewProp_name_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "Comment", "// The name of the Player.\n" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerLeaderboardArchiveRequestHandler.h" },
		{ "ToolTip", "The name of the Player." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerLeaderboardArchivePlayer_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerLeaderboardArchivePlayer, name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerLeaderboardArchivePlayer_Statics::NewProp_name_MetaData), Z_Construct_UScriptStruct_FLootLockerLeaderboardArchivePlayer_Statics::NewProp_name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerLeaderboardArchivePlayer_Statics::NewProp_public_uid_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "Comment", "// The Public UID of the Player.\n" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerLeaderboardArchiveRequestHandler.h" },
		{ "ToolTip", "The Public UID of the Player." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerLeaderboardArchivePlayer_Statics::NewProp_public_uid = { "public_uid", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerLeaderboardArchivePlayer, public_uid), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerLeaderboardArchivePlayer_Statics::NewProp_public_uid_MetaData), Z_Construct_UScriptStruct_FLootLockerLeaderboardArchivePlayer_Statics::NewProp_public_uid_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerLeaderboardArchivePlayer_Statics::NewProp_id_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "Comment", "// The ID of the Player.\n" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerLeaderboardArchiveRequestHandler.h" },
		{ "ToolTip", "The ID of the Player." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLootLockerLeaderboardArchivePlayer_Statics::NewProp_id = { "id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerLeaderboardArchivePlayer, id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerLeaderboardArchivePlayer_Statics::NewProp_id_MetaData), Z_Construct_UScriptStruct_FLootLockerLeaderboardArchivePlayer_Statics::NewProp_id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerLeaderboardArchivePlayer_Statics::NewProp_player_ulid_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "Comment", "// The ULID of the Player.\n" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerLeaderboardArchiveRequestHandler.h" },
		{ "ToolTip", "The ULID of the Player." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerLeaderboardArchivePlayer_Statics::NewProp_player_ulid = { "player_ulid", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerLeaderboardArchivePlayer, player_ulid), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerLeaderboardArchivePlayer_Statics::NewProp_player_ulid_MetaData), Z_Construct_UScriptStruct_FLootLockerLeaderboardArchivePlayer_Statics::NewProp_player_ulid_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerLeaderboardArchivePlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerLeaderboardArchivePlayer_Statics::NewProp_name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerLeaderboardArchivePlayer_Statics::NewProp_public_uid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerLeaderboardArchivePlayer_Statics::NewProp_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerLeaderboardArchivePlayer_Statics::NewProp_player_ulid,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerLeaderboardArchivePlayer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		&NewStructOps,
		"LootLockerLeaderboardArchivePlayer",
		Z_Construct_UScriptStruct_FLootLockerLeaderboardArchivePlayer_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerLeaderboardArchivePlayer_Statics::PropPointers),
		sizeof(FLootLockerLeaderboardArchivePlayer),
		alignof(FLootLockerLeaderboardArchivePlayer),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerLeaderboardArchivePlayer_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerLeaderboardArchivePlayer_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerLeaderboardArchivePlayer_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerLeaderboardArchivePlayer()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerLeaderboardArchivePlayer.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerLeaderboardArchivePlayer.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerLeaderboardArchivePlayer_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerLeaderboardArchivePlayer.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerLeaderboardArchiveDetails;
class UScriptStruct* FLootLockerLeaderboardArchiveDetails::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerLeaderboardArchiveDetails.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerLeaderboardArchiveDetails.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerLeaderboardArchiveDetails, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerLeaderboardArchiveDetails"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerLeaderboardArchiveDetails.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerLeaderboardArchiveDetails>()
{
	return FLootLockerLeaderboardArchiveDetails::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerLeaderboardArchiveDetails_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_player_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_player;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_metadata_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_metadata;
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
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerLeaderboardArchiveDetails_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerLeaderboardArchiveRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerLeaderboardArchiveDetails_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerLeaderboardArchiveDetails>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerLeaderboardArchiveDetails_Statics::NewProp_player_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "Comment", "// The Player on the archived Leaderboard.\n" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerLeaderboardArchiveRequestHandler.h" },
		{ "ToolTip", "The Player on the archived Leaderboard." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLootLockerLeaderboardArchiveDetails_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerLeaderboardArchiveDetails, player), Z_Construct_UScriptStruct_FLootLockerLeaderboardArchivePlayer, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerLeaderboardArchiveDetails_Statics::NewProp_player_MetaData), Z_Construct_UScriptStruct_FLootLockerLeaderboardArchiveDetails_Statics::NewProp_player_MetaData) }; // 64815334
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerLeaderboardArchiveDetails_Statics::NewProp_metadata_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "Comment", "// Metadata if any was supplied.\n" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerLeaderboardArchiveRequestHandler.h" },
		{ "ToolTip", "Metadata if any was supplied." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerLeaderboardArchiveDetails_Statics::NewProp_metadata = { "metadata", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerLeaderboardArchiveDetails, metadata), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerLeaderboardArchiveDetails_Statics::NewProp_metadata_MetaData), Z_Construct_UScriptStruct_FLootLockerLeaderboardArchiveDetails_Statics::NewProp_metadata_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerLeaderboardArchiveDetails_Statics::NewProp_member_id_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "Comment", "// The Player's member ID on the Archived Leaderboard.\n" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerLeaderboardArchiveRequestHandler.h" },
		{ "ToolTip", "The Player's member ID on the Archived Leaderboard." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerLeaderboardArchiveDetails_Statics::NewProp_member_id = { "member_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerLeaderboardArchiveDetails, member_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerLeaderboardArchiveDetails_Statics::NewProp_member_id_MetaData), Z_Construct_UScriptStruct_FLootLockerLeaderboardArchiveDetails_Statics::NewProp_member_id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerLeaderboardArchiveDetails_Statics::NewProp_rank_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "Comment", "// The Player's rank on the archived Leaderboard.\n" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerLeaderboardArchiveRequestHandler.h" },
		{ "ToolTip", "The Player's rank on the archived Leaderboard." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLootLockerLeaderboardArchiveDetails_Statics::NewProp_rank = { "rank", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerLeaderboardArchiveDetails, rank), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerLeaderboardArchiveDetails_Statics::NewProp_rank_MetaData), Z_Construct_UScriptStruct_FLootLockerLeaderboardArchiveDetails_Statics::NewProp_rank_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerLeaderboardArchiveDetails_Statics::NewProp_score_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "Comment", "// The Player's Score on the archived Leaderboard.\n" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerLeaderboardArchiveRequestHandler.h" },
		{ "ToolTip", "The Player's Score on the archived Leaderboard." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLootLockerLeaderboardArchiveDetails_Statics::NewProp_score = { "score", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerLeaderboardArchiveDetails, score), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerLeaderboardArchiveDetails_Statics::NewProp_score_MetaData), Z_Construct_UScriptStruct_FLootLockerLeaderboardArchiveDetails_Statics::NewProp_score_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerLeaderboardArchiveDetails_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerLeaderboardArchiveDetails_Statics::NewProp_player,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerLeaderboardArchiveDetails_Statics::NewProp_metadata,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerLeaderboardArchiveDetails_Statics::NewProp_member_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerLeaderboardArchiveDetails_Statics::NewProp_rank,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerLeaderboardArchiveDetails_Statics::NewProp_score,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerLeaderboardArchiveDetails_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		&NewStructOps,
		"LootLockerLeaderboardArchiveDetails",
		Z_Construct_UScriptStruct_FLootLockerLeaderboardArchiveDetails_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerLeaderboardArchiveDetails_Statics::PropPointers),
		sizeof(FLootLockerLeaderboardArchiveDetails),
		alignof(FLootLockerLeaderboardArchiveDetails),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerLeaderboardArchiveDetails_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerLeaderboardArchiveDetails_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerLeaderboardArchiveDetails_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerLeaderboardArchiveDetails()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerLeaderboardArchiveDetails.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerLeaderboardArchiveDetails.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerLeaderboardArchiveDetails_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerLeaderboardArchiveDetails.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerLeaderboardArchive;
class UScriptStruct* FLootLockerLeaderboardArchive::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerLeaderboardArchive.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerLeaderboardArchive.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerLeaderboardArchive, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerLeaderboardArchive"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerLeaderboardArchive.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerLeaderboardArchive>()
{
	return FLootLockerLeaderboardArchive::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerLeaderboardArchive_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_last_modified_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_last_modified;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_content_type_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_content_type;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_key_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_key;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_content_length_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_content_length;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerLeaderboardArchive_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerLeaderboardArchiveRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerLeaderboardArchive_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerLeaderboardArchive>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerLeaderboardArchive_Statics::NewProp_last_modified_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "Comment", "// The date when the archived Leaderboard was modified.\n" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerLeaderboardArchiveRequestHandler.h" },
		{ "ToolTip", "The date when the archived Leaderboard was modified." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerLeaderboardArchive_Statics::NewProp_last_modified = { "last_modified", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerLeaderboardArchive, last_modified), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerLeaderboardArchive_Statics::NewProp_last_modified_MetaData), Z_Construct_UScriptStruct_FLootLockerLeaderboardArchive_Statics::NewProp_last_modified_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerLeaderboardArchive_Statics::NewProp_content_type_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "Comment", "// The type of content (application/json).\n" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerLeaderboardArchiveRequestHandler.h" },
		{ "ToolTip", "The type of content (application/json)." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerLeaderboardArchive_Statics::NewProp_content_type = { "content_type", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerLeaderboardArchive, content_type), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerLeaderboardArchive_Statics::NewProp_content_type_MetaData), Z_Construct_UScriptStruct_FLootLockerLeaderboardArchive_Statics::NewProp_content_type_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerLeaderboardArchive_Statics::NewProp_key_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "Comment", "// The Key which is used to identify a json body of an old Leaderboard.\n" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerLeaderboardArchiveRequestHandler.h" },
		{ "ToolTip", "The Key which is used to identify a json body of an old Leaderboard." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerLeaderboardArchive_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerLeaderboardArchive, key), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerLeaderboardArchive_Statics::NewProp_key_MetaData), Z_Construct_UScriptStruct_FLootLockerLeaderboardArchive_Statics::NewProp_key_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerLeaderboardArchive_Statics::NewProp_content_length_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "Comment", "// Length of the archived Leaderboard.\n" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerLeaderboardArchiveRequestHandler.h" },
		{ "ToolTip", "Length of the archived Leaderboard." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLootLockerLeaderboardArchive_Statics::NewProp_content_length = { "content_length", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerLeaderboardArchive, content_length), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerLeaderboardArchive_Statics::NewProp_content_length_MetaData), Z_Construct_UScriptStruct_FLootLockerLeaderboardArchive_Statics::NewProp_content_length_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerLeaderboardArchive_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerLeaderboardArchive_Statics::NewProp_last_modified,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerLeaderboardArchive_Statics::NewProp_content_type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerLeaderboardArchive_Statics::NewProp_key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerLeaderboardArchive_Statics::NewProp_content_length,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerLeaderboardArchive_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		&NewStructOps,
		"LootLockerLeaderboardArchive",
		Z_Construct_UScriptStruct_FLootLockerLeaderboardArchive_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerLeaderboardArchive_Statics::PropPointers),
		sizeof(FLootLockerLeaderboardArchive),
		alignof(FLootLockerLeaderboardArchive),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerLeaderboardArchive_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerLeaderboardArchive_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerLeaderboardArchive_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerLeaderboardArchive()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerLeaderboardArchive.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerLeaderboardArchive.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerLeaderboardArchive_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerLeaderboardArchive.InnerSingleton;
	}

static_assert(std::is_polymorphic<FLootLockerLeaderboardArchiveDetailsResponse>() == std::is_polymorphic<FLootLockerResponse>(), "USTRUCT FLootLockerLeaderboardArchiveDetailsResponse cannot be polymorphic unless super FLootLockerResponse is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerLeaderboardArchiveDetailsResponse;
class UScriptStruct* FLootLockerLeaderboardArchiveDetailsResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerLeaderboardArchiveDetailsResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerLeaderboardArchiveDetailsResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerLeaderboardArchiveDetailsResponse, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerLeaderboardArchiveDetailsResponse"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerLeaderboardArchiveDetailsResponse.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerLeaderboardArchiveDetailsResponse>()
{
	return FLootLockerLeaderboardArchiveDetailsResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerLeaderboardArchiveDetailsResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_items_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_items_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_items;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerLeaderboardArchiveDetailsResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerLeaderboardArchiveRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerLeaderboardArchiveDetailsResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerLeaderboardArchiveDetailsResponse>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLootLockerLeaderboardArchiveDetailsResponse_Statics::NewProp_items_Inner = { "items", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLootLockerLeaderboardArchiveDetails, METADATA_PARAMS(0, nullptr) }; // 3236084380
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerLeaderboardArchiveDetailsResponse_Statics::NewProp_items_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "Comment", "// A list of players and details from the archived Leaderboard.\n" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerLeaderboardArchiveRequestHandler.h" },
		{ "ToolTip", "A list of players and details from the archived Leaderboard." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLootLockerLeaderboardArchiveDetailsResponse_Statics::NewProp_items = { "items", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerLeaderboardArchiveDetailsResponse, items), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerLeaderboardArchiveDetailsResponse_Statics::NewProp_items_MetaData), Z_Construct_UScriptStruct_FLootLockerLeaderboardArchiveDetailsResponse_Statics::NewProp_items_MetaData) }; // 3236084380
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerLeaderboardArchiveDetailsResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerLeaderboardArchiveDetailsResponse_Statics::NewProp_items_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerLeaderboardArchiveDetailsResponse_Statics::NewProp_items,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerLeaderboardArchiveDetailsResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		Z_Construct_UScriptStruct_FLootLockerResponse,
		&NewStructOps,
		"LootLockerLeaderboardArchiveDetailsResponse",
		Z_Construct_UScriptStruct_FLootLockerLeaderboardArchiveDetailsResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerLeaderboardArchiveDetailsResponse_Statics::PropPointers),
		sizeof(FLootLockerLeaderboardArchiveDetailsResponse),
		alignof(FLootLockerLeaderboardArchiveDetailsResponse),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerLeaderboardArchiveDetailsResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerLeaderboardArchiveDetailsResponse_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerLeaderboardArchiveDetailsResponse_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerLeaderboardArchiveDetailsResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerLeaderboardArchiveDetailsResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerLeaderboardArchiveDetailsResponse.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerLeaderboardArchiveDetailsResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerLeaderboardArchiveDetailsResponse.InnerSingleton;
	}

static_assert(std::is_polymorphic<FLootLockerLeaderboardArchiveResponse>() == std::is_polymorphic<FLootLockerResponse>(), "USTRUCT FLootLockerLeaderboardArchiveResponse cannot be polymorphic unless super FLootLockerResponse is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerLeaderboardArchiveResponse;
class UScriptStruct* FLootLockerLeaderboardArchiveResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerLeaderboardArchiveResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerLeaderboardArchiveResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerLeaderboardArchiveResponse, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerLeaderboardArchiveResponse"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerLeaderboardArchiveResponse.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerLeaderboardArchiveResponse>()
{
	return FLootLockerLeaderboardArchiveResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerLeaderboardArchiveResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_archives_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_archives_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_archives;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerLeaderboardArchiveResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerLeaderboardArchiveRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerLeaderboardArchiveResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerLeaderboardArchiveResponse>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLootLockerLeaderboardArchiveResponse_Statics::NewProp_archives_Inner = { "archives", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLootLockerLeaderboardArchive, METADATA_PARAMS(0, nullptr) }; // 3653631110
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerLeaderboardArchiveResponse_Statics::NewProp_archives_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "Comment", "// A List of past Leaderboards.\n" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerLeaderboardArchiveRequestHandler.h" },
		{ "ToolTip", "A List of past Leaderboards." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLootLockerLeaderboardArchiveResponse_Statics::NewProp_archives = { "archives", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerLeaderboardArchiveResponse, archives), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerLeaderboardArchiveResponse_Statics::NewProp_archives_MetaData), Z_Construct_UScriptStruct_FLootLockerLeaderboardArchiveResponse_Statics::NewProp_archives_MetaData) }; // 3653631110
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerLeaderboardArchiveResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerLeaderboardArchiveResponse_Statics::NewProp_archives_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerLeaderboardArchiveResponse_Statics::NewProp_archives,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerLeaderboardArchiveResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		Z_Construct_UScriptStruct_FLootLockerResponse,
		&NewStructOps,
		"LootLockerLeaderboardArchiveResponse",
		Z_Construct_UScriptStruct_FLootLockerLeaderboardArchiveResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerLeaderboardArchiveResponse_Statics::PropPointers),
		sizeof(FLootLockerLeaderboardArchiveResponse),
		alignof(FLootLockerLeaderboardArchiveResponse),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerLeaderboardArchiveResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerLeaderboardArchiveResponse_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerLeaderboardArchiveResponse_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerLeaderboardArchiveResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerLeaderboardArchiveResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerLeaderboardArchiveResponse.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerLeaderboardArchiveResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerLeaderboardArchiveResponse.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerLeaderboardArchiveResponseBP__DelegateSignature_Statics
	{
		struct _Script_LootLockerSDK_eventLootLockerLeaderboardArchiveResponseBP_Parms
		{
			FLootLockerLeaderboardArchiveResponse Response;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Response;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerLeaderboardArchiveResponseBP__DelegateSignature_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LootLockerSDK_eventLootLockerLeaderboardArchiveResponseBP_Parms, Response), Z_Construct_UScriptStruct_FLootLockerLeaderboardArchiveResponse, METADATA_PARAMS(0, nullptr) }; // 2767992831
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerLeaderboardArchiveResponseBP__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerLeaderboardArchiveResponseBP__DelegateSignature_Statics::NewProp_Response,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerLeaderboardArchiveResponseBP__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerLeaderboardArchiveRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerLeaderboardArchiveResponseBP__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LootLockerSDK, nullptr, "LootLockerLeaderboardArchiveResponseBP__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerLeaderboardArchiveResponseBP__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerLeaderboardArchiveResponseBP__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerLeaderboardArchiveResponseBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventLootLockerLeaderboardArchiveResponseBP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerLeaderboardArchiveResponseBP__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerLeaderboardArchiveResponseBP__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerLeaderboardArchiveResponseBP__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerLeaderboardArchiveResponseBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventLootLockerLeaderboardArchiveResponseBP_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerLeaderboardArchiveResponseBP__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerLeaderboardArchiveResponseBP__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FLootLockerLeaderboardArchiveResponseBP_DelegateWrapper(const FScriptDelegate& LootLockerLeaderboardArchiveResponseBP, FLootLockerLeaderboardArchiveResponse Response)
{
	struct _Script_LootLockerSDK_eventLootLockerLeaderboardArchiveResponseBP_Parms
	{
		FLootLockerLeaderboardArchiveResponse Response;
	};
	_Script_LootLockerSDK_eventLootLockerLeaderboardArchiveResponseBP_Parms Parms;
	Parms.Response=Response;
	LootLockerLeaderboardArchiveResponseBP.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerLeaderboardArchiveDetailReponseBP__DelegateSignature_Statics
	{
		struct _Script_LootLockerSDK_eventLootLockerLeaderboardArchiveDetailReponseBP_Parms
		{
			FLootLockerLeaderboardArchiveDetailsResponse Response;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Response;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerLeaderboardArchiveDetailReponseBP__DelegateSignature_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LootLockerSDK_eventLootLockerLeaderboardArchiveDetailReponseBP_Parms, Response), Z_Construct_UScriptStruct_FLootLockerLeaderboardArchiveDetailsResponse, METADATA_PARAMS(0, nullptr) }; // 2654044007
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerLeaderboardArchiveDetailReponseBP__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerLeaderboardArchiveDetailReponseBP__DelegateSignature_Statics::NewProp_Response,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerLeaderboardArchiveDetailReponseBP__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerLeaderboardArchiveRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerLeaderboardArchiveDetailReponseBP__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LootLockerSDK, nullptr, "LootLockerLeaderboardArchiveDetailReponseBP__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerLeaderboardArchiveDetailReponseBP__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerLeaderboardArchiveDetailReponseBP__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerLeaderboardArchiveDetailReponseBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventLootLockerLeaderboardArchiveDetailReponseBP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerLeaderboardArchiveDetailReponseBP__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerLeaderboardArchiveDetailReponseBP__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerLeaderboardArchiveDetailReponseBP__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerLeaderboardArchiveDetailReponseBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventLootLockerLeaderboardArchiveDetailReponseBP_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerLeaderboardArchiveDetailReponseBP__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerLeaderboardArchiveDetailReponseBP__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FLootLockerLeaderboardArchiveDetailReponseBP_DelegateWrapper(const FScriptDelegate& LootLockerLeaderboardArchiveDetailReponseBP, FLootLockerLeaderboardArchiveDetailsResponse Response)
{
	struct _Script_LootLockerSDK_eventLootLockerLeaderboardArchiveDetailReponseBP_Parms
	{
		FLootLockerLeaderboardArchiveDetailsResponse Response;
	};
	_Script_LootLockerSDK_eventLootLockerLeaderboardArchiveDetailReponseBP_Parms Parms;
	Parms.Response=Response;
	LootLockerLeaderboardArchiveDetailReponseBP.ProcessDelegate<UObject>(&Parms);
}
	void ULootLockerLeaderboardArchiveRequestHandler::StaticRegisterNativesULootLockerLeaderboardArchiveRequestHandler()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULootLockerLeaderboardArchiveRequestHandler);
	UClass* Z_Construct_UClass_ULootLockerLeaderboardArchiveRequestHandler_NoRegister()
	{
		return ULootLockerLeaderboardArchiveRequestHandler::StaticClass();
	}
	struct Z_Construct_UClass_ULootLockerLeaderboardArchiveRequestHandler_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULootLockerLeaderboardArchiveRequestHandler_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULootLockerLeaderboardArchiveRequestHandler_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULootLockerLeaderboardArchiveRequestHandler_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GameAPI/LootLockerLeaderboardArchiveRequestHandler.h" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerLeaderboardArchiveRequestHandler.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULootLockerLeaderboardArchiveRequestHandler_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULootLockerLeaderboardArchiveRequestHandler>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULootLockerLeaderboardArchiveRequestHandler_Statics::ClassParams = {
		&ULootLockerLeaderboardArchiveRequestHandler::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULootLockerLeaderboardArchiveRequestHandler_Statics::Class_MetaDataParams), Z_Construct_UClass_ULootLockerLeaderboardArchiveRequestHandler_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ULootLockerLeaderboardArchiveRequestHandler()
	{
		if (!Z_Registration_Info_UClass_ULootLockerLeaderboardArchiveRequestHandler.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULootLockerLeaderboardArchiveRequestHandler.OuterSingleton, Z_Construct_UClass_ULootLockerLeaderboardArchiveRequestHandler_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULootLockerLeaderboardArchiveRequestHandler.OuterSingleton;
	}
	template<> LOOTLOCKERSDK_API UClass* StaticClass<ULootLockerLeaderboardArchiveRequestHandler>()
	{
		return ULootLockerLeaderboardArchiveRequestHandler::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULootLockerLeaderboardArchiveRequestHandler);
	ULootLockerLeaderboardArchiveRequestHandler::~ULootLockerLeaderboardArchiveRequestHandler() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerLeaderboardArchiveRequestHandler_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerLeaderboardArchiveRequestHandler_h_Statics::ScriptStructInfo[] = {
		{ FLootLockerLeaderboardArchivePlayer::StaticStruct, Z_Construct_UScriptStruct_FLootLockerLeaderboardArchivePlayer_Statics::NewStructOps, TEXT("LootLockerLeaderboardArchivePlayer"), &Z_Registration_Info_UScriptStruct_LootLockerLeaderboardArchivePlayer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerLeaderboardArchivePlayer), 64815334U) },
		{ FLootLockerLeaderboardArchiveDetails::StaticStruct, Z_Construct_UScriptStruct_FLootLockerLeaderboardArchiveDetails_Statics::NewStructOps, TEXT("LootLockerLeaderboardArchiveDetails"), &Z_Registration_Info_UScriptStruct_LootLockerLeaderboardArchiveDetails, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerLeaderboardArchiveDetails), 3236084380U) },
		{ FLootLockerLeaderboardArchive::StaticStruct, Z_Construct_UScriptStruct_FLootLockerLeaderboardArchive_Statics::NewStructOps, TEXT("LootLockerLeaderboardArchive"), &Z_Registration_Info_UScriptStruct_LootLockerLeaderboardArchive, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerLeaderboardArchive), 3653631110U) },
		{ FLootLockerLeaderboardArchiveDetailsResponse::StaticStruct, Z_Construct_UScriptStruct_FLootLockerLeaderboardArchiveDetailsResponse_Statics::NewStructOps, TEXT("LootLockerLeaderboardArchiveDetailsResponse"), &Z_Registration_Info_UScriptStruct_LootLockerLeaderboardArchiveDetailsResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerLeaderboardArchiveDetailsResponse), 2654044007U) },
		{ FLootLockerLeaderboardArchiveResponse::StaticStruct, Z_Construct_UScriptStruct_FLootLockerLeaderboardArchiveResponse_Statics::NewStructOps, TEXT("LootLockerLeaderboardArchiveResponse"), &Z_Registration_Info_UScriptStruct_LootLockerLeaderboardArchiveResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerLeaderboardArchiveResponse), 2767992831U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerLeaderboardArchiveRequestHandler_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULootLockerLeaderboardArchiveRequestHandler, ULootLockerLeaderboardArchiveRequestHandler::StaticClass, TEXT("ULootLockerLeaderboardArchiveRequestHandler"), &Z_Registration_Info_UClass_ULootLockerLeaderboardArchiveRequestHandler, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULootLockerLeaderboardArchiveRequestHandler), 2624238299U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerLeaderboardArchiveRequestHandler_h_1467400644(TEXT("/Script/LootLockerSDK"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerLeaderboardArchiveRequestHandler_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerLeaderboardArchiveRequestHandler_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerLeaderboardArchiveRequestHandler_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerLeaderboardArchiveRequestHandler_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
