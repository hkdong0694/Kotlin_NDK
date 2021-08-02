#include <jni.h>
#include <string>
#include "Calculator.h"

// jstring -> JNI 에서 사용하는 데이터 구조, 자바 문자열의 포인터를 가리키는 포인터 타입이다.
extern "C" JNIEXPORT jstring JNICALL
// 함수 위치의 절대 경로 com_example_ndksample -> 패키지 명
// JNIEnv* -> Virtual Machine을 가리키는 포인터
// jobject -> 자바에서 this 객체를 가리키는 포인터
Java_com_example_ndksample_MainActivity_stringFromJNI(JNIEnv* env,jobject ) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}

extern "C"
JNIEXPORT jstring JNICALL
Java_com_example_ndksample_MainActivity_add(JNIEnv *env, jobject thiz, jint num1, jint num2) {
    Calculator ex = Calculator(num1, num2);
    std::string answer = std::to_string(num1) + " + " + std::to_string(num2) + " = " + std::to_string(ex.getAdd(num1,num2));
    return env->NewStringUTF(answer.c_str());
}

extern "C"
JNIEXPORT jstring JNICALL
Java_com_example_ndksample_MainActivity_minus(JNIEnv *env, jobject thiz, jint num1, jint num2) {
    Calculator ex = Calculator(num1, num2);
    std::string answer = std::to_string(num1) + " - " + std::to_string(num2) + " = " + std::to_string(ex.getMinus(num1,num2));
    return env->NewStringUTF(answer.c_str());
}

extern "C"
JNIEXPORT jstring JNICALL
Java_com_example_ndksample_MainActivity_multi(JNIEnv *env, jobject thiz, jint num1, jint num2) {
    Calculator ex = Calculator(num1, num2);
    std::string answer = std::to_string(num1) + " * " + std::to_string(num2) + " = " + std::to_string(ex.getMulti(num1,num2));
    return env->NewStringUTF(answer.c_str());
}

extern "C"
JNIEXPORT jstring JNICALL
Java_com_example_ndksample_MainActivity_divider(JNIEnv *env, jobject thiz, jint num1, jint num2) {
    Calculator ex = Calculator(num1, num2);
    std::string answer = std::to_string(num1) + " / " + std::to_string(num2) + " = " + std::to_string(ex.getDivide(num1,num2));
    return env->NewStringUTF(answer.c_str());
}