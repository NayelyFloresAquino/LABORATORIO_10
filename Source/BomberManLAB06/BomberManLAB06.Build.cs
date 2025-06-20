// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class BomberManLAB06 : ModuleRules
{
	public BomberManLAB06(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
