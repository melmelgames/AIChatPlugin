// Copyright Epic Games, Inc. All Rights Reserved.

#include "AIChatPluginBPLibrary.h"
#include "AIChatPlugin.h"
#include "HttpModule.h"
#include "Interfaces/IHttpRequest.h"
#include "Interfaces/IHttpResponse.h"
#include "Json.h"
#include "HAL/PlatformFileManager.h"
#include "Misc/FileHelper.h"
#include "Serialization/JsonSerializer.h"

void UAIChatPluginBPLibrary::SendMessageToAI(FString ModelName, FString Prompt)
{
    FString uriGenerateResponse = TEXT("http://localhost:11434/api/generate");

    FHttpModule& httpModule = FHttpModule::Get();

    // Create an http request
    TSharedRef<IHttpRequest, ESPMode::ThreadSafe> pRequest = httpModule.CreateRequest();

    // Set HTTP method
    pRequest->SetVerb(TEXT("POST"));

    // We'll need to tell the server what type of content to expect in the POST data
    pRequest->SetHeader(TEXT("Content-Type"), TEXT("application/x-www-form-urlencoded"));

    FString ManualRequest = TEXT("{\"model\": \"") + ModelName + TEXT("\", \"prompt\": \"") + Prompt + TEXT("\", \"stream\": false}");
    UE_LOG(LogTemp, Error, TEXT(" {  \"JSON Request\" : % s }"), *ManualRequest);
    pRequest->SetContentAsString(ManualRequest);

    // Set the HTTP url
    pRequest->SetURL(uriGenerateResponse);

    // Set the callback, which will execute when the HTTP call is complete

    pRequest->OnProcessRequestComplete().BindLambda(
        // Here, we "capture" the 'this' pointer (the "&"), so our lambda can call this
       // class's methods in the callback.
        [&](
            FHttpRequestPtr pRequest,
            FHttpResponsePtr pResponse,
            bool connectedSuccessfully) mutable {

                if (connectedSuccessfully) {

                    // We should have a JSON response - attempt to process it.
                    FString Response = pResponse->GetContentAsString();
                    ProcessMessageFromAI(Response);
                }
                else {
                    switch (pRequest->GetStatus()) {
                    case EHttpRequestStatus::Failed_ConnectionError:
                        UE_LOG(LogTemp, Error, TEXT("Connection failed."));
                    default:
                        UE_LOG(LogTemp, Error, TEXT("Request failed."));
                    }
                }
        });

    // Finally, submit the request for processing
    pRequest->ProcessRequest();
}
FString UAIChatPluginBPLibrary::ReceiveMessageFromAI()
{
    FString JsonFilePath = TEXT("C:/Temp/reply.json");
    bool bOutSuccess;
    FString OutMessage;
    TSharedPtr<FJsonObject> JsonReply = ReadJson(JsonFilePath, bOutSuccess, OutMessage);
    // Try to read file
    FString JsonString = ReadStringFromFile(JsonFilePath, bOutSuccess, OutMessage);

    TSharedRef<TJsonReader<TCHAR>> JsonReader = TJsonReaderFactory<TCHAR>::Create(JsonString);
    if (FJsonSerializer::Deserialize(JsonReader, JsonReply))
    {
        FString ShortResponse = JsonReply->GetStringField("response");
        return ShortResponse;
    }
    return FString();
}

void UAIChatPluginBPLibrary::ProcessMessageFromAI(FString Response)
{
    // Validate http called us back on the Game Thread...
    check(IsInGameThread());

    TSharedPtr<FJsonObject> JsonParsed;
    TSharedRef<TJsonReader<TCHAR>> JsonReader = TJsonReaderFactory<TCHAR>::Create(Response);
    if (FJsonSerializer::Deserialize(JsonReader, JsonParsed))
    {
        FString ShortResponse = JsonParsed->GetStringField("response");
        UE_LOG(LogTemp, Error, TEXT("Response: %s"), *ShortResponse);
        FString JsonFilePath = TEXT("C:/Temp/reply.json");
        bool bOutSuccess;
        FString OutMessage;
        WriteJson(JsonFilePath, JsonParsed, bOutSuccess, OutMessage);
    }
}

FString UAIChatPluginBPLibrary::ReadStringFromFile(FString FilePath, bool& bOutSuccess, FString& OutInfoMessage)
{
    // Check if file exists
    if (!FPlatformFileManager::Get().GetPlatformFile().FileExists(*FilePath))
    {
        bOutSuccess = false;
        OutInfoMessage = FString::Printf(TEXT("Read String From File Failed - File does not exist - '%s'"), *FilePath);
        return FString();
    }

    FString ReturnString = FString();
    //Try to read the file. Output goes in ReturnString
    if (!FFileHelper::LoadFileToString(ReturnString, *FilePath))
    {
        bOutSuccess = false;
        OutInfoMessage = FString::Printf(TEXT("Read String From File Failed - Was Not Able To Read File - '%s'"), *FilePath);
        return FString();
    }

    bOutSuccess = true;
    OutInfoMessage = FString::Printf(TEXT("Read String From File Succeeded - '%s'"), *FilePath);
    return ReturnString;
}

void UAIChatPluginBPLibrary::WriteStringToFile(FString FilePath, FString String, bool& bOutSuccess, FString& OutInfoMessage)
{
    // Try to write the string into the file
    if (!FFileHelper::SaveStringToFile(String, *FilePath))
    {
        bOutSuccess = false;
        OutInfoMessage = FString::Printf(TEXT("Write String From File Failed - '%s'"), *FilePath);
        return;
    }
    bOutSuccess = true;
    OutInfoMessage = FString::Printf(TEXT("Write String From File Succeeded - '%s'"), *FilePath);
}

TSharedPtr<FJsonObject> UAIChatPluginBPLibrary::ReadJson(FString JsonFilePath, bool& bOutSuccess, FString& OutInfoMessage)
{
    // Try to read file
    FString JsonString = ReadStringFromFile(JsonFilePath, bOutSuccess, OutInfoMessage);
    if (!bOutSuccess)
    {
        return nullptr;
    }

    TSharedPtr<FJsonObject> ReturnJsonObject;

    // Try to convert string to Json object. Output goes into ReturnJsonObject
    if (!FJsonSerializer::Deserialize(TJsonReaderFactory<>::Create(JsonString), ReturnJsonObject))
    {
        bOutSuccess = false;
        OutInfoMessage = FString::Printf(TEXT("Read Json failed - Was not able to Deserialize - '%s'"), *JsonFilePath);
        return nullptr;
    }

    bOutSuccess = true;
    OutInfoMessage = FString::Printf(TEXT("Read Json succeeded - '%s'"), *JsonFilePath);
    return ReturnJsonObject;
}

void UAIChatPluginBPLibrary::WriteJson(FString JsonFilePath, TSharedPtr<FJsonObject> JsonObject, bool& bOutSuccess, FString& OutInfoMessage)
{
    FString JsonString;

    // Try to convert json object to string. Output goes into JsonString
    if (!FJsonSerializer::Serialize(JsonObject.ToSharedRef(), TJsonWriterFactory<>::Create(&JsonString, 0)))
    {
        bOutSuccess = false;
        OutInfoMessage = FString::Printf(TEXT("Write Json failed - Was not able to serialize - '%s'"), *JsonFilePath);
        return;
    }

    // Try to write json string to file
    WriteStringToFile(JsonFilePath, JsonString, bOutSuccess, OutInfoMessage);
    if (!bOutSuccess)
    {
        return;
    }
    bOutSuccess = true;
    OutInfoMessage = FString::Printf(TEXT("Write Json succeeded - '%s'"), *JsonFilePath);
}
