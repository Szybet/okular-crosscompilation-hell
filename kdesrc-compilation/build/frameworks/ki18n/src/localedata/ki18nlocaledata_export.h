
#ifndef KI18NLOCALEDATA_EXPORT_H
#define KI18NLOCALEDATA_EXPORT_H

#ifdef KI18NLOCALEDATA_STATIC_DEFINE
#  define KI18NLOCALEDATA_EXPORT
#  define KI18NLOCALEDATA_NO_EXPORT
#else
#  ifndef KI18NLOCALEDATA_EXPORT
#    ifdef KF5I18nLocaleData_EXPORTS
        /* We are building this library */
#      define KI18NLOCALEDATA_EXPORT __attribute__((visibility("default")))
#    else
        /* We are using this library */
#      define KI18NLOCALEDATA_EXPORT __attribute__((visibility("default")))
#    endif
#  endif

#  ifndef KI18NLOCALEDATA_NO_EXPORT
#    define KI18NLOCALEDATA_NO_EXPORT __attribute__((visibility("hidden")))
#  endif
#endif

#ifndef KI18NLOCALEDATA_DECL_DEPRECATED
#  define KI18NLOCALEDATA_DECL_DEPRECATED __attribute__ ((__deprecated__))
#endif

#ifndef KI18NLOCALEDATA_DECL_DEPRECATED_EXPORT
#  define KI18NLOCALEDATA_DECL_DEPRECATED_EXPORT KI18NLOCALEDATA_EXPORT KI18NLOCALEDATA_DECL_DEPRECATED
#endif

#ifndef KI18NLOCALEDATA_DECL_DEPRECATED_NO_EXPORT
#  define KI18NLOCALEDATA_DECL_DEPRECATED_NO_EXPORT KI18NLOCALEDATA_NO_EXPORT KI18NLOCALEDATA_DECL_DEPRECATED
#endif

#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef KI18NLOCALEDATA_NO_DEPRECATED
#    define KI18NLOCALEDATA_NO_DEPRECATED
#  endif
#endif

#define KI18NLOCALEDATA_DECL_DEPRECATED_TEXT(text) __attribute__ ((__deprecated__(text)))

/* Take any defaults from group settings */
#if !defined(KI18NLOCALEDATA_NO_DEPRECATED) && !defined(KI18NLOCALEDATA_DISABLE_DEPRECATED_BEFORE_AND_AT)
#  ifdef KF_NO_DEPRECATED
#    define KI18NLOCALEDATA_NO_DEPRECATED
#  elif defined(KF_DISABLE_DEPRECATED_BEFORE_AND_AT)
#    define KI18NLOCALEDATA_DISABLE_DEPRECATED_BEFORE_AND_AT KF_DISABLE_DEPRECATED_BEFORE_AND_AT
#  endif
#endif
#if !defined(KI18NLOCALEDATA_DISABLE_DEPRECATED_BEFORE_AND_AT) && defined(KF_DISABLE_DEPRECATED_BEFORE_AND_AT)
#  define KI18NLOCALEDATA_DISABLE_DEPRECATED_BEFORE_AND_AT KF_DISABLE_DEPRECATED_BEFORE_AND_AT
#endif

#if !defined(KI18NLOCALEDATA_NO_DEPRECATED_WARNINGS) && !defined(KI18NLOCALEDATA_DEPRECATED_WARNINGS_SINCE)
#  ifdef KF_NO_DEPRECATED_WARNINGS
#    define KI18NLOCALEDATA_NO_DEPRECATED_WARNINGS
#  elif defined(KF_DEPRECATED_WARNINGS_SINCE)
#    define KI18NLOCALEDATA_DEPRECATED_WARNINGS_SINCE KF_DEPRECATED_WARNINGS_SINCE
#  endif
#endif
#if !defined(KI18NLOCALEDATA_DEPRECATED_WARNINGS_SINCE) && defined(KF_DEPRECATED_WARNINGS_SINCE)
#  define KI18NLOCALEDATA_DEPRECATED_WARNINGS_SINCE KF_DEPRECATED_WARNINGS_SINCE
#endif

#if defined(KI18NLOCALEDATA_NO_DEPRECATED)
#  undef KI18NLOCALEDATA_DEPRECATED
#  define KI18NLOCALEDATA_DEPRECATED_EXPORT KI18NLOCALEDATA_EXPORT
#  define KI18NLOCALEDATA_DEPRECATED_NO_EXPORT KI18NLOCALEDATA_NO_EXPORT
#elif defined(KI18NLOCALEDATA_NO_DEPRECATED_WARNINGS)
#  define KI18NLOCALEDATA_DEPRECATED
#  define KI18NLOCALEDATA_DEPRECATED_EXPORT KI18NLOCALEDATA_EXPORT
#  define KI18NLOCALEDATA_DEPRECATED_NO_EXPORT KI18NLOCALEDATA_NO_EXPORT
#else
#  define KI18NLOCALEDATA_DEPRECATED KI18NLOCALEDATA_DECL_DEPRECATED
#  define KI18NLOCALEDATA_DEPRECATED_EXPORT KI18NLOCALEDATA_DECL_DEPRECATED_EXPORT
#  define KI18NLOCALEDATA_DEPRECATED_NO_EXPORT KI18NLOCALEDATA_DECL_DEPRECATED_NO_EXPORT
#endif

/* No deprecated API had been removed from build */
#define KI18NLOCALEDATA_EXCLUDE_DEPRECATED_BEFORE_AND_AT 0

#define KI18NLOCALEDATA_BUILD_DEPRECATED_SINCE(major, minor) 1

#ifdef KI18NLOCALEDATA_NO_DEPRECATED
#  define KI18NLOCALEDATA_DISABLE_DEPRECATED_BEFORE_AND_AT 0x56b00
#endif
#ifdef KI18NLOCALEDATA_NO_DEPRECATED_WARNINGS
#  define KI18NLOCALEDATA_DEPRECATED_WARNINGS_SINCE 0
#endif

#ifndef KI18NLOCALEDATA_DEPRECATED_WARNINGS_SINCE
#  ifdef KI18NLOCALEDATA_DISABLE_DEPRECATED_BEFORE_AND_AT
#    define KI18NLOCALEDATA_DEPRECATED_WARNINGS_SINCE KI18NLOCALEDATA_DISABLE_DEPRECATED_BEFORE_AND_AT
#  else
#    define KI18NLOCALEDATA_DEPRECATED_WARNINGS_SINCE 0x56b00
#  endif
#endif

#ifndef KI18NLOCALEDATA_DISABLE_DEPRECATED_BEFORE_AND_AT
#  define KI18NLOCALEDATA_DISABLE_DEPRECATED_BEFORE_AND_AT 0
#endif

#ifdef KI18NLOCALEDATA_DEPRECATED
#  define KI18NLOCALEDATA_ENABLE_DEPRECATED_SINCE(major, minor) (((major<<16)|(minor<<8)) > KI18NLOCALEDATA_DISABLE_DEPRECATED_BEFORE_AND_AT)
#else
#  define KI18NLOCALEDATA_ENABLE_DEPRECATED_SINCE(major, minor) 0
#endif

#endif /* KI18NLOCALEDATA_EXPORT_H */
