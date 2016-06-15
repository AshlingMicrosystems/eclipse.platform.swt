/*******************************************************************************
 * Copyright (c) 2000, 2016 IBM Corporation and others.
 * All rights reserved. This program and the accompanying materials
 * are made available under the terms of the Eclipse Public License v1.0
 * which accompanies this distribution, and is available at
 * http://www.eclipse.org/legal/epl-v10.html
 *
 * Contributors:
 *    IBM Corporation - initial API and implementation
 *******************************************************************************/

#include "swt.h"
#include "glx_structs.h"
#include "glx_stats.h"

#ifndef GLX_NATIVE
#define GLX_NATIVE(func) Java_org_eclipse_swt_internal_opengl_glx_GLX_##func
#endif

#ifndef NO_XVisualInfo_1sizeof
JNIEXPORT jint JNICALL GLX_NATIVE(XVisualInfo_1sizeof)
	(JNIEnv *env, jclass that)
{
	jint rc = 0;
	GLX_NATIVE_ENTER(env, that, XVisualInfo_1sizeof_FUNC);
	rc = (jint)XVisualInfo_sizeof();
	GLX_NATIVE_EXIT(env, that, XVisualInfo_1sizeof_FUNC);
	return rc;
}
#endif

#ifndef NO__1glGetIntegerv
JNIEXPORT void JNICALL GLX_NATIVE(_1glGetIntegerv)
	(JNIEnv *env, jclass that, jint arg0, jintArray arg1)
{
	jint *lparg1=NULL;
	GLX_NATIVE_ENTER(env, that, _1glGetIntegerv_FUNC);
	if (arg1) if ((lparg1 = (*env)->GetIntArrayElements(env, arg1, NULL)) == NULL) goto fail;
	glGetIntegerv((GLenum)arg0, (GLint *)lparg1);
fail:
	if (arg1 && lparg1) (*env)->ReleaseIntArrayElements(env, arg1, lparg1, 0);
	GLX_NATIVE_EXIT(env, that, _1glGetIntegerv_FUNC);
}
#endif

#ifndef NO__1glViewport
JNIEXPORT void JNICALL GLX_NATIVE(_1glViewport)
	(JNIEnv *env, jclass that, jint arg0, jint arg1, jint arg2, jint arg3)
{
	GLX_NATIVE_ENTER(env, that, _1glViewport_FUNC);
	glViewport((GLint)arg0, (GLint)arg1, (GLsizei)arg2, (GLsizei)arg3);
	GLX_NATIVE_EXIT(env, that, _1glViewport_FUNC);
}
#endif

#ifndef NO__1glXChooseVisual
JNIEXPORT jintLong JNICALL GLX_NATIVE(_1glXChooseVisual)
	(JNIEnv *env, jclass that, jintLong arg0, jint arg1, jintArray arg2)
{
	jint *lparg2=NULL;
	jintLong rc = 0;
	GLX_NATIVE_ENTER(env, that, _1glXChooseVisual_FUNC);
	if (arg2) if ((lparg2 = (*env)->GetIntArrayElements(env, arg2, NULL)) == NULL) goto fail;
	rc = (jintLong)glXChooseVisual((Display *)arg0, arg1, lparg2);
fail:
	if (arg2 && lparg2) (*env)->ReleaseIntArrayElements(env, arg2, lparg2, 0);
	GLX_NATIVE_EXIT(env, that, _1glXChooseVisual_FUNC);
	return rc;
}
#endif

#ifndef NO__1glXCreateContext
JNIEXPORT jintLong JNICALL GLX_NATIVE(_1glXCreateContext)
	(JNIEnv *env, jclass that, jintLong arg0, jobject arg1, jintLong arg2, jboolean arg3)
{
	XVisualInfo _arg1, *lparg1=NULL;
	jintLong rc = 0;
	GLX_NATIVE_ENTER(env, that, _1glXCreateContext_FUNC);
	if (arg1) if ((lparg1 = getXVisualInfoFields(env, arg1, &_arg1)) == NULL) goto fail;
	rc = (jintLong)glXCreateContext((Display *)arg0, lparg1, (GLXContext)arg2, arg3);
fail:
	if (arg1 && lparg1) setXVisualInfoFields(env, arg1, lparg1);
	GLX_NATIVE_EXIT(env, that, _1glXCreateContext_FUNC);
	return rc;
}
#endif

#ifndef NO__1glXDestroyContext
JNIEXPORT void JNICALL GLX_NATIVE(_1glXDestroyContext)
	(JNIEnv *env, jclass that, jintLong arg0, jintLong arg1)
{
	GLX_NATIVE_ENTER(env, that, _1glXDestroyContext_FUNC);
	glXDestroyContext((Display *)arg0, (GLXContext)arg1);
	GLX_NATIVE_EXIT(env, that, _1glXDestroyContext_FUNC);
}
#endif

#ifndef NO__1glXGetConfig
JNIEXPORT jint JNICALL GLX_NATIVE(_1glXGetConfig)
	(JNIEnv *env, jclass that, jintLong arg0, jobject arg1, jint arg2, jintArray arg3)
{
	XVisualInfo _arg1, *lparg1=NULL;
	jint *lparg3=NULL;
	jint rc = 0;
	GLX_NATIVE_ENTER(env, that, _1glXGetConfig_FUNC);
	if (arg1) if ((lparg1 = getXVisualInfoFields(env, arg1, &_arg1)) == NULL) goto fail;
	if (arg3) if ((lparg3 = (*env)->GetIntArrayElements(env, arg3, NULL)) == NULL) goto fail;
	rc = (jint)glXGetConfig((Display *)arg0, lparg1, arg2, lparg3);
fail:
	if (arg3 && lparg3) (*env)->ReleaseIntArrayElements(env, arg3, lparg3, 0);
	if (arg1 && lparg1) setXVisualInfoFields(env, arg1, lparg1);
	GLX_NATIVE_EXIT(env, that, _1glXGetConfig_FUNC);
	return rc;
}
#endif

#ifndef NO__1glXGetCurrentContext
JNIEXPORT jintLong JNICALL GLX_NATIVE(_1glXGetCurrentContext)
	(JNIEnv *env, jclass that)
{
	jintLong rc = 0;
	GLX_NATIVE_ENTER(env, that, _1glXGetCurrentContext_FUNC);
	rc = (jintLong)glXGetCurrentContext();
	GLX_NATIVE_EXIT(env, that, _1glXGetCurrentContext_FUNC);
	return rc;
}
#endif

#ifndef NO__1glXMakeCurrent
JNIEXPORT jboolean JNICALL GLX_NATIVE(_1glXMakeCurrent)
	(JNIEnv *env, jclass that, jintLong arg0, jintLong arg1, jintLong arg2)
{
	jboolean rc = 0;
	GLX_NATIVE_ENTER(env, that, _1glXMakeCurrent_FUNC);
	rc = (jboolean)glXMakeCurrent((Display *)arg0, (GLXDrawable)arg1, (GLXContext)arg2);
	GLX_NATIVE_EXIT(env, that, _1glXMakeCurrent_FUNC);
	return rc;
}
#endif

#ifndef NO__1glXSwapBuffers
JNIEXPORT void JNICALL GLX_NATIVE(_1glXSwapBuffers)
	(JNIEnv *env, jclass that, jintLong arg0, jintLong arg1)
{
	GLX_NATIVE_ENTER(env, that, _1glXSwapBuffers_FUNC);
	glXSwapBuffers((Display *)arg0, (GLXDrawable)arg1);
	GLX_NATIVE_EXIT(env, that, _1glXSwapBuffers_FUNC);
}
#endif

#ifndef NO_memmove
JNIEXPORT void JNICALL GLX_NATIVE(memmove)
	(JNIEnv *env, jclass that, jobject arg0, jintLong arg1, jint arg2)
{
	XVisualInfo _arg0, *lparg0=NULL;
	GLX_NATIVE_ENTER(env, that, memmove_FUNC);
	if (arg0) if ((lparg0 = getXVisualInfoFields(env, arg0, &_arg0)) == NULL) goto fail;
	memmove(lparg0, (const void *)arg1, (size_t)arg2);
fail:
	if (arg0 && lparg0) setXVisualInfoFields(env, arg0, lparg0);
	GLX_NATIVE_EXIT(env, that, memmove_FUNC);
}
#endif

