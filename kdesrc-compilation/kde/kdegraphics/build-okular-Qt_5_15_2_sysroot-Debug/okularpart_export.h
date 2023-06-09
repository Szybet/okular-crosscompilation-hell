
#ifndef OKULARPART_EXPORT_H
#define OKULARPART_EXPORT_H

#ifdef OKULARPART_STATIC_DEFINE
#  define OKULARPART_EXPORT
#  define OKULARPART_NO_EXPORT
#else
#  ifndef OKULARPART_EXPORT
#    ifdef okularpart_EXPORTS
        /* We are building this library */
#      define OKULARPART_EXPORT __attribute__((visibility("default")))
#    else
        /* We are using this library */
#      define OKULARPART_EXPORT __attribute__((visibility("default")))
#    endif
#  endif

#  ifndef OKULARPART_NO_EXPORT
#    define OKULARPART_NO_EXPORT __attribute__((visibility("hidden")))
#  endif
#endif

#ifndef OKULARPART_DEPRECATED
#  define OKULARPART_DEPRECATED __attribute__ ((__deprecated__))
#endif

#ifndef OKULARPART_DEPRECATED_EXPORT
#  define OKULARPART_DEPRECATED_EXPORT OKULARPART_EXPORT OKULARPART_DEPRECATED
#endif

#ifndef OKULARPART_DEPRECATED_NO_EXPORT
#  define OKULARPART_DEPRECATED_NO_EXPORT OKULARPART_NO_EXPORT OKULARPART_DEPRECATED
#endif

#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef OKULARPART_NO_DEPRECATED
#    define OKULARPART_NO_DEPRECATED
#  endif
#endif

#endif /* OKULARPART_EXPORT_H */
