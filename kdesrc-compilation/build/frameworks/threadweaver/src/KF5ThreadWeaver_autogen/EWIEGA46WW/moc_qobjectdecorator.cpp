/****************************************************************************
** Meta object code from reading C++ file 'qobjectdecorator.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../frameworks/threadweaver/src/qobjectdecorator.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qobjectdecorator.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ThreadWeaver__QObjectDecorator_t {
    QByteArrayData data[6];
    char stringdata0[77];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ThreadWeaver__QObjectDecorator_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ThreadWeaver__QObjectDecorator_t qt_meta_stringdata_ThreadWeaver__QObjectDecorator = {
    {
QT_MOC_LITERAL(0, 0, 30), // "ThreadWeaver::QObjectDecorator"
QT_MOC_LITERAL(1, 31, 7), // "started"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 24), // "ThreadWeaver::JobPointer"
QT_MOC_LITERAL(4, 65, 4), // "done"
QT_MOC_LITERAL(5, 70, 6) // "failed"

    },
    "ThreadWeaver::QObjectDecorator\0started\0"
    "\0ThreadWeaver::JobPointer\0done\0failed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ThreadWeaver__QObjectDecorator[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,
       4,    1,   32,    2, 0x06 /* Public */,
       5,    1,   35,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,

       0        // eod
};

void ThreadWeaver::QObjectDecorator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QObjectDecorator *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->started((*reinterpret_cast< ThreadWeaver::JobPointer(*)>(_a[1]))); break;
        case 1: _t->done((*reinterpret_cast< ThreadWeaver::JobPointer(*)>(_a[1]))); break;
        case 2: _t->failed((*reinterpret_cast< ThreadWeaver::JobPointer(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ThreadWeaver::JobPointer >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ThreadWeaver::JobPointer >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ThreadWeaver::JobPointer >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QObjectDecorator::*)(ThreadWeaver::JobPointer );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QObjectDecorator::started)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QObjectDecorator::*)(ThreadWeaver::JobPointer );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QObjectDecorator::done)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QObjectDecorator::*)(ThreadWeaver::JobPointer );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QObjectDecorator::failed)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ThreadWeaver::QObjectDecorator::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ThreadWeaver__QObjectDecorator.data,
    qt_meta_data_ThreadWeaver__QObjectDecorator,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ThreadWeaver::QObjectDecorator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ThreadWeaver::QObjectDecorator::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ThreadWeaver__QObjectDecorator.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "IdDecorator"))
        return static_cast< IdDecorator*>(this);
    return QObject::qt_metacast(_clname);
}

int ThreadWeaver::QObjectDecorator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void ThreadWeaver::QObjectDecorator::started(ThreadWeaver::JobPointer _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ThreadWeaver::QObjectDecorator::done(ThreadWeaver::JobPointer _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ThreadWeaver::QObjectDecorator::failed(ThreadWeaver::JobPointer _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
