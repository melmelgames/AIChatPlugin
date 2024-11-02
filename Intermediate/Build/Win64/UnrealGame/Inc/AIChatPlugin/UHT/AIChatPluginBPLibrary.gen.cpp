// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIChatPlugin/Public/AIChatPluginBPLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIChatPluginBPLibrary() {}

// Begin Cross Module References
AICHATPLUGIN_API UClass* Z_Construct_UClass_UAIChatPluginBPLibrary();
AICHATPLUGIN_API UClass* Z_Construct_UClass_UAIChatPluginBPLibrary_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
UPackage* Z_Construct_UPackage__Script_AIChatPlugin();
// End Cross Module References

// Begin Class UAIChatPluginBPLibrary Function ReadStringFromFile
struct Z_Construct_UFunction_UAIChatPluginBPLibrary_ReadStringFromFile_Statics
{
	struct AIChatPluginBPLibrary_eventReadStringFromFile_Parms
	{
		FString FilePath;
		bool bOutSuccess;
		FString OutInfoMessage;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI Chatter" },
		{ "ModuleRelativePath", "Public/AIChatPluginBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FilePath;
	static void NewProp_bOutSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOutSuccess;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutInfoMessage;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAIChatPluginBPLibrary_ReadStringFromFile_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIChatPluginBPLibrary_eventReadStringFromFile_Parms, FilePath), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAIChatPluginBPLibrary_ReadStringFromFile_Statics::NewProp_bOutSuccess_SetBit(void* Obj)
{
	((AIChatPluginBPLibrary_eventReadStringFromFile_Parms*)Obj)->bOutSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAIChatPluginBPLibrary_ReadStringFromFile_Statics::NewProp_bOutSuccess = { "bOutSuccess", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AIChatPluginBPLibrary_eventReadStringFromFile_Parms), &Z_Construct_UFunction_UAIChatPluginBPLibrary_ReadStringFromFile_Statics::NewProp_bOutSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAIChatPluginBPLibrary_ReadStringFromFile_Statics::NewProp_OutInfoMessage = { "OutInfoMessage", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIChatPluginBPLibrary_eventReadStringFromFile_Parms, OutInfoMessage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAIChatPluginBPLibrary_ReadStringFromFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIChatPluginBPLibrary_eventReadStringFromFile_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIChatPluginBPLibrary_ReadStringFromFile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIChatPluginBPLibrary_ReadStringFromFile_Statics::NewProp_FilePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIChatPluginBPLibrary_ReadStringFromFile_Statics::NewProp_bOutSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIChatPluginBPLibrary_ReadStringFromFile_Statics::NewProp_OutInfoMessage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIChatPluginBPLibrary_ReadStringFromFile_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIChatPluginBPLibrary_ReadStringFromFile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIChatPluginBPLibrary_ReadStringFromFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIChatPluginBPLibrary, nullptr, "ReadStringFromFile", nullptr, nullptr, Z_Construct_UFunction_UAIChatPluginBPLibrary_ReadStringFromFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIChatPluginBPLibrary_ReadStringFromFile_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAIChatPluginBPLibrary_ReadStringFromFile_Statics::AIChatPluginBPLibrary_eventReadStringFromFile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIChatPluginBPLibrary_ReadStringFromFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAIChatPluginBPLibrary_ReadStringFromFile_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAIChatPluginBPLibrary_ReadStringFromFile_Statics::AIChatPluginBPLibrary_eventReadStringFromFile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAIChatPluginBPLibrary_ReadStringFromFile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAIChatPluginBPLibrary_ReadStringFromFile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAIChatPluginBPLibrary::execReadStringFromFile)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FilePath);
	P_GET_UBOOL_REF(Z_Param_Out_bOutSuccess);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutInfoMessage);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UAIChatPluginBPLibrary::ReadStringFromFile(Z_Param_FilePath,Z_Param_Out_bOutSuccess,Z_Param_Out_OutInfoMessage);
	P_NATIVE_END;
}
// End Class UAIChatPluginBPLibrary Function ReadStringFromFile

// Begin Class UAIChatPluginBPLibrary Function ReceiveMessageFromAI
struct Z_Construct_UFunction_UAIChatPluginBPLibrary_ReceiveMessageFromAI_Statics
{
	struct AIChatPluginBPLibrary_eventReceiveMessageFromAI_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI Chatter" },
		{ "ModuleRelativePath", "Public/AIChatPluginBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAIChatPluginBPLibrary_ReceiveMessageFromAI_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIChatPluginBPLibrary_eventReceiveMessageFromAI_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIChatPluginBPLibrary_ReceiveMessageFromAI_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIChatPluginBPLibrary_ReceiveMessageFromAI_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIChatPluginBPLibrary_ReceiveMessageFromAI_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIChatPluginBPLibrary_ReceiveMessageFromAI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIChatPluginBPLibrary, nullptr, "ReceiveMessageFromAI", nullptr, nullptr, Z_Construct_UFunction_UAIChatPluginBPLibrary_ReceiveMessageFromAI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIChatPluginBPLibrary_ReceiveMessageFromAI_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAIChatPluginBPLibrary_ReceiveMessageFromAI_Statics::AIChatPluginBPLibrary_eventReceiveMessageFromAI_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIChatPluginBPLibrary_ReceiveMessageFromAI_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAIChatPluginBPLibrary_ReceiveMessageFromAI_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAIChatPluginBPLibrary_ReceiveMessageFromAI_Statics::AIChatPluginBPLibrary_eventReceiveMessageFromAI_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAIChatPluginBPLibrary_ReceiveMessageFromAI()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAIChatPluginBPLibrary_ReceiveMessageFromAI_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAIChatPluginBPLibrary::execReceiveMessageFromAI)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UAIChatPluginBPLibrary::ReceiveMessageFromAI();
	P_NATIVE_END;
}
// End Class UAIChatPluginBPLibrary Function ReceiveMessageFromAI

// Begin Class UAIChatPluginBPLibrary Function SendMessageToAI
struct Z_Construct_UFunction_UAIChatPluginBPLibrary_SendMessageToAI_Statics
{
	struct AIChatPluginBPLibrary_eventSendMessageToAI_Parms
	{
		FString ModelName;
		FString Prompt;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI Chatter" },
		{ "ModuleRelativePath", "Public/AIChatPluginBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ModelName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Prompt;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAIChatPluginBPLibrary_SendMessageToAI_Statics::NewProp_ModelName = { "ModelName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIChatPluginBPLibrary_eventSendMessageToAI_Parms, ModelName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAIChatPluginBPLibrary_SendMessageToAI_Statics::NewProp_Prompt = { "Prompt", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIChatPluginBPLibrary_eventSendMessageToAI_Parms, Prompt), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIChatPluginBPLibrary_SendMessageToAI_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIChatPluginBPLibrary_SendMessageToAI_Statics::NewProp_ModelName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIChatPluginBPLibrary_SendMessageToAI_Statics::NewProp_Prompt,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIChatPluginBPLibrary_SendMessageToAI_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIChatPluginBPLibrary_SendMessageToAI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIChatPluginBPLibrary, nullptr, "SendMessageToAI", nullptr, nullptr, Z_Construct_UFunction_UAIChatPluginBPLibrary_SendMessageToAI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIChatPluginBPLibrary_SendMessageToAI_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAIChatPluginBPLibrary_SendMessageToAI_Statics::AIChatPluginBPLibrary_eventSendMessageToAI_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIChatPluginBPLibrary_SendMessageToAI_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAIChatPluginBPLibrary_SendMessageToAI_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAIChatPluginBPLibrary_SendMessageToAI_Statics::AIChatPluginBPLibrary_eventSendMessageToAI_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAIChatPluginBPLibrary_SendMessageToAI()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAIChatPluginBPLibrary_SendMessageToAI_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAIChatPluginBPLibrary::execSendMessageToAI)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_ModelName);
	P_GET_PROPERTY(FStrProperty,Z_Param_Prompt);
	P_FINISH;
	P_NATIVE_BEGIN;
	UAIChatPluginBPLibrary::SendMessageToAI(Z_Param_ModelName,Z_Param_Prompt);
	P_NATIVE_END;
}
// End Class UAIChatPluginBPLibrary Function SendMessageToAI

// Begin Class UAIChatPluginBPLibrary Function WriteStringToFile
struct Z_Construct_UFunction_UAIChatPluginBPLibrary_WriteStringToFile_Statics
{
	struct AIChatPluginBPLibrary_eventWriteStringToFile_Parms
	{
		FString FilePath;
		FString String;
		bool bOutSuccess;
		FString OutInfoMessage;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI Chatter" },
		{ "ModuleRelativePath", "Public/AIChatPluginBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FilePath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_String;
	static void NewProp_bOutSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOutSuccess;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutInfoMessage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAIChatPluginBPLibrary_WriteStringToFile_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIChatPluginBPLibrary_eventWriteStringToFile_Parms, FilePath), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAIChatPluginBPLibrary_WriteStringToFile_Statics::NewProp_String = { "String", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIChatPluginBPLibrary_eventWriteStringToFile_Parms, String), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAIChatPluginBPLibrary_WriteStringToFile_Statics::NewProp_bOutSuccess_SetBit(void* Obj)
{
	((AIChatPluginBPLibrary_eventWriteStringToFile_Parms*)Obj)->bOutSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAIChatPluginBPLibrary_WriteStringToFile_Statics::NewProp_bOutSuccess = { "bOutSuccess", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AIChatPluginBPLibrary_eventWriteStringToFile_Parms), &Z_Construct_UFunction_UAIChatPluginBPLibrary_WriteStringToFile_Statics::NewProp_bOutSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAIChatPluginBPLibrary_WriteStringToFile_Statics::NewProp_OutInfoMessage = { "OutInfoMessage", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIChatPluginBPLibrary_eventWriteStringToFile_Parms, OutInfoMessage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIChatPluginBPLibrary_WriteStringToFile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIChatPluginBPLibrary_WriteStringToFile_Statics::NewProp_FilePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIChatPluginBPLibrary_WriteStringToFile_Statics::NewProp_String,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIChatPluginBPLibrary_WriteStringToFile_Statics::NewProp_bOutSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIChatPluginBPLibrary_WriteStringToFile_Statics::NewProp_OutInfoMessage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIChatPluginBPLibrary_WriteStringToFile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIChatPluginBPLibrary_WriteStringToFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIChatPluginBPLibrary, nullptr, "WriteStringToFile", nullptr, nullptr, Z_Construct_UFunction_UAIChatPluginBPLibrary_WriteStringToFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIChatPluginBPLibrary_WriteStringToFile_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAIChatPluginBPLibrary_WriteStringToFile_Statics::AIChatPluginBPLibrary_eventWriteStringToFile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIChatPluginBPLibrary_WriteStringToFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAIChatPluginBPLibrary_WriteStringToFile_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAIChatPluginBPLibrary_WriteStringToFile_Statics::AIChatPluginBPLibrary_eventWriteStringToFile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAIChatPluginBPLibrary_WriteStringToFile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAIChatPluginBPLibrary_WriteStringToFile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAIChatPluginBPLibrary::execWriteStringToFile)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FilePath);
	P_GET_PROPERTY(FStrProperty,Z_Param_String);
	P_GET_UBOOL_REF(Z_Param_Out_bOutSuccess);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutInfoMessage);
	P_FINISH;
	P_NATIVE_BEGIN;
	UAIChatPluginBPLibrary::WriteStringToFile(Z_Param_FilePath,Z_Param_String,Z_Param_Out_bOutSuccess,Z_Param_Out_OutInfoMessage);
	P_NATIVE_END;
}
// End Class UAIChatPluginBPLibrary Function WriteStringToFile

// Begin Class UAIChatPluginBPLibrary
void UAIChatPluginBPLibrary::StaticRegisterNativesUAIChatPluginBPLibrary()
{
	UClass* Class = UAIChatPluginBPLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ReadStringFromFile", &UAIChatPluginBPLibrary::execReadStringFromFile },
		{ "ReceiveMessageFromAI", &UAIChatPluginBPLibrary::execReceiveMessageFromAI },
		{ "SendMessageToAI", &UAIChatPluginBPLibrary::execSendMessageToAI },
		{ "WriteStringToFile", &UAIChatPluginBPLibrary::execWriteStringToFile },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAIChatPluginBPLibrary);
UClass* Z_Construct_UClass_UAIChatPluginBPLibrary_NoRegister()
{
	return UAIChatPluginBPLibrary::StaticClass();
}
struct Z_Construct_UClass_UAIChatPluginBPLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AIChatPluginBPLibrary.h" },
		{ "ModuleRelativePath", "Public/AIChatPluginBPLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAIChatPluginBPLibrary_ReadStringFromFile, "ReadStringFromFile" }, // 2492413163
		{ &Z_Construct_UFunction_UAIChatPluginBPLibrary_ReceiveMessageFromAI, "ReceiveMessageFromAI" }, // 4028700669
		{ &Z_Construct_UFunction_UAIChatPluginBPLibrary_SendMessageToAI, "SendMessageToAI" }, // 4139960385
		{ &Z_Construct_UFunction_UAIChatPluginBPLibrary_WriteStringToFile, "WriteStringToFile" }, // 959965527
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAIChatPluginBPLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAIChatPluginBPLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_AIChatPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAIChatPluginBPLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAIChatPluginBPLibrary_Statics::ClassParams = {
	&UAIChatPluginBPLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAIChatPluginBPLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UAIChatPluginBPLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAIChatPluginBPLibrary()
{
	if (!Z_Registration_Info_UClass_UAIChatPluginBPLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAIChatPluginBPLibrary.OuterSingleton, Z_Construct_UClass_UAIChatPluginBPLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAIChatPluginBPLibrary.OuterSingleton;
}
template<> AICHATPLUGIN_API UClass* StaticClass<UAIChatPluginBPLibrary>()
{
	return UAIChatPluginBPLibrary::StaticClass();
}
UAIChatPluginBPLibrary::UAIChatPluginBPLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAIChatPluginBPLibrary);
UAIChatPluginBPLibrary::~UAIChatPluginBPLibrary() {}
// End Class UAIChatPluginBPLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_melme_OneDrive_Documents_AIChatPlugin_AIChatPlugin_HostProject_Plugins_AIChatPlugin_Source_AIChatPlugin_Public_AIChatPluginBPLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAIChatPluginBPLibrary, UAIChatPluginBPLibrary::StaticClass, TEXT("UAIChatPluginBPLibrary"), &Z_Registration_Info_UClass_UAIChatPluginBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAIChatPluginBPLibrary), 3872744921U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_melme_OneDrive_Documents_AIChatPlugin_AIChatPlugin_HostProject_Plugins_AIChatPlugin_Source_AIChatPlugin_Public_AIChatPluginBPLibrary_h_4258293552(TEXT("/Script/AIChatPlugin"),
	Z_CompiledInDeferFile_FID_Users_melme_OneDrive_Documents_AIChatPlugin_AIChatPlugin_HostProject_Plugins_AIChatPlugin_Source_AIChatPlugin_Public_AIChatPluginBPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_melme_OneDrive_Documents_AIChatPlugin_AIChatPlugin_HostProject_Plugins_AIChatPlugin_Source_AIChatPlugin_Public_AIChatPluginBPLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
