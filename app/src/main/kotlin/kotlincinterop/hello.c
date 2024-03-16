//
// Created by starwolf on 3/16/24.
//
#include <stdio.h>
#include <jni.h>
#include "NativeSample.h"

JNIEXPORT void JNICALL Java_kotlincinterop_NativeSample_sayHello(JNIEnv *env, jobject obj) {
    printf("Hello World!\n");
    return;
}

