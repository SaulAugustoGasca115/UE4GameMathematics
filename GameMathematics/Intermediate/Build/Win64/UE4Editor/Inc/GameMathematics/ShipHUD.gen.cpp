// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameMathematics/HUD/ShipHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShipHUD() {}
// Cross Module References
	GAMEMATHEMATICS_API UClass* Z_Construct_UClass_AShipHUD_NoRegister();
	GAMEMATHEMATICS_API UClass* Z_Construct_UClass_AShipHUD();
	GAMEMATHEMATICS_API UClass* Z_Construct_UClass_ADebugHUD();
	UPackage* Z_Construct_UPackage__Script_GameMathematics();
// End Cross Module References
	void AShipHUD::StaticRegisterNativesAShipHUD()
	{
	}
	UClass* Z_Construct_UClass_AShipHUD_NoRegister()
	{
		return AShipHUD::StaticClass();
	}
	struct Z_Construct_UClass_AShipHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AShipHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ADebugHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_GameMathematics,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShipHUD_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "HUD/ShipHUD.h" },
		{ "ModuleRelativePath", "HUD/ShipHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AShipHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShipHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AShipHUD_Statics::ClassParams = {
		&AShipHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AShipHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AShipHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AShipHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AShipHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AShipHUD, 4253465339);
	template<> GAMEMATHEMATICS_API UClass* StaticClass<AShipHUD>()
	{
		return AShipHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AShipHUD(Z_Construct_UClass_AShipHUD, &AShipHUD::StaticClass, TEXT("/Script/GameMathematics"), TEXT("AShipHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShipHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
