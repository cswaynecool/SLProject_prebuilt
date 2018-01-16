#ifndef G2O_CONFIG_H
#define G2O_CONFIG_H


/* #undef G2O_HAVE_OPENGL */
/* #undef G2O_OPENGL_FOUND */
/* #undef G2O_OPENMP */
#define G2O_SHARED_LIBS 1
#define G2O_LGPL_SHARED_LIBS 1

// available sparse matrix libraries
/* #undef G2O_HAVE_CHOLMOD */
/* #undef G2O_HAVE_CSPARSE */

#define G2O_CXX_COMPILER "GNU C:/Users/ghm1/AppData/Local/Android/Sdk/ndk-bundle/toolchains/aarch64-linux-android-4.9/prebuilt/windows-x86_64/bin/aarch64-linux-android-g++.exe"

#ifdef __cplusplus
#include <g2o/core/eigen_types.h>
#endif

#endif
