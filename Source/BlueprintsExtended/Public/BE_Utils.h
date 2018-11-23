// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BE_Utils.generated.h"

/**
 * 
 */
UCLASS()
class BLUEPRINTSEXTENDED_API UBE_Utils : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	UFUNCTION(BlueprintPure, meta = (DisplayName = "Get command line parameter value", Keywords = "utils file command line get"), Category = "Blueprints Extended Utilities")
	static bool GetCommandlineParamValue(FString paramName, FString &outString);

	UFUNCTION(BlueprintPure, meta = (DisplayName = "Wrap Number (integer)", Keywords = "wrap number integar int"), Category = "Blueprints Extended Utilities")
	static int WrapNumberInt(int value, int min, int max);

	UFUNCTION(BlueprintPure, meta = (DisplayName = "Wrap Number (float)", Keywords = "wrap number float"), Category = "Blueprints Extended Utilities")
	static int WrapNumberFloat(float value, float min, float max);
};
