// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SplitscreenSettings.generated.h"

UCLASS()
class COLORSPLIT_API ASplitscreenSettings : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASplitscreenSettings();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable, Category = "splitscreenTest")
		static void DisableSplitScreen(AActor* Context);

	UFUNCTION(BlueprintCallable, Category = "splitscreenTest")
		static void EnableSplitScreen(AActor* Context);
	
};
