/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class openvcdiffjava_Openvcdiffjava */

#ifndef _Included_openvcdiffjava_Openvcdiffjava
#define _Included_openvcdiffjava_Openvcdiffjava
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     openvcdiffjava_Openvcdiffjava
 * Method:    vcdiffEncode
 * Signature: (Ljava/lang/String;Ljava/lang/String;)[B
 */
JNIEXPORT jbyteArray JNICALL Java_openvcdiffjava_Openvcdiffjava_vcdiffEncode
  (JNIEnv *, jobject, jstring, jstring);

/*
 * Class:     openvcdiffjava_Openvcdiffjava
 * Method:    vcdiffDecode
 * Signature: (Ljava/lang/String;[B)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_openvcdiffjava_Openvcdiffjava_vcdiffDecode
  (JNIEnv *, jobject, jstring, jbyteArray);

#ifdef __cplusplus
}
#endif
#endif