// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LootLockerSDK/Public/LootLockerHttpClient.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLootLockerHttpClient() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	LOOTLOCKERSDK_API UClass* Z_Construct_UClass_ULootLockerHttpClient();
	LOOTLOCKERSDK_API UClass* Z_Construct_UClass_ULootLockerHttpClient_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LootLockerSDK();
// End Cross Module References
	void ULootLockerHttpClient::StaticRegisterNativesULootLockerHttpClient()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULootLockerHttpClient);
	UClass* Z_Construct_UClass_ULootLockerHttpClient_NoRegister()
	{
		return ULootLockerHttpClient::StaticClass();
	}
	struct Z_Construct_UClass_ULootLockerHttpClient_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULootLockerHttpClient_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULootLockerHttpClient_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULootLockerHttpClient_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LootLockerHttpClient.h" },
		{ "ModuleRelativePath", "Public/LootLockerHttpClient.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULootLockerHttpClient_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULootLockerHttpClient>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULootLockerHttpClient_Statics::ClassParams = {
		&ULootLockerHttpClient::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULootLockerHttpClient_Statics::Class_MetaDataParams), Z_Construct_UClass_ULootLockerHttpClient_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ULootLockerHttpClient()
	{
		if (!Z_Registration_Info_UClass_ULootLockerHttpClient.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULootLockerHttpClient.OuterSingleton, Z_Construct_UClass_ULootLockerHttpClient_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULootLockerHttpClient.OuterSingleton;
	}
	template<> LOOTLOCKERSDK_API UClass* StaticClass<ULootLockerHttpClient>()
	{
		return ULootLockerHttpClient::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULootLockerHttpClient);
	ULootLockerHttpClient::~ULootLockerHttpClient() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_LootLockerHttpClient_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_LootLockerHttpClient_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULootLockerHttpClient, ULootLockerHttpClient::StaticClass, TEXT("ULootLockerHttpClient"), &Z_Registration_Info_UClass_ULootLockerHttpClient, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULootLockerHttpClient), 2975447975U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_LootLockerHttpClient_h_62311033(TEXT("/Script/LootLockerSDK"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_LootLockerHttpClient_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_LootLockerHttpClient_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
