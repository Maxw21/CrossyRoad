// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "DecideRow.generated.h"

/**
 * 
 */
UCLASS()
class CROSSYROAD_API UDecideRow : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

		UFUNCTION(BlueprintCallable, Category="DecideRow")
		static int DecideNumOfRows(int rowType, int currentRow);
};
