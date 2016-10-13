#include <jni.h>
#include <string>
#include <algorithm>

extern "C"
JNIEXPORT jstring JNICALL
Java_com_nicolas_guillot_core_Core_toUpperCase(JNIEnv *env, jclass type, jstring str_) {
  const char *str = env->GetStringUTFChars(str_, 0);
  std::string myStr(str);
  std::transform(myStr.begin(), myStr.end(), myStr.begin(), [](unsigned char c) { return std::toupper(c); });

  env->ReleaseStringUTFChars(str_, str);

  return env->NewStringUTF(myStr.c_str());
}