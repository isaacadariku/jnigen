// Autogenerated by jnigen. DO NOT EDIT!

#include <stdint.h>
#include "dartjni.h"
#include "jni.h"

thread_local JNIEnv* jniEnv;
JniContext jni;

JniContext (*context_getter)(void);
JNIEnv* (*env_getter)(void);

void setJniGetters(JniContext (*cg)(void), JNIEnv* (*eg)(void)) {
  context_getter = cg;
  env_getter = eg;
}

// com.example.in_app_java.AndroidUtils
jclass _c_AndroidUtils = NULL;

jmethodID _m_AndroidUtils__showToast = NULL;
FFI_PLUGIN_EXPORT
JniResult AndroidUtils__showToast(jobject mainActivity,
                                  jobject text,
                                  int32_t duration) {
  load_env();
  load_class_gr(&_c_AndroidUtils, "com/example/in_app_java/AndroidUtils");
  if (_c_AndroidUtils == NULL)
    return (JniResult){.result = {.j = 0}, .exception = check_exception()};
  load_static_method(_c_AndroidUtils, &_m_AndroidUtils__showToast, "showToast",
                     "(Landroid/app/Activity;Ljava/lang/CharSequence;I)V");
  if (_m_AndroidUtils__showToast == NULL)
    return (JniResult){.result = {.j = 0}, .exception = check_exception()};
  (*jniEnv)->CallStaticVoidMethod(jniEnv, _c_AndroidUtils,
                                  _m_AndroidUtils__showToast, mainActivity,
                                  text, duration);
  return (JniResult){.result = {.j = 0}, .exception = check_exception()};
}

// android.os.Build
jclass _c_Build = NULL;

jmethodID _m_Build__ctor = NULL;
FFI_PLUGIN_EXPORT
JniResult Build__ctor() {
  load_env();
  load_class_gr(&_c_Build, "android/os/Build");
  if (_c_Build == NULL)
    return (JniResult){.result = {.j = 0}, .exception = check_exception()};
  load_method(_c_Build, &_m_Build__ctor, "<init>", "()V");
  if (_m_Build__ctor == NULL)
    return (JniResult){.result = {.j = 0}, .exception = check_exception()};
  jobject _result = (*jniEnv)->NewObject(jniEnv, _c_Build, _m_Build__ctor);
  return (JniResult){.result = {.l = to_global_ref(_result)},
                     .exception = check_exception()};
}

jmethodID _m_Build__getSerial = NULL;
FFI_PLUGIN_EXPORT
JniResult Build__getSerial() {
  load_env();
  load_class_gr(&_c_Build, "android/os/Build");
  if (_c_Build == NULL)
    return (JniResult){.result = {.j = 0}, .exception = check_exception()};
  load_static_method(_c_Build, &_m_Build__getSerial, "getSerial",
                     "()Ljava/lang/String;");
  if (_m_Build__getSerial == NULL)
    return (JniResult){.result = {.j = 0}, .exception = check_exception()};
  jobject _result =
      (*jniEnv)->CallStaticObjectMethod(jniEnv, _c_Build, _m_Build__getSerial);
  return (JniResult){.result = {.l = to_global_ref(_result)},
                     .exception = check_exception()};
}

jmethodID _m_Build__getFingerprintedPartitions = NULL;
FFI_PLUGIN_EXPORT
JniResult Build__getFingerprintedPartitions() {
  load_env();
  load_class_gr(&_c_Build, "android/os/Build");
  if (_c_Build == NULL)
    return (JniResult){.result = {.j = 0}, .exception = check_exception()};
  load_static_method(_c_Build, &_m_Build__getFingerprintedPartitions,
                     "getFingerprintedPartitions", "()Ljava/util/List;");
  if (_m_Build__getFingerprintedPartitions == NULL)
    return (JniResult){.result = {.j = 0}, .exception = check_exception()};
  jobject _result = (*jniEnv)->CallStaticObjectMethod(
      jniEnv, _c_Build, _m_Build__getFingerprintedPartitions);
  return (JniResult){.result = {.l = to_global_ref(_result)},
                     .exception = check_exception()};
}

jmethodID _m_Build__getRadioVersion = NULL;
FFI_PLUGIN_EXPORT
JniResult Build__getRadioVersion() {
  load_env();
  load_class_gr(&_c_Build, "android/os/Build");
  if (_c_Build == NULL)
    return (JniResult){.result = {.j = 0}, .exception = check_exception()};
  load_static_method(_c_Build, &_m_Build__getRadioVersion, "getRadioVersion",
                     "()Ljava/lang/String;");
  if (_m_Build__getRadioVersion == NULL)
    return (JniResult){.result = {.j = 0}, .exception = check_exception()};
  jobject _result = (*jniEnv)->CallStaticObjectMethod(
      jniEnv, _c_Build, _m_Build__getRadioVersion);
  return (JniResult){.result = {.l = to_global_ref(_result)},
                     .exception = check_exception()};
}

jfieldID _f_Build__BOARD = NULL;
FFI_PLUGIN_EXPORT
JniResult get_Build__BOARD() {
  load_env();
  load_class_gr(&_c_Build, "android/os/Build");
  if (_c_Build == NULL)
    return (JniResult){.result = {.j = 0}, .exception = check_exception()};
  load_static_field(_c_Build, &_f_Build__BOARD, "BOARD", "Ljava/lang/String;");
  jobject _result = to_global_ref(
      (*jniEnv)->GetStaticObjectField(jniEnv, _c_Build, _f_Build__BOARD));
  return (JniResult){.result = {.l = _result}, .exception = check_exception()};
}

jfieldID _f_Build__BOOTLOADER = NULL;
FFI_PLUGIN_EXPORT
JniResult get_Build__BOOTLOADER() {
  load_env();
  load_class_gr(&_c_Build, "android/os/Build");
  if (_c_Build == NULL)
    return (JniResult){.result = {.j = 0}, .exception = check_exception()};
  load_static_field(_c_Build, &_f_Build__BOOTLOADER, "BOOTLOADER",
                    "Ljava/lang/String;");
  jobject _result = to_global_ref(
      (*jniEnv)->GetStaticObjectField(jniEnv, _c_Build, _f_Build__BOOTLOADER));
  return (JniResult){.result = {.l = _result}, .exception = check_exception()};
}

jfieldID _f_Build__BRAND = NULL;
FFI_PLUGIN_EXPORT
JniResult get_Build__BRAND() {
  load_env();
  load_class_gr(&_c_Build, "android/os/Build");
  if (_c_Build == NULL)
    return (JniResult){.result = {.j = 0}, .exception = check_exception()};
  load_static_field(_c_Build, &_f_Build__BRAND, "BRAND", "Ljava/lang/String;");
  jobject _result = to_global_ref(
      (*jniEnv)->GetStaticObjectField(jniEnv, _c_Build, _f_Build__BRAND));
  return (JniResult){.result = {.l = _result}, .exception = check_exception()};
}

jfieldID _f_Build__CPU_ABI = NULL;
FFI_PLUGIN_EXPORT
JniResult get_Build__CPU_ABI() {
  load_env();
  load_class_gr(&_c_Build, "android/os/Build");
  if (_c_Build == NULL)
    return (JniResult){.result = {.j = 0}, .exception = check_exception()};
  load_static_field(_c_Build, &_f_Build__CPU_ABI, "CPU_ABI",
                    "Ljava/lang/String;");
  jobject _result = to_global_ref(
      (*jniEnv)->GetStaticObjectField(jniEnv, _c_Build, _f_Build__CPU_ABI));
  return (JniResult){.result = {.l = _result}, .exception = check_exception()};
}

jfieldID _f_Build__CPU_ABI2 = NULL;
FFI_PLUGIN_EXPORT
JniResult get_Build__CPU_ABI2() {
  load_env();
  load_class_gr(&_c_Build, "android/os/Build");
  if (_c_Build == NULL)
    return (JniResult){.result = {.j = 0}, .exception = check_exception()};
  load_static_field(_c_Build, &_f_Build__CPU_ABI2, "CPU_ABI2",
                    "Ljava/lang/String;");
  jobject _result = to_global_ref(
      (*jniEnv)->GetStaticObjectField(jniEnv, _c_Build, _f_Build__CPU_ABI2));
  return (JniResult){.result = {.l = _result}, .exception = check_exception()};
}

jfieldID _f_Build__DEVICE = NULL;
FFI_PLUGIN_EXPORT
JniResult get_Build__DEVICE() {
  load_env();
  load_class_gr(&_c_Build, "android/os/Build");
  if (_c_Build == NULL)
    return (JniResult){.result = {.j = 0}, .exception = check_exception()};
  load_static_field(_c_Build, &_f_Build__DEVICE, "DEVICE",
                    "Ljava/lang/String;");
  jobject _result = to_global_ref(
      (*jniEnv)->GetStaticObjectField(jniEnv, _c_Build, _f_Build__DEVICE));
  return (JniResult){.result = {.l = _result}, .exception = check_exception()};
}

jfieldID _f_Build__DISPLAY = NULL;
FFI_PLUGIN_EXPORT
JniResult get_Build__DISPLAY() {
  load_env();
  load_class_gr(&_c_Build, "android/os/Build");
  if (_c_Build == NULL)
    return (JniResult){.result = {.j = 0}, .exception = check_exception()};
  load_static_field(_c_Build, &_f_Build__DISPLAY, "DISPLAY",
                    "Ljava/lang/String;");
  jobject _result = to_global_ref(
      (*jniEnv)->GetStaticObjectField(jniEnv, _c_Build, _f_Build__DISPLAY));
  return (JniResult){.result = {.l = _result}, .exception = check_exception()};
}

jfieldID _f_Build__FINGERPRINT = NULL;
FFI_PLUGIN_EXPORT
JniResult get_Build__FINGERPRINT() {
  load_env();
  load_class_gr(&_c_Build, "android/os/Build");
  if (_c_Build == NULL)
    return (JniResult){.result = {.j = 0}, .exception = check_exception()};
  load_static_field(_c_Build, &_f_Build__FINGERPRINT, "FINGERPRINT",
                    "Ljava/lang/String;");
  jobject _result = to_global_ref(
      (*jniEnv)->GetStaticObjectField(jniEnv, _c_Build, _f_Build__FINGERPRINT));
  return (JniResult){.result = {.l = _result}, .exception = check_exception()};
}

jfieldID _f_Build__HARDWARE = NULL;
FFI_PLUGIN_EXPORT
JniResult get_Build__HARDWARE() {
  load_env();
  load_class_gr(&_c_Build, "android/os/Build");
  if (_c_Build == NULL)
    return (JniResult){.result = {.j = 0}, .exception = check_exception()};
  load_static_field(_c_Build, &_f_Build__HARDWARE, "HARDWARE",
                    "Ljava/lang/String;");
  jobject _result = to_global_ref(
      (*jniEnv)->GetStaticObjectField(jniEnv, _c_Build, _f_Build__HARDWARE));
  return (JniResult){.result = {.l = _result}, .exception = check_exception()};
}

jfieldID _f_Build__HOST = NULL;
FFI_PLUGIN_EXPORT
JniResult get_Build__HOST() {
  load_env();
  load_class_gr(&_c_Build, "android/os/Build");
  if (_c_Build == NULL)
    return (JniResult){.result = {.j = 0}, .exception = check_exception()};
  load_static_field(_c_Build, &_f_Build__HOST, "HOST", "Ljava/lang/String;");
  jobject _result = to_global_ref(
      (*jniEnv)->GetStaticObjectField(jniEnv, _c_Build, _f_Build__HOST));
  return (JniResult){.result = {.l = _result}, .exception = check_exception()};
}

jfieldID _f_Build__ID = NULL;
FFI_PLUGIN_EXPORT
JniResult get_Build__ID() {
  load_env();
  load_class_gr(&_c_Build, "android/os/Build");
  if (_c_Build == NULL)
    return (JniResult){.result = {.j = 0}, .exception = check_exception()};
  load_static_field(_c_Build, &_f_Build__ID, "ID", "Ljava/lang/String;");
  jobject _result = to_global_ref(
      (*jniEnv)->GetStaticObjectField(jniEnv, _c_Build, _f_Build__ID));
  return (JniResult){.result = {.l = _result}, .exception = check_exception()};
}

jfieldID _f_Build__MANUFACTURER = NULL;
FFI_PLUGIN_EXPORT
JniResult get_Build__MANUFACTURER() {
  load_env();
  load_class_gr(&_c_Build, "android/os/Build");
  if (_c_Build == NULL)
    return (JniResult){.result = {.j = 0}, .exception = check_exception()};
  load_static_field(_c_Build, &_f_Build__MANUFACTURER, "MANUFACTURER",
                    "Ljava/lang/String;");
  jobject _result = to_global_ref((*jniEnv)->GetStaticObjectField(
      jniEnv, _c_Build, _f_Build__MANUFACTURER));
  return (JniResult){.result = {.l = _result}, .exception = check_exception()};
}

jfieldID _f_Build__MODEL = NULL;
FFI_PLUGIN_EXPORT
JniResult get_Build__MODEL() {
  load_env();
  load_class_gr(&_c_Build, "android/os/Build");
  if (_c_Build == NULL)
    return (JniResult){.result = {.j = 0}, .exception = check_exception()};
  load_static_field(_c_Build, &_f_Build__MODEL, "MODEL", "Ljava/lang/String;");
  jobject _result = to_global_ref(
      (*jniEnv)->GetStaticObjectField(jniEnv, _c_Build, _f_Build__MODEL));
  return (JniResult){.result = {.l = _result}, .exception = check_exception()};
}

jfieldID _f_Build__ODM_SKU = NULL;
FFI_PLUGIN_EXPORT
JniResult get_Build__ODM_SKU() {
  load_env();
  load_class_gr(&_c_Build, "android/os/Build");
  if (_c_Build == NULL)
    return (JniResult){.result = {.j = 0}, .exception = check_exception()};
  load_static_field(_c_Build, &_f_Build__ODM_SKU, "ODM_SKU",
                    "Ljava/lang/String;");
  jobject _result = to_global_ref(
      (*jniEnv)->GetStaticObjectField(jniEnv, _c_Build, _f_Build__ODM_SKU));
  return (JniResult){.result = {.l = _result}, .exception = check_exception()};
}

jfieldID _f_Build__PRODUCT = NULL;
FFI_PLUGIN_EXPORT
JniResult get_Build__PRODUCT() {
  load_env();
  load_class_gr(&_c_Build, "android/os/Build");
  if (_c_Build == NULL)
    return (JniResult){.result = {.j = 0}, .exception = check_exception()};
  load_static_field(_c_Build, &_f_Build__PRODUCT, "PRODUCT",
                    "Ljava/lang/String;");
  jobject _result = to_global_ref(
      (*jniEnv)->GetStaticObjectField(jniEnv, _c_Build, _f_Build__PRODUCT));
  return (JniResult){.result = {.l = _result}, .exception = check_exception()};
}

jfieldID _f_Build__RADIO = NULL;
FFI_PLUGIN_EXPORT
JniResult get_Build__RADIO() {
  load_env();
  load_class_gr(&_c_Build, "android/os/Build");
  if (_c_Build == NULL)
    return (JniResult){.result = {.j = 0}, .exception = check_exception()};
  load_static_field(_c_Build, &_f_Build__RADIO, "RADIO", "Ljava/lang/String;");
  jobject _result = to_global_ref(
      (*jniEnv)->GetStaticObjectField(jniEnv, _c_Build, _f_Build__RADIO));
  return (JniResult){.result = {.l = _result}, .exception = check_exception()};
}

jfieldID _f_Build__SERIAL = NULL;
FFI_PLUGIN_EXPORT
JniResult get_Build__SERIAL() {
  load_env();
  load_class_gr(&_c_Build, "android/os/Build");
  if (_c_Build == NULL)
    return (JniResult){.result = {.j = 0}, .exception = check_exception()};
  load_static_field(_c_Build, &_f_Build__SERIAL, "SERIAL",
                    "Ljava/lang/String;");
  jobject _result = to_global_ref(
      (*jniEnv)->GetStaticObjectField(jniEnv, _c_Build, _f_Build__SERIAL));
  return (JniResult){.result = {.l = _result}, .exception = check_exception()};
}

jfieldID _f_Build__SKU = NULL;
FFI_PLUGIN_EXPORT
JniResult get_Build__SKU() {
  load_env();
  load_class_gr(&_c_Build, "android/os/Build");
  if (_c_Build == NULL)
    return (JniResult){.result = {.j = 0}, .exception = check_exception()};
  load_static_field(_c_Build, &_f_Build__SKU, "SKU", "Ljava/lang/String;");
  jobject _result = to_global_ref(
      (*jniEnv)->GetStaticObjectField(jniEnv, _c_Build, _f_Build__SKU));
  return (JniResult){.result = {.l = _result}, .exception = check_exception()};
}

jfieldID _f_Build__SOC_MANUFACTURER = NULL;
FFI_PLUGIN_EXPORT
JniResult get_Build__SOC_MANUFACTURER() {
  load_env();
  load_class_gr(&_c_Build, "android/os/Build");
  if (_c_Build == NULL)
    return (JniResult){.result = {.j = 0}, .exception = check_exception()};
  load_static_field(_c_Build, &_f_Build__SOC_MANUFACTURER, "SOC_MANUFACTURER",
                    "Ljava/lang/String;");
  jobject _result = to_global_ref((*jniEnv)->GetStaticObjectField(
      jniEnv, _c_Build, _f_Build__SOC_MANUFACTURER));
  return (JniResult){.result = {.l = _result}, .exception = check_exception()};
}

jfieldID _f_Build__SOC_MODEL = NULL;
FFI_PLUGIN_EXPORT
JniResult get_Build__SOC_MODEL() {
  load_env();
  load_class_gr(&_c_Build, "android/os/Build");
  if (_c_Build == NULL)
    return (JniResult){.result = {.j = 0}, .exception = check_exception()};
  load_static_field(_c_Build, &_f_Build__SOC_MODEL, "SOC_MODEL",
                    "Ljava/lang/String;");
  jobject _result = to_global_ref(
      (*jniEnv)->GetStaticObjectField(jniEnv, _c_Build, _f_Build__SOC_MODEL));
  return (JniResult){.result = {.l = _result}, .exception = check_exception()};
}

jfieldID _f_Build__SUPPORTED_32_BIT_ABIS = NULL;
FFI_PLUGIN_EXPORT
JniResult get_Build__SUPPORTED_32_BIT_ABIS() {
  load_env();
  load_class_gr(&_c_Build, "android/os/Build");
  if (_c_Build == NULL)
    return (JniResult){.result = {.j = 0}, .exception = check_exception()};
  load_static_field(_c_Build, &_f_Build__SUPPORTED_32_BIT_ABIS,
                    "SUPPORTED_32_BIT_ABIS", "[Ljava/lang/String;");
  jobject _result = to_global_ref((*jniEnv)->GetStaticObjectField(
      jniEnv, _c_Build, _f_Build__SUPPORTED_32_BIT_ABIS));
  return (JniResult){.result = {.l = _result}, .exception = check_exception()};
}

jfieldID _f_Build__SUPPORTED_64_BIT_ABIS = NULL;
FFI_PLUGIN_EXPORT
JniResult get_Build__SUPPORTED_64_BIT_ABIS() {
  load_env();
  load_class_gr(&_c_Build, "android/os/Build");
  if (_c_Build == NULL)
    return (JniResult){.result = {.j = 0}, .exception = check_exception()};
  load_static_field(_c_Build, &_f_Build__SUPPORTED_64_BIT_ABIS,
                    "SUPPORTED_64_BIT_ABIS", "[Ljava/lang/String;");
  jobject _result = to_global_ref((*jniEnv)->GetStaticObjectField(
      jniEnv, _c_Build, _f_Build__SUPPORTED_64_BIT_ABIS));
  return (JniResult){.result = {.l = _result}, .exception = check_exception()};
}

jfieldID _f_Build__SUPPORTED_ABIS = NULL;
FFI_PLUGIN_EXPORT
JniResult get_Build__SUPPORTED_ABIS() {
  load_env();
  load_class_gr(&_c_Build, "android/os/Build");
  if (_c_Build == NULL)
    return (JniResult){.result = {.j = 0}, .exception = check_exception()};
  load_static_field(_c_Build, &_f_Build__SUPPORTED_ABIS, "SUPPORTED_ABIS",
                    "[Ljava/lang/String;");
  jobject _result = to_global_ref((*jniEnv)->GetStaticObjectField(
      jniEnv, _c_Build, _f_Build__SUPPORTED_ABIS));
  return (JniResult){.result = {.l = _result}, .exception = check_exception()};
}

jfieldID _f_Build__TAGS = NULL;
FFI_PLUGIN_EXPORT
JniResult get_Build__TAGS() {
  load_env();
  load_class_gr(&_c_Build, "android/os/Build");
  if (_c_Build == NULL)
    return (JniResult){.result = {.j = 0}, .exception = check_exception()};
  load_static_field(_c_Build, &_f_Build__TAGS, "TAGS", "Ljava/lang/String;");
  jobject _result = to_global_ref(
      (*jniEnv)->GetStaticObjectField(jniEnv, _c_Build, _f_Build__TAGS));
  return (JniResult){.result = {.l = _result}, .exception = check_exception()};
}

jfieldID _f_Build__TIME = NULL;
FFI_PLUGIN_EXPORT
JniResult get_Build__TIME() {
  load_env();
  load_class_gr(&_c_Build, "android/os/Build");
  if (_c_Build == NULL)
    return (JniResult){.result = {.j = 0}, .exception = check_exception()};
  load_static_field(_c_Build, &_f_Build__TIME, "TIME", "J");
  int64_t _result =
      (*jniEnv)->GetStaticLongField(jniEnv, _c_Build, _f_Build__TIME);
  return (JniResult){.result = {.j = _result}, .exception = check_exception()};
}

jfieldID _f_Build__TYPE = NULL;
FFI_PLUGIN_EXPORT
JniResult get_Build__TYPE() {
  load_env();
  load_class_gr(&_c_Build, "android/os/Build");
  if (_c_Build == NULL)
    return (JniResult){.result = {.j = 0}, .exception = check_exception()};
  load_static_field(_c_Build, &_f_Build__TYPE, "TYPE", "Ljava/lang/String;");
  jobject _result = to_global_ref(
      (*jniEnv)->GetStaticObjectField(jniEnv, _c_Build, _f_Build__TYPE));
  return (JniResult){.result = {.l = _result}, .exception = check_exception()};
}

jfieldID _f_Build__USER = NULL;
FFI_PLUGIN_EXPORT
JniResult get_Build__USER() {
  load_env();
  load_class_gr(&_c_Build, "android/os/Build");
  if (_c_Build == NULL)
    return (JniResult){.result = {.j = 0}, .exception = check_exception()};
  load_static_field(_c_Build, &_f_Build__USER, "USER", "Ljava/lang/String;");
  jobject _result = to_global_ref(
      (*jniEnv)->GetStaticObjectField(jniEnv, _c_Build, _f_Build__USER));
  return (JniResult){.result = {.l = _result}, .exception = check_exception()};
}

// java.util.HashMap
jclass _c_HashMap = NULL;

jmethodID _m_HashMap__ctor = NULL;
FFI_PLUGIN_EXPORT
JniResult HashMap__ctor(int32_t i, float f) {
  load_env();
  load_class_gr(&_c_HashMap, "java/util/HashMap");
  if (_c_HashMap == NULL)
    return (JniResult){.result = {.j = 0}, .exception = check_exception()};
  load_method(_c_HashMap, &_m_HashMap__ctor, "<init>", "(IF)V");
  if (_m_HashMap__ctor == NULL)
    return (JniResult){.result = {.j = 0}, .exception = check_exception()};
  jobject _result =
      (*jniEnv)->NewObject(jniEnv, _c_HashMap, _m_HashMap__ctor, i, f);
  return (JniResult){.result = {.l = to_global_ref(_result)},
                     .exception = check_exception()};
}

jmethodID _m_HashMap__ctor1 = NULL;
FFI_PLUGIN_EXPORT
JniResult HashMap__ctor1(int32_t i) {
  load_env();
  load_class_gr(&_c_HashMap, "java/util/HashMap");
  if (_c_HashMap == NULL)
    return (JniResult){.result = {.j = 0}, .exception = check_exception()};
  load_method(_c_HashMap, &_m_HashMap__ctor1, "<init>", "(I)V");
  if (_m_HashMap__ctor1 == NULL)
    return (JniResult){.result = {.j = 0}, .exception = check_exception()};
  jobject _result =
      (*jniEnv)->NewObject(jniEnv, _c_HashMap, _m_HashMap__ctor1, i);
  return (JniResult){.result = {.l = to_global_ref(_result)},
                     .exception = check_exception()};
}

jmethodID _m_HashMap__ctor2 = NULL;
FFI_PLUGIN_EXPORT
JniResult HashMap__ctor2() {
  load_env();
  load_class_gr(&_c_HashMap, "java/util/HashMap");
  if (_c_HashMap == NULL)
    return (JniResult){.result = {.j = 0}, .exception = check_exception()};
  load_method(_c_HashMap, &_m_HashMap__ctor2, "<init>", "()V");
  if (_m_HashMap__ctor2 == NULL)
    return (JniResult){.result = {.j = 0}, .exception = check_exception()};
  jobject _result = (*jniEnv)->NewObject(jniEnv, _c_HashMap, _m_HashMap__ctor2);
  return (JniResult){.result = {.l = to_global_ref(_result)},
                     .exception = check_exception()};
}

jmethodID _m_HashMap__ctor3 = NULL;
FFI_PLUGIN_EXPORT
JniResult HashMap__ctor3(jobject map) {
  load_env();
  load_class_gr(&_c_HashMap, "java/util/HashMap");
  if (_c_HashMap == NULL)
    return (JniResult){.result = {.j = 0}, .exception = check_exception()};
  load_method(_c_HashMap, &_m_HashMap__ctor3, "<init>", "(Ljava/util/Map;)V");
  if (_m_HashMap__ctor3 == NULL)
    return (JniResult){.result = {.j = 0}, .exception = check_exception()};
  jobject _result =
      (*jniEnv)->NewObject(jniEnv, _c_HashMap, _m_HashMap__ctor3, map);
  return (JniResult){.result = {.l = to_global_ref(_result)},
                     .exception = check_exception()};
}

jmethodID _m_HashMap__size = NULL;
FFI_PLUGIN_EXPORT
JniResult HashMap__size(jobject self_) {
  load_env();
  load_class_gr(&_c_HashMap, "java/util/HashMap");
  if (_c_HashMap == NULL)
    return (JniResult){.result = {.j = 0}, .exception = check_exception()};
  load_method(_c_HashMap, &_m_HashMap__size, "size", "()I");
  if (_m_HashMap__size == NULL)
    return (JniResult){.result = {.j = 0}, .exception = check_exception()};
  int32_t _result = (*jniEnv)->CallIntMethod(jniEnv, self_, _m_HashMap__size);
  return (JniResult){.result = {.i = _result}, .exception = check_exception()};
}

jmethodID _m_HashMap__isEmpty = NULL;
FFI_PLUGIN_EXPORT
JniResult HashMap__isEmpty(jobject self_) {
  load_env();
  load_class_gr(&_c_HashMap, "java/util/HashMap");
  if (_c_HashMap == NULL)
    return (JniResult){.result = {.j = 0}, .exception = check_exception()};
  load_method(_c_HashMap, &_m_HashMap__isEmpty, "isEmpty", "()Z");
  if (_m_HashMap__isEmpty == NULL)
    return (JniResult){.result = {.j = 0}, .exception = check_exception()};
  uint8_t _result =
      (*jniEnv)->CallBooleanMethod(jniEnv, self_, _m_HashMap__isEmpty);
  return (JniResult){.result = {.z = _result}, .exception = check_exception()};
}

jmethodID _m_HashMap__get0 = NULL;
FFI_PLUGIN_EXPORT
JniResult HashMap__get0(jobject self_, jobject object) {
  load_env();
  load_class_gr(&_c_HashMap, "java/util/HashMap");
  if (_c_HashMap == NULL)
    return (JniResult){.result = {.j = 0}, .exception = check_exception()};
  load_method(_c_HashMap, &_m_HashMap__get0, "get",
              "(Ljava/lang/Object;)Ljava/lang/Object;");
  if (_m_HashMap__get0 == NULL)
    return (JniResult){.result = {.j = 0}, .exception = check_exception()};
  jobject _result =
      (*jniEnv)->CallObjectMethod(jniEnv, self_, _m_HashMap__get0, object);
  return (JniResult){.result = {.l = to_global_ref(_result)},
                     .exception = check_exception()};
}

jmethodID _m_HashMap__containsKey = NULL;
FFI_PLUGIN_EXPORT
JniResult HashMap__containsKey(jobject self_, jobject object) {
  load_env();
  load_class_gr(&_c_HashMap, "java/util/HashMap");
  if (_c_HashMap == NULL)
    return (JniResult){.result = {.j = 0}, .exception = check_exception()};
  load_method(_c_HashMap, &_m_HashMap__containsKey, "containsKey",
              "(Ljava/lang/Object;)Z");
  if (_m_HashMap__containsKey == NULL)
    return (JniResult){.result = {.j = 0}, .exception = check_exception()};
  uint8_t _result = (*jniEnv)->CallBooleanMethod(
      jniEnv, self_, _m_HashMap__containsKey, object);
  return (JniResult){.result = {.z = _result}, .exception = check_exception()};
}

jmethodID _m_HashMap__put = NULL;
FFI_PLUGIN_EXPORT
JniResult HashMap__put(jobject self_, jobject object, jobject object1) {
  load_env();
  load_class_gr(&_c_HashMap, "java/util/HashMap");
  if (_c_HashMap == NULL)
    return (JniResult){.result = {.j = 0}, .exception = check_exception()};
  load_method(_c_HashMap, &_m_HashMap__put, "put",
              "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;");
  if (_m_HashMap__put == NULL)
    return (JniResult){.result = {.j = 0}, .exception = check_exception()};
  jobject _result = (*jniEnv)->CallObjectMethod(jniEnv, self_, _m_HashMap__put,
                                                object, object1);
  return (JniResult){.result = {.l = to_global_ref(_result)},
                     .exception = check_exception()};
}

jmethodID _m_HashMap__putAll = NULL;
FFI_PLUGIN_EXPORT
JniResult HashMap__putAll(jobject self_, jobject map) {
  load_env();
  load_class_gr(&_c_HashMap, "java/util/HashMap");
  if (_c_HashMap == NULL)
    return (JniResult){.result = {.j = 0}, .exception = check_exception()};
  load_method(_c_HashMap, &_m_HashMap__putAll, "putAll", "(Ljava/util/Map;)V");
  if (_m_HashMap__putAll == NULL)
    return (JniResult){.result = {.j = 0}, .exception = check_exception()};
  (*jniEnv)->CallVoidMethod(jniEnv, self_, _m_HashMap__putAll, map);
  return (JniResult){.result = {.j = 0}, .exception = check_exception()};
}

jmethodID _m_HashMap__remove = NULL;
FFI_PLUGIN_EXPORT
JniResult HashMap__remove(jobject self_, jobject object) {
  load_env();
  load_class_gr(&_c_HashMap, "java/util/HashMap");
  if (_c_HashMap == NULL)
    return (JniResult){.result = {.j = 0}, .exception = check_exception()};
  load_method(_c_HashMap, &_m_HashMap__remove, "remove",
              "(Ljava/lang/Object;)Ljava/lang/Object;");
  if (_m_HashMap__remove == NULL)
    return (JniResult){.result = {.j = 0}, .exception = check_exception()};
  jobject _result =
      (*jniEnv)->CallObjectMethod(jniEnv, self_, _m_HashMap__remove, object);
  return (JniResult){.result = {.l = to_global_ref(_result)},
                     .exception = check_exception()};
}

jmethodID _m_HashMap__clear = NULL;
FFI_PLUGIN_EXPORT
JniResult HashMap__clear(jobject self_) {
  load_env();
  load_class_gr(&_c_HashMap, "java/util/HashMap");
  if (_c_HashMap == NULL)
    return (JniResult){.result = {.j = 0}, .exception = check_exception()};
  load_method(_c_HashMap, &_m_HashMap__clear, "clear", "()V");
  if (_m_HashMap__clear == NULL)
    return (JniResult){.result = {.j = 0}, .exception = check_exception()};
  (*jniEnv)->CallVoidMethod(jniEnv, self_, _m_HashMap__clear);
  return (JniResult){.result = {.j = 0}, .exception = check_exception()};
}

jmethodID _m_HashMap__containsValue = NULL;
FFI_PLUGIN_EXPORT
JniResult HashMap__containsValue(jobject self_, jobject object) {
  load_env();
  load_class_gr(&_c_HashMap, "java/util/HashMap");
  if (_c_HashMap == NULL)
    return (JniResult){.result = {.j = 0}, .exception = check_exception()};
  load_method(_c_HashMap, &_m_HashMap__containsValue, "containsValue",
              "(Ljava/lang/Object;)Z");
  if (_m_HashMap__containsValue == NULL)
    return (JniResult){.result = {.j = 0}, .exception = check_exception()};
  uint8_t _result = (*jniEnv)->CallBooleanMethod(
      jniEnv, self_, _m_HashMap__containsValue, object);
  return (JniResult){.result = {.z = _result}, .exception = check_exception()};
}

jmethodID _m_HashMap__keySet = NULL;
FFI_PLUGIN_EXPORT
JniResult HashMap__keySet(jobject self_) {
  load_env();
  load_class_gr(&_c_HashMap, "java/util/HashMap");
  if (_c_HashMap == NULL)
    return (JniResult){.result = {.j = 0}, .exception = check_exception()};
  load_method(_c_HashMap, &_m_HashMap__keySet, "keySet", "()Ljava/util/Set;");
  if (_m_HashMap__keySet == NULL)
    return (JniResult){.result = {.j = 0}, .exception = check_exception()};
  jobject _result =
      (*jniEnv)->CallObjectMethod(jniEnv, self_, _m_HashMap__keySet);
  return (JniResult){.result = {.l = to_global_ref(_result)},
                     .exception = check_exception()};
}

jmethodID _m_HashMap__values = NULL;
FFI_PLUGIN_EXPORT
JniResult HashMap__values(jobject self_) {
  load_env();
  load_class_gr(&_c_HashMap, "java/util/HashMap");
  if (_c_HashMap == NULL)
    return (JniResult){.result = {.j = 0}, .exception = check_exception()};
  load_method(_c_HashMap, &_m_HashMap__values, "values",
              "()Ljava/util/Collection;");
  if (_m_HashMap__values == NULL)
    return (JniResult){.result = {.j = 0}, .exception = check_exception()};
  jobject _result =
      (*jniEnv)->CallObjectMethod(jniEnv, self_, _m_HashMap__values);
  return (JniResult){.result = {.l = to_global_ref(_result)},
                     .exception = check_exception()};
}

jmethodID _m_HashMap__entrySet = NULL;
FFI_PLUGIN_EXPORT
JniResult HashMap__entrySet(jobject self_) {
  load_env();
  load_class_gr(&_c_HashMap, "java/util/HashMap");
  if (_c_HashMap == NULL)
    return (JniResult){.result = {.j = 0}, .exception = check_exception()};
  load_method(_c_HashMap, &_m_HashMap__entrySet, "entrySet",
              "()Ljava/util/Set;");
  if (_m_HashMap__entrySet == NULL)
    return (JniResult){.result = {.j = 0}, .exception = check_exception()};
  jobject _result =
      (*jniEnv)->CallObjectMethod(jniEnv, self_, _m_HashMap__entrySet);
  return (JniResult){.result = {.l = to_global_ref(_result)},
                     .exception = check_exception()};
}

jmethodID _m_HashMap__getOrDefault = NULL;
FFI_PLUGIN_EXPORT
JniResult HashMap__getOrDefault(jobject self_,
                                jobject object,
                                jobject object1) {
  load_env();
  load_class_gr(&_c_HashMap, "java/util/HashMap");
  if (_c_HashMap == NULL)
    return (JniResult){.result = {.j = 0}, .exception = check_exception()};
  load_method(_c_HashMap, &_m_HashMap__getOrDefault, "getOrDefault",
              "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;");
  if (_m_HashMap__getOrDefault == NULL)
    return (JniResult){.result = {.j = 0}, .exception = check_exception()};
  jobject _result = (*jniEnv)->CallObjectMethod(
      jniEnv, self_, _m_HashMap__getOrDefault, object, object1);
  return (JniResult){.result = {.l = to_global_ref(_result)},
                     .exception = check_exception()};
}

jmethodID _m_HashMap__putIfAbsent = NULL;
FFI_PLUGIN_EXPORT
JniResult HashMap__putIfAbsent(jobject self_, jobject object, jobject object1) {
  load_env();
  load_class_gr(&_c_HashMap, "java/util/HashMap");
  if (_c_HashMap == NULL)
    return (JniResult){.result = {.j = 0}, .exception = check_exception()};
  load_method(_c_HashMap, &_m_HashMap__putIfAbsent, "putIfAbsent",
              "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;");
  if (_m_HashMap__putIfAbsent == NULL)
    return (JniResult){.result = {.j = 0}, .exception = check_exception()};
  jobject _result = (*jniEnv)->CallObjectMethod(
      jniEnv, self_, _m_HashMap__putIfAbsent, object, object1);
  return (JniResult){.result = {.l = to_global_ref(_result)},
                     .exception = check_exception()};
}

jmethodID _m_HashMap__remove1 = NULL;
FFI_PLUGIN_EXPORT
JniResult HashMap__remove1(jobject self_, jobject object, jobject object1) {
  load_env();
  load_class_gr(&_c_HashMap, "java/util/HashMap");
  if (_c_HashMap == NULL)
    return (JniResult){.result = {.j = 0}, .exception = check_exception()};
  load_method(_c_HashMap, &_m_HashMap__remove1, "remove",
              "(Ljava/lang/Object;Ljava/lang/Object;)Z");
  if (_m_HashMap__remove1 == NULL)
    return (JniResult){.result = {.j = 0}, .exception = check_exception()};
  uint8_t _result = (*jniEnv)->CallBooleanMethod(
      jniEnv, self_, _m_HashMap__remove1, object, object1);
  return (JniResult){.result = {.z = _result}, .exception = check_exception()};
}

jmethodID _m_HashMap__replace = NULL;
FFI_PLUGIN_EXPORT
JniResult HashMap__replace(jobject self_,
                           jobject object,
                           jobject object1,
                           jobject object2) {
  load_env();
  load_class_gr(&_c_HashMap, "java/util/HashMap");
  if (_c_HashMap == NULL)
    return (JniResult){.result = {.j = 0}, .exception = check_exception()};
  load_method(_c_HashMap, &_m_HashMap__replace, "replace",
              "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Z");
  if (_m_HashMap__replace == NULL)
    return (JniResult){.result = {.j = 0}, .exception = check_exception()};
  uint8_t _result = (*jniEnv)->CallBooleanMethod(
      jniEnv, self_, _m_HashMap__replace, object, object1, object2);
  return (JniResult){.result = {.z = _result}, .exception = check_exception()};
}

jmethodID _m_HashMap__replace1 = NULL;
FFI_PLUGIN_EXPORT
JniResult HashMap__replace1(jobject self_, jobject object, jobject object1) {
  load_env();
  load_class_gr(&_c_HashMap, "java/util/HashMap");
  if (_c_HashMap == NULL)
    return (JniResult){.result = {.j = 0}, .exception = check_exception()};
  load_method(_c_HashMap, &_m_HashMap__replace1, "replace",
              "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;");
  if (_m_HashMap__replace1 == NULL)
    return (JniResult){.result = {.j = 0}, .exception = check_exception()};
  jobject _result = (*jniEnv)->CallObjectMethod(
      jniEnv, self_, _m_HashMap__replace1, object, object1);
  return (JniResult){.result = {.l = to_global_ref(_result)},
                     .exception = check_exception()};
}

jmethodID _m_HashMap__computeIfAbsent = NULL;
FFI_PLUGIN_EXPORT
JniResult HashMap__computeIfAbsent(jobject self_,
                                   jobject object,
                                   jobject function) {
  load_env();
  load_class_gr(&_c_HashMap, "java/util/HashMap");
  if (_c_HashMap == NULL)
    return (JniResult){.result = {.j = 0}, .exception = check_exception()};
  load_method(
      _c_HashMap, &_m_HashMap__computeIfAbsent, "computeIfAbsent",
      "(Ljava/lang/Object;Ljava/util/function/Function;)Ljava/lang/Object;");
  if (_m_HashMap__computeIfAbsent == NULL)
    return (JniResult){.result = {.j = 0}, .exception = check_exception()};
  jobject _result = (*jniEnv)->CallObjectMethod(
      jniEnv, self_, _m_HashMap__computeIfAbsent, object, function);
  return (JniResult){.result = {.l = to_global_ref(_result)},
                     .exception = check_exception()};
}

jmethodID _m_HashMap__computeIfPresent = NULL;
FFI_PLUGIN_EXPORT
JniResult HashMap__computeIfPresent(jobject self_,
                                    jobject object,
                                    jobject biFunction) {
  load_env();
  load_class_gr(&_c_HashMap, "java/util/HashMap");
  if (_c_HashMap == NULL)
    return (JniResult){.result = {.j = 0}, .exception = check_exception()};
  load_method(
      _c_HashMap, &_m_HashMap__computeIfPresent, "computeIfPresent",
      "(Ljava/lang/Object;Ljava/util/function/BiFunction;)Ljava/lang/Object;");
  if (_m_HashMap__computeIfPresent == NULL)
    return (JniResult){.result = {.j = 0}, .exception = check_exception()};
  jobject _result = (*jniEnv)->CallObjectMethod(
      jniEnv, self_, _m_HashMap__computeIfPresent, object, biFunction);
  return (JniResult){.result = {.l = to_global_ref(_result)},
                     .exception = check_exception()};
}

jmethodID _m_HashMap__compute = NULL;
FFI_PLUGIN_EXPORT
JniResult HashMap__compute(jobject self_, jobject object, jobject biFunction) {
  load_env();
  load_class_gr(&_c_HashMap, "java/util/HashMap");
  if (_c_HashMap == NULL)
    return (JniResult){.result = {.j = 0}, .exception = check_exception()};
  load_method(
      _c_HashMap, &_m_HashMap__compute, "compute",
      "(Ljava/lang/Object;Ljava/util/function/BiFunction;)Ljava/lang/Object;");
  if (_m_HashMap__compute == NULL)
    return (JniResult){.result = {.j = 0}, .exception = check_exception()};
  jobject _result = (*jniEnv)->CallObjectMethod(
      jniEnv, self_, _m_HashMap__compute, object, biFunction);
  return (JniResult){.result = {.l = to_global_ref(_result)},
                     .exception = check_exception()};
}

jmethodID _m_HashMap__merge = NULL;
FFI_PLUGIN_EXPORT
JniResult HashMap__merge(jobject self_,
                         jobject object,
                         jobject object1,
                         jobject biFunction) {
  load_env();
  load_class_gr(&_c_HashMap, "java/util/HashMap");
  if (_c_HashMap == NULL)
    return (JniResult){.result = {.j = 0}, .exception = check_exception()};
  load_method(_c_HashMap, &_m_HashMap__merge, "merge",
              "(Ljava/lang/Object;Ljava/lang/Object;Ljava/util/function/"
              "BiFunction;)Ljava/lang/Object;");
  if (_m_HashMap__merge == NULL)
    return (JniResult){.result = {.j = 0}, .exception = check_exception()};
  jobject _result = (*jniEnv)->CallObjectMethod(
      jniEnv, self_, _m_HashMap__merge, object, object1, biFunction);
  return (JniResult){.result = {.l = to_global_ref(_result)},
                     .exception = check_exception()};
}

jmethodID _m_HashMap__forEach = NULL;
FFI_PLUGIN_EXPORT
JniResult HashMap__forEach(jobject self_, jobject biConsumer) {
  load_env();
  load_class_gr(&_c_HashMap, "java/util/HashMap");
  if (_c_HashMap == NULL)
    return (JniResult){.result = {.j = 0}, .exception = check_exception()};
  load_method(_c_HashMap, &_m_HashMap__forEach, "forEach",
              "(Ljava/util/function/BiConsumer;)V");
  if (_m_HashMap__forEach == NULL)
    return (JniResult){.result = {.j = 0}, .exception = check_exception()};
  (*jniEnv)->CallVoidMethod(jniEnv, self_, _m_HashMap__forEach, biConsumer);
  return (JniResult){.result = {.j = 0}, .exception = check_exception()};
}

jmethodID _m_HashMap__replaceAll = NULL;
FFI_PLUGIN_EXPORT
JniResult HashMap__replaceAll(jobject self_, jobject biFunction) {
  load_env();
  load_class_gr(&_c_HashMap, "java/util/HashMap");
  if (_c_HashMap == NULL)
    return (JniResult){.result = {.j = 0}, .exception = check_exception()};
  load_method(_c_HashMap, &_m_HashMap__replaceAll, "replaceAll",
              "(Ljava/util/function/BiFunction;)V");
  if (_m_HashMap__replaceAll == NULL)
    return (JniResult){.result = {.j = 0}, .exception = check_exception()};
  (*jniEnv)->CallVoidMethod(jniEnv, self_, _m_HashMap__replaceAll, biFunction);
  return (JniResult){.result = {.j = 0}, .exception = check_exception()};
}

jmethodID _m_HashMap__clone = NULL;
FFI_PLUGIN_EXPORT
JniResult HashMap__clone(jobject self_) {
  load_env();
  load_class_gr(&_c_HashMap, "java/util/HashMap");
  if (_c_HashMap == NULL)
    return (JniResult){.result = {.j = 0}, .exception = check_exception()};
  load_method(_c_HashMap, &_m_HashMap__clone, "clone", "()Ljava/lang/Object;");
  if (_m_HashMap__clone == NULL)
    return (JniResult){.result = {.j = 0}, .exception = check_exception()};
  jobject _result =
      (*jniEnv)->CallObjectMethod(jniEnv, self_, _m_HashMap__clone);
  return (JniResult){.result = {.l = to_global_ref(_result)},
                     .exception = check_exception()};
}
