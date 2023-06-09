
#ifndef KCONFIGQML_EXPORT_H
#define KCONFIGQML_EXPORT_H

#ifdef KCONFIGQML_STATIC_DEFINE
#  define KCONFIGQML_EXPORT
#  define KCONFIGQML_NO_EXPORT
#else
#  ifndef KCONFIGQML_EXPORT
#    ifdef KF5ConfigQml_EXPORTS
        /* We are building this library */
#      define KCONFIGQML_EXPORT __attribute__((visibility("default")))
#    else
        /* We are using this library */
#      define KCONFIGQML_EXPORT __attribute__((visibility("default")))
#    endif
#  endif

#  ifndef KCONFIGQML_NO_EXPORT
#    define KCONFIGQML_NO_EXPORT __attribute__((visibility("hidden")))
#  endif
#endif

#ifndef KCONFIGQML_DECL_DEPRECATED
#  define KCONFIGQML_DECL_DEPRECATED __attribute__ ((__deprecated__))
#endif

#ifndef KCONFIGQML_DECL_DEPRECATED_EXPORT
#  define KCONFIGQML_DECL_DEPRECATED_EXPORT KCONFIGQML_EXPORT KCONFIGQML_DECL_DEPRECATED
#endif

#ifndef KCONFIGQML_DECL_DEPRECATED_NO_EXPORT
#  define KCONFIGQML_DECL_DEPRECATED_NO_EXPORT KCONFIGQML_NO_EXPORT KCONFIGQML_DECL_DEPRECATED
#endif

#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef KCONFIGQML_NO_DEPRECATED
#    define KCONFIGQML_NO_DEPRECATED
#  endif
#endif

#define KCONFIGQML_DECL_DEPRECATED_TEXT(text) __attribute__ ((__deprecated__(text)))

/* Take any defaults from group settings */
#if !defined(KCONFIGQML_NO_DEPRECATED) && !defined(KCONFIGQML_DISABLE_DEPRECATED_BEFORE_AND_AT)
#  ifdef KF_NO_DEPRECATED
#    define KCONFIGQML_NO_DEPRECATED
#  elif defined(KF_DISABLE_DEPRECATED_BEFORE_AND_AT)
#    define KCONFIGQML_DISABLE_DEPRECATED_BEFORE_AND_AT KF_DISABLE_DEPRECATED_BEFORE_AND_AT
#  endif
#endif
#if !defined(KCONFIGQML_DISABLE_DEPRECATED_BEFORE_AND_AT) && defined(KF_DISABLE_DEPRECATED_BEFORE_AND_AT)
#  define KCONFIGQML_DISABLE_DEPRECATED_BEFORE_AND_AT KF_DISABLE_DEPRECATED_BEFORE_AND_AT
#endif

#if !defined(KCONFIGQML_NO_DEPRECATED_WARNINGS) && !defined(KCONFIGQML_DEPRECATED_WARNINGS_SINCE)
#  ifdef KF_NO_DEPRECATED_WARNINGS
#    define KCONFIGQML_NO_DEPRECATED_WARNINGS
#  elif defined(KF_DEPRECATED_WARNINGS_SINCE)
#    define KCONFIGQML_DEPRECATED_WARNINGS_SINCE KF_DEPRECATED_WARNINGS_SINCE
#  endif
#endif
#if !defined(KCONFIGQML_DEPRECATED_WARNINGS_SINCE) && defined(KF_DEPRECATED_WARNINGS_SINCE)
#  define KCONFIGQML_DEPRECATED_WARNINGS_SINCE KF_DEPRECATED_WARNINGS_SINCE
#endif

#if defined(KCONFIGQML_NO_DEPRECATED)
#  undef KCONFIGQML_DEPRECATED
#  define KCONFIGQML_DEPRECATED_EXPORT KCONFIGQML_EXPORT
#  define KCONFIGQML_DEPRECATED_NO_EXPORT KCONFIGQML_NO_EXPORT
#elif defined(KCONFIGQML_NO_DEPRECATED_WARNINGS)
#  define KCONFIGQML_DEPRECATED
#  define KCONFIGQML_DEPRECATED_EXPORT KCONFIGQML_EXPORT
#  define KCONFIGQML_DEPRECATED_NO_EXPORT KCONFIGQML_NO_EXPORT
#else
#  define KCONFIGQML_DEPRECATED KCONFIGQML_DECL_DEPRECATED
#  define KCONFIGQML_DEPRECATED_EXPORT KCONFIGQML_DECL_DEPRECATED_EXPORT
#  define KCONFIGQML_DEPRECATED_NO_EXPORT KCONFIGQML_DECL_DEPRECATED_NO_EXPORT
#endif

/* No deprecated API had been removed from build */
#define KCONFIGQML_EXCLUDE_DEPRECATED_BEFORE_AND_AT 0

#define KCONFIGQML_BUILD_DEPRECATED_SINCE(major, minor) 1

#ifdef KCONFIGQML_NO_DEPRECATED
#  define KCONFIGQML_DISABLE_DEPRECATED_BEFORE_AND_AT 0x56b00
#endif
#ifdef KCONFIGQML_NO_DEPRECATED_WARNINGS
#  define KCONFIGQML_DEPRECATED_WARNINGS_SINCE 0
#endif

#ifndef KCONFIGQML_DEPRECATED_WARNINGS_SINCE
#  ifdef KCONFIGQML_DISABLE_DEPRECATED_BEFORE_AND_AT
#    define KCONFIGQML_DEPRECATED_WARNINGS_SINCE KCONFIGQML_DISABLE_DEPRECATED_BEFORE_AND_AT
#  else
#    define KCONFIGQML_DEPRECATED_WARNINGS_SINCE 0x56b00
#  endif
#endif

#ifndef KCONFIGQML_DISABLE_DEPRECATED_BEFORE_AND_AT
#  define KCONFIGQML_DISABLE_DEPRECATED_BEFORE_AND_AT 0
#endif

#ifdef KCONFIGQML_DEPRECATED
#  define KCONFIGQML_ENABLE_DEPRECATED_SINCE(major, minor) (((major<<16)|(minor<<8)) > KCONFIGQML_DISABLE_DEPRECATED_BEFORE_AND_AT)
#else
#  define KCONFIGQML_ENABLE_DEPRECATED_SINCE(major, minor) 0
#endif

#endif /* KCONFIGQML_EXPORT_H */
