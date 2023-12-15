// Copyright Luis Infante / Matthew Labrada


#include "Character/RetributionAnimInstance.h"

#include "Character/RetributionCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"

void URetributionAnimInstance::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();

	RetributionCharacter = Cast<ARetributionCharacter>(TryGetPawnOwner());
}

void URetributionAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);

	if (!RetributionCharacter)
	{
		RetributionCharacter = Cast<ARetributionCharacter>(TryGetPawnOwner());
	}
	if (!RetributionCharacter) return;

	FVector Velocity = RetributionCharacter->GetVelocity();
	Velocity.Z = 0.f;
	Speed = Velocity.Size();

	bIsInAir = RetributionCharacter->GetCharacterMovement()->IsFalling();

	// true if size is > 0
	bIsAccelerating = RetributionCharacter->GetCharacterMovement()->GetCurrentAcceleration().Size() < 0 ? true : false; 
}
