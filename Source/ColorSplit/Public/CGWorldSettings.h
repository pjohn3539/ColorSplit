// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CGWorldSettings.generated.h"

UCLASS(Blueprintable)
class COLORSPLIT_API ACGWorldSettings : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACGWorldSettings();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable, Category = "splitscreen")
		static void DisableSplitScreen(AActor* Context);

	UFUNCTION(BlueprintCallable, Category = "splitscreen")
		static void EnableSplitScreen(AActor* Context);
	
};
