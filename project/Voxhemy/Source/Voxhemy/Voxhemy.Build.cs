// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Voxhemy : ModuleRules
{
	public Voxhemy(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
	
		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "ProceduralMeshComponent", "CableComponent", "UMG", "FastNoiseGenerator", "FastNoise", "GeometryFramework", "GeometryCore", "DynamicMesh" });

		PrivateDependencyModuleNames.AddRange(new string[] { "CableComponent" });

		PublicIncludePaths.AddRange(
			new string[] {
				"Voxhemy/Public/VoxelCreator",
			}
			);

		PrivateIncludePaths.AddRange(
			new string[] {
				"Voxhemy/Private/VoxelCreator",
			}
			);

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
