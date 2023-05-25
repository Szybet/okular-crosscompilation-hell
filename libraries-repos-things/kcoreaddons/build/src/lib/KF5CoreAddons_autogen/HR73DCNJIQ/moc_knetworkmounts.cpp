/****************************************************************************
** Meta object code from reading C++ file 'knetworkmounts.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../src/lib/io/knetworkmounts.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'knetworkmounts.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KNetworkMounts_t {
    QByteArrayData data[14];
    char stringdata0[270];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KNetworkMounts_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KNetworkMounts_t qt_meta_stringdata_KNetworkMounts = {
    {
QT_MOC_LITERAL(0, 0, 14), // "KNetworkMounts"
QT_MOC_LITERAL(1, 15, 19), // "KNetworkMountOption"
QT_MOC_LITERAL(2, 35, 27), // "LowSideEffectsOptimizations"
QT_MOC_LITERAL(3, 63, 30), // "MediumSideEffectsOptimizations"
QT_MOC_LITERAL(4, 94, 30), // "StrongSideEffectsOptimizations"
QT_MOC_LITERAL(5, 125, 19), // "KDirWatchUseINotify"
QT_MOC_LITERAL(6, 145, 23), // "KDirWatchDontAddWatches"
QT_MOC_LITERAL(7, 169, 20), // "SymlinkPathsUseCache"
QT_MOC_LITERAL(8, 190, 18), // "KNetworkMountsType"
QT_MOC_LITERAL(9, 209, 8), // "NfsPaths"
QT_MOC_LITERAL(10, 218, 8), // "SmbPaths"
QT_MOC_LITERAL(11, 227, 16), // "SymlinkDirectory"
QT_MOC_LITERAL(12, 244, 21), // "SymlinkToNetworkMount"
QT_MOC_LITERAL(13, 266, 3) // "Any"

    },
    "KNetworkMounts\0KNetworkMountOption\0"
    "LowSideEffectsOptimizations\0"
    "MediumSideEffectsOptimizations\0"
    "StrongSideEffectsOptimizations\0"
    "KDirWatchUseINotify\0KDirWatchDontAddWatches\0"
    "SymlinkPathsUseCache\0KNetworkMountsType\0"
    "NfsPaths\0SmbPaths\0SymlinkDirectory\0"
    "SymlinkToNetworkMount\0Any"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KNetworkMounts[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       2,   14, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // enums: name, alias, flags, count, data
       1,    1, 0x0,    6,   24,
       8,    8, 0x0,    5,   36,

 // enum data: key, value
       2, uint(KNetworkMounts::LowSideEffectsOptimizations),
       3, uint(KNetworkMounts::MediumSideEffectsOptimizations),
       4, uint(KNetworkMounts::StrongSideEffectsOptimizations),
       5, uint(KNetworkMounts::KDirWatchUseINotify),
       6, uint(KNetworkMounts::KDirWatchDontAddWatches),
       7, uint(KNetworkMounts::SymlinkPathsUseCache),
       9, uint(KNetworkMounts::NfsPaths),
      10, uint(KNetworkMounts::SmbPaths),
      11, uint(KNetworkMounts::SymlinkDirectory),
      12, uint(KNetworkMounts::SymlinkToNetworkMount),
      13, uint(KNetworkMounts::Any),

       0        // eod
};

void KNetworkMounts::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject KNetworkMounts::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_KNetworkMounts.data,
    qt_meta_data_KNetworkMounts,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KNetworkMounts::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KNetworkMounts::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KNetworkMounts.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int KNetworkMounts::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
