
#ifndef KHTML_EXPORT_H
#define KHTML_EXPORT_H

#ifdef KHTML_STATIC_DEFINE
#  define KHTML_EXPORT
#  define KHTML_NO_EXPORT
#else
#  ifndef KHTML_EXPORT
#    ifdef KF5KHtml_EXPORTS
        /* We are building this library */
#      define KHTML_EXPORT __attribute__((visibility("default")))
#    else
        /* We are using this library */
#      define KHTML_EXPORT __attribute__((visibility("default")))
#    endif
#  endif

#  ifndef KHTML_NO_EXPORT
#    define KHTML_NO_EXPORT __attribute__((visibility("hidden")))
#  endif
#endif

#ifndef KHTML_DEPRECATED
#  define KHTML_DEPRECATED __attribute__ ((__deprecated__))
#endif

#ifndef KHTML_DEPRECATED_EXPORT
#  define KHTML_DEPRECATED_EXPORT KHTML_EXPORT KHTML_DEPRECATED
#endif

#ifndef KHTML_DEPRECATED_NO_EXPORT
#  define KHTML_DEPRECATED_NO_EXPORT KHTML_NO_EXPORT KHTML_DEPRECATED
#endif

#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef KHTML_NO_DEPRECATED
#    define KHTML_NO_DEPRECATED
#  endif
#endif

#endif /* KHTML_EXPORT_H */
