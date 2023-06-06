// -*- c-basic-offset: 2 -*-
/*
 *  This file is part of the KDE libraries
 *  Copyright (C) 2002 David Faure (faure@kde.org)
 *
 *  This library is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU Lesser General Public
 *  License as published by the Free Software Foundation; either
 *  version 2 of the License, or (at your option) any later version.
 *
 *  This library is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 *  Lesser General Public License for more details.
 *
 *  You should have received a copy of the GNU Lesser General Public License
 *  along with this library; see the file COPYING.LIB.  If not, write to
 *  the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
 *  Boston, MA 02110-1301, USA.
 *
 */

#ifndef KJS_GLOBAL_H
#define KJS_GLOBAL_H

#include <wtf/Platform.h>

// we don't want any padding between UChars (ARM processor)
#if defined(__GNUC__) || defined(__INTEL_COMPILER)
#define KJS_PACKED __attribute__((__packed__))
#else
#define KJS_PACKED
#endif

#if defined(_MSC_VER)
#pragma warning(disable: 4355)
#endif

#define __KDE_HAVE_GCC_VISIBILITY

#ifndef KJS_EXPORT
# ifdef __KDE_HAVE_GCC_VISIBILITY
#  define KJS_EXPORT __attribute__ ((visibility("default")))
# elif defined(_WIN32) || defined(_WIN64)
#  ifdef MAKE_KJS_LIB
#   define KJS_EXPORT __declspec(dllexport)
#  else
#   define KJS_EXPORT __declspec(dllimport)
#  endif
# else
#  define KJS_EXPORT
# endif
#endif

// some methods are declared inside kjs and defined outside (currently only in khtml)
// KJS_EXTERNAL_EXPORT should be prefixed to each related method
#ifndef KJS_EXTERNAL_EXPORT
# if defined(MAKE_KJS_LIB) 
#  define KJS_EXTERNAL_EXPORT
# elif (defined(_WIN32) || defined(_WIN64)) && defined(__GNUC__)
#  if defined(MAKE_KHTML_LIB) || defined(MAKE_KJSEMBED_LIB) || defined(MAKE_KATEPART_LIB)
#   define KJS_EXTERNAL_EXPORT __declspec(dllexport)
#  else 
#   define KJS_EXTERNAL_EXPORT 
#  endif
# else 
#   define KJS_EXTERNAL_EXPORT
# endif
#endif

#ifndef NDEBUG // protection against problems if committing with KJS_VERBOSE on

// Uncomment this to enable very verbose output from KJS
//#define KJS_VERBOSE
// Uncomment this to debug memory allocation and garbage collection
//#define KJS_DEBUG_MEM

#endif

// Apple feature which we don't use
#define KJS_MULTIPLE_THREADS 0
// Debugging features, turned off by default
#define DEBUG_COLLECTOR 0

/* Valgrind memcheck presence */
#define HAVE_VALGRIND_MEMCHECK_H 0

#define HAVE_ERRNO_H 1
#define HAVE_SYS_PARAM_H 1

/* Defined to 1 if you have a tm_gmtoff member in struct tm */
#define HAVE_TM_GMTOFF 1
#define HAVE_STDINT_H  1
#define HAVE_SYS_TIMEB_H 1
#define HAVE_SYS_TIME_H 1
#define HAVE_UNISTD_H 1
#define HAVE_GETTIMEOFDAY 1

#define HAVE_FLOAT_H 1
#define HAVE_IEEEFP_H 0

#define HAVE_FUNC_FINITE 1
#define HAVE_FUNC__FINITE 0
#define HAVE_FUNC_STD_ISFINITE 1

#define HAVE_FUNC_ISINF 1
#define HAVE_FUNC_STD_ISINF 1
#define HAVE_FUNC_ISNAN 1
#define HAVE_FUNC_STD_ISNAN 1

#define HAVE_FUNC_COPYSIGN 1
#define HAVE_FUNC__COPYSIGN 0
#define HAVE_FUNC_SIGNBIT 1
#define HAVE_FUNC___SIGNBIT 1
#define HAVE_FUNC_STD_SIGNBIT 1

#define HAVE_FUNC_BUILTIN_CLZ 1

#define HAVE_FUNC__FPCLASS 1

#define HAVE_PTHREAD_NP_H 0
#define HAVE_FUNC_POSIX_MEMALIGN 1
#define HAVE_PCREPOSIX 0
/* Define to 1 if you have strings.h */
#define HAVE_STRINGS_H 1
#define HAVE_PTHREAD_ATTR_GET_NP 1
#define HAVE_PTHREAD_GETATTR_NP 1
#define HAVE_MEMCHECK_H 0
#define HAVE_CRTDBG_H 0

#endif
