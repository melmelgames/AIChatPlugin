// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AIChatPluginBPLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AICHATPLUGIN_AIChatPluginBPLibrary_generated_h
#error "AIChatPluginBPLibrary.generated.h already included, missing '#pragma once' in AIChatPluginBPLibrary.h"
#endif
#define AICHATPLUGIN_AIChatPluginBPLibrary_generated_h

#define FID_Users_melme_OneDrive_Documents_AIChatPlugin_AIChatPlugin_HostProject_Plugins_AIChatPlugin_Source_AIChatPlugin_Public_AIChatPluginBPLibrary_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execWriteStringToFile); \
	DECLARE_FUNCTION(execReadStringFromFile); \
	DECLARE_FUNCTION(execReceiveMessageFromAI); \
	DECLARE_FUNCTION(execSendMessageToAI);


#define FID_Users_melme_OneDrive_Documents_AIChatPlugin_AIChatPlugin_HostProject_Plugins_AIChatPlugin_Source_AIChatPlugin_Public_AIChatPluginBPLibrary_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAIChatPluginBPLibrary(); \
	friend struct Z_Construct_UClass_UAIChatPluginBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UAIChatPluginBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AIChatPlugin"), NO_API) \
	DECLARE_SERIALIZER(UAIChatPluginBPLibrary)


#define FID_Users_melme_OneDrive_Documents_AIChatPlugin_AIChatPlugin_HostProject_Plugins_AIChatPlugin_Source_AIChatPlugin_Public_AIChatPluginBPLibrary_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAIChatPluginBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAIChatPluginBPLibrary(UAIChatPluginBPLibrary&&); \
	UAIChatPluginBPLibrary(const UAIChatPluginBPLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAIChatPluginBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAIChatPluginBPLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAIChatPluginBPLibrary) \
	NO_API virtual ~UAIChatPluginBPLibrary();


#define FID_Users_melme_OneDrive_Documents_AIChatPlugin_AIChatPlugin_HostProject_Plugins_AIChatPlugin_Source_AIChatPlugin_Public_AIChatPluginBPLibrary_h_10_PROLOG
#define FID_Users_melme_OneDrive_Documents_AIChatPlugin_AIChatPlugin_HostProject_Plugins_AIChatPlugin_Source_AIChatPlugin_Public_AIChatPluginBPLibrary_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_melme_OneDrive_Documents_AIChatPlugin_AIChatPlugin_HostProject_Plugins_AIChatPlugin_Source_AIChatPlugin_Public_AIChatPluginBPLibrary_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_melme_OneDrive_Documents_AIChatPlugin_AIChatPlugin_HostProject_Plugins_AIChatPlugin_Source_AIChatPlugin_Public_AIChatPluginBPLibrary_h_14_INCLASS_NO_PURE_DECLS \
	FID_Users_melme_OneDrive_Documents_AIChatPlugin_AIChatPlugin_HostProject_Plugins_AIChatPlugin_Source_AIChatPlugin_Public_AIChatPluginBPLibrary_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AICHATPLUGIN_API UClass* StaticClass<class UAIChatPluginBPLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_melme_OneDrive_Documents_AIChatPlugin_AIChatPlugin_HostProject_Plugins_AIChatPlugin_Source_AIChatPlugin_Public_AIChatPluginBPLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
