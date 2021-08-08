// Fill out your copyright notice in the Description page of Project Settings.


#include "MyBlueprintFunctionLibrary.h"

FString UMyBlueprintFunctionLibrary::HelloUnreal( int a, int b)
{

	int foo = a + b;

	return (FString::Printf(TEXT("Hello Unreal, also %d + %d = %d"), a, b, foo));
}

void UMyBlueprintFunctionLibrary::CallBluePrintBoardFunction()
{

	FOutputDeviceNull ar;
	const FString command = FString::Printf(TEXT("SetLifting true"));

	if (blueprintActor) {

		blueprintActor->CallFunctionByNameWithArguments(*command, ar, NULL, true);
	}
}
