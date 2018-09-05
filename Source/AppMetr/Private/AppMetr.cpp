#include "AppMetr.h"

#if PLATFORM_ANDROID
#include "Android/AndroidJNI.h"
#include "Android/AndroidApplication.h"

#define APPMETR_CLASS_NAME "com/appmetr/android/AppMetr"
#define LOG_TAG "AppMetr"
#endif

UAppMetr::UAppMetr(const FObjectInitializer &ObjectInitializer) : Super(ObjectInitializer) {
}


void UAppMetr::attachProperties() {
#if PLATFORM_ANDROID
	JNIEnv *Env = FAndroidApplication::GetJavaEnv();
	jclass jClass = FAndroidApplication::FindJavaClass(APPMETR_CLASS_NAME);

	if (jClass) {
		const char *strMethod = "attachProperties";
		jmethodID jMethod = Env->GetStaticMethodID(jClass, strMethod, "()V");

		if (jMethod) {
			Env->CallStaticVoidMethod(jClass, jMethod);
			__android_log_print(ANDROID_LOG_DEBUG, LOG_TAG, "AppMetr Method Call Successful %s", strMethod);
		} else {
			__android_log_print(ANDROID_LOG_ERROR, LOG_TAG, "Failed to find method %s", strMethod);
		}

		Env->DeleteLocalRef(jClass);
	} else {
		__android_log_print(ANDROID_LOG_ERROR, LOG_TAG, "Failed to find class %s", APPMETR_CLASS_NAME);
	}
#endif
}

void UAppMetr::attachProperties(FString properties) {
#if PLATFORM_ANDROID
	JNIEnv *Env = FAndroidApplication::GetJavaEnv();

	const char *strMethod = "AndroidThunkJava_AppMetr_attachProperties";
	jmethodID jMethod = Env->GetMethodID(FJavaWrapper::GameActivityClassID, strMethod, "(Ljava/lang/String;)V");

	if (jMethod) {
		jstring propertiesArg = Env->NewStringUTF(TCHAR_TO_UTF8(*properties));

		FJavaWrapper::CallVoidMethod(Env, FJavaWrapper::GameActivityThis, jMethod, propertiesArg);
	} else {
		__android_log_print(ANDROID_LOG_ERROR, LOG_TAG, "Failed to find method %s", strMethod);
	}
#endif
}

void UAppMetr::trackSession() {
#if PLATFORM_ANDROID
	JNIEnv *Env = FAndroidApplication::GetJavaEnv();
	jclass jClass = FAndroidApplication::FindJavaClass(APPMETR_CLASS_NAME);

	if (jClass) {
		const char *strMethod = "trackSession";
		jmethodID jMethod = Env->GetStaticMethodID(jClass, strMethod, "()V");

		if (jMethod) {
			Env->CallStaticVoidMethod(jClass, jMethod);
			__android_log_print(ANDROID_LOG_DEBUG, LOG_TAG, "AppMetr Method Call Successful %s", strMethod);
		} else {
			__android_log_print(ANDROID_LOG_ERROR, LOG_TAG, "Failed to find method %s", strMethod);
		}

		Env->DeleteLocalRef(jClass);
	} else {
		__android_log_print(ANDROID_LOG_ERROR, LOG_TAG, "Failed to find class %s", APPMETR_CLASS_NAME);
	}
#endif
}

void UAppMetr::trackSession(FString properties) {
#if PLATFORM_ANDROID
	JNIEnv *Env = FAndroidApplication::GetJavaEnv();

	const char *strMethod = "AndroidThunkJava_AppMetr_trackSession";
	jmethodID jMethod = Env->GetMethodID(FJavaWrapper::GameActivityClassID, strMethod, "(Ljava/lang/String;)V");

	if (jMethod) {
		jstring propertiesArg = Env->NewStringUTF(TCHAR_TO_UTF8(*properties));

		FJavaWrapper::CallVoidMethod(Env, FJavaWrapper::GameActivityThis, jMethod, propertiesArg);
	} else {
		__android_log_print(ANDROID_LOG_ERROR, LOG_TAG, "Failed to find method %s", strMethod);
	}
#endif
}

void UAppMetr::trackEvent(FString event) {
#if PLATFORM_ANDROID
	JNIEnv *Env = FAndroidApplication::GetJavaEnv();
	jclass jClass = FAndroidApplication::FindJavaClass(APPMETR_CLASS_NAME);

	if (jClass) {
		const char *strMethod = "trackEvent";
		jmethodID jMethod = Env->GetStaticMethodID(jClass, strMethod, "(Ljava/lang/String;)V");

		if (jMethod) {
			jstring eventArg = Env->NewStringUTF(TCHAR_TO_UTF8(*event));

			Env->CallStaticVoidMethod(jClass, jMethod, eventArg);
			__android_log_print(ANDROID_LOG_DEBUG, LOG_TAG, "AppMetr Method Call Successful %s", strMethod);
		} else {
			__android_log_print(ANDROID_LOG_ERROR, LOG_TAG, "Failed to find method %s", strMethod);
		}

		Env->DeleteLocalRef(jClass);
	} else {
		__android_log_print(ANDROID_LOG_ERROR, LOG_TAG, "Failed to find class %s", APPMETR_CLASS_NAME);
	}
#endif
}

void UAppMetr::trackEvent(FString event, FString properties) {
#if PLATFORM_ANDROID
	JNIEnv *Env = FAndroidApplication::GetJavaEnv();

	const char *strMethod = "AndroidThunkJava_AppMetr_trackEvent";
	jmethodID jMethod = Env->GetMethodID(FJavaWrapper::GameActivityClassID, strMethod, "(Ljava/lang/String;Ljava/lang/String;)V");

	if (jMethod) {
		jstring eventArg = Env->NewStringUTF(TCHAR_TO_UTF8(*event));
		jstring propertiesArg = Env->NewStringUTF(TCHAR_TO_UTF8(*properties));

		FJavaWrapper::CallVoidMethod(Env, FJavaWrapper::GameActivityThis, jMethod, eventArg, propertiesArg);
	} else {
		__android_log_print(ANDROID_LOG_ERROR, LOG_TAG, "Failed to find method %s", strMethod);
	}
#endif
}

void UAppMetr::trackLevel(int level) {
#if PLATFORM_ANDROID
	JNIEnv *Env = FAndroidApplication::GetJavaEnv();
	jclass jClass = FAndroidApplication::FindJavaClass(APPMETR_CLASS_NAME);

	if (jClass) {
		const char *strMethod = "trackLevel";
		jmethodID jMethod = Env->GetStaticMethodID(jClass, strMethod, "(I)V");

		if (jMethod) {
			Env->CallStaticVoidMethod(jClass, jMethod, (jint)level);
			__android_log_print(ANDROID_LOG_DEBUG, LOG_TAG, "AppMetr Method Call Successful %s", strMethod);
		} else {
			__android_log_print(ANDROID_LOG_ERROR, LOG_TAG, "Failed to find method %s", strMethod);
		}

		Env->DeleteLocalRef(jClass);
	} else {
		__android_log_print(ANDROID_LOG_ERROR, LOG_TAG, "Failed to find class %s", APPMETR_CLASS_NAME);
	}
#endif
}

void UAppMetr::trackLevel(int level, FString properties) {
#if PLATFORM_ANDROID
	JNIEnv *Env = FAndroidApplication::GetJavaEnv();

	const char *strMethod = "AndroidThunkJava_AppMetr_trackLevel";
	jmethodID jMethod = Env->GetMethodID(FJavaWrapper::GameActivityClassID, strMethod, "(ILjava/lang/String;)V");

	if (jMethod) {
		jint levelArg = (jint) level;
		jstring propertiesArg = Env->NewStringUTF(TCHAR_TO_UTF8(*properties));

		FJavaWrapper::CallVoidMethod(Env, FJavaWrapper::GameActivityThis, jMethod, levelArg, propertiesArg);
	} else {
		__android_log_print(ANDROID_LOG_ERROR, LOG_TAG, "Failed to find method %s", strMethod);
	}
#endif
}

void UAppMetr::trackPayment(FString payment) {
#if PLATFORM_ANDROID
	JNIEnv *Env = FAndroidApplication::GetJavaEnv();

	const char *strMethod = "AndroidThunkJava_AppMetr_trackPayment";
	jmethodID jMethod = Env->GetMethodID(FJavaWrapper::GameActivityClassID, strMethod, "(Ljava/lang/String;)V");

	if (jMethod) {
		jstring paymentArg = Env->NewStringUTF(TCHAR_TO_UTF8(*payment));

		FJavaWrapper::CallVoidMethod(Env, FJavaWrapper::GameActivityThis, jMethod, paymentArg);
	} else {
		__android_log_print(ANDROID_LOG_ERROR, LOG_TAG, "Failed to find method %s", strMethod);
	}
#endif
}

void UAppMetr::trackPayment(FString payment, FString properties) {
#if PLATFORM_ANDROID
	JNIEnv *Env = FAndroidApplication::GetJavaEnv();

	const char *strMethod = "AndroidThunkJava_AppMetr_trackPayment";
	jmethodID jMethod = Env->GetMethodID(FJavaWrapper::GameActivityClassID, strMethod, "(Ljava/lang/String;Ljava/lang/String;)V");

	if (jMethod) {
		jstring paymentArg = Env->NewStringUTF(TCHAR_TO_UTF8(*payment));
		jstring propertiesArg = Env->NewStringUTF(TCHAR_TO_UTF8(*properties));

		FJavaWrapper::CallVoidMethod(Env, FJavaWrapper::GameActivityThis, jMethod, paymentArg, propertiesArg);
	} else {
		__android_log_print(ANDROID_LOG_ERROR, LOG_TAG, "Failed to find method %s", strMethod);
	}
#endif
}

void UAppMetr::flush() {
#if PLATFORM_ANDROID
	JNIEnv *Env = FAndroidApplication::GetJavaEnv();
	jclass jClass = FAndroidApplication::FindJavaClass(APPMETR_CLASS_NAME);

	if (jClass) {
		const char *strMethod = "flush";
		jmethodID jMethod = Env->GetStaticMethodID(jClass, strMethod, "()V");

		if (jMethod) {
			Env->CallStaticVoidMethod(jClass, jMethod);
			__android_log_print(ANDROID_LOG_DEBUG, LOG_TAG, "AppMetr Method Call Successful %s", strMethod);
		} else {
			__android_log_print(ANDROID_LOG_ERROR, LOG_TAG, "Failed to find method %s", strMethod);
		}

		Env->DeleteLocalRef(jClass);
	} else {
		__android_log_print(ANDROID_LOG_ERROR, LOG_TAG, "Failed to find class %s", APPMETR_CLASS_NAME);
	}
#endif
}

void UAppMetr::flushLocal() {
#if PLATFORM_ANDROID
	JNIEnv *Env = FAndroidApplication::GetJavaEnv();
	jclass jClass = FAndroidApplication::FindJavaClass(APPMETR_CLASS_NAME);

	if (jClass) {
		const char *strMethod = "flushLocal";
		jmethodID jMethod = Env->GetStaticMethodID(jClass, strMethod, "()V");

		if (jMethod) {
			Env->CallStaticVoidMethod(jClass, jMethod);
			__android_log_print(ANDROID_LOG_DEBUG, LOG_TAG, "AppMetr Method Call Successful %s", strMethod);
		} else {
			__android_log_print(ANDROID_LOG_ERROR, LOG_TAG, "Failed to find method %s", strMethod);
		}

		Env->DeleteLocalRef(jClass);
	} else {
		__android_log_print(ANDROID_LOG_ERROR, LOG_TAG, "Failed to find class %s", APPMETR_CLASS_NAME);
	}
#endif
}

void UAppMetr::trackInstallURL(FString url) {
#if PLATFORM_ANDROID
	JNIEnv *Env = FAndroidApplication::GetJavaEnv();
	jclass jClass = FAndroidApplication::FindJavaClass(APPMETR_CLASS_NAME);

	if (jClass) {
		const char *strMethod = "trackInstallURL";

		jmethodID jMethod = Env->GetStaticMethodID(jClass, strMethod, "(Ljava/lang/String;)V");

		if (jMethod) {
			jstring urlArg = Env->NewStringUTF(TCHAR_TO_UTF8(*url));

			Env->CallStaticVoidMethod(jClass, jMethod, urlArg);
			__android_log_print(ANDROID_LOG_DEBUG, LOG_TAG, "AppMetr Method Call Successful %s", strMethod);
		} else {
			__android_log_print(ANDROID_LOG_ERROR, LOG_TAG, "Failed to find method %s", strMethod);
		}

		Env->DeleteLocalRef(jClass);
	} else {
		__android_log_print(ANDROID_LOG_ERROR, LOG_TAG, "Failed to find class %s", APPMETR_CLASS_NAME);
	}
#endif
}

void UAppMetr::trackState(FString state) {
#if PLATFORM_ANDROID
	JNIEnv *Env = FAndroidApplication::GetJavaEnv();

	const char *strMethod = "AndroidThunkJava_AppMetr_trackState";
	jmethodID jMethod = Env->GetMethodID(FJavaWrapper::GameActivityClassID, strMethod, "(Ljava/lang/String;)V");

	if (jMethod) {
		jstring stateArg = Env->NewStringUTF(TCHAR_TO_UTF8(*state));

		FJavaWrapper::CallVoidMethod(Env, FJavaWrapper::GameActivityThis, jMethod, stateArg);
	} else {
		__android_log_print(ANDROID_LOG_ERROR, LOG_TAG, "Failed to find method %s", strMethod);
	}
#endif
}

void UAppMetr::identify(FString userId) {
#if PLATFORM_ANDROID
	JNIEnv *Env = FAndroidApplication::GetJavaEnv();
	jclass jClass = FAndroidApplication::FindJavaClass(APPMETR_CLASS_NAME);

	if (jClass) {
		const char *strMethod = "identify";

		jmethodID jMethod = Env->GetStaticMethodID(jClass, strMethod, "(Ljava/lang/String;)V");

		if (jMethod) {
			jstring userIdArg = Env->NewStringUTF(TCHAR_TO_UTF8(*userId));

			Env->CallStaticVoidMethod(jClass, jMethod, userIdArg);
			__android_log_print(ANDROID_LOG_DEBUG, LOG_TAG, "AppMetr Method Call Successful %s", strMethod);
		} else {
			__android_log_print(ANDROID_LOG_ERROR, LOG_TAG, "Failed to find method %s", strMethod);
		}

		Env->DeleteLocalRef(jClass);
	} else {
		__android_log_print(ANDROID_LOG_ERROR, LOG_TAG, "Failed to find class %s", APPMETR_CLASS_NAME);
	}
#endif
}
