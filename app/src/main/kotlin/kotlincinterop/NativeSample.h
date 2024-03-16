//
// Created by starwolf on 3/16/24.
//
#include <jni.h>

#ifndef KOTLINCINTEROP_NATIVESAMPLE_H
#define KOTLINCINTEROP_NATIVESAMPLE_H
#endif //KOTLINCINTEROP_NATIVESAMPLE_H

#ifndef _Included_NativeSample
#define _Included_NativeSample
#ifdef __cplusplus
extern "C" {
#endif
JNIEXPORT void JNICALL JAVA_NativeSample_sayHello(JNIEnv *, jobject);
#ifdef __cplusplus
}
#endif
#endif
