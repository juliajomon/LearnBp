// Fill out your copyright notice in the Description page of Project Settings.


#include "pawn_b/bird.h"

// Sets default values
Abird::Abird()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void Abird::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void Abird::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void Abird::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

