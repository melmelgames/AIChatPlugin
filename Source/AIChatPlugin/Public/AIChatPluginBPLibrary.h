// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "AIChatPluginBPLibrary.generated.h"

class FJsonObject;

UCLASS()
class UAIChatPluginBPLibrary : public UBlueprintFunctionLibrary
{
	
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable, Category = "AI Chatter")
	static void SendMessageToAI(FString ModelName, FString Prompt);

	UFUNCTION(BlueprintCallable, Category = "AI Chatter")
	static FString ReceiveMessageFromAI();

	static void ProcessMessageFromAI(FString Response);

	UFUNCTION(BlueprintCallable, Category = "AI Chatter")
	static FString ReadStringFromFile(FString FilePath, bool& bOutSuccess, FString& OutInfoMessage);

	UFUNCTION(BlueprintCallable, Category = "AI Chatter")
	static void WriteStringToFile(FString FilePath, FString String, bool& bOutSuccess, FString& OutInfoMessage);

	static TSharedPtr<FJsonObject> ReadJson(FString JsonFilePath, bool& bOutSuccess, FString& OutInfoMessage);

	static void WriteJson(FString JsonFilePath, TSharedPtr<FJsonObject> JsonObject, bool& bOutSuccess, FString& OutInfoMessage);
};