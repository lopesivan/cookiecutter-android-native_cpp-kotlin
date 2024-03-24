#include <jni.h>
#include <string>

extern "C" JNIEXPORT jstring JNICALL
Java_{{ cookiecutter.__package_name_jni }}_{{ cookiecutter.__main_activity }}_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}