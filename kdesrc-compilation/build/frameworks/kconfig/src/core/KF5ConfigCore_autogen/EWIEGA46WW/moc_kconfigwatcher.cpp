/****************************************************************************
** Meta object code from reading C++ file 'kconfigwatcher.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../frameworks/kconfig/src/core/kconfigwatcher.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kconfigwatcher.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KConfigWatcher_t {
    QByteArrayData data[9];
    char stringdata0[120];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KConfigWatcher_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KConfigWatcher_t qt_meta_stringdata_KConfigWatcher = {
    {
QT_MOC_LITERAL(0, 0, 14), // "KConfigWatcher"
QT_MOC_LITERAL(1, 15, 13), // "configChanged"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 12), // "KConfigGroup"
QT_MOC_LITERAL(4, 43, 5), // "group"
QT_MOC_LITERAL(5, 49, 5), // "names"
QT_MOC_LITERAL(6, 55, 26), // "onConfigChangeNotification"
QT_MOC_LITERAL(7, 82, 29), // "QHash<QString,QByteArrayList>"
QT_MOC_LITERAL(8, 112, 7) // "changes"

    },
    "KConfigWatcher\0configChanged\0\0"
    "KConfigGroup\0group\0names\0"
    "onConfigChangeNotification\0"
    "QHash<QString,QByteArrayList>\0changes"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KConfigWatcher[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   29,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QByteArrayList,    4,    5,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 7,    8,

       0        // eod
};

void KConfigWatcher::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<KConfigWatcher *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->configChanged((*reinterpret_cast< const KConfigGroup(*)>(_a[1])),(*reinterpret_cast< const QByteArrayList(*)>(_a[2]))); break;
        case 1: _t->onConfigChangeNotification((*reinterpret_cast< const QHash<QString,QByteArrayList>(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (KConfigWatcher::*)(const KConfigGroup & , const QByteArrayList & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KConfigWatcher::configChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject KConfigWatcher::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_KConfigWatcher.data,
    qt_meta_data_KConfigWatcher,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KConfigWatcher::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KConfigWatcher::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KConfigWatcher.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int KConfigWatcher::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void KConfigWatcher::configChanged(const KConfigGroup & _t1, const QByteArrayList & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
