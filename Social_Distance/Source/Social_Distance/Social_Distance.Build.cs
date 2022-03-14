// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Social_Distance : ModuleRules
{
	public Social_Distance(ReadOnlyTargetRules Target) : base(Target)
	{
		PrivateDependencyModuleNames.AddRange(new string[] {"Niagara", "UMG"});
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
