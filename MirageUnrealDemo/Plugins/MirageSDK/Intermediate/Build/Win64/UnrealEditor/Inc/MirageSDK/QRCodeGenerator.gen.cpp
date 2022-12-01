// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MirageSDK/Public/QRCodeGenerator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQRCodeGenerator() {}
// Cross Module References
	MIRAGESDK_API UClass* Z_Construct_UClass_UQRCodeGenerator_NoRegister();
	MIRAGESDK_API UClass* Z_Construct_UClass_UQRCodeGenerator();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_MirageSDK();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
// End Cross Module References
	DEFINE_FUNCTION(UQRCodeGenerator::execGenerateQRCodeWithParams)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_code);
		P_GET_PROPERTY(FIntProperty,Z_Param_QRCodeVersion);
		P_GET_PROPERTY(FIntProperty,Z_Param_PixelNum);
		P_GET_STRUCT(FColor,Z_Param_Backcolor);
		P_GET_STRUCT(FColor,Z_Param_QRPixelColor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTexture2D**)Z_Param__Result=UQRCodeGenerator::GenerateQRCodeWithParams(Z_Param_code,Z_Param_QRCodeVersion,Z_Param_PixelNum,Z_Param_Backcolor,Z_Param_QRPixelColor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQRCodeGenerator::execGenerateQRCode)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_code);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTexture2D**)Z_Param__Result=UQRCodeGenerator::GenerateQRCode(Z_Param_code);
		P_NATIVE_END;
	}
	void UQRCodeGenerator::StaticRegisterNativesUQRCodeGenerator()
	{
		UClass* Class = UQRCodeGenerator::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GenerateQRCode", &UQRCodeGenerator::execGenerateQRCode },
			{ "GenerateQRCodeWithParams", &UQRCodeGenerator::execGenerateQRCodeWithParams },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UQRCodeGenerator_GenerateQRCode_Statics
	{
		struct QRCodeGenerator_eventGenerateQRCode_Parms
		{
			FString code;
			UTexture2D* ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_code;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UQRCodeGenerator_GenerateQRCode_Statics::NewProp_code = { "code", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QRCodeGenerator_eventGenerateQRCode_Parms, code), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQRCodeGenerator_GenerateQRCode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QRCodeGenerator_eventGenerateQRCode_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQRCodeGenerator_GenerateQRCode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQRCodeGenerator_GenerateQRCode_Statics::NewProp_code,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQRCodeGenerator_GenerateQRCode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQRCodeGenerator_GenerateQRCode_Statics::Function_MetaDataParams[] = {
		{ "Category", "QRCode" },
		{ "ModuleRelativePath", "Public/QRCodeGenerator.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQRCodeGenerator_GenerateQRCode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQRCodeGenerator, nullptr, "GenerateQRCode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQRCodeGenerator_GenerateQRCode_Statics::QRCodeGenerator_eventGenerateQRCode_Parms), Z_Construct_UFunction_UQRCodeGenerator_GenerateQRCode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQRCodeGenerator_GenerateQRCode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQRCodeGenerator_GenerateQRCode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQRCodeGenerator_GenerateQRCode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQRCodeGenerator_GenerateQRCode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQRCodeGenerator_GenerateQRCode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQRCodeGenerator_GenerateQRCodeWithParams_Statics
	{
		struct QRCodeGenerator_eventGenerateQRCodeWithParams_Parms
		{
			FString code;
			int32 QRCodeVersion;
			int32 PixelNum;
			FColor Backcolor;
			FColor QRPixelColor;
			UTexture2D* ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_code;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_QRCodeVersion;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_PixelNum;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Backcolor;
		static const UECodeGen_Private::FStructPropertyParams NewProp_QRPixelColor;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UQRCodeGenerator_GenerateQRCodeWithParams_Statics::NewProp_code = { "code", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QRCodeGenerator_eventGenerateQRCodeWithParams_Parms, code), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UQRCodeGenerator_GenerateQRCodeWithParams_Statics::NewProp_QRCodeVersion = { "QRCodeVersion", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QRCodeGenerator_eventGenerateQRCodeWithParams_Parms, QRCodeVersion), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UQRCodeGenerator_GenerateQRCodeWithParams_Statics::NewProp_PixelNum = { "PixelNum", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QRCodeGenerator_eventGenerateQRCodeWithParams_Parms, PixelNum), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQRCodeGenerator_GenerateQRCodeWithParams_Statics::NewProp_Backcolor = { "Backcolor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QRCodeGenerator_eventGenerateQRCodeWithParams_Parms, Backcolor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQRCodeGenerator_GenerateQRCodeWithParams_Statics::NewProp_QRPixelColor = { "QRPixelColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QRCodeGenerator_eventGenerateQRCodeWithParams_Parms, QRPixelColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQRCodeGenerator_GenerateQRCodeWithParams_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QRCodeGenerator_eventGenerateQRCodeWithParams_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQRCodeGenerator_GenerateQRCodeWithParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQRCodeGenerator_GenerateQRCodeWithParams_Statics::NewProp_code,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQRCodeGenerator_GenerateQRCodeWithParams_Statics::NewProp_QRCodeVersion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQRCodeGenerator_GenerateQRCodeWithParams_Statics::NewProp_PixelNum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQRCodeGenerator_GenerateQRCodeWithParams_Statics::NewProp_Backcolor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQRCodeGenerator_GenerateQRCodeWithParams_Statics::NewProp_QRPixelColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQRCodeGenerator_GenerateQRCodeWithParams_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQRCodeGenerator_GenerateQRCodeWithParams_Statics::Function_MetaDataParams[] = {
		{ "Category", "QRCode" },
		{ "ModuleRelativePath", "Public/QRCodeGenerator.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQRCodeGenerator_GenerateQRCodeWithParams_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQRCodeGenerator, nullptr, "GenerateQRCodeWithParams", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQRCodeGenerator_GenerateQRCodeWithParams_Statics::QRCodeGenerator_eventGenerateQRCodeWithParams_Parms), Z_Construct_UFunction_UQRCodeGenerator_GenerateQRCodeWithParams_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQRCodeGenerator_GenerateQRCodeWithParams_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQRCodeGenerator_GenerateQRCodeWithParams_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQRCodeGenerator_GenerateQRCodeWithParams_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQRCodeGenerator_GenerateQRCodeWithParams()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQRCodeGenerator_GenerateQRCodeWithParams_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UQRCodeGenerator);
	UClass* Z_Construct_UClass_UQRCodeGenerator_NoRegister()
	{
		return UQRCodeGenerator::StaticClass();
	}
	struct Z_Construct_UClass_UQRCodeGenerator_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UQRCodeGenerator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MirageSDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UQRCodeGenerator_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UQRCodeGenerator_GenerateQRCode, "GenerateQRCode" }, // 532001149
		{ &Z_Construct_UFunction_UQRCodeGenerator_GenerateQRCodeWithParams, "GenerateQRCodeWithParams" }, // 2304309759
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQRCodeGenerator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "QRCodeGenerator.h" },
		{ "ModuleRelativePath", "Public/QRCodeGenerator.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UQRCodeGenerator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQRCodeGenerator>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UQRCodeGenerator_Statics::ClassParams = {
		&UQRCodeGenerator::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UQRCodeGenerator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UQRCodeGenerator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UQRCodeGenerator()
	{
		if (!Z_Registration_Info_UClass_UQRCodeGenerator.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UQRCodeGenerator.OuterSingleton, Z_Construct_UClass_UQRCodeGenerator_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UQRCodeGenerator.OuterSingleton;
	}
	template<> MIRAGESDK_API UClass* StaticClass<UQRCodeGenerator>()
	{
		return UQRCodeGenerator::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQRCodeGenerator);
	struct Z_CompiledInDeferFile_FID_AnkrUnrealDemo_Plugins_MirageSDK_Source_MirageSDK_Public_QRCodeGenerator_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnkrUnrealDemo_Plugins_MirageSDK_Source_MirageSDK_Public_QRCodeGenerator_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UQRCodeGenerator, UQRCodeGenerator::StaticClass, TEXT("UQRCodeGenerator"), &Z_Registration_Info_UClass_UQRCodeGenerator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UQRCodeGenerator), 1994009311U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnkrUnrealDemo_Plugins_MirageSDK_Source_MirageSDK_Public_QRCodeGenerator_h_791599451(TEXT("/Script/MirageSDK"),
		Z_CompiledInDeferFile_FID_AnkrUnrealDemo_Plugins_MirageSDK_Source_MirageSDK_Public_QRCodeGenerator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AnkrUnrealDemo_Plugins_MirageSDK_Source_MirageSDK_Public_QRCodeGenerator_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
