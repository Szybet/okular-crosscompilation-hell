/****************************************************************************
** Meta object code from reading C++ file 'kconfigbackend_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../frameworks/kconfig/src/core/kconfigbackend_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kconfigbackend_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KConfigBackend_t {
    QByteArrayData data[7];
    char stringdata0[93];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KConfigBackend_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KConfigBackend_t qt_meta_stringdata_KConfigBackend = {
    {
QT_MOC_LITERAL(0, 0, 14), // "KConfigBackend"
QT_MOC_LITERAL(1, 15, 11), // "ParseOption"
QT_MOC_LITERAL(2, 27, 11), // "ParseGlobal"
QT_MOC_LITERAL(3, 39, 13), // "ParseDefaults"
QT_MOC_LITERAL(4, 53, 15), // "ParseExpansions"
QT_MOC_LITERAL(5, 69, 11), // "WriteOption"
QT_MOC_LITERAL(6, 81, 11) // "WriteGlobal"

    },
    "KConfigBackend\0ParseOption\0ParseGlobal\0"
    "ParseDefaults\0ParseExpansions\0WriteOption\0"
    "WriteGlobal"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KConfigBackend[] = {

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
       1,    1, 0x1,    3,   24,
       5,    5, 0x1,    1,   30,

 // enum data: key, value
       2, uint(KConfigBackend::ParseGlobal),
       3, uint(KConfigBackend::ParseDefaults),
       4, uint(KConfigBackend::ParseExpansions),
       6, uint(KConfigBackend::WriteGlobal),

       0        // eod
};

void KConfigBackend::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject KConfigBackend::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_KConfigBackend.data,
    qt_meta_data_KConfigBackend,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KConfigBackend::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KConfigBackend::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KConfigBackend.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QSharedData"))
        return static_cast< QSharedData*>(this);
    return QObject::qt_metacast(_clname);
}

int KConfigBackend::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
