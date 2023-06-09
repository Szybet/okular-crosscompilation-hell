/*
 * Pre-digested configuration header.
 * Generated from cmake/config.h.in.
 * Tested with MSVC, MinGW on Windows and with GCC on Linux.
 * File prototype: msvc/config.h.vc.
 */

#ifndef _CONFIG_D
#define _CONFIG_D 1

/*
 * `discount` feature macros - we want them all!
 */
#ifndef WITH_ID_ANCHOR
#define WITH_ID_ANCHOR 1
#endif
#ifndef WITH_FENCED_CODE
#define WITH_FENCED_CODE 1
#endif
#ifndef WITH_GITHUB_TAGS
#define WITH_GITHUB_TAGS 1
#endif
#ifndef USE_DISCOUNT_DL
#define USE_DISCOUNT_DL 1
#endif
#ifndef USE_EXTRA_DL
#define USE_EXTRA_DL 1
#endif

#ifdef _MSC_VER

/*
 * The Visual C++ "C" compiler has a `__inline` keyword implemented
 * in Visual Studio 2008 and later, see
 * <http://msdn.microsoft.com/de-de/library/cx3b23a3%28v=vs.90%29.aspx>
 */
#if _MSC_VER >= 1500 /* VC 9.0, MSC_VER 15, Visual Studio 2008 */
#define inline __inline
#else
#define inline
#endif /* _MSC_VER >= 1500 */

#endif /* _MSC_VER */





/*
 * Beware of conflicts with <Windows.h>, which typedef's these names.
 */
#ifndef WINVER
#define DWORD unsigned long
#define WORD  unsigned short
#define BYTE  unsigned char
#endif

#define HAVE_PWD_H 1
#define HAVE_GETPWUID 1

#define HAVE_LIBGEN_H 1
#define HAVE_BASENAME 1

#define HAVE_RANDOM 1
#define HAVE_SRANDOM 1

#define INITRNG(x) srand((unsigned int)x)
#define COINTOSS() (rand()&1)

#define HAVE_FCHDIR 1
#define HAVE_ALLOCA_H 1
#define HAVE_MALLOC_H 1
#define HAVE_STAT 1

#define TABSTOP 4

#endif /* _CONFIG_D */
