// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LootLockerSDK/Public/LootLockerResponse.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLootLockerResponse() {}
// Cross Module References
	LOOTLOCKERSDK_API UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerDefaultResponseBP__DelegateSignature();
	LOOTLOCKERSDK_API UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerResponseCallback__DelegateSignature();
	LOOTLOCKERSDK_API UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_ResponseCallbackBP__DelegateSignature();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerErrorData();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerIndexBasedPagination();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerKeyBasedPagination();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerResponse();
	UPackage* Z_Construct_UPackage__Script_LootLockerSDK();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerErrorData;
class UScriptStruct* FLootLockerErrorData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerErrorData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerErrorData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerErrorData, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerErrorData"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerErrorData.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerErrorData>()
{
	return FLootLockerErrorData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerErrorData_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Doc_url_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Doc_url;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Request_id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Request_id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Trace_id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Trace_id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerErrorData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LootLockerResponse.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerErrorData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerErrorData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerErrorData_Statics::NewProp_Code_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "Comment", "// A descriptive code identifying the error.\n" },
		{ "ModuleRelativePath", "Public/LootLockerResponse.h" },
		{ "ToolTip", "A descriptive code identifying the error." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerErrorData_Statics::NewProp_Code = { "Code", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerErrorData, Code), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerErrorData_Statics::NewProp_Code_MetaData), Z_Construct_UScriptStruct_FLootLockerErrorData_Statics::NewProp_Code_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerErrorData_Statics::NewProp_Doc_url_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "Comment", "// A link to further documentation on the error.\n" },
		{ "ModuleRelativePath", "Public/LootLockerResponse.h" },
		{ "ToolTip", "A link to further documentation on the error." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerErrorData_Statics::NewProp_Doc_url = { "Doc_url", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerErrorData, Doc_url), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerErrorData_Statics::NewProp_Doc_url_MetaData), Z_Construct_UScriptStruct_FLootLockerErrorData_Statics::NewProp_Doc_url_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerErrorData_Statics::NewProp_Request_id_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "Comment", "// A unique identifier of the request to use in contact with support.\n" },
		{ "ModuleRelativePath", "Public/LootLockerResponse.h" },
		{ "ToolTip", "A unique identifier of the request to use in contact with support." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerErrorData_Statics::NewProp_Request_id = { "Request_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerErrorData, Request_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerErrorData_Statics::NewProp_Request_id_MetaData), Z_Construct_UScriptStruct_FLootLockerErrorData_Statics::NewProp_Request_id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerErrorData_Statics::NewProp_Trace_id_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "Comment", "// A unique identifier for tracing the request through LootLocker systems, use this in contact with support.\n" },
		{ "ModuleRelativePath", "Public/LootLockerResponse.h" },
		{ "ToolTip", "A unique identifier for tracing the request through LootLocker systems, use this in contact with support." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerErrorData_Statics::NewProp_Trace_id = { "Trace_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerErrorData, Trace_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerErrorData_Statics::NewProp_Trace_id_MetaData), Z_Construct_UScriptStruct_FLootLockerErrorData_Statics::NewProp_Trace_id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerErrorData_Statics::NewProp_Message_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "Comment", "// A free text description of the problem and potential suggestions for fixing it\n" },
		{ "ModuleRelativePath", "Public/LootLockerResponse.h" },
		{ "ToolTip", "A free text description of the problem and potential suggestions for fixing it" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerErrorData_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerErrorData, Message), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerErrorData_Statics::NewProp_Message_MetaData), Z_Construct_UScriptStruct_FLootLockerErrorData_Statics::NewProp_Message_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerErrorData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerErrorData_Statics::NewProp_Code,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerErrorData_Statics::NewProp_Doc_url,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerErrorData_Statics::NewProp_Request_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerErrorData_Statics::NewProp_Trace_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerErrorData_Statics::NewProp_Message,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerErrorData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		&NewStructOps,
		"LootLockerErrorData",
		Z_Construct_UScriptStruct_FLootLockerErrorData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerErrorData_Statics::PropPointers),
		sizeof(FLootLockerErrorData),
		alignof(FLootLockerErrorData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerErrorData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerErrorData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerErrorData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerErrorData()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerErrorData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerErrorData.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerErrorData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerErrorData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerResponse;
class UScriptStruct* FLootLockerResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerResponse, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerResponse"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerResponse.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerResponse>()
{
	return FLootLockerResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_success_MetaData[];
#endif
		static void NewProp_success_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_success;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StatusCode_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_StatusCode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FullTextFromServer_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FullTextFromServer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ErrorData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ErrorData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LootLockerResponse.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerResponse>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerResponse_Statics::NewProp_success_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "Comment", "// Whether this request was a success\n" },
		{ "ModuleRelativePath", "Public/LootLockerResponse.h" },
		{ "ToolTip", "Whether this request was a success" },
	};
#endif
	void Z_Construct_UScriptStruct_FLootLockerResponse_Statics::NewProp_success_SetBit(void* Obj)
	{
		((FLootLockerResponse*)Obj)->success = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLootLockerResponse_Statics::NewProp_success = { "success", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLootLockerResponse), &Z_Construct_UScriptStruct_FLootLockerResponse_Statics::NewProp_success_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerResponse_Statics::NewProp_success_MetaData), Z_Construct_UScriptStruct_FLootLockerResponse_Statics::NewProp_success_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerResponse_Statics::NewProp_StatusCode_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "Comment", "// HTTP Status code from the request to LootLockers backend \n" },
		{ "ModuleRelativePath", "Public/LootLockerResponse.h" },
		{ "ToolTip", "HTTP Status code from the request to LootLockers backend" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLootLockerResponse_Statics::NewProp_StatusCode = { "StatusCode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerResponse, StatusCode), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerResponse_Statics::NewProp_StatusCode_MetaData), Z_Construct_UScriptStruct_FLootLockerResponse_Statics::NewProp_StatusCode_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerResponse_Statics::NewProp_FullTextFromServer_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "Comment", "// Raw text/http body from the server response\n" },
		{ "ModuleRelativePath", "Public/LootLockerResponse.h" },
		{ "ToolTip", "Raw text/http body from the server response" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerResponse_Statics::NewProp_FullTextFromServer = { "FullTextFromServer", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerResponse, FullTextFromServer), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerResponse_Statics::NewProp_FullTextFromServer_MetaData), Z_Construct_UScriptStruct_FLootLockerResponse_Statics::NewProp_FullTextFromServer_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerResponse_Statics::NewProp_ErrorData_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "Comment", "// If this request was not a success, this structure holds all the information needed to identify the problem\n" },
		{ "ModuleRelativePath", "Public/LootLockerResponse.h" },
		{ "ToolTip", "If this request was not a success, this structure holds all the information needed to identify the problem" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLootLockerResponse_Statics::NewProp_ErrorData = { "ErrorData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerResponse, ErrorData), Z_Construct_UScriptStruct_FLootLockerErrorData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerResponse_Statics::NewProp_ErrorData_MetaData), Z_Construct_UScriptStruct_FLootLockerResponse_Statics::NewProp_ErrorData_MetaData) }; // 1350928901
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerResponse_Statics::NewProp_success,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerResponse_Statics::NewProp_StatusCode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerResponse_Statics::NewProp_FullTextFromServer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerResponse_Statics::NewProp_ErrorData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		&NewStructOps,
		"LootLockerResponse",
		Z_Construct_UScriptStruct_FLootLockerResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerResponse_Statics::PropPointers),
		sizeof(FLootLockerResponse),
		alignof(FLootLockerResponse),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerResponse_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerResponse_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerResponse.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerResponse.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerDefaultResponseBP__DelegateSignature_Statics
	{
		struct _Script_LootLockerSDK_eventLootLockerDefaultResponseBP_Parms
		{
			FLootLockerResponse Var;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Var;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerDefaultResponseBP__DelegateSignature_Statics::NewProp_Var = { "Var", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LootLockerSDK_eventLootLockerDefaultResponseBP_Parms, Var), Z_Construct_UScriptStruct_FLootLockerResponse, METADATA_PARAMS(0, nullptr) }; // 3548478338
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerDefaultResponseBP__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerDefaultResponseBP__DelegateSignature_Statics::NewProp_Var,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerDefaultResponseBP__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LootLockerResponse.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerDefaultResponseBP__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LootLockerSDK, nullptr, "LootLockerDefaultResponseBP__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerDefaultResponseBP__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerDefaultResponseBP__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerDefaultResponseBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventLootLockerDefaultResponseBP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerDefaultResponseBP__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerDefaultResponseBP__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerDefaultResponseBP__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerDefaultResponseBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventLootLockerDefaultResponseBP_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerDefaultResponseBP__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerDefaultResponseBP__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FLootLockerDefaultResponseBP_DelegateWrapper(const FScriptDelegate& LootLockerDefaultResponseBP, FLootLockerResponse Var)
{
	struct _Script_LootLockerSDK_eventLootLockerDefaultResponseBP_Parms
	{
		FLootLockerResponse Var;
	};
	_Script_LootLockerSDK_eventLootLockerDefaultResponseBP_Parms Parms;
	Parms.Var=Var;
	LootLockerDefaultResponseBP.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_LootLockerSDK_ResponseCallbackBP__DelegateSignature_Statics
	{
		struct _Script_LootLockerSDK_eventResponseCallbackBP_Parms
		{
			FLootLockerResponse Response;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Response;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_LootLockerSDK_ResponseCallbackBP__DelegateSignature_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LootLockerSDK_eventResponseCallbackBP_Parms, Response), Z_Construct_UScriptStruct_FLootLockerResponse, METADATA_PARAMS(0, nullptr) }; // 3548478338
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LootLockerSDK_ResponseCallbackBP__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LootLockerSDK_ResponseCallbackBP__DelegateSignature_Statics::NewProp_Response,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LootLockerSDK_ResponseCallbackBP__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LootLockerResponse.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LootLockerSDK_ResponseCallbackBP__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LootLockerSDK, nullptr, "ResponseCallbackBP__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_LootLockerSDK_ResponseCallbackBP__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_ResponseCallbackBP__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_ResponseCallbackBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventResponseCallbackBP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_ResponseCallbackBP__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LootLockerSDK_ResponseCallbackBP__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_ResponseCallbackBP__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_ResponseCallbackBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventResponseCallbackBP_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_ResponseCallbackBP__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LootLockerSDK_ResponseCallbackBP__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FResponseCallbackBP_DelegateWrapper(const FScriptDelegate& ResponseCallbackBP, FLootLockerResponse Response)
{
	struct _Script_LootLockerSDK_eventResponseCallbackBP_Parms
	{
		FLootLockerResponse Response;
	};
	_Script_LootLockerSDK_eventResponseCallbackBP_Parms Parms;
	Parms.Response=Response;
	ResponseCallbackBP.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerResponseCallback__DelegateSignature_Statics
	{
		struct _Script_LootLockerSDK_eventLootLockerResponseCallback_Parms
		{
			FLootLockerResponse Response;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Response;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerResponseCallback__DelegateSignature_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LootLockerSDK_eventLootLockerResponseCallback_Parms, Response), Z_Construct_UScriptStruct_FLootLockerResponse, METADATA_PARAMS(0, nullptr) }; // 3548478338
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerResponseCallback__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerResponseCallback__DelegateSignature_Statics::NewProp_Response,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerResponseCallback__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LootLockerResponse.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerResponseCallback__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LootLockerSDK, nullptr, "LootLockerResponseCallback__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerResponseCallback__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerResponseCallback__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerResponseCallback__DelegateSignature_Statics::_Script_LootLockerSDK_eventLootLockerResponseCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerResponseCallback__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerResponseCallback__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerResponseCallback__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerResponseCallback__DelegateSignature_Statics::_Script_LootLockerSDK_eventLootLockerResponseCallback_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerResponseCallback__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerResponseCallback__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FLootLockerResponseCallback_DelegateWrapper(const FScriptDelegate& LootLockerResponseCallback, FLootLockerResponse Response)
{
	struct _Script_LootLockerSDK_eventLootLockerResponseCallback_Parms
	{
		FLootLockerResponse Response;
	};
	_Script_LootLockerSDK_eventLootLockerResponseCallback_Parms Parms;
	Parms.Response=Response;
	LootLockerResponseCallback.ProcessDelegate<UObject>(&Parms);
}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerKeyBasedPagination;
class UScriptStruct* FLootLockerKeyBasedPagination::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerKeyBasedPagination.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerKeyBasedPagination.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerKeyBasedPagination, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerKeyBasedPagination"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerKeyBasedPagination.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerKeyBasedPagination>()
{
	return FLootLockerKeyBasedPagination::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerKeyBasedPagination_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Total_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Total;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Next_Cursor_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Next_Cursor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Previous_Cursor_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Previous_Cursor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerKeyBasedPagination_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LootLockerResponse.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerKeyBasedPagination_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerKeyBasedPagination>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerKeyBasedPagination_Statics::NewProp_Total_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/LootLockerResponse.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLootLockerKeyBasedPagination_Statics::NewProp_Total = { "Total", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerKeyBasedPagination, Total), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerKeyBasedPagination_Statics::NewProp_Total_MetaData), Z_Construct_UScriptStruct_FLootLockerKeyBasedPagination_Statics::NewProp_Total_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerKeyBasedPagination_Statics::NewProp_Next_Cursor_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/LootLockerResponse.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerKeyBasedPagination_Statics::NewProp_Next_Cursor = { "Next_Cursor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerKeyBasedPagination, Next_Cursor), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerKeyBasedPagination_Statics::NewProp_Next_Cursor_MetaData), Z_Construct_UScriptStruct_FLootLockerKeyBasedPagination_Statics::NewProp_Next_Cursor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerKeyBasedPagination_Statics::NewProp_Previous_Cursor_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/LootLockerResponse.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerKeyBasedPagination_Statics::NewProp_Previous_Cursor = { "Previous_Cursor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerKeyBasedPagination, Previous_Cursor), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerKeyBasedPagination_Statics::NewProp_Previous_Cursor_MetaData), Z_Construct_UScriptStruct_FLootLockerKeyBasedPagination_Statics::NewProp_Previous_Cursor_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerKeyBasedPagination_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerKeyBasedPagination_Statics::NewProp_Total,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerKeyBasedPagination_Statics::NewProp_Next_Cursor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerKeyBasedPagination_Statics::NewProp_Previous_Cursor,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerKeyBasedPagination_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		&NewStructOps,
		"LootLockerKeyBasedPagination",
		Z_Construct_UScriptStruct_FLootLockerKeyBasedPagination_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerKeyBasedPagination_Statics::PropPointers),
		sizeof(FLootLockerKeyBasedPagination),
		alignof(FLootLockerKeyBasedPagination),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerKeyBasedPagination_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerKeyBasedPagination_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerKeyBasedPagination_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerKeyBasedPagination()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerKeyBasedPagination.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerKeyBasedPagination.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerKeyBasedPagination_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerKeyBasedPagination.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerIndexBasedPagination;
class UScriptStruct* FLootLockerIndexBasedPagination::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerIndexBasedPagination.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerIndexBasedPagination.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerIndexBasedPagination, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerIndexBasedPagination"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerIndexBasedPagination.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerIndexBasedPagination>()
{
	return FLootLockerIndexBasedPagination::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerIndexBasedPagination_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Total_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Total;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Next_Cursor_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Next_Cursor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Previous_Cursor_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Previous_Cursor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerIndexBasedPagination_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LootLockerResponse.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerIndexBasedPagination_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerIndexBasedPagination>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerIndexBasedPagination_Statics::NewProp_Total_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/LootLockerResponse.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLootLockerIndexBasedPagination_Statics::NewProp_Total = { "Total", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerIndexBasedPagination, Total), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerIndexBasedPagination_Statics::NewProp_Total_MetaData), Z_Construct_UScriptStruct_FLootLockerIndexBasedPagination_Statics::NewProp_Total_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerIndexBasedPagination_Statics::NewProp_Next_Cursor_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/LootLockerResponse.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLootLockerIndexBasedPagination_Statics::NewProp_Next_Cursor = { "Next_Cursor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerIndexBasedPagination, Next_Cursor), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerIndexBasedPagination_Statics::NewProp_Next_Cursor_MetaData), Z_Construct_UScriptStruct_FLootLockerIndexBasedPagination_Statics::NewProp_Next_Cursor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerIndexBasedPagination_Statics::NewProp_Previous_Cursor_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/LootLockerResponse.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLootLockerIndexBasedPagination_Statics::NewProp_Previous_Cursor = { "Previous_Cursor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerIndexBasedPagination, Previous_Cursor), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerIndexBasedPagination_Statics::NewProp_Previous_Cursor_MetaData), Z_Construct_UScriptStruct_FLootLockerIndexBasedPagination_Statics::NewProp_Previous_Cursor_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerIndexBasedPagination_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerIndexBasedPagination_Statics::NewProp_Total,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerIndexBasedPagination_Statics::NewProp_Next_Cursor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerIndexBasedPagination_Statics::NewProp_Previous_Cursor,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerIndexBasedPagination_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		&NewStructOps,
		"LootLockerIndexBasedPagination",
		Z_Construct_UScriptStruct_FLootLockerIndexBasedPagination_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerIndexBasedPagination_Statics::PropPointers),
		sizeof(FLootLockerIndexBasedPagination),
		alignof(FLootLockerIndexBasedPagination),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerIndexBasedPagination_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerIndexBasedPagination_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerIndexBasedPagination_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerIndexBasedPagination()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerIndexBasedPagination.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerIndexBasedPagination.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerIndexBasedPagination_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerIndexBasedPagination.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_LootLockerResponse_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_LootLockerResponse_h_Statics::ScriptStructInfo[] = {
		{ FLootLockerErrorData::StaticStruct, Z_Construct_UScriptStruct_FLootLockerErrorData_Statics::NewStructOps, TEXT("LootLockerErrorData"), &Z_Registration_Info_UScriptStruct_LootLockerErrorData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerErrorData), 1350928901U) },
		{ FLootLockerResponse::StaticStruct, Z_Construct_UScriptStruct_FLootLockerResponse_Statics::NewStructOps, TEXT("LootLockerResponse"), &Z_Registration_Info_UScriptStruct_LootLockerResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerResponse), 3548478338U) },
		{ FLootLockerKeyBasedPagination::StaticStruct, Z_Construct_UScriptStruct_FLootLockerKeyBasedPagination_Statics::NewStructOps, TEXT("LootLockerKeyBasedPagination"), &Z_Registration_Info_UScriptStruct_LootLockerKeyBasedPagination, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerKeyBasedPagination), 1245497498U) },
		{ FLootLockerIndexBasedPagination::StaticStruct, Z_Construct_UScriptStruct_FLootLockerIndexBasedPagination_Statics::NewStructOps, TEXT("LootLockerIndexBasedPagination"), &Z_Registration_Info_UScriptStruct_LootLockerIndexBasedPagination, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerIndexBasedPagination), 3662474707U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_LootLockerResponse_h_715022278(TEXT("/Script/LootLockerSDK"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_LootLockerResponse_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_LootLockerResponse_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
