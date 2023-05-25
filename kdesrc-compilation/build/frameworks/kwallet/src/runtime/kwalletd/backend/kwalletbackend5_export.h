
#ifndef KWALLETBACKEND5_EXPORT_H
#define KWALLETBACKEND5_EXPORT_H

#ifdef KWALLETBACKEND5_STATIC_DEFINE
#  define KWALLETBACKEND5_EXPORT
#  define KWALLETBACKEND5_NO_EXPORT
#else
#  ifndef KWALLETBACKEND5_EXPORT
#    ifdef kwalletbackend5_EXPORTS
        /* We are building this library */
#      define KWALLETBACKEND5_EXPORT __attribute__((visibility("default")))
#    else
        /* We are using this library */
#      define KWALLETBACKEND5_EXPORT __attribute__((visibility("default")))
#    endif
#  endif

#  ifndef KWALLETBACKEND5_NO_EXPORT
#    define KWALLETBACKEND5_NO_EXPORT __attribute__((visibility("hidden")))
#  endif
#endif

#ifndef KWALLETBACKEND5_DEPRECATED
#  define KWALLETBACKEND5_DEPRECATED __attribute__ ((__deprecated__))
#endif

#ifndef KWALLETBACKEND5_DEPRECATED_EXPORT
#  define KWALLETBACKEND5_DEPRECATED_EXPORT KWALLETBACKEND5_EXPORT KWALLETBACKEND5_DEPRECATED
#endif

#ifndef KWALLETBACKEND5_DEPRECATED_NO_EXPORT
#  define KWALLETBACKEND5_DEPRECATED_NO_EXPORT KWALLETBACKEND5_NO_EXPORT KWALLETBACKEND5_DEPRECATED
#endif

#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef KWALLETBACKEND5_NO_DEPRECATED
#    define KWALLETBACKEND5_NO_DEPRECATED
#  endif
#endif

#endif /* KWALLETBACKEND5_EXPORT_H */
