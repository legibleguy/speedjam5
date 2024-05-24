// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LootLockerSDK/Public/LootLockerGameEndpoints.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLootLockerGameEndpoints() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	LOOTLOCKERSDK_API UClass* Z_Construct_UClass_ULootLockerGameEndpoints();
	LOOTLOCKERSDK_API UClass* Z_Construct_UClass_ULootLockerGameEndpoints_NoRegister();
	LOOTLOCKERSDK_API UEnum* Z_Construct_UEnum_LootLockerSDK_ELootLockerHTTPMethod();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerEndPoints();
	UPackage* Z_Construct_UPackage__Script_LootLockerSDK();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELootLockerHTTPMethod;
	static UEnum* ELootLockerHTTPMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ELootLockerHTTPMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ELootLockerHTTPMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LootLockerSDK_ELootLockerHTTPMethod, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("ELootLockerHTTPMethod"));
		}
		return Z_Registration_Info_UEnum_ELootLockerHTTPMethod.OuterSingleton;
	}
	template<> LOOTLOCKERSDK_API UEnum* StaticEnum<ELootLockerHTTPMethod>()
	{
		return ELootLockerHTTPMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_LootLockerSDK_ELootLockerHTTPMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_LootLockerSDK_ELootLockerHTTPMethod_Statics::Enumerators[] = {
		{ "ELootLockerHTTPMethod::GET", (int64)ELootLockerHTTPMethod::GET },
		{ "ELootLockerHTTPMethod::POST", (int64)ELootLockerHTTPMethod::POST },
		{ "ELootLockerHTTPMethod::DELETE", (int64)ELootLockerHTTPMethod::DELETE },
		{ "ELootLockerHTTPMethod::PUT", (int64)ELootLockerHTTPMethod::PUT },
		{ "ELootLockerHTTPMethod::HEAD", (int64)ELootLockerHTTPMethod::HEAD },
		{ "ELootLockerHTTPMethod::CREATE", (int64)ELootLockerHTTPMethod::CREATE },
		{ "ELootLockerHTTPMethod::OPTIONS", (int64)ELootLockerHTTPMethod::OPTIONS },
		{ "ELootLockerHTTPMethod::PATCH", (int64)ELootLockerHTTPMethod::PATCH },
		{ "ELootLockerHTTPMethod::UPLOAD", (int64)ELootLockerHTTPMethod::UPLOAD },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_LootLockerSDK_ELootLockerHTTPMethod_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CREATE.DisplayName", "CREATE" },
		{ "CREATE.Name", "ELootLockerHTTPMethod::CREATE" },
		{ "DELETE.DisplayName", "DELETE" },
		{ "DELETE.Name", "ELootLockerHTTPMethod::DELETE" },
		{ "GET.DisplayName", "GET" },
		{ "GET.Name", "ELootLockerHTTPMethod::GET" },
		{ "HEAD.DisplayName", "HEAD" },
		{ "HEAD.Name", "ELootLockerHTTPMethod::HEAD" },
		{ "ModuleRelativePath", "Public/LootLockerGameEndpoints.h" },
		{ "OPTIONS.DisplayName", "OPTIONS" },
		{ "OPTIONS.Name", "ELootLockerHTTPMethod::OPTIONS" },
		{ "PATCH.DisplayName", "PATCH" },
		{ "PATCH.Name", "ELootLockerHTTPMethod::PATCH" },
		{ "POST.DisplayName", "POST" },
		{ "POST.Name", "ELootLockerHTTPMethod::POST" },
		{ "PUT.DisplayName", "PUT" },
		{ "PUT.Name", "ELootLockerHTTPMethod::PUT" },
		{ "UPLOAD.DisplayName", "UPLOAD" },
		{ "UPLOAD.Name", "ELootLockerHTTPMethod::UPLOAD" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LootLockerSDK_ELootLockerHTTPMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		"ELootLockerHTTPMethod",
		"ELootLockerHTTPMethod",
		Z_Construct_UEnum_LootLockerSDK_ELootLockerHTTPMethod_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_LootLockerSDK_ELootLockerHTTPMethod_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_LootLockerSDK_ELootLockerHTTPMethod_Statics::Enum_MetaDataParams), Z_Construct_UEnum_LootLockerSDK_ELootLockerHTTPMethod_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_LootLockerSDK_ELootLockerHTTPMethod()
	{
		if (!Z_Registration_Info_UEnum_ELootLockerHTTPMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELootLockerHTTPMethod.InnerSingleton, Z_Construct_UEnum_LootLockerSDK_ELootLockerHTTPMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ELootLockerHTTPMethod.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerEndPoints;
class UScriptStruct* FLootLockerEndPoints::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerEndPoints.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerEndPoints.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerEndPoints, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerEndPoints"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerEndPoints.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerEndPoints>()
{
	return FLootLockerEndPoints::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerEndPoints_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_endpoint_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_endpoint;
		static const UECodeGen_Private::FBytePropertyParams NewProp_requestMethod_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_requestMethod_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_requestMethod;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerEndPoints_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LootLockerGameEndpoints.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerEndPoints_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerEndPoints>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerEndPoints_Statics::NewProp_endpoint_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/LootLockerGameEndpoints.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerEndPoints_Statics::NewProp_endpoint = { "endpoint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerEndPoints, endpoint), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerEndPoints_Statics::NewProp_endpoint_MetaData), Z_Construct_UScriptStruct_FLootLockerEndPoints_Statics::NewProp_endpoint_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLootLockerEndPoints_Statics::NewProp_requestMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerEndPoints_Statics::NewProp_requestMethod_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/LootLockerGameEndpoints.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FLootLockerEndPoints_Statics::NewProp_requestMethod = { "requestMethod", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerEndPoints, requestMethod), Z_Construct_UEnum_LootLockerSDK_ELootLockerHTTPMethod, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerEndPoints_Statics::NewProp_requestMethod_MetaData), Z_Construct_UScriptStruct_FLootLockerEndPoints_Statics::NewProp_requestMethod_MetaData) }; // 1312912968
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerEndPoints_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerEndPoints_Statics::NewProp_endpoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerEndPoints_Statics::NewProp_requestMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerEndPoints_Statics::NewProp_requestMethod,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerEndPoints_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		&NewStructOps,
		"LootLockerEndPoints",
		Z_Construct_UScriptStruct_FLootLockerEndPoints_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerEndPoints_Statics::PropPointers),
		sizeof(FLootLockerEndPoints),
		alignof(FLootLockerEndPoints),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerEndPoints_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerEndPoints_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerEndPoints_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerEndPoints()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerEndPoints.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerEndPoints.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerEndPoints_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerEndPoints.InnerSingleton;
	}
	void ULootLockerGameEndpoints::StaticRegisterNativesULootLockerGameEndpoints()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULootLockerGameEndpoints);
	UClass* Z_Construct_UClass_ULootLockerGameEndpoints_NoRegister()
	{
		return ULootLockerGameEndpoints::StaticClass();
	}
	struct Z_Construct_UClass_ULootLockerGameEndpoints_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULootLockerGameEndpoints_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULootLockerGameEndpoints_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULootLockerGameEndpoints_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LootLockerGameEndpoints.h" },
		{ "ModuleRelativePath", "Public/LootLockerGameEndpoints.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULootLockerGameEndpoints_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULootLockerGameEndpoints>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULootLockerGameEndpoints_Statics::ClassParams = {
		&ULootLockerGameEndpoints::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULootLockerGameEndpoints_Statics::Class_MetaDataParams), Z_Construct_UClass_ULootLockerGameEndpoints_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ULootLockerGameEndpoints()
	{
		if (!Z_Registration_Info_UClass_ULootLockerGameEndpoints.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULootLockerGameEndpoints.OuterSingleton, Z_Construct_UClass_ULootLockerGameEndpoints_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULootLockerGameEndpoints.OuterSingleton;
	}
	template<> LOOTLOCKERSDK_API UClass* StaticClass<ULootLockerGameEndpoints>()
	{
		return ULootLockerGameEndpoints::StaticClass();
	}
	ULootLockerGameEndpoints::ULootLockerGameEndpoints(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULootLockerGameEndpoints);
	ULootLockerGameEndpoints::~ULootLockerGameEndpoints() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_LootLockerGameEndpoints_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_LootLockerGameEndpoints_h_Statics::EnumInfo[] = {
		{ ELootLockerHTTPMethod_StaticEnum, TEXT("ELootLockerHTTPMethod"), &Z_Registration_Info_UEnum_ELootLockerHTTPMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1312912968U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_LootLockerGameEndpoints_h_Statics::ScriptStructInfo[] = {
		{ FLootLockerEndPoints::StaticStruct, Z_Construct_UScriptStruct_FLootLockerEndPoints_Statics::NewStructOps, TEXT("LootLockerEndPoints"), &Z_Registration_Info_UScriptStruct_LootLockerEndPoints, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerEndPoints), 1509973828U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_LootLockerGameEndpoints_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULootLockerGameEndpoints, ULootLockerGameEndpoints::StaticClass, TEXT("ULootLockerGameEndpoints"), &Z_Registration_Info_UClass_ULootLockerGameEndpoints, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULootLockerGameEndpoints), 3228924553U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_LootLockerGameEndpoints_h_2713858478(TEXT("/Script/LootLockerSDK"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_LootLockerGameEndpoints_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_LootLockerGameEndpoints_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_LootLockerGameEndpoints_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_LootLockerGameEndpoints_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_LootLockerGameEndpoints_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_LootLockerGameEndpoints_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
