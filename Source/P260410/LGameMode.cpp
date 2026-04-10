// Fill out your copyright notice in the Description page of Project Settings.


#include "LGameMode.h"
#include "MyPawn.h"
#include "LPlayerController.h"

ALGameMode::ALGameMode()
{
	UE_LOG(LogTemp, Warning, TEXT("LGameMode Create 한글"));

	DefaultPawnClass = AMyPawn::StaticClass();
	PlayerControllerClass = ALPlayerController::StaticClass();
}