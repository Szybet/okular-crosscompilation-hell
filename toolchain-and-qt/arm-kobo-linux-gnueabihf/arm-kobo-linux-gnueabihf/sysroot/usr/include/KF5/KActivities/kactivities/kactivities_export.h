
#ifndef KACTIVITIES_EXPORT_H
#define KACTIVITIES_EXPORT_H

#ifdef KACTIVITIES_STATIC_DEFINE
#  define KACTIVITIES_EXPORT
#  define KACTIVITIES_NO_EXPORT
#else
#  ifndef KACTIVITIES_EXPORT
#    ifdef KF5Activities_EXPORTS
        /* We are building this library */
#      define KACTIVITIES_EXPORT __attribute__((visibility("default")))
#    else
        /* We are using this library */
#      define KACTIVITIES_EXPORT __attribute__((visibility("default")))
#    endif
#  endif

#  ifndef KACTIVITIES_NO_EXPORT
#    define KACTIVITIES_NO_EXPORT __attribute__((visibility("hidden")))
#  endif
#endif

#ifndef KACTIVITIES_DEPRECATED
#  define KACTIVITIES_DEPRECATED __attribute__ ((__deprecated__))
#endif

#ifndef KACTIVITIES_DEPRECATED_EXPORT
#  define KACTIVITIES_DEPRECATED_EXPORT KACTIVITIES_EXPORT KACTIVITIES_DEPRECATED
#endif

#ifndef KACTIVITIES_DEPRECATED_NO_EXPORT
#  define KACTIVITIES_DEPRECATED_NO_EXPORT KACTIVITIES_NO_EXPORT KACTIVITIES_DEPRECATED
#endif

#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef KACTIVITIES_NO_DEPRECATED
#    define KACTIVITIES_NO_DEPRECATED
#  endif
#endif

#endif /* KACTIVITIES_EXPORT_H */
