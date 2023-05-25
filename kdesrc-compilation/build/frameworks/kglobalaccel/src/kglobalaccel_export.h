
#ifndef KGLOBALACCEL_EXPORT_H
#define KGLOBALACCEL_EXPORT_H

#ifdef KGLOBALACCEL_STATIC_DEFINE
#  define KGLOBALACCEL_EXPORT
#  define KGLOBALACCEL_NO_EXPORT
#else
#  ifndef KGLOBALACCEL_EXPORT
#    ifdef KF5GlobalAccel_EXPORTS
        /* We are building this library */
#      define KGLOBALACCEL_EXPORT __attribute__((visibility("default")))
#    else
        /* We are using this library */
#      define KGLOBALACCEL_EXPORT __attribute__((visibility("default")))
#    endif
#  endif

#  ifndef KGLOBALACCEL_NO_EXPORT
#    define KGLOBALACCEL_NO_EXPORT __attribute__((visibility("hidden")))
#  endif
#endif

#ifndef KGLOBALACCEL_DECL_DEPRECATED
#  define KGLOBALACCEL_DECL_DEPRECATED __attribute__ ((__deprecated__))
#endif

#ifndef KGLOBALACCEL_DECL_DEPRECATED_EXPORT
#  define KGLOBALACCEL_DECL_DEPRECATED_EXPORT KGLOBALACCEL_EXPORT KGLOBALACCEL_DECL_DEPRECATED
#endif

#ifndef KGLOBALACCEL_DECL_DEPRECATED_NO_EXPORT
#  define KGLOBALACCEL_DECL_DEPRECATED_NO_EXPORT KGLOBALACCEL_NO_EXPORT KGLOBALACCEL_DECL_DEPRECATED
#endif

#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef KGLOBALACCEL_NO_DEPRECATED
#    define KGLOBALACCEL_NO_DEPRECATED
#  endif
#endif

#define KGLOBALACCEL_DECL_DEPRECATED_TEXT(text) __attribute__ ((__deprecated__(text)))

/* Take any defaults from group settings */
#if !defined(KGLOBALACCEL_NO_DEPRECATED) && !defined(KGLOBALACCEL_DISABLE_DEPRECATED_BEFORE_AND_AT)
#  ifdef KF_NO_DEPRECATED
#    define KGLOBALACCEL_NO_DEPRECATED
#  elif defined(KF_DISABLE_DEPRECATED_BEFORE_AND_AT)
#    define KGLOBALACCEL_DISABLE_DEPRECATED_BEFORE_AND_AT KF_DISABLE_DEPRECATED_BEFORE_AND_AT
#  endif
#endif
#if !defined(KGLOBALACCEL_DISABLE_DEPRECATED_BEFORE_AND_AT) && defined(KF_DISABLE_DEPRECATED_BEFORE_AND_AT)
#  define KGLOBALACCEL_DISABLE_DEPRECATED_BEFORE_AND_AT KF_DISABLE_DEPRECATED_BEFORE_AND_AT
#endif

#if !defined(KGLOBALACCEL_NO_DEPRECATED_WARNINGS) && !defined(KGLOBALACCEL_DEPRECATED_WARNINGS_SINCE)
#  ifdef KF_NO_DEPRECATED_WARNINGS
#    define KGLOBALACCEL_NO_DEPRECATED_WARNINGS
#  elif defined(KF_DEPRECATED_WARNINGS_SINCE)
#    define KGLOBALACCEL_DEPRECATED_WARNINGS_SINCE KF_DEPRECATED_WARNINGS_SINCE
#  endif
#endif
#if !defined(KGLOBALACCEL_DEPRECATED_WARNINGS_SINCE) && defined(KF_DEPRECATED_WARNINGS_SINCE)
#  define KGLOBALACCEL_DEPRECATED_WARNINGS_SINCE KF_DEPRECATED_WARNINGS_SINCE
#endif

#if defined(KGLOBALACCEL_NO_DEPRECATED)
#  undef KGLOBALACCEL_DEPRECATED
#  define KGLOBALACCEL_DEPRECATED_EXPORT KGLOBALACCEL_EXPORT
#  define KGLOBALACCEL_DEPRECATED_NO_EXPORT KGLOBALACCEL_NO_EXPORT
#elif defined(KGLOBALACCEL_NO_DEPRECATED_WARNINGS)
#  define KGLOBALACCEL_DEPRECATED
#  define KGLOBALACCEL_DEPRECATED_EXPORT KGLOBALACCEL_EXPORT
#  define KGLOBALACCEL_DEPRECATED_NO_EXPORT KGLOBALACCEL_NO_EXPORT
#else
#  define KGLOBALACCEL_DEPRECATED KGLOBALACCEL_DECL_DEPRECATED
#  define KGLOBALACCEL_DEPRECATED_EXPORT KGLOBALACCEL_DECL_DEPRECATED_EXPORT
#  define KGLOBALACCEL_DEPRECATED_NO_EXPORT KGLOBALACCEL_DECL_DEPRECATED_NO_EXPORT
#endif

/* No deprecated API had been removed from build */
#define KGLOBALACCEL_EXCLUDE_DEPRECATED_BEFORE_AND_AT 0

#define KGLOBALACCEL_BUILD_DEPRECATED_SINCE(major, minor) 1

#ifdef KGLOBALACCEL_NO_DEPRECATED
#  define KGLOBALACCEL_DISABLE_DEPRECATED_BEFORE_AND_AT 0x56b00
#endif
#ifdef KGLOBALACCEL_NO_DEPRECATED_WARNINGS
#  define KGLOBALACCEL_DEPRECATED_WARNINGS_SINCE 0
#endif

#ifndef KGLOBALACCEL_DEPRECATED_WARNINGS_SINCE
#  ifdef KGLOBALACCEL_DISABLE_DEPRECATED_BEFORE_AND_AT
#    define KGLOBALACCEL_DEPRECATED_WARNINGS_SINCE KGLOBALACCEL_DISABLE_DEPRECATED_BEFORE_AND_AT
#  else
#    define KGLOBALACCEL_DEPRECATED_WARNINGS_SINCE 0x56b00
#  endif
#endif

#ifndef KGLOBALACCEL_DISABLE_DEPRECATED_BEFORE_AND_AT
#  define KGLOBALACCEL_DISABLE_DEPRECATED_BEFORE_AND_AT 0
#endif

#ifdef KGLOBALACCEL_DEPRECATED
#  define KGLOBALACCEL_ENABLE_DEPRECATED_SINCE(major, minor) (((major<<16)|(minor<<8)) > KGLOBALACCEL_DISABLE_DEPRECATED_BEFORE_AND_AT)
#else
#  define KGLOBALACCEL_ENABLE_DEPRECATED_SINCE(major, minor) 0
#endif

#if KGLOBALACCEL_DEPRECATED_WARNINGS_SINCE >= 0x40200
#  define KGLOBALACCEL_DEPRECATED_VERSION_4_2(text) KGLOBALACCEL_DECL_DEPRECATED_TEXT(text)
#else
#  define KGLOBALACCEL_DEPRECATED_VERSION_4_2(text)
#endif

#if KGLOBALACCEL_DEPRECATED_WARNINGS_SINCE >= 0x40400
#  define KGLOBALACCEL_DEPRECATED_VERSION_4_4(text) KGLOBALACCEL_DECL_DEPRECATED_TEXT(text)
#else
#  define KGLOBALACCEL_DEPRECATED_VERSION_4_4(text)
#endif

#if KGLOBALACCEL_DEPRECATED_WARNINGS_SINCE >= 0x50900
#  define KGLOBALACCEL_DEPRECATED_VERSION_5_9(text) KGLOBALACCEL_DECL_DEPRECATED_TEXT(text)
#else
#  define KGLOBALACCEL_DEPRECATED_VERSION_5_9(text)
#endif

#if KGLOBALACCEL_DEPRECATED_WARNINGS_SINCE >= 0x55a00
#  define KGLOBALACCEL_DEPRECATED_VERSION_5_90(text) KGLOBALACCEL_DECL_DEPRECATED_TEXT(text)
#else
#  define KGLOBALACCEL_DEPRECATED_VERSION_5_90(text)
#endif

#if KGLOBALACCEL_DEPRECATED_WARNINGS_SINCE >= 0x56600
#  define KGLOBALACCEL_DEPRECATED_VERSION_5_102(text) KGLOBALACCEL_DECL_DEPRECATED_TEXT(text)
#else
#  define KGLOBALACCEL_DEPRECATED_VERSION_5_102(text)
#endif
#define KGLOBALACCEL_DEPRECATED_VERSION_4(minor, text)      KGLOBALACCEL_DEPRECATED_VERSION_4_##minor(text)
#define KGLOBALACCEL_DEPRECATED_VERSION_5(minor, text)      KGLOBALACCEL_DEPRECATED_VERSION_5_##minor(text)
#define KGLOBALACCEL_DEPRECATED_VERSION(major, minor, text) KGLOBALACCEL_DEPRECATED_VERSION_##major(minor, "Since "#major"."#minor". " text)
#define KGLOBALACCEL_DEPRECATED_VERSION_BELATED(major, minor, textmajor, textminor, text) KGLOBALACCEL_DEPRECATED_VERSION_##major(minor, "Since "#textmajor"."#textminor". " text)
#if defined(__cpp_enumerator_attributes) && __cpp_enumerator_attributes >= 201411
#  define KGLOBALACCEL_ENUMERATOR_DEPRECATED_VERSION(major, minor, text) KGLOBALACCEL_DEPRECATED_VERSION(major, minor, text)
#  define KGLOBALACCEL_ENUMERATOR_DEPRECATED_VERSION_BELATED(major, minor, textmajor, textminor, text) KGLOBALACCEL_DEPRECATED_VERSION_BELATED(major, minor, textmajor, textminor, text)
#else
#  define KGLOBALACCEL_ENUMERATOR_DEPRECATED_VERSION(major, minor, text)
#  define KGLOBALACCEL_ENUMERATOR_DEPRECATED_VERSION_BELATED(major, minor, textmajor, textminor, text)
#endif

#endif /* KGLOBALACCEL_EXPORT_H */
