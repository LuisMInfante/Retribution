// Copyright Luis Infante / Matthew Labrada

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "Kismet/KismetSystemLibrary.h"
#include "RetributionPlayerController.generated.h"

/*
	Player Controller for Player Controlled Character
*/

class UInputMappingContext;
class UInputAction;
struct FInputActionValue;

UCLASS()
class ARENASHOOTER_API ARetributionPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	
	ARetributionPlayerController();
	
protected:
	
	virtual void BeginPlay() override;
	virtual void SetupInputComponent() override;

private:

	UPROPERTY(EditAnywhere, Category = "Input")
	TObjectPtr<UInputMappingContext> RetributionContext;

	UPROPERTY(EditAnywhere, Category = "Input")
	TObjectPtr<UInputAction> MoveAction;

	void Move(const FInputActionValue& InputActionValue);
};
