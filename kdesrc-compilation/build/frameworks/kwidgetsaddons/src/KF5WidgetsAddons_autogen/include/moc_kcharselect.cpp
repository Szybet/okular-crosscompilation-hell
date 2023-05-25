/****************************************************************************
** Meta object code from reading C++ file 'kcharselect.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../frameworks/kwidgetsaddons/src/kcharselect.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kcharselect.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KCharSelect_t {
    QByteArrayData data[22];
    char stringdata0[315];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KCharSelect_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KCharSelect_t qt_meta_stringdata_KCharSelect = {
    {
QT_MOC_LITERAL(0, 0, 11), // "KCharSelect"
QT_MOC_LITERAL(1, 12, 18), // "currentFontChanged"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 4), // "font"
QT_MOC_LITERAL(4, 37, 18), // "currentCharChanged"
QT_MOC_LITERAL(5, 56, 1), // "c"
QT_MOC_LITERAL(6, 58, 23), // "currentCodePointChanged"
QT_MOC_LITERAL(7, 82, 9), // "codePoint"
QT_MOC_LITERAL(8, 92, 21), // "displayedCharsChanged"
QT_MOC_LITERAL(9, 114, 12), // "charSelected"
QT_MOC_LITERAL(10, 127, 17), // "codePointSelected"
QT_MOC_LITERAL(11, 145, 14), // "setCurrentChar"
QT_MOC_LITERAL(12, 160, 19), // "setCurrentCodePoint"
QT_MOC_LITERAL(13, 180, 14), // "setCurrentFont"
QT_MOC_LITERAL(14, 195, 11), // "currentFont"
QT_MOC_LITERAL(15, 207, 11), // "currentChar"
QT_MOC_LITERAL(16, 219, 16), // "currentCodePoint"
QT_MOC_LITERAL(17, 236, 14), // "displayedChars"
QT_MOC_LITERAL(18, 251, 12), // "QList<QChar>"
QT_MOC_LITERAL(19, 264, 19), // "displayedCodePoints"
QT_MOC_LITERAL(20, 284, 13), // "QVector<uint>"
QT_MOC_LITERAL(21, 298, 16) // "allPlanesEnabled"

    },
    "KCharSelect\0currentFontChanged\0\0font\0"
    "currentCharChanged\0c\0currentCodePointChanged\0"
    "codePoint\0displayedCharsChanged\0"
    "charSelected\0codePointSelected\0"
    "setCurrentChar\0setCurrentCodePoint\0"
    "setCurrentFont\0currentFont\0currentChar\0"
    "currentCodePoint\0displayedChars\0"
    "QList<QChar>\0displayedCodePoints\0"
    "QVector<uint>\0allPlanesEnabled"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KCharSelect[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       6,   84, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,
       4,    1,   62,    2, 0x06 /* Public */,
       6,    1,   65,    2, 0x06 /* Public */,
       8,    0,   68,    2, 0x06 /* Public */,
       9,    1,   69,    2, 0x06 /* Public */,
      10,    1,   72,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    1,   75,    2, 0x0a /* Public */,
      12,    1,   78,    2, 0x0a /* Public */,
      13,    1,   81,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QFont,    3,
    QMetaType::Void, QMetaType::QChar,    5,
    QMetaType::Void, QMetaType::UInt,    7,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QChar,    5,
    QMetaType::Void, QMetaType::UInt,    7,

 // slots: parameters
    QMetaType::Void, QMetaType::QChar,    5,
    QMetaType::Void, QMetaType::UInt,    7,
    QMetaType::Void, QMetaType::QFont,    3,

 // properties: name, type, flags
      14, QMetaType::QFont, 0x00095103,
      15, QMetaType::QChar, 0x00095103,
      16, QMetaType::UInt, 0x00495103,
      17, 0x80000000 | 18, 0x00095009,
      19, 0x80000000 | 20, 0x00095009,
      21, QMetaType::Bool, 0x00095103,

 // properties: notify_signal_id
       0,
       0,
       2,
       0,
       0,
       0,

       0        // eod
};

void KCharSelect::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<KCharSelect *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->currentFontChanged((*reinterpret_cast< const QFont(*)>(_a[1]))); break;
        case 1: _t->currentCharChanged((*reinterpret_cast< const QChar(*)>(_a[1]))); break;
        case 2: _t->currentCodePointChanged((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 3: _t->displayedCharsChanged(); break;
        case 4: _t->charSelected((*reinterpret_cast< const QChar(*)>(_a[1]))); break;
        case 5: _t->codePointSelected((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 6: _t->setCurrentChar((*reinterpret_cast< const QChar(*)>(_a[1]))); break;
        case 7: _t->setCurrentCodePoint((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 8: _t->setCurrentFont((*reinterpret_cast< const QFont(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (KCharSelect::*)(const QFont & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KCharSelect::currentFontChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (KCharSelect::*)(const QChar & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KCharSelect::currentCharChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (KCharSelect::*)(uint );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KCharSelect::currentCodePointChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (KCharSelect::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KCharSelect::displayedCharsChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (KCharSelect::*)(const QChar & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KCharSelect::charSelected)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (KCharSelect::*)(uint );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KCharSelect::codePointSelected)) {
                *result = 5;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QChar> >(); break;
        case 4:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<uint> >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<KCharSelect *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QFont*>(_v) = _t->currentFont(); break;
        case 1: *reinterpret_cast< QChar*>(_v) = _t->currentChar(); break;
        case 2: *reinterpret_cast< uint*>(_v) = _t->currentCodePoint(); break;
        case 3: *reinterpret_cast< QList<QChar>*>(_v) = _t->displayedChars(); break;
        case 4: *reinterpret_cast< QVector<uint>*>(_v) = _t->displayedCodePoints(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->allPlanesEnabled(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<KCharSelect *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setCurrentFont(*reinterpret_cast< QFont*>(_v)); break;
        case 1: _t->setCurrentChar(*reinterpret_cast< QChar*>(_v)); break;
        case 2: _t->setCurrentCodePoint(*reinterpret_cast< uint*>(_v)); break;
        case 5: _t->setAllPlanesEnabled(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject KCharSelect::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_KCharSelect.data,
    qt_meta_data_KCharSelect,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KCharSelect::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KCharSelect::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KCharSelect.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int KCharSelect::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 6;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void KCharSelect::currentFontChanged(const QFont & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void KCharSelect::currentCharChanged(const QChar & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void KCharSelect::currentCodePointChanged(uint _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void KCharSelect::displayedCharsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void KCharSelect::charSelected(const QChar & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void KCharSelect::codePointSelected(uint _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
