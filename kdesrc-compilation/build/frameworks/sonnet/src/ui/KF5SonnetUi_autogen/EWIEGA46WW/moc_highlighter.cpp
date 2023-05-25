/****************************************************************************
** Meta object code from reading C++ file 'highlighter.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../frameworks/sonnet/src/ui/highlighter.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'highlighter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Sonnet__Highlighter_t {
    QByteArrayData data[12];
    char stringdata0[142];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Sonnet__Highlighter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Sonnet__Highlighter_t qt_meta_stringdata_Sonnet__Highlighter = {
    {
QT_MOC_LITERAL(0, 0, 19), // "Sonnet::Highlighter"
QT_MOC_LITERAL(1, 20, 13), // "activeChanged"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 11), // "description"
QT_MOC_LITERAL(4, 47, 18), // "setCurrentLanguage"
QT_MOC_LITERAL(5, 66, 8), // "language"
QT_MOC_LITERAL(6, 75, 17), // "slotAutoDetection"
QT_MOC_LITERAL(7, 93, 15), // "slotRehighlight"
QT_MOC_LITERAL(8, 109, 14), // "contentsChange"
QT_MOC_LITERAL(9, 124, 3), // "pos"
QT_MOC_LITERAL(10, 128, 5), // "added"
QT_MOC_LITERAL(11, 134, 7) // "removed"

    },
    "Sonnet::Highlighter\0activeChanged\0\0"
    "description\0setCurrentLanguage\0language\0"
    "slotAutoDetection\0slotRehighlight\0"
    "contentsChange\0pos\0added\0removed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Sonnet__Highlighter[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   42,    2, 0x0a /* Public */,
       6,    0,   45,    2, 0x0a /* Public */,
       7,    0,   46,    2, 0x0a /* Public */,
       8,    3,   47,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,    9,   10,   11,

       0        // eod
};

void Sonnet::Highlighter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Highlighter *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->activeChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->setCurrentLanguage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->slotAutoDetection(); break;
        case 3: _t->slotRehighlight(); break;
        case 4: _t->contentsChange((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Highlighter::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Highlighter::activeChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Sonnet::Highlighter::staticMetaObject = { {
    QMetaObject::SuperData::link<QSyntaxHighlighter::staticMetaObject>(),
    qt_meta_stringdata_Sonnet__Highlighter.data,
    qt_meta_data_Sonnet__Highlighter,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Sonnet::Highlighter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Sonnet::Highlighter::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Sonnet__Highlighter.stringdata0))
        return static_cast<void*>(this);
    return QSyntaxHighlighter::qt_metacast(_clname);
}

int Sonnet::Highlighter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSyntaxHighlighter::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void Sonnet::Highlighter::activeChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
