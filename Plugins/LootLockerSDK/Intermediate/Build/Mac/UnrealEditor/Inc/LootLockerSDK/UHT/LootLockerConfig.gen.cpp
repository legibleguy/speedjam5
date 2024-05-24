// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LootLockerSDK/Public/LootLockerConfig.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLootLockerConfig() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	LOOTLOCKERSDK_API UClass* Z_Construct_UClass_ULootLockerConfig();
	LOOTLOCKERSDK_API UClass* Z_Construct_UClass_ULootLockerConfig_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LootLockerSDK();
// End Cross Module References
	DEFINE_FUNCTION(ULootLockerConfig::execIsSemverString)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_str);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ULootLockerConfig::IsSemverString(Z_Param_str);
		P_NATIVE_END;
	}
	void ULootLockerConfig::StaticRegisterNativesULootLockerConfig()
	{
		UClass* Class = ULootLockerConfig::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsSemverString", &ULootLockerConfig::execIsSemverString },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULootLockerConfig_IsSemverString_Statics
	{
		struct LootLockerConfig_eventIsSemverString_Parms
		{
			FString str;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_str_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_str;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULootLockerConfig_IsSemverString_Statics::NewProp_str_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULootLockerConfig_IsSemverString_Statics::NewProp_str = { "str", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LootLockerConfig_eventIsSemverString_Parms, str), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULootLockerConfig_IsSemverString_Statics::NewProp_str_MetaData), Z_Construct_UFunction_ULootLockerConfig_IsSemverString_Statics::NewProp_str_MetaData) };
	void Z_Construct_UFunction_ULootLockerConfig_IsSemverString_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LootLockerConfig_eventIsSemverString_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULootLockerConfig_IsSemverString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LootLockerConfig_eventIsSemverString_Parms), &Z_Construct_UFunction_ULootLockerConfig_IsSemverString_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULootLockerConfig_IsSemverString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULootLockerConfig_IsSemverString_Statics::NewProp_str,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULootLockerConfig_IsSemverString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULootLockerConfig_IsSemverString_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LootLockerConfig.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULootLockerConfig_IsSemverString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULootLockerConfig, nullptr, "IsSemverString", nullptr, nullptr, Z_Construct_UFunction_ULootLockerConfig_IsSemverString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULootLockerConfig_IsSemverString_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULootLockerConfig_IsSemverString_Statics::LootLockerConfig_eventIsSemverString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULootLockerConfig_IsSemverString_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULootLockerConfig_IsSemverString_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULootLockerConfig_IsSemverString_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULootLockerConfig_IsSemverString_Statics::LootLockerConfig_eventIsSemverString_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULootLockerConfig_IsSemverString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULootLockerConfig_IsSemverString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULootLockerConfig);
	UClass* Z_Construct_UClass_ULootLockerConfig_NoRegister()
	{
		return ULootLockerConfig::StaticClass();
	}
	struct Z_Construct_UClass_ULootLockerConfig_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LootLockerGameKey_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_LootLockerGameKey;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameVersion_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_GameVersion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InvalidGameVersionWarning_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InvalidGameVersionWarning;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllowTokenRefresh_MetaData[];
#endif
		static void NewProp_AllowTokenRefresh_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_AllowTokenRefresh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DomainKey_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DomainKey;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsValidGameVersion_MetaData[];
#endif
		static void NewProp_IsValidGameVersion_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsValidGameVersion;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULootLockerConfig_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULootLockerConfig_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ULootLockerConfig_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULootLockerConfig_IsSemverString, "IsSemverString" }, // 2883920522
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULootLockerConfig_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULootLockerConfig_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "LootLocker SDK Settings" },
		{ "IncludePath", "LootLockerConfig.h" },
		{ "ModuleRelativePath", "Public/LootLockerConfig.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULootLockerConfig_Statics::NewProp_LootLockerGameKey_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "Comment", "// API Key used to talk to LootLocker. The API key can be found in `Settings > API Keys` in the Web Console: https://console.lootlocker.com/settings/api-keys\n" },
		{ "DisplayName", "LootLocker API Key" },
		{ "ModuleRelativePath", "Public/LootLockerConfig.h" },
		{ "ToolTip", "API Key used to talk to LootLocker. The API key can be found in `Settings > API Keys` in the Web Console: https:console.lootlocker.com/settings/api-keys" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULootLockerConfig_Statics::NewProp_LootLockerGameKey = { "LootLockerGameKey", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULootLockerConfig, LootLockerGameKey), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULootLockerConfig_Statics::NewProp_LootLockerGameKey_MetaData), Z_Construct_UClass_ULootLockerConfig_Statics::NewProp_LootLockerGameKey_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULootLockerConfig_Statics::NewProp_GameVersion_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/LootLockerConfig.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULootLockerConfig_Statics::NewProp_GameVersion = { "GameVersion", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULootLockerConfig, GameVersion), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULootLockerConfig_Statics::NewProp_GameVersion_MetaData), Z_Construct_UClass_ULootLockerConfig_Statics::NewProp_GameVersion_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULootLockerConfig_Statics::NewProp_InvalidGameVersionWarning_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "DisplayName", "WARNING:" },
		{ "EditCondition", "!IsValidGameVersion" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/LootLockerConfig.h" },
		{ "MultiLine", "TRUE" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULootLockerConfig_Statics::NewProp_InvalidGameVersionWarning = { "InvalidGameVersionWarning", nullptr, (EPropertyFlags)0x0010000000026015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULootLockerConfig, InvalidGameVersionWarning), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULootLockerConfig_Statics::NewProp_InvalidGameVersionWarning_MetaData), Z_Construct_UClass_ULootLockerConfig_Statics::NewProp_InvalidGameVersionWarning_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULootLockerConfig_Statics::NewProp_AllowTokenRefresh_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/LootLockerConfig.h" },
	};
#endif
	void Z_Construct_UClass_ULootLockerConfig_Statics::NewProp_AllowTokenRefresh_SetBit(void* Obj)
	{
		((ULootLockerConfig*)Obj)->AllowTokenRefresh = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULootLockerConfig_Statics::NewProp_AllowTokenRefresh = { "AllowTokenRefresh", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ULootLockerConfig), &Z_Construct_UClass_ULootLockerConfig_Statics::NewProp_AllowTokenRefresh_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULootLockerConfig_Statics::NewProp_AllowTokenRefresh_MetaData), Z_Construct_UClass_ULootLockerConfig_Statics::NewProp_AllowTokenRefresh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULootLockerConfig_Statics::NewProp_DomainKey_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "Comment", "// Domain Key used to talk to LootLocker. The Domain key can be found in `Settings > API Keys` in the Web Console: https://console.lootlocker.com/settings/api-keys\n" },
		{ "ModuleRelativePath", "Public/LootLockerConfig.h" },
		{ "ToolTip", "Domain Key used to talk to LootLocker. The Domain key can be found in `Settings > API Keys` in the Web Console: https:console.lootlocker.com/settings/api-keys" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULootLockerConfig_Statics::NewProp_DomainKey = { "DomainKey", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULootLockerConfig, DomainKey), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULootLockerConfig_Statics::NewProp_DomainKey_MetaData), Z_Construct_UClass_ULootLockerConfig_Statics::NewProp_DomainKey_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULootLockerConfig_Statics::NewProp_IsValidGameVersion_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "EditCondition", "false" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/LootLockerConfig.h" },
	};
#endif
	void Z_Construct_UClass_ULootLockerConfig_Statics::NewProp_IsValidGameVersion_SetBit(void* Obj)
	{
		((ULootLockerConfig*)Obj)->IsValidGameVersion = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULootLockerConfig_Statics::NewProp_IsValidGameVersion = { "IsValidGameVersion", nullptr, (EPropertyFlags)0x0040000000026801, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ULootLockerConfig), &Z_Construct_UClass_ULootLockerConfig_Statics::NewProp_IsValidGameVersion_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULootLockerConfig_Statics::NewProp_IsValidGameVersion_MetaData), Z_Construct_UClass_ULootLockerConfig_Statics::NewProp_IsValidGameVersion_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULootLockerConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULootLockerConfig_Statics::NewProp_LootLockerGameKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULootLockerConfig_Statics::NewProp_GameVersion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULootLockerConfig_Statics::NewProp_InvalidGameVersionWarning,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULootLockerConfig_Statics::NewProp_AllowTokenRefresh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULootLockerConfig_Statics::NewProp_DomainKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULootLockerConfig_Statics::NewProp_IsValidGameVersion,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULootLockerConfig_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULootLockerConfig>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULootLockerConfig_Statics::ClassParams = {
		&ULootLockerConfig::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULootLockerConfig_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULootLockerConfig_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULootLockerConfig_Statics::Class_MetaDataParams), Z_Construct_UClass_ULootLockerConfig_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULootLockerConfig_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ULootLockerConfig()
	{
		if (!Z_Registration_Info_UClass_ULootLockerConfig.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULootLockerConfig.OuterSingleton, Z_Construct_UClass_ULootLockerConfig_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULootLockerConfig.OuterSingleton;
	}
	template<> LOOTLOCKERSDK_API UClass* StaticClass<ULootLockerConfig>()
	{
		return ULootLockerConfig::StaticClass();
	}
	ULootLockerConfig::ULootLockerConfig(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULootLockerConfig);
	ULootLockerConfig::~ULootLockerConfig() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_LootLockerConfig_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_LootLockerConfig_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULootLockerConfig, ULootLockerConfig::StaticClass, TEXT("ULootLockerConfig"), &Z_Registration_Info_UClass_ULootLockerConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULootLockerConfig), 2606817592U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_LootLockerConfig_h_1848580890(TEXT("/Script/LootLockerSDK"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_LootLockerConfig_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_LootLockerConfig_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
