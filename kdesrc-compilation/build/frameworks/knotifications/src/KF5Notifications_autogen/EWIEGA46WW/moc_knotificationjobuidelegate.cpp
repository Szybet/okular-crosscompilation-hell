/****************************************************************************
** Meta object code from reading C++ file 'knotificationjobuidelegate.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../frameworks/knotifications/src/knotificationjobuidelegate.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'knotificationjobuidelegate.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KNotificationJobUiDelegate_t {
    QByteArrayData data[8];
    char stringdata0[68];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KNotificationJobUiDelegate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KNotificationJobUiDelegate_t qt_meta_stringdata_KNotificationJobUiDelegate = {
    {
QT_MOC_LITERAL(0, 0, 26), // "KNotificationJobUiDelegate"
QT_MOC_LITERAL(1, 27, 6), // "setJob"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 5), // "KJob*"
QT_MOC_LITERAL(4, 41, 3), // "job"
QT_MOC_LITERAL(5, 45, 11), // "slotWarning"
QT_MOC_LITERAL(6, 57, 5), // "plain"
QT_MOC_LITERAL(7, 63, 4) // "rich"

    },
    "KNotificationJobUiDelegate\0setJob\0\0"
    "KJob*\0job\0slotWarning\0plain\0rich"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KNotificationJobUiDelegate[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x09 /* Protected */,
       5,    3,   27,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Bool, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString, QMetaType::QString,    4,    6,    7,

       0        // eod
};

void KNotificationJobUiDelegate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<KNotificationJobUiDelegate *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { bool _r = _t->setJob((*reinterpret_cast< KJob*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 1: _t->slotWarning((*reinterpret_cast< KJob*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject KNotificationJobUiDelegate::staticMetaObject = { {
    QMetaObject::SuperData::link<KJobUiDelegate::staticMetaObject>(),
    qt_meta_stringdata_KNotificationJobUiDelegate.data,
    qt_meta_data_KNotificationJobUiDelegate,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KNotificationJobUiDelegate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KNotificationJobUiDelegate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KNotificationJobUiDelegate.stringdata0))
        return static_cast<void*>(this);
    return KJobUiDelegate::qt_metacast(_clname);
}

int KNotificationJobUiDelegate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KJobUiDelegate::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
