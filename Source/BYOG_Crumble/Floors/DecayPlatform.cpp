// Fill out your copyright notice in the Description page of Project Settings.


#include "DecayPlatform.h"

// Sets default values
ADecayPlatform::ADecayPlatform()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ADecayPlatform::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADecayPlatform::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

