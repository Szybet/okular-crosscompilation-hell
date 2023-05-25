/****************************************************************************
** Meta object code from reading C++ file 'kglobalaccel_interface.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../frameworks/kglobalaccel/src/runtime/kglobalaccel_interface.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kglobalaccel_interface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KGlobalAccelInterface_t {
    QByteArrayData data[1];
    char stringdata0[22];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KGlobalAccelInterface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KGlobalAccelInterface_t qt_meta_stringdata_KGlobalAccelInterface = {
    {
QT_MOC_LITERAL(0, 0, 21) // "KGlobalAccelInterface"

    },
    "KGlobalAccelInterface"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KGlobalAccelInterface[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void KGlobalAccelInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject KGlobalAccelInterface::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_KGlobalAccelInterface.data,
    qt_meta_data_KGlobalAccelInterface,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KGlobalAccelInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KGlobalAccelInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KGlobalAccelInterface.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int KGlobalAccelInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_KGlobalAccelInterfaceV2_t {
    QByteArrayData data[1];
    char stringdata0[24];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KGlobalAccelInterfaceV2_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KGlobalAccelInterfaceV2_t qt_meta_stringdata_KGlobalAccelInterfaceV2 = {
    {
QT_MOC_LITERAL(0, 0, 23) // "KGlobalAccelInterfaceV2"

    },
    "KGlobalAccelInterfaceV2"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KGlobalAccelInterfaceV2[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void KGlobalAccelInterfaceV2::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject KGlobalAccelInterfaceV2::staticMetaObject = { {
    QMetaObject::SuperData::link<KGlobalAccelInterface::staticMetaObject>(),
    qt_meta_stringdata_KGlobalAccelInterfaceV2.data,
    qt_meta_data_KGlobalAccelInterfaceV2,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KGlobalAccelInterfaceV2::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KGlobalAccelInterfaceV2::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KGlobalAccelInterfaceV2.stringdata0))
        return static_cast<void*>(this);
    return KGlobalAccelInterface::qt_metacast(_clname);
}

int KGlobalAccelInterfaceV2::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KGlobalAccelInterface::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
