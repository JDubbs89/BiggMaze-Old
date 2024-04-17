// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class BigMaze_Alpha_0EditorTarget : TargetRules
{
	public BigMaze_Alpha_0EditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V4;

		ExtraModuleNames.AddRange( new string[] { "BigMaze_Alpha_0" } );
	}
}
