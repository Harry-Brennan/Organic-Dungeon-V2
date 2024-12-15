// Fill out your copyright notice in the Description page of Project Settings.


#include "RecoilFunctionLibrary.h"

float URecoilFunctionLibrary::GetRuntimeFloatCurveValue(const FRuntimeFloatCurve& InCurve, float InTime)
{
	// Evaluate the curve
	return InCurve.GetRichCurveConst()->Eval(InTime);
}