/****************************************************************************
** Meta object code from reading C++ file 'backgroundchecker.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../frameworks/sonnet/src/core/backgroundchecker.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'backgroundchecker.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Sonnet__BackgroundChecker_t {
    QByteArrayData data[14];
    char stringdata0[136];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Sonnet__BackgroundChecker_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Sonnet__BackgroundChecker_t qt_meta_stringdata_Sonnet__BackgroundChecker = {
    {
QT_MOC_LITERAL(0, 0, 25), // "Sonnet::BackgroundChecker"
QT_MOC_LITERAL(1, 26, 11), // "misspelling"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 4), // "word"
QT_MOC_LITERAL(4, 44, 5), // "start"
QT_MOC_LITERAL(5, 50, 4), // "done"
QT_MOC_LITERAL(6, 55, 4), // "stop"
QT_MOC_LITERAL(7, 60, 7), // "replace"
QT_MOC_LITERAL(8, 68, 7), // "oldText"
QT_MOC_LITERAL(9, 76, 7), // "newText"
QT_MOC_LITERAL(10, 84, 14), // "changeLanguage"
QT_MOC_LITERAL(11, 99, 4), // "lang"
QT_MOC_LITERAL(12, 104, 16), // "continueChecking"
QT_MOC_LITERAL(13, 121, 14) // "slotEngineDone"

    },
    "Sonnet::BackgroundChecker\0misspelling\0"
    "\0word\0start\0done\0stop\0replace\0oldText\0"
    "newText\0changeLanguage\0lang\0"
    "continueChecking\0slotEngineDone"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Sonnet__BackgroundChecker[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   54,    2, 0x06 /* Public */,
       5,    0,   59,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   60,    2, 0x0a /* Public */,
       6,    0,   61,    2, 0x0a /* Public */,
       7,    3,   62,    2, 0x0a /* Public */,
      10,    1,   69,    2, 0x0a /* Public */,
      12,    0,   72,    2, 0x0a /* Public */,
      13,    0,   73,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    3,    4,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::QString,    4,    8,    9,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Sonnet::BackgroundChecker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<BackgroundChecker *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->misspelling((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->done(); break;
        case 2: _t->start(); break;
        case 3: _t->stop(); break;
        case 4: _t->replace((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 5: _t->changeLanguage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->continueChecking(); break;
        case 7: _t->slotEngineDone(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (BackgroundChecker::*)(const QString & , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BackgroundChecker::misspelling)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (BackgroundChecker::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BackgroundChecker::done)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Sonnet::BackgroundChecker::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Sonnet__BackgroundChecker.data,
    qt_meta_data_Sonnet__BackgroundChecker,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Sonnet::BackgroundChecker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Sonnet::BackgroundChecker::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Sonnet__BackgroundChecker.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Sonnet::BackgroundChecker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void Sonnet::BackgroundChecker::misspelling(const QString & _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Sonnet::BackgroundChecker::done()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
