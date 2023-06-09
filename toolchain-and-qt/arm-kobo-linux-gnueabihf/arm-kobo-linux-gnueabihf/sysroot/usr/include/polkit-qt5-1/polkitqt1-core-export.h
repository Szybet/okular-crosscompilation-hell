
#ifndef POLKITQT1_CORE_EXPORT_H
#define POLKITQT1_CORE_EXPORT_H

#ifdef POLKITQT1_CORE_STATIC_DEFINE
#  define POLKITQT1_CORE_EXPORT
#  define POLKITQT1_CORE_NO_EXPORT
#else
#  ifndef POLKITQT1_CORE_EXPORT
#    ifdef polkit_qt5_core_1_EXPORTS
        /* We are building this library */
#      define POLKITQT1_CORE_EXPORT __attribute__((visibility("default")))
#    else
        /* We are using this library */
#      define POLKITQT1_CORE_EXPORT __attribute__((visibility("default")))
#    endif
#  endif

#  ifndef POLKITQT1_CORE_NO_EXPORT
#    define POLKITQT1_CORE_NO_EXPORT __attribute__((visibility("hidden")))
#  endif
#endif

#ifndef POLKITQT1_CORE_DEPRECATED
#  define POLKITQT1_CORE_DEPRECATED __attribute__ ((__deprecated__))
#endif

#ifndef POLKITQT1_CORE_DEPRECATED_EXPORT
#  define POLKITQT1_CORE_DEPRECATED_EXPORT POLKITQT1_CORE_EXPORT POLKITQT1_CORE_DEPRECATED
#endif

#ifndef POLKITQT1_CORE_DEPRECATED_NO_EXPORT
#  define POLKITQT1_CORE_DEPRECATED_NO_EXPORT POLKITQT1_CORE_NO_EXPORT POLKITQT1_CORE_DEPRECATED
#endif

#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef POLKITQT1_CORE_NO_DEPRECATED
#    define POLKITQT1_CORE_NO_DEPRECATED
#  endif
#endif

#endif /* POLKITQT1_CORE_EXPORT_H */
