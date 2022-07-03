// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class ChoresCPP : ModuleRules
{
	public ChoresCPP(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
