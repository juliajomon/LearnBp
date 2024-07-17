// Fill out your copyright notice in the Description page of Project Settings.


#include "Bpawn/birds.h"
#include "Components/CapsuleComponent.h"
#include "Components/SkeletalMeshComponent.h"


// Sets default values
Abirds::Abirds()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Capsule = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Capsule"));
	SetRootComponent(Capsule);

	BirdMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("BirdMesh"));
	BirdMesh->SetupAttachment(GetRootComponent());

	AutoPossessPlayer = EAutoReceiveInput::Player0;
}

// Called when the game starts or when spawned
void Abirds::BeginPlay()
{
	Super::BeginPlay();
	
}

void Abirds::MoveForward(float Value)
{
	if ((Value != 0.f) && (Controller))
	{
		FVector Forward = GetActorForwardVector();
		AddMovementInput(Forward, Value);
	}
}

void Abirds::LookAround(float Value)
{
	AddControllerYawInput(Value);
}

void Abirds::Lookup(float Value)
{
	AddControllerPitchInput(Value);
}



// Called every frame
void Abirds::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void Abirds::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	
	PlayerInputComponent->BindAxis(TEXT("MoveForward"), this, &Abirds::MoveForward);
	PlayerInputComponent->BindAxis(TEXT("LookAround"), this, &Abirds::LookAround);
	PlayerInputComponent->BindAxis(TEXT("LookUp"), this, &Abirds::Lookup);

}

