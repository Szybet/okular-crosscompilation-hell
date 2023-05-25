/****************************************************************************
** Meta object code from reading C++ file 'kfind.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../frameworks/ktextwidgets/src/findreplace/kfind.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kfind.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KFind_t {
    QByteArrayData data[12];
    char stringdata0[114];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KFind_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KFind_t qt_meta_stringdata_KFind = {
    {
QT_MOC_LITERAL(0, 0, 5), // "KFind"
QT_MOC_LITERAL(1, 6, 9), // "highlight"
QT_MOC_LITERAL(2, 16, 0), // ""
QT_MOC_LITERAL(3, 17, 4), // "text"
QT_MOC_LITERAL(4, 22, 13), // "matchingIndex"
QT_MOC_LITERAL(5, 36, 13), // "matchedLength"
QT_MOC_LITERAL(6, 50, 9), // "textFound"
QT_MOC_LITERAL(7, 60, 2), // "id"
QT_MOC_LITERAL(8, 63, 13), // "textFoundAtId"
QT_MOC_LITERAL(9, 77, 8), // "findNext"
QT_MOC_LITERAL(10, 86, 14), // "optionsChanged"
QT_MOC_LITERAL(11, 101, 12) // "dialogClosed"

    },
    "KFind\0highlight\0\0text\0matchingIndex\0"
    "matchedLength\0textFound\0id\0textFoundAtId\0"
    "findNext\0optionsChanged\0dialogClosed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KFind[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   49,    2, 0x06 /* Public */,
       6,    3,   56,    2, 0x06 /* Public */,
       1,    3,   63,    2, 0x06 /* Public */,
       8,    3,   70,    2, 0x06 /* Public */,
       9,    0,   77,    2, 0x06 /* Public */,
      10,    0,   78,    2, 0x06 /* Public */,
      11,    0,   79,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::Int,    3,    4,    5,
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::Int,    3,    4,    5,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,    7,    4,    5,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,    7,    4,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void KFind::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<KFind *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->highlight((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 1: _t->textFound((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 2: _t->highlight((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 3: _t->textFoundAtId((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 4: _t->findNext(); break;
        case 5: _t->optionsChanged(); break;
        case 6: _t->dialogClosed(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (KFind::*)(const QString & , int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KFind::highlight)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (KFind::*)(const QString & , int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KFind::textFound)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (KFind::*)(int , int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KFind::highlight)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (KFind::*)(int , int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KFind::textFoundAtId)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (KFind::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KFind::findNext)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (KFind::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KFind::optionsChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (KFind::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KFind::dialogClosed)) {
                *result = 6;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject KFind::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_KFind.data,
    qt_meta_data_KFind,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KFind::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KFind::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KFind.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int KFind::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void KFind::highlight(const QString & _t1, int _t2, int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void KFind::textFound(const QString & _t1, int _t2, int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void KFind::highlight(int _t1, int _t2, int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void KFind::textFoundAtId(int _t1, int _t2, int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void KFind::findNext()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void KFind::optionsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void KFind::dialogClosed()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
