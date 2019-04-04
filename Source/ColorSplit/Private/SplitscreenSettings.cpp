// Fill out your copyright notice in the Description page of Project Settings.

#include "SplitscreenSettings.h"


// Sets default values
ASplitscreenSettings::ASplitscreenSettings()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASplitscreenSettings::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASplitscreenSettings::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ASplitscreenSettings::DisableSplitScreen(AActor* Context)
{
	if (Context)
	{
		//isSplitScreenDisable = disable;
		Context->GetWorld()->GetGameViewport()->SetDisableSplitscreenOverride(true);
		//Context->GetWorld()->GetGameViewport();
	}
}

void ASplitscreenSettings::EnableSplitScreen(AActor* Context)
{
	if (Context)
	{
		//isSplitScreenDisable = disable;
		Context->GetWorld()->GetGameViewport()->SetDisableSplitscreenOverride(false);
		//Context->GetWorld()->GetGameViewport();
	}
}