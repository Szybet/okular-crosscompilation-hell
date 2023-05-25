/****************************************************************************
** Meta object code from reading C++ file 'accessmanagerreply_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../frameworks/kio/src/widgets/accessmanagerreply_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'accessmanagerreply_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KDEPrivate__AccessManagerReply_t {
    QByteArrayData data[17];
    char stringdata0[166];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KDEPrivate__AccessManagerReply_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KDEPrivate__AccessManagerReply_t qt_meta_stringdata_KDEPrivate__AccessManagerReply = {
    {
QT_MOC_LITERAL(0, 0, 30), // "KDEPrivate::AccessManagerReply"
QT_MOC_LITERAL(1, 31, 8), // "slotData"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 9), // "KIO::Job*"
QT_MOC_LITERAL(4, 51, 6), // "kioJob"
QT_MOC_LITERAL(5, 58, 4), // "data"
QT_MOC_LITERAL(6, 63, 12), // "slotMimeType"
QT_MOC_LITERAL(7, 76, 8), // "mimeType"
QT_MOC_LITERAL(8, 85, 10), // "slotResult"
QT_MOC_LITERAL(9, 96, 5), // "KJob*"
QT_MOC_LITERAL(10, 102, 4), // "kJob"
QT_MOC_LITERAL(11, 107, 14), // "slotStatResult"
QT_MOC_LITERAL(12, 122, 15), // "slotRedirection"
QT_MOC_LITERAL(13, 138, 3), // "job"
QT_MOC_LITERAL(14, 142, 3), // "url"
QT_MOC_LITERAL(15, 146, 11), // "slotPercent"
QT_MOC_LITERAL(16, 158, 7) // "percent"

    },
    "KDEPrivate::AccessManagerReply\0slotData\0"
    "\0KIO::Job*\0kioJob\0data\0slotMimeType\0"
    "mimeType\0slotResult\0KJob*\0kJob\0"
    "slotStatResult\0slotRedirection\0job\0"
    "url\0slotPercent\0percent"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KDEPrivate__AccessManagerReply[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   44,    2, 0x08 /* Private */,
       6,    2,   49,    2, 0x08 /* Private */,
       8,    1,   54,    2, 0x08 /* Private */,
      11,    1,   57,    2, 0x08 /* Private */,
      12,    2,   60,    2, 0x08 /* Private */,
      15,    2,   65,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QByteArray,    4,    5,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString,    4,    7,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QUrl,   13,   14,
    QMetaType::Void, 0x80000000 | 9, QMetaType::ULong,   13,   16,

       0        // eod
};

void KDEPrivate::AccessManagerReply::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AccessManagerReply *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotData((*reinterpret_cast< KIO::Job*(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2]))); break;
        case 1: _t->slotMimeType((*reinterpret_cast< KIO::Job*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 2: _t->slotResult((*reinterpret_cast< KJob*(*)>(_a[1]))); break;
        case 3: _t->slotStatResult((*reinterpret_cast< KJob*(*)>(_a[1]))); break;
        case 4: _t->slotRedirection((*reinterpret_cast< KIO::Job*(*)>(_a[1])),(*reinterpret_cast< const QUrl(*)>(_a[2]))); break;
        case 5: _t->slotPercent((*reinterpret_cast< KJob*(*)>(_a[1])),(*reinterpret_cast< ulong(*)>(_a[2]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject KDEPrivate::AccessManagerReply::staticMetaObject = { {
    QMetaObject::SuperData::link<QNetworkReply::staticMetaObject>(),
    qt_meta_stringdata_KDEPrivate__AccessManagerReply.data,
    qt_meta_data_KDEPrivate__AccessManagerReply,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KDEPrivate::AccessManagerReply::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KDEPrivate::AccessManagerReply::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KDEPrivate__AccessManagerReply.stringdata0))
        return static_cast<void*>(this);
    return QNetworkReply::qt_metacast(_clname);
}

int KDEPrivate::AccessManagerReply::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QNetworkReply::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
