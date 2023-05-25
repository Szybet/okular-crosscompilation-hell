
#ifndef KBOOKMARKS_EXPORT_H
#define KBOOKMARKS_EXPORT_H

#ifdef KBOOKMARKS_STATIC_DEFINE
#  define KBOOKMARKS_EXPORT
#  define KBOOKMARKS_NO_EXPORT
#else
#  ifndef KBOOKMARKS_EXPORT
#    ifdef KF5Bookmarks_EXPORTS
        /* We are building this library */
#      define KBOOKMARKS_EXPORT __attribute__((visibility("default")))
#    else
        /* We are using this library */
#      define KBOOKMARKS_EXPORT __attribute__((visibility("default")))
#    endif
#  endif

#  ifndef KBOOKMARKS_NO_EXPORT
#    define KBOOKMARKS_NO_EXPORT __attribute__((visibility("hidden")))
#  endif
#endif

#ifndef KBOOKMARKS_DECL_DEPRECATED
#  define KBOOKMARKS_DECL_DEPRECATED __attribute__ ((__deprecated__))
#endif

#ifndef KBOOKMARKS_DECL_DEPRECATED_EXPORT
#  define KBOOKMARKS_DECL_DEPRECATED_EXPORT KBOOKMARKS_EXPORT KBOOKMARKS_DECL_DEPRECATED
#endif

#ifndef KBOOKMARKS_DECL_DEPRECATED_NO_EXPORT
#  define KBOOKMARKS_DECL_DEPRECATED_NO_EXPORT KBOOKMARKS_NO_EXPORT KBOOKMARKS_DECL_DEPRECATED
#endif

#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef KBOOKMARKS_NO_DEPRECATED
#    define KBOOKMARKS_NO_DEPRECATED
#  endif
#endif

#define KBOOKMARKS_DECL_DEPRECATED_TEXT(text) __attribute__ ((__deprecated__(text)))

/* Take any defaults from group settings */
#if !defined(KBOOKMARKS_NO_DEPRECATED) && !defined(KBOOKMARKS_DISABLE_DEPRECATED_BEFORE_AND_AT)
#  ifdef KF_NO_DEPRECATED
#    define KBOOKMARKS_NO_DEPRECATED
#  elif defined(KF_DISABLE_DEPRECATED_BEFORE_AND_AT)
#    define KBOOKMARKS_DISABLE_DEPRECATED_BEFORE_AND_AT KF_DISABLE_DEPRECATED_BEFORE_AND_AT
#  endif
#endif
#if !defined(KBOOKMARKS_DISABLE_DEPRECATED_BEFORE_AND_AT) && defined(KF_DISABLE_DEPRECATED_BEFORE_AND_AT)
#  define KBOOKMARKS_DISABLE_DEPRECATED_BEFORE_AND_AT KF_DISABLE_DEPRECATED_BEFORE_AND_AT
#endif

#if !defined(KBOOKMARKS_NO_DEPRECATED_WARNINGS) && !defined(KBOOKMARKS_DEPRECATED_WARNINGS_SINCE)
#  ifdef KF_NO_DEPRECATED_WARNINGS
#    define KBOOKMARKS_NO_DEPRECATED_WARNINGS
#  elif defined(KF_DEPRECATED_WARNINGS_SINCE)
#    define KBOOKMARKS_DEPRECATED_WARNINGS_SINCE KF_DEPRECATED_WARNINGS_SINCE
#  endif
#endif
#if !defined(KBOOKMARKS_DEPRECATED_WARNINGS_SINCE) && defined(KF_DEPRECATED_WARNINGS_SINCE)
#  define KBOOKMARKS_DEPRECATED_WARNINGS_SINCE KF_DEPRECATED_WARNINGS_SINCE
#endif

#if defined(KBOOKMARKS_NO_DEPRECATED)
#  undef KBOOKMARKS_DEPRECATED
#  define KBOOKMARKS_DEPRECATED_EXPORT KBOOKMARKS_EXPORT
#  define KBOOKMARKS_DEPRECATED_NO_EXPORT KBOOKMARKS_NO_EXPORT
#elif defined(KBOOKMARKS_NO_DEPRECATED_WARNINGS)
#  define KBOOKMARKS_DEPRECATED
#  define KBOOKMARKS_DEPRECATED_EXPORT KBOOKMARKS_EXPORT
#  define KBOOKMARKS_DEPRECATED_NO_EXPORT KBOOKMARKS_NO_EXPORT
#else
#  define KBOOKMARKS_DEPRECATED KBOOKMARKS_DECL_DEPRECATED
#  define KBOOKMARKS_DEPRECATED_EXPORT KBOOKMARKS_DECL_DEPRECATED_EXPORT
#  define KBOOKMARKS_DEPRECATED_NO_EXPORT KBOOKMARKS_DECL_DEPRECATED_NO_EXPORT
#endif

/* No deprecated API had been removed from build */
#define KBOOKMARKS_EXCLUDE_DEPRECATED_BEFORE_AND_AT 0

#define KBOOKMARKS_BUILD_DEPRECATED_SINCE(major, minor) 1

#ifdef KBOOKMARKS_NO_DEPRECATED
#  define KBOOKMARKS_DISABLE_DEPRECATED_BEFORE_AND_AT 0x56b00
#endif
#ifdef KBOOKMARKS_NO_DEPRECATED_WARNINGS
#  define KBOOKMARKS_DEPRECATED_WARNINGS_SINCE 0
#endif

#ifndef KBOOKMARKS_DEPRECATED_WARNINGS_SINCE
#  ifdef KBOOKMARKS_DISABLE_DEPRECATED_BEFORE_AND_AT
#    define KBOOKMARKS_DEPRECATED_WARNINGS_SINCE KBOOKMARKS_DISABLE_DEPRECATED_BEFORE_AND_AT
#  else
#    define KBOOKMARKS_DEPRECATED_WARNINGS_SINCE 0x56b00
#  endif
#endif

#ifndef KBOOKMARKS_DISABLE_DEPRECATED_BEFORE_AND_AT
#  define KBOOKMARKS_DISABLE_DEPRECATED_BEFORE_AND_AT 0
#endif

#ifdef KBOOKMARKS_DEPRECATED
#  define KBOOKMARKS_ENABLE_DEPRECATED_SINCE(major, minor) (((major<<16)|(minor<<8)) > KBOOKMARKS_DISABLE_DEPRECATED_BEFORE_AND_AT)
#else
#  define KBOOKMARKS_ENABLE_DEPRECATED_SINCE(major, minor) 0
#endif

#if KBOOKMARKS_DEPRECATED_WARNINGS_SINCE >= 0x50000
#  define KBOOKMARKS_DEPRECATED_VERSION_5_0(text) KBOOKMARKS_DECL_DEPRECATED_TEXT(text)
#else
#  define KBOOKMARKS_DEPRECATED_VERSION_5_0(text)
#endif

#if KBOOKMARKS_DEPRECATED_WARNINGS_SINCE >= 0x54100
#  define KBOOKMARKS_DEPRECATED_VERSION_5_65(text) KBOOKMARKS_DECL_DEPRECATED_TEXT(text)
#else
#  define KBOOKMARKS_DEPRECATED_VERSION_5_65(text)
#endif

#if KBOOKMARKS_DEPRECATED_WARNINGS_SINCE >= 0x54500
#  define KBOOKMARKS_DEPRECATED_VERSION_5_69(text) KBOOKMARKS_DECL_DEPRECATED_TEXT(text)
#else
#  define KBOOKMARKS_DEPRECATED_VERSION_5_69(text)
#endif
#define KBOOKMARKS_DEPRECATED_VERSION_5(minor, text)      KBOOKMARKS_DEPRECATED_VERSION_5_##minor(text)
#define KBOOKMARKS_DEPRECATED_VERSION(major, minor, text) KBOOKMARKS_DEPRECATED_VERSION_##major(minor, "Since "#major"."#minor". " text)
#define KBOOKMARKS_DEPRECATED_VERSION_BELATED(major, minor, textmajor, textminor, text) KBOOKMARKS_DEPRECATED_VERSION_##major(minor, "Since "#textmajor"."#textminor". " text)
#if defined(__cpp_enumerator_attributes) && __cpp_enumerator_attributes >= 201411
#  define KBOOKMARKS_ENUMERATOR_DEPRECATED_VERSION(major, minor, text) KBOOKMARKS_DEPRECATED_VERSION(major, minor, text)
#  define KBOOKMARKS_ENUMERATOR_DEPRECATED_VERSION_BELATED(major, minor, textmajor, textminor, text) KBOOKMARKS_DEPRECATED_VERSION_BELATED(major, minor, textmajor, textminor, text)
#else
#  define KBOOKMARKS_ENUMERATOR_DEPRECATED_VERSION(major, minor, text)
#  define KBOOKMARKS_ENUMERATOR_DEPRECATED_VERSION_BELATED(major, minor, textmajor, textminor, text)
#endif

#endif /* KBOOKMARKS_EXPORT_H */
