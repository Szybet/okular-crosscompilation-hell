
#ifndef KI18N_EXPORT_H
#define KI18N_EXPORT_H

#ifdef KI18N_STATIC_DEFINE
#  define KI18N_EXPORT
#  define KI18N_NO_EXPORT
#else
#  ifndef KI18N_EXPORT
#    ifdef KF5I18n_EXPORTS
        /* We are building this library */
#      define KI18N_EXPORT __attribute__((visibility("default")))
#    else
        /* We are using this library */
#      define KI18N_EXPORT __attribute__((visibility("default")))
#    endif
#  endif

#  ifndef KI18N_NO_EXPORT
#    define KI18N_NO_EXPORT __attribute__((visibility("hidden")))
#  endif
#endif

#ifndef KI18N_DECL_DEPRECATED
#  define KI18N_DECL_DEPRECATED __attribute__ ((__deprecated__))
#endif

#ifndef KI18N_DECL_DEPRECATED_EXPORT
#  define KI18N_DECL_DEPRECATED_EXPORT KI18N_EXPORT KI18N_DECL_DEPRECATED
#endif

#ifndef KI18N_DECL_DEPRECATED_NO_EXPORT
#  define KI18N_DECL_DEPRECATED_NO_EXPORT KI18N_NO_EXPORT KI18N_DECL_DEPRECATED
#endif

#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef KI18N_NO_DEPRECATED
#    define KI18N_NO_DEPRECATED
#  endif
#endif

#define KI18N_DECL_DEPRECATED_TEXT(text) __attribute__ ((__deprecated__(text)))

/* Take any defaults from group settings */
#if !defined(KI18N_NO_DEPRECATED) && !defined(KI18N_DISABLE_DEPRECATED_BEFORE_AND_AT)
#  ifdef KF_NO_DEPRECATED
#    define KI18N_NO_DEPRECATED
#  elif defined(KF_DISABLE_DEPRECATED_BEFORE_AND_AT)
#    define KI18N_DISABLE_DEPRECATED_BEFORE_AND_AT KF_DISABLE_DEPRECATED_BEFORE_AND_AT
#  endif
#endif
#if !defined(KI18N_DISABLE_DEPRECATED_BEFORE_AND_AT) && defined(KF_DISABLE_DEPRECATED_BEFORE_AND_AT)
#  define KI18N_DISABLE_DEPRECATED_BEFORE_AND_AT KF_DISABLE_DEPRECATED_BEFORE_AND_AT
#endif

#if !defined(KI18N_NO_DEPRECATED_WARNINGS) && !defined(KI18N_DEPRECATED_WARNINGS_SINCE)
#  ifdef KF_NO_DEPRECATED_WARNINGS
#    define KI18N_NO_DEPRECATED_WARNINGS
#  elif defined(KF_DEPRECATED_WARNINGS_SINCE)
#    define KI18N_DEPRECATED_WARNINGS_SINCE KF_DEPRECATED_WARNINGS_SINCE
#  endif
#endif
#if !defined(KI18N_DEPRECATED_WARNINGS_SINCE) && defined(KF_DEPRECATED_WARNINGS_SINCE)
#  define KI18N_DEPRECATED_WARNINGS_SINCE KF_DEPRECATED_WARNINGS_SINCE
#endif

#if defined(KI18N_NO_DEPRECATED)
#  undef KI18N_DEPRECATED
#  define KI18N_DEPRECATED_EXPORT KI18N_EXPORT
#  define KI18N_DEPRECATED_NO_EXPORT KI18N_NO_EXPORT
#elif defined(KI18N_NO_DEPRECATED_WARNINGS)
#  define KI18N_DEPRECATED
#  define KI18N_DEPRECATED_EXPORT KI18N_EXPORT
#  define KI18N_DEPRECATED_NO_EXPORT KI18N_NO_EXPORT
#else
#  define KI18N_DEPRECATED KI18N_DECL_DEPRECATED
#  define KI18N_DEPRECATED_EXPORT KI18N_DECL_DEPRECATED_EXPORT
#  define KI18N_DEPRECATED_NO_EXPORT KI18N_DECL_DEPRECATED_NO_EXPORT
#endif

/* No deprecated API had been removed from build */
#define KI18N_EXCLUDE_DEPRECATED_BEFORE_AND_AT 0

#define KI18N_BUILD_DEPRECATED_SINCE(major, minor) 1

#ifdef KI18N_NO_DEPRECATED
#  define KI18N_DISABLE_DEPRECATED_BEFORE_AND_AT 0x56b00
#endif
#ifdef KI18N_NO_DEPRECATED_WARNINGS
#  define KI18N_DEPRECATED_WARNINGS_SINCE 0
#endif

#ifndef KI18N_DEPRECATED_WARNINGS_SINCE
#  ifdef KI18N_DISABLE_DEPRECATED_BEFORE_AND_AT
#    define KI18N_DEPRECATED_WARNINGS_SINCE KI18N_DISABLE_DEPRECATED_BEFORE_AND_AT
#  else
#    define KI18N_DEPRECATED_WARNINGS_SINCE 0x56b00
#  endif
#endif

#ifndef KI18N_DISABLE_DEPRECATED_BEFORE_AND_AT
#  define KI18N_DISABLE_DEPRECATED_BEFORE_AND_AT 0
#endif

#ifdef KI18N_DEPRECATED
#  define KI18N_ENABLE_DEPRECATED_SINCE(major, minor) (((major<<16)|(minor<<8)) > KI18N_DISABLE_DEPRECATED_BEFORE_AND_AT)
#else
#  define KI18N_ENABLE_DEPRECATED_SINCE(major, minor) 0
#endif

#if KI18N_DEPRECATED_WARNINGS_SINCE >= 0x50000
#  define KI18N_DEPRECATED_VERSION_5_0(text) KI18N_DECL_DEPRECATED_TEXT(text)
#else
#  define KI18N_DEPRECATED_VERSION_5_0(text)
#endif
#define KI18N_DEPRECATED_VERSION_5(minor, text)      KI18N_DEPRECATED_VERSION_5_##minor(text)
#define KI18N_DEPRECATED_VERSION(major, minor, text) KI18N_DEPRECATED_VERSION_##major(minor, "Since "#major"."#minor". " text)
#define KI18N_DEPRECATED_VERSION_BELATED(major, minor, textmajor, textminor, text) KI18N_DEPRECATED_VERSION_##major(minor, "Since "#textmajor"."#textminor". " text)
#if defined(__cpp_enumerator_attributes) && __cpp_enumerator_attributes >= 201411
#  define KI18N_ENUMERATOR_DEPRECATED_VERSION(major, minor, text) KI18N_DEPRECATED_VERSION(major, minor, text)
#  define KI18N_ENUMERATOR_DEPRECATED_VERSION_BELATED(major, minor, textmajor, textminor, text) KI18N_DEPRECATED_VERSION_BELATED(major, minor, textmajor, textminor, text)
#else
#  define KI18N_ENUMERATOR_DEPRECATED_VERSION(major, minor, text)
#  define KI18N_ENUMERATOR_DEPRECATED_VERSION_BELATED(major, minor, textmajor, textminor, text)
#endif

#endif /* KI18N_EXPORT_H */
