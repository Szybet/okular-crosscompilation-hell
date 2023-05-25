
#ifndef SONNETUI_EXPORT_H
#define SONNETUI_EXPORT_H

#ifdef SONNETUI_STATIC_DEFINE
#  define SONNETUI_EXPORT
#  define SONNETUI_NO_EXPORT
#else
#  ifndef SONNETUI_EXPORT
#    ifdef KF5SonnetUi_EXPORTS
        /* We are building this library */
#      define SONNETUI_EXPORT __attribute__((visibility("default")))
#    else
        /* We are using this library */
#      define SONNETUI_EXPORT __attribute__((visibility("default")))
#    endif
#  endif

#  ifndef SONNETUI_NO_EXPORT
#    define SONNETUI_NO_EXPORT __attribute__((visibility("hidden")))
#  endif
#endif

#ifndef SONNETUI_DECL_DEPRECATED
#  define SONNETUI_DECL_DEPRECATED __attribute__ ((__deprecated__))
#endif

#ifndef SONNETUI_DECL_DEPRECATED_EXPORT
#  define SONNETUI_DECL_DEPRECATED_EXPORT SONNETUI_EXPORT SONNETUI_DECL_DEPRECATED
#endif

#ifndef SONNETUI_DECL_DEPRECATED_NO_EXPORT
#  define SONNETUI_DECL_DEPRECATED_NO_EXPORT SONNETUI_NO_EXPORT SONNETUI_DECL_DEPRECATED
#endif

#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef SONNETUI_NO_DEPRECATED
#    define SONNETUI_NO_DEPRECATED
#  endif
#endif

#define SONNETUI_DECL_DEPRECATED_TEXT(text) __attribute__ ((__deprecated__(text)))

/* Take any defaults from group settings */
#if !defined(SONNETUI_NO_DEPRECATED) && !defined(SONNETUI_DISABLE_DEPRECATED_BEFORE_AND_AT)
#  ifdef KF_NO_DEPRECATED
#    define SONNETUI_NO_DEPRECATED
#  elif defined(KF_DISABLE_DEPRECATED_BEFORE_AND_AT)
#    define SONNETUI_DISABLE_DEPRECATED_BEFORE_AND_AT KF_DISABLE_DEPRECATED_BEFORE_AND_AT
#  endif
#endif
#if !defined(SONNETUI_DISABLE_DEPRECATED_BEFORE_AND_AT) && defined(KF_DISABLE_DEPRECATED_BEFORE_AND_AT)
#  define SONNETUI_DISABLE_DEPRECATED_BEFORE_AND_AT KF_DISABLE_DEPRECATED_BEFORE_AND_AT
#endif

#if !defined(SONNETUI_NO_DEPRECATED_WARNINGS) && !defined(SONNETUI_DEPRECATED_WARNINGS_SINCE)
#  ifdef KF_NO_DEPRECATED_WARNINGS
#    define SONNETUI_NO_DEPRECATED_WARNINGS
#  elif defined(KF_DEPRECATED_WARNINGS_SINCE)
#    define SONNETUI_DEPRECATED_WARNINGS_SINCE KF_DEPRECATED_WARNINGS_SINCE
#  endif
#endif
#if !defined(SONNETUI_DEPRECATED_WARNINGS_SINCE) && defined(KF_DEPRECATED_WARNINGS_SINCE)
#  define SONNETUI_DEPRECATED_WARNINGS_SINCE KF_DEPRECATED_WARNINGS_SINCE
#endif

#if defined(SONNETUI_NO_DEPRECATED)
#  undef SONNETUI_DEPRECATED
#  define SONNETUI_DEPRECATED_EXPORT SONNETUI_EXPORT
#  define SONNETUI_DEPRECATED_NO_EXPORT SONNETUI_NO_EXPORT
#elif defined(SONNETUI_NO_DEPRECATED_WARNINGS)
#  define SONNETUI_DEPRECATED
#  define SONNETUI_DEPRECATED_EXPORT SONNETUI_EXPORT
#  define SONNETUI_DEPRECATED_NO_EXPORT SONNETUI_NO_EXPORT
#else
#  define SONNETUI_DEPRECATED SONNETUI_DECL_DEPRECATED
#  define SONNETUI_DEPRECATED_EXPORT SONNETUI_DECL_DEPRECATED_EXPORT
#  define SONNETUI_DEPRECATED_NO_EXPORT SONNETUI_DECL_DEPRECATED_NO_EXPORT
#endif

/* No deprecated API had been removed from build */
#define SONNETUI_EXCLUDE_DEPRECATED_BEFORE_AND_AT 0

#define SONNETUI_BUILD_DEPRECATED_SINCE(major, minor) 1

#ifdef SONNETUI_NO_DEPRECATED
#  define SONNETUI_DISABLE_DEPRECATED_BEFORE_AND_AT 0x56b00
#endif
#ifdef SONNETUI_NO_DEPRECATED_WARNINGS
#  define SONNETUI_DEPRECATED_WARNINGS_SINCE 0
#endif

#ifndef SONNETUI_DEPRECATED_WARNINGS_SINCE
#  ifdef SONNETUI_DISABLE_DEPRECATED_BEFORE_AND_AT
#    define SONNETUI_DEPRECATED_WARNINGS_SINCE SONNETUI_DISABLE_DEPRECATED_BEFORE_AND_AT
#  else
#    define SONNETUI_DEPRECATED_WARNINGS_SINCE 0x56b00
#  endif
#endif

#ifndef SONNETUI_DISABLE_DEPRECATED_BEFORE_AND_AT
#  define SONNETUI_DISABLE_DEPRECATED_BEFORE_AND_AT 0
#endif

#ifdef SONNETUI_DEPRECATED
#  define SONNETUI_ENABLE_DEPRECATED_SINCE(major, minor) (((major<<16)|(minor<<8)) > SONNETUI_DISABLE_DEPRECATED_BEFORE_AND_AT)
#else
#  define SONNETUI_ENABLE_DEPRECATED_SINCE(major, minor) 0
#endif

#if SONNETUI_DEPRECATED_WARNINGS_SINCE >= 0x54100
#  define SONNETUI_DEPRECATED_VERSION_5_65(text) SONNETUI_DECL_DEPRECATED_TEXT(text)
#else
#  define SONNETUI_DEPRECATED_VERSION_5_65(text)
#endif
#define SONNETUI_DEPRECATED_VERSION_5(minor, text)      SONNETUI_DEPRECATED_VERSION_5_##minor(text)
#define SONNETUI_DEPRECATED_VERSION(major, minor, text) SONNETUI_DEPRECATED_VERSION_##major(minor, "Since "#major"."#minor". " text)
#define SONNETUI_DEPRECATED_VERSION_BELATED(major, minor, textmajor, textminor, text) SONNETUI_DEPRECATED_VERSION_##major(minor, "Since "#textmajor"."#textminor". " text)
#if defined(__cpp_enumerator_attributes) && __cpp_enumerator_attributes >= 201411
#  define SONNETUI_ENUMERATOR_DEPRECATED_VERSION(major, minor, text) SONNETUI_DEPRECATED_VERSION(major, minor, text)
#  define SONNETUI_ENUMERATOR_DEPRECATED_VERSION_BELATED(major, minor, textmajor, textminor, text) SONNETUI_DEPRECATED_VERSION_BELATED(major, minor, textmajor, textminor, text)
#else
#  define SONNETUI_ENUMERATOR_DEPRECATED_VERSION(major, minor, text)
#  define SONNETUI_ENUMERATOR_DEPRECATED_VERSION_BELATED(major, minor, textmajor, textminor, text)
#endif

#endif /* SONNETUI_EXPORT_H */
