// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Organic_Dungeon_V2_C : ModuleRules
{
	public Organic_Dungeon_V2_C(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "EnhancedInput" });
	}
}
