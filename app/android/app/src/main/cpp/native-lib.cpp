#include <jni.h>
#include <Hello.h>

extern "C"
jstring
Java_com_nicolas_guillot_androidcmake_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    app::Hello lib;
    std::string hello = lib.sayHello();
    return env->NewStringUTF(hello.c_str());
}
