// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "RecoilFunctionLibrary.generated.h"

/**
 * 
 */
UCLASS()
class ORGANIC_DUNGEON_V2_C_API URecoilFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
		/** Evaluates the value of a Runtime Float Curve using the given time. */
		UFUNCTION(BlueprintPure, Category = "Math|RuntimeFloatCurve")
			static float GetRuntimeFloatCurveValue(const FRuntimeFloatCurve& InCurve, float InTime);
};
