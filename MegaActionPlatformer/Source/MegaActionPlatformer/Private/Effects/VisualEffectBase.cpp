// Copright Richard Skala


#include "Effects/VisualEffectBase.h"

// Sets default values
AVisualEffectBase::AVisualEffectBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AVisualEffectBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AVisualEffectBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

