
#ifndef KJSAPI_EXPORT_H
#define KJSAPI_EXPORT_H

#ifdef KJSAPI_STATIC_DEFINE
#  define KJSAPI_EXPORT
#  define KJSAPI_NO_EXPORT
#else
#  ifndef KJSAPI_EXPORT
#    ifdef KF5JSApi_EXPORTS
        /* We are building this library */
#      define KJSAPI_EXPORT __attribute__((visibility("default")))
#    else
        /* We are using this library */
#      define KJSAPI_EXPORT __attribute__((visibility("default")))
#    endif
#  endif

#  ifndef KJSAPI_NO_EXPORT
#    define KJSAPI_NO_EXPORT __attribute__((visibility("hidden")))
#  endif
#endif

#ifndef KJSAPI_DEPRECATED
#  define KJSAPI_DEPRECATED __attribute__ ((__deprecated__))
#endif

#ifndef KJSAPI_DEPRECATED_EXPORT
#  define KJSAPI_DEPRECATED_EXPORT KJSAPI_EXPORT KJSAPI_DEPRECATED
#endif

#ifndef KJSAPI_DEPRECATED_NO_EXPORT
#  define KJSAPI_DEPRECATED_NO_EXPORT KJSAPI_NO_EXPORT KJSAPI_DEPRECATED
#endif

#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef KJSAPI_NO_DEPRECATED
#    define KJSAPI_NO_DEPRECATED
#  endif
#endif

#endif /* KJSAPI_EXPORT_H */
