
#ifndef LIBKEXIV2_EXPORT_H
#define LIBKEXIV2_EXPORT_H

#ifdef LIBKEXIV2_STATIC_DEFINE
#  define LIBKEXIV2_EXPORT
#  define LIBKEXIV2_NO_EXPORT
#else
#  ifndef LIBKEXIV2_EXPORT
#    ifdef KF5KExiv2_EXPORTS
        /* We are building this library */
#      define LIBKEXIV2_EXPORT __attribute__((visibility("default")))
#    else
        /* We are using this library */
#      define LIBKEXIV2_EXPORT __attribute__((visibility("default")))
#    endif
#  endif

#  ifndef LIBKEXIV2_NO_EXPORT
#    define LIBKEXIV2_NO_EXPORT __attribute__((visibility("hidden")))
#  endif
#endif

#ifndef LIBKEXIV2_DEPRECATED
#  define LIBKEXIV2_DEPRECATED __attribute__ ((__deprecated__))
#endif

#ifndef LIBKEXIV2_DEPRECATED_EXPORT
#  define LIBKEXIV2_DEPRECATED_EXPORT LIBKEXIV2_EXPORT LIBKEXIV2_DEPRECATED
#endif

#ifndef LIBKEXIV2_DEPRECATED_NO_EXPORT
#  define LIBKEXIV2_DEPRECATED_NO_EXPORT LIBKEXIV2_NO_EXPORT LIBKEXIV2_DEPRECATED
#endif

#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef LIBKEXIV2_NO_DEPRECATED
#    define LIBKEXIV2_NO_DEPRECATED
#  endif
#endif

#endif /* LIBKEXIV2_EXPORT_H */
