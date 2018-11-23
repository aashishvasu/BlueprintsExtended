// Fill out your copyright notice in the Description page of Project Settings.

#include "BE_Utils.h"

#include "Runtime/Core/Public/Misc/CommandLine.h"

bool UBE_Utils::GetCommandlineParamValue(FString paramName, FString &outString)
{
	FString out;
	if (FParse::Value(FCommandLine::Get(), *paramName, out))
	{
		out = out.Replace(TEXT("="), TEXT("")).Replace(TEXT("\""), TEXT(""));
		outString = out;
		return true;
	}
	else
	{
		return false;
	}
}

int UBE_Utils::WrapNumberInt(int value, int min, int max)
{
	if(value < min)
	{
		return max;
	}
	else if(value > max)
	{
		return min;
	}
	else
	{
		return value;
	}
}

int UBE_Utils::WrapNumberFloat(float value, float min, float max)
{
	if (value < min)
	{
		return max;
	}
	else if (value > max)
	{
		return min;
	}
	else
	{
		return value;
	}
}
