/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class edu_rutgers_winlab_jmfapi_JMFAPI */

#ifndef _Included_edu_rutgers_winlab_jmfapi_JMFAPI
#define _Included_edu_rutgers_winlab_jmfapi_JMFAPI
#ifdef __cplusplus
extern "C" {
#endif
	/*
	 * Class:     edu_rutgers_winlab_jmfapi_JMFAPI
	 * Method:    mfopen
	 * Signature: (Ljava/lang/String;II)I
	 */
	JNIEXPORT jint JNICALL Java_edu_rutgers_winlab_jmfapi_JMFAPI_mfopen
	(JNIEnv *, jobject, jstring, jint, jint);
	
	/*
	 * Class:     edu_rutgers_winlab_jmfapi_JMFAPI
	 * Method:    mfsend
	 * Signature: (I[BIII)I
	 */
	JNIEXPORT jint JNICALL Java_edu_rutgers_winlab_jmfapi_JMFAPI_mfsend
	(JNIEnv *, jobject, jint, jbyteArray, jint, jint, jint, jint);
	
	/*
	 * Class:     edu_rutgers_winlab_jmfapi_JMFAPI
	 * Method:    mfrecv
	 * Signature: (ILedu/rutgers/winlab/jmfapi/GUID;[BI[II)I
	 */
	JNIEXPORT jint JNICALL Java_edu_rutgers_winlab_jmfapi_JMFAPI_mfrecv
	(JNIEnv *, jobject, jint, jobject, jbyteArray, jint, jintArray, jint);
	
	/*
	 * Class:     edu_rutgers_winlab_jmfapi_JMFAPI
	 * Method:    mfrecv_blk
	 * Signature: (ILedu/rutgers/winlab/jmfapi/GUID;[BI[II)I
	 */
	JNIEXPORT jint JNICALL Java_edu_rutgers_winlab_jmfapi_JMFAPI_mfrecv_1blk
	(JNIEnv *, jobject, jint, jobject, jbyteArray, jint, jintArray, jint);
	
	/*
	 * Class:     edu_rutgers_winlab_jmfapi_JMFAPI
	 * Method:    mfattach
	 * Signature: (I[II)I
	 */
	JNIEXPORT jint JNICALL Java_edu_rutgers_winlab_jmfapi_JMFAPI_mfattach
	(JNIEnv *, jobject, jint, jintArray, jint);
	
	/*
	 * Class:     edu_rutgers_winlab_jmfapi_JMFAPI
	 * Method:    mfdetach
	 * Signature: (I[II)I
	 */
	JNIEXPORT jint JNICALL Java_edu_rutgers_winlab_jmfapi_JMFAPI_mfdetach
	(JNIEnv *, jobject, jint, jintArray, jint);
	
	/*
	 * Class:     edu_rutgers_winlab_jmfapi_JMFAPI
	 * Method:    mfclose
	 * Signature: (I)I
	 */
	JNIEXPORT jint JNICALL Java_edu_rutgers_winlab_jmfapi_JMFAPI_mfclose
	(JNIEnv *, jobject, jint);
	
#ifdef __cplusplus
}
#endif
#endif
