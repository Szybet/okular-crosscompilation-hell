
#ifndef LIBKEXIV2_EXPORT_H
#define LIBKEXIV2_EXPORT_H

#ifdef KEXIV2_STATIC_DEFINE
#  define LIBKEXIV2_EXPORT
#  define KEXIV2_NO_EXPORT
#else
#  ifndef LIBKEXIV2_EXPORT
#    ifdef KExiv2_EXPORTS
        /* We are building this library */
#      define LIBKEXIV2_EXPORT __attribute__((visibility("default")))
#    else
        /* We are using this library */
#      define LIBKEXIV2_EXPORT __attribute__((visibility("default")))
#    endif
#  endif

#  ifndef KEXIV2_NO_EXPORT
#    define KEXIV2_NO_EXPORT __attribute__((visibility("hidden")))
#  endif
#endif

#ifndef KEXIV2_DECL_DEPRECATED
#  define KEXIV2_DECL_DEPRECATED __attribute__ ((__deprecated__))
#endif

#ifndef KEXIV2_DECL_DEPRECATED_EXPORT
#  define KEXIV2_DECL_DEPRECATED_EXPORT LIBKEXIV2_EXPORT KEXIV2_DECL_DEPRECATED
#endif

#ifndef KEXIV2_DECL_DEPRECATED_NO_EXPORT
#  define KEXIV2_DECL_DEPRECATED_NO_EXPORT KEXIV2_NO_EXPORT KEXIV2_DECL_DEPRECATED
#endif

#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef KEXIV2_NO_DEPRECATED
#    define KEXIV2_NO_DEPRECATED
#  endif
#endif

#define KEXIV2_DECL_DEPRECATED_TEXT(text) __attribute__ ((__deprecated__(text)))

#if defined(KEXIV2_NO_DEPRECATED)
#  undef KEXIV2_DEPRECATED
#  define KEXIV2_DEPRECATED_EXPORT LIBKEXIV2_EXPORT
#  define KEXIV2_DEPRECATED_NO_EXPORT KEXIV2_NO_EXPORT
#elif defined(KEXIV2_NO_DEPRECATED_WARNINGS)
#  define KEXIV2_DEPRECATED
#  define KEXIV2_DEPRECATED_EXPORT LIBKEXIV2_EXPORT
#  define KEXIV2_DEPRECATED_NO_EXPORT KEXIV2_NO_EXPORT
#else
#  define KEXIV2_DEPRECATED KEXIV2_DECL_DEPRECATED
#  define KEXIV2_DEPRECATED_EXPORT KEXIV2_DECL_DEPRECATED_EXPORT
#  define KEXIV2_DEPRECATED_NO_EXPORT KEXIV2_DECL_DEPRECATED_NO_EXPORT
#endif

/* No deprecated API had been removed from build */
#define KEXIV2_EXCLUDE_DEPRECATED_BEFORE_AND_AT 0

#define KEXIV2_BUILD_DEPRECATED_SINCE(major, minor) 1

#ifdef KEXIV2_NO_DEPRECATED
#  define KEXIV2_DISABLE_DEPRECATED_BEFORE_AND_AT 0x50000
#endif
#ifdef KEXIV2_NO_DEPRECATED_WARNINGS
#  define KEXIV2_DEPRECATED_WARNINGS_SINCE 0
#endif

#ifndef KEXIV2_DEPRECATED_WARNINGS_SINCE
#  ifdef KEXIV2_DISABLE_DEPRECATED_BEFORE_AND_AT
#    define KEXIV2_DEPRECATED_WARNINGS_SINCE KEXIV2_DISABLE_DEPRECATED_BEFORE_AND_AT
#  else
#    define KEXIV2_DEPRECATED_WARNINGS_SINCE 0x50000
#  endif
#endif

#ifndef KEXIV2_DISABLE_DEPRECATED_BEFORE_AND_AT
#  define KEXIV2_DISABLE_DEPRECATED_BEFORE_AND_AT 0
#endif

#ifdef KEXIV2_DEPRECATED
#  define KEXIV2_ENABLE_DEPRECATED_SINCE(major, minor) (((major<<16)|(minor<<8)) > KEXIV2_DISABLE_DEPRECATED_BEFORE_AND_AT)
#else
#  define KEXIV2_ENABLE_DEPRECATED_SINCE(major, minor) 0
#endif

#if KEXIV2_DEPRECATED_WARNINGS_SINCE >= 0x50100
#  define KEXIV2_DEPRECATED_VERSION_5_1(text) KEXIV2_DECL_DEPRECATED_TEXT(text)
#else
#  define KEXIV2_DEPRECATED_VERSION_5_1(text)
#endif
#define KEXIV2_DEPRECATED_VERSION_5(minor, text)      KEXIV2_DEPRECATED_VERSION_5_##minor(text)
#define KEXIV2_DEPRECATED_VERSION(major, minor, text) KEXIV2_DEPRECATED_VERSION_##major(minor, "Since "#major"."#minor". " text)
#define KEXIV2_DEPRECATED_VERSION_BELATED(major, minor, textmajor, textminor, text) KEXIV2_DEPRECATED_VERSION_##major(minor, "Since "#textmajor"."#textminor". " text)
#if defined(__cpp_enumerator_attributes) && __cpp_enumerator_attributes >= 201411
#  define KEXIV2_ENUMERATOR_DEPRECATED_VERSION(major, minor, text) KEXIV2_DEPRECATED_VERSION(major, minor, text)
#  define KEXIV2_ENUMERATOR_DEPRECATED_VERSION_BELATED(major, minor, textmajor, textminor, text) KEXIV2_DEPRECATED_VERSION_BELATED(major, minor, textmajor, textminor, text)
#else
#  define KEXIV2_ENUMERATOR_DEPRECATED_VERSION(major, minor, text)
#  define KEXIV2_ENUMERATOR_DEPRECATED_VERSION_BELATED(major, minor, textmajor, textminor, text)
#endif

#endif /* LIBKEXIV2_EXPORT_H */
