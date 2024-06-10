// Fill out your copyright notice in the Description page of Project Settings.

#include "Characters/ActionCharBase.h"

DEFINE_LOG_CATEGORY_STATIC(LogActionCharBase, Log, All)

AActionCharBase::AActionCharBase()
{
	UE_LOG(LogActionCharBase, Log, TEXT("AActionCharBase::AActionCharBase - %s"), *GetName());
}

void AActionCharBase::BeginPlay()
{
	UE_LOG(LogActionCharBase, Log, TEXT("AActionCharBase::BeginPlay - %s"), *GetName());
	Super::BeginPlay();
}
