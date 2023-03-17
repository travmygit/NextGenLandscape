// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class NextGenLandscape : ModuleRules
{
	public NextGenLandscape(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
