#include "LibraryManager.h"
#include "MirageUtility.h"

const char* ClassID = "com/ankr/nativeads/MirageAds";

JNIEnv*   Env;
jclass    MirageAdsClass;
jmethodID InitializeMethod;
jmethodID LoadAdMethod;
jmethodID ShowViewMethod;

void LibraryManager::LoadLibrary()
{
	//TSharedPtr<FJavaClassObject> FJavaClassObject_DumpClass  = MakeShareable(new FJavaClassObject("com/company/product/class", "(Landroid/app/Activity;)V", FJavaWrapper::GameActivityThis));
	//FJavaClassMethod FJavaClassMethod_DumpMethod = FJavaClassObject_DumpClass->GetClassMethod("Dump", "()V");
	//FJavaClassObject_DumpClass->CallMethod<void>(FJavaClassMethod_DumpMethod);
	
	Env = AndroidJavaEnv::GetJavaEnv();

	MirageAdsClass = FAndroidApplication::FindJavaClassGlobalRef(ClassID);
	if (MirageAdsClass == NULL)
	{
		UE_LOG(LogTemp, Error, TEXT("LibraryManager.cpp - LoadLibrary - MirageAdsClass could not be found."));
		return;
	}

	InitializeMethod = FJavaWrapper::FindStaticMethod(Env, MirageAdsClass, "Initialize", "(Landroid/app/Activity;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", false);
	if (InitializeMethod == NULL)
	{
		UE_LOG(LogTemp, Error, TEXT("LibraryManager.cpp - LoadLibrary - InitializeMethod could not be found."));
		return;
	}

	LoadAdMethod = FJavaWrapper::FindStaticMethod(Env, MirageAdsClass, "LoadAd", "(Ljava/lang/String;)V", false);
	if (LoadAdMethod == NULL)
	{
		UE_LOG(LogTemp, Error, TEXT("LibraryManager.cpp - LoadLibrary - LoadAdMethod could not be found."));
		return;
	}

	ShowViewMethod = FJavaWrapper::FindStaticMethod(Env, MirageAdsClass, "ShowView", "(Ljava/lang/String;)V", false);
	if (ShowViewMethod == NULL)
	{
		UE_LOG(LogTemp, Error, TEXT("LibraryManager.cpp - LoadLibrary - ShowViewMethod could not be found."));
		return;
	}
}

void LibraryManager::UnloadLibrary()
{
	// Nothing to do here for now.
}

void LibraryManager::Initialize(FString appId, FString deviceId, FString publicAddress, FString language)
{
	if (MirageAdsClass != NULL && InitializeMethod != NULL)
	{
		Env->CallStaticVoidMethod(MirageAdsClass, InitializeMethod, FJavaWrapper::GameActivityThis, GetJString(appId), GetJString(deviceId), GetJString(publicAddress), GetJString(language));
	}
}

void LibraryManager::LoadAd(FString _unitId)
{
	if (MirageAdsClass != NULL && LoadAdMethod != NULL)
	{
		Env->CallStaticVoidMethod(MirageAdsClass, LoadAdMethod, GetJString(_unitId));
	}
}

void LibraryManager::ShowView(FString _unitId)
{
	if (MirageAdsClass != NULL && ShowViewMethod != NULL)
	{
		Env->CallStaticVoidMethod(MirageAdsClass, ShowViewMethod, GetJString(_unitId));
	}
}

jobject LibraryManager::GetJString(FString string)
{
	JNIEnv* JEnv   = AndroidJavaEnv::GetJavaEnv();
	jstring local  = JEnv->NewStringUTF(TCHAR_TO_UTF8(*string));
	jstring result = (jstring)JEnv->NewGlobalRef(local);
	JEnv->DeleteLocalRef(local);
	return result;
}

TArray<FString> LibraryManager::GetFStringArrayFromJava(TSharedPtr<FJavaClassObject> javaObject, FJavaClassMethod javaMethod, const char* seperator)
{
	JNIEnv* JEnv = FAndroidApplication::GetJavaEnv();

	jstring javaReturn        = static_cast<jstring>(javaObject->CallMethod<jobject>(javaMethod));
	const char* rawConversion = JEnv->GetStringUTFChars(javaReturn, nullptr);

	FString conversion(UTF8_TO_TCHAR(rawConversion));
	JEnv->ReleaseStringUTFChars(javaReturn, rawConversion);
	JEnv->DeleteGlobalRef(javaReturn);

	TArray<FString> NamesArray;
	FString seperatorFString(seperator);
	conversion.ParseIntoArray(NamesArray, *seperatorFString, true);

	return NamesArray;
}
