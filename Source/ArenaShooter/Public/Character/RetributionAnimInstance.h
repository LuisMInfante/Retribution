// Copyright Luis Infante / Matthew Labrada

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "RetributionAnimInstance.generated.h"

/*
 Anim Instance for Player Controller Character
*/

class ARetributionCharacter;
	
UCLASS()
class ARENASHOOTER_API URetributionAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

public:

	virtual void NativeInitializeAnimation() override;
	virtual void NativeUpdateAnimation(float DeltaSeconds) override;

private:

	UPROPERTY(BlueprintReadOnly, Category = "Character", meta = (AllowPrivateAccess = "true"))
	ARetributionCharacter* RetributionCharacter;

	UPROPERTY(BlueprintReadOnly, Category = "Character", meta = (AllowPrivateAccess = "true"))	
	float Speed;

	UPROPERTY(BlueprintReadOnly, Category = "Character", meta = (AllowPrivateAccess = "true"))	
	bool bIsInAir;

	UPROPERTY(BlueprintReadOnly, Category = "Character", meta = (AllowPrivateAccess = "true"))
	bool bIsAccelerating;
};
