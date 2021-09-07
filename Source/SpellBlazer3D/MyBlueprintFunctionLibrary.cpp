// Fill out your copyright notice in the Description page of Project Settings.


#include "MyBlueprintFunctionLibrary.h"

FString UMyBlueprintFunctionLibrary::HelloUnreal(int x, int y, int z)
{

	int foo = x * y * z;

	return (FString::Printf(TEXT("Firing C++, also %d * %d * %d = %d"), x, y, z, foo));
}

void UMyBlueprintFunctionLibrary::HelloCPlusPlus(UObject* blueprintActor)
{

	FOutputDeviceNull ar;

	blueprintActor->CallFunctionByNameWithArguments(TEXT("TestMethod"), ar, NULL, true);

}
