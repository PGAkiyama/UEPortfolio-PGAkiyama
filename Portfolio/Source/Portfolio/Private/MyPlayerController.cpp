// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPlayerController.h"
#include "Blueprint/UserWidget.h"


void AMyPlayerController::BeginPlay()
{
	Super::BeginPlay();

	if (UIWidgetClass)
	{
		UIWidget = CreateWidget<UUserWidget>(this, UIWidgetClass);
	}

	if (UIWidget)
	{
		UIWidget->AddToViewport();
	}
}

