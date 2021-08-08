// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Misc/OutputDeviceNull.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "MyBlueprintFunctionLibrary.generated.h"

/**
 * 
 */
UCLASS()
class SPELLBLAZER3D_API UMyBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

		UFUNCTION(BlueprintCallable, Category = "MyCategory")
		static FString HelloUnreal(int a, int b);


	void CallBluePrintBoardFunction() ;


	UPROPERTY(EditAnywhere, Category = "BoardClass")
		AActor* blueprintBoardClass;

};
