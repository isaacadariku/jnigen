#include <jni.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

#if _WIN32
#include <windows.h>
#else
#include <pthread.h>
#include <unistd.h>
#endif

#if _WIN32
#define FFI_PLUGIN_EXPORT __declspec(dllexport)
#else
#define FFI_PLUGIN_EXPORT
#endif

#if defined _WIN32
#define thread_local __declspec(thread)
#else
#define thread_local __thread
#endif

#ifdef __ANDROID__
#include <android/log.h>
#endif

#define JNI_LOG_TAG "Dart-JNI"

#ifdef __ANDROID__
#define __ENVP_CAST (JNIEnv **)
#else
#define __ENVP_CAST (void **)
#endif

struct jni_context {
	JavaVM *jvm;
	jobject classLoader;
	jmethodID loadClassMethod;
	jobject currentActivity;
	jobject appContext;
};

extern thread_local JNIEnv *jniEnv;

extern struct jni_context jni;

enum DartJniLogLevel {
	JNI_VERBOSE = 2,
	JNI_DEBUG,
	JNI_INFO,
	JNI_WARN,
	JNI_ERROR
};

FFI_PLUGIN_EXPORT struct jni_context GetJniContext();

FFI_PLUGIN_EXPORT JavaVM *GetJavaVM(void);

FFI_PLUGIN_EXPORT JNIEnv *GetJniEnv(void);

FFI_PLUGIN_EXPORT JNIEnv *SpawnJvm(JavaVMInitArgs *args);

FFI_PLUGIN_EXPORT jclass LoadClass(const char *name);

FFI_PLUGIN_EXPORT jobject GetClassLoader(void);

FFI_PLUGIN_EXPORT jobject GetApplicationContext(void);

FFI_PLUGIN_EXPORT jobject GetCurrentActivity(void);

FFI_PLUGIN_EXPORT void SetJNILogging(int level);

FFI_PLUGIN_EXPORT jstring ToJavaString(char *str);

FFI_PLUGIN_EXPORT const char *GetJavaStringChars(jstring jstr);

FFI_PLUGIN_EXPORT void ReleaseJavaStringChars(jstring jstr, const char *buf);

// These 2 are the function pointer variables defined and exported by
// the generated C files.
//
// initGeneratedLibrary function in Jni class will set these to
// corresponding functions to the implementations from `dartjni` base library
// which initializes and manages the JNI.
extern struct jni_context (*context_getter)(void);
extern JNIEnv *(*env_getter)(void);

// This function will be exported by generated code library and will set the
// above 2 variables.
FFI_PLUGIN_EXPORT void setJniGetters(struct jni_context (*cg)(void),
		JNIEnv *(*eg)(void));

// `static inline` because `inline` doesn't work, it may still not
// inline the function in which case a linker error may be produced.
//
// There has to be a better way to do this. Either to force inlining on target
// platforms, or just leave it as normal function.
static inline void __load_class_into(jclass *cls, const char *name) {
#ifdef __ANDROID__
	jstring className = (*jniEnv)->NewStringUTF(jniEnv, name);
	*cls = (*jniEnv)->CallObjectMethod(jniEnv, jni.classLoader,
	                                   jni.loadClassMethod, className);
	(*jniEnv)->DeleteLocalRef(jniEnv, className);
#else
	*cls = (*jniEnv)->FindClass(jniEnv, name);
#endif
}

static inline void load_class(jclass *cls, const char *name) {
	if (*cls == NULL) {
		__load_class_into(cls, name);
	}
}

static inline void load_class_gr(jclass *cls, const char *name) {
	if (*cls == NULL) {
		jclass tmp;
		__load_class_into(&tmp, name);
		*cls = (*jniEnv)->NewGlobalRef(jniEnv, tmp);
		(*jniEnv)->DeleteLocalRef(jniEnv, tmp);
	}
}

static inline void attach_thread() {
	if (jniEnv == NULL) {
		(*jni.jvm)->AttachCurrentThread(jni.jvm, __ENVP_CAST & jniEnv,
		                                NULL);
	}
}

static inline void load_env() {
	if (jniEnv == NULL) {
		jni = context_getter();
		jniEnv = env_getter();
	}
}

static inline void load_method(jclass cls, jmethodID *res, const char *name,
                               const char *sig) {
	if (*res == NULL) {
		*res = (*jniEnv)->GetMethodID(jniEnv, cls, name, sig);
	}
}

static inline void load_static_method(jclass cls, jmethodID *res,
                                      const char *name, const char *sig) {
	if (*res == NULL) {
		*res = (*jniEnv)->GetStaticMethodID(jniEnv, cls, name, sig);
	}
}

static inline void load_field(jclass cls, jfieldID *res, const char *name,
                              const char *sig) {
	if (*res == NULL) {
		*res = (*jniEnv)->GetFieldID(jniEnv, cls, name, sig);
	}
}

static inline void load_static_field(jclass cls, jfieldID *res,
                                     const char *name, const char *sig) {
	if (*res == NULL) {
		*res = (*jniEnv)->GetStaticFieldID(jniEnv, cls, name, sig);
	}
}

static inline jobject to_global_ref(jobject ref) {
	jobject g = (*jniEnv)->NewGlobalRef(jniEnv, ref);
	(*jniEnv)->DeleteLocalRef(jniEnv, ref);
	return g;
}
