// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "FirstScript.generated.h"

UCLASS()
class STRINGOFFORCES_API AFirstScript : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AFirstScript();

	UFUNCTION(BlueprintCallable, Category="Abilities")
	void SpawnActor();

	UPROPERTY(EditAnywhere)
	TSubclassOf<AActor> ActorBPToSpawn;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
