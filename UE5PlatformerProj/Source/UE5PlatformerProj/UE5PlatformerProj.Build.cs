// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class UE5PlatformerProj : ModuleRules
{
	public UE5PlatformerProj(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
