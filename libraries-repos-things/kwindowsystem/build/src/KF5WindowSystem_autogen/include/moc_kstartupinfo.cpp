/****************************************************************************
** Meta object code from reading C++ file 'kstartupinfo.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/kstartupinfo.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kstartupinfo.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KStartupInfo_t {
    QByteArrayData data[17];
    char stringdata0[196];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KStartupInfo_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KStartupInfo_t qt_meta_stringdata_KStartupInfo = {
    {
QT_MOC_LITERAL(0, 0, 12), // "KStartupInfo"
QT_MOC_LITERAL(1, 13, 13), // "gotNewStartup"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 14), // "KStartupInfoId"
QT_MOC_LITERAL(4, 43, 2), // "id"
QT_MOC_LITERAL(5, 46, 16), // "KStartupInfoData"
QT_MOC_LITERAL(6, 63, 4), // "data"
QT_MOC_LITERAL(7, 68, 16), // "gotStartupChange"
QT_MOC_LITERAL(8, 85, 16), // "gotRemoveStartup"
QT_MOC_LITERAL(9, 102, 16), // "startups_cleanup"
QT_MOC_LITERAL(10, 119, 23), // "startups_cleanup_no_age"
QT_MOC_LITERAL(11, 143, 11), // "got_message"
QT_MOC_LITERAL(12, 155, 3), // "msg"
QT_MOC_LITERAL(13, 159, 12), // "window_added"
QT_MOC_LITERAL(14, 172, 3), // "WId"
QT_MOC_LITERAL(15, 176, 1), // "w"
QT_MOC_LITERAL(16, 178, 17) // "slot_window_added"

    },
    "KStartupInfo\0gotNewStartup\0\0KStartupInfoId\0"
    "id\0KStartupInfoData\0data\0gotStartupChange\0"
    "gotRemoveStartup\0startups_cleanup\0"
    "startups_cleanup_no_age\0got_message\0"
    "msg\0window_added\0WId\0w\0slot_window_added"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KStartupInfo[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   54,    2, 0x06 /* Public */,
       7,    2,   59,    2, 0x06 /* Public */,
       8,    2,   64,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    0,   69,    2, 0x08 /* Private */,
      10,    0,   70,    2, 0x08 /* Private */,
      11,    1,   71,    2, 0x08 /* Private */,
      13,    1,   74,    2, 0x08 /* Private */,
      16,    1,   77,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void, 0x80000000 | 14,   15,

       0        // eod
};

void KStartupInfo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<KStartupInfo *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->gotNewStartup((*reinterpret_cast< const KStartupInfoId(*)>(_a[1])),(*reinterpret_cast< const KStartupInfoData(*)>(_a[2]))); break;
        case 1: _t->gotStartupChange((*reinterpret_cast< const KStartupInfoId(*)>(_a[1])),(*reinterpret_cast< const KStartupInfoData(*)>(_a[2]))); break;
        case 2: _t->gotRemoveStartup((*reinterpret_cast< const KStartupInfoId(*)>(_a[1])),(*reinterpret_cast< const KStartupInfoData(*)>(_a[2]))); break;
        case 3: _t->d->startups_cleanup(); break;
        case 4: _t->d->startups_cleanup_no_age(); break;
        case 5: _t->d->got_message((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->d->window_added((*reinterpret_cast< WId(*)>(_a[1]))); break;
        case 7: _t->d->slot_window_added((*reinterpret_cast< WId(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (KStartupInfo::*)(const KStartupInfoId & , const KStartupInfoData & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KStartupInfo::gotNewStartup)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (KStartupInfo::*)(const KStartupInfoId & , const KStartupInfoData & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KStartupInfo::gotStartupChange)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (KStartupInfo::*)(const KStartupInfoId & , const KStartupInfoData & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KStartupInfo::gotRemoveStartup)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject KStartupInfo::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_KStartupInfo.data,
    qt_meta_data_KStartupInfo,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KStartupInfo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KStartupInfo::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KStartupInfo.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int KStartupInfo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void KStartupInfo::gotNewStartup(const KStartupInfoId & _t1, const KStartupInfoData & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void KStartupInfo::gotStartupChange(const KStartupInfoId & _t1, const KStartupInfoData & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void KStartupInfo::gotRemoveStartup(const KStartupInfoId & _t1, const KStartupInfoData & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
