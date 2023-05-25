/****************************************************************************
** Meta object code from reading C++ file 'kcombobox.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../frameworks/kcompletion/src/kcombobox.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kcombobox.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KComboBox_t {
    QByteArrayData data[27];
    char stringdata0[360];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KComboBox_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KComboBox_t qt_meta_stringdata_KComboBox = {
    {
QT_MOC_LITERAL(0, 0, 9), // "KComboBox"
QT_MOC_LITERAL(1, 10, 13), // "returnPressed"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 4), // "text"
QT_MOC_LITERAL(4, 30, 10), // "completion"
QT_MOC_LITERAL(5, 41, 19), // "substringCompletion"
QT_MOC_LITERAL(6, 61, 12), // "textRotation"
QT_MOC_LITERAL(7, 74, 31), // "KCompletionBase::KeyBindingType"
QT_MOC_LITERAL(8, 106, 21), // "completionModeChanged"
QT_MOC_LITERAL(9, 128, 27), // "KCompletion::CompletionMode"
QT_MOC_LITERAL(10, 156, 22), // "aboutToShowContextMenu"
QT_MOC_LITERAL(11, 179, 6), // "QMenu*"
QT_MOC_LITERAL(12, 186, 11), // "contextMenu"
QT_MOC_LITERAL(13, 198, 10), // "rotateText"
QT_MOC_LITERAL(14, 209, 4), // "type"
QT_MOC_LITERAL(15, 214, 16), // "setCompletedText"
QT_MOC_LITERAL(16, 231, 17), // "setCompletedItems"
QT_MOC_LITERAL(17, 249, 5), // "items"
QT_MOC_LITERAL(18, 255, 11), // "autoSuggest"
QT_MOC_LITERAL(19, 267, 14), // "setCurrentItem"
QT_MOC_LITERAL(20, 282, 4), // "item"
QT_MOC_LITERAL(21, 287, 6), // "insert"
QT_MOC_LITERAL(22, 294, 5), // "index"
QT_MOC_LITERAL(23, 300, 14), // "makeCompletion"
QT_MOC_LITERAL(24, 315, 14), // "autoCompletion"
QT_MOC_LITERAL(25, 330, 15), // "urlDropsEnabled"
QT_MOC_LITERAL(26, 346, 13) // "trapReturnKey"

    },
    "KComboBox\0returnPressed\0\0text\0completion\0"
    "substringCompletion\0textRotation\0"
    "KCompletionBase::KeyBindingType\0"
    "completionModeChanged\0KCompletion::CompletionMode\0"
    "aboutToShowContextMenu\0QMenu*\0contextMenu\0"
    "rotateText\0type\0setCompletedText\0"
    "setCompletedItems\0items\0autoSuggest\0"
    "setCurrentItem\0item\0insert\0index\0"
    "makeCompletion\0autoCompletion\0"
    "urlDropsEnabled\0trapReturnKey"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KComboBox[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       3,  140, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   89,    2, 0x06 /* Public */,
       1,    1,   90,    2, 0x06 /* Public */,
       4,    1,   93,    2, 0x06 /* Public */,
       5,    1,   96,    2, 0x06 /* Public */,
       6,    1,   99,    2, 0x06 /* Public */,
       8,    1,  102,    2, 0x06 /* Public */,
      10,    1,  105,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      13,    1,  108,    2, 0x0a /* Public */,
      15,    1,  111,    2, 0x0a /* Public */,
      16,    2,  114,    2, 0x0a /* Public */,
      16,    1,  119,    2, 0x2a /* Public | MethodCloned */,
      19,    3,  122,    2, 0x0a /* Public */,
      19,    2,  129,    2, 0x2a /* Public | MethodCloned */,
      19,    1,  134,    2, 0x2a /* Public | MethodCloned */,
      23,    1,  137,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, 0x80000000 | 7,    2,
    QMetaType::Void, 0x80000000 | 9,    2,
    QMetaType::Void, 0x80000000 | 11,   12,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 7,   14,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QStringList, QMetaType::Bool,   17,   18,
    QMetaType::Void, QMetaType::QStringList,   17,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool, QMetaType::Int,   20,   21,   22,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,   20,   21,
    QMetaType::Void, QMetaType::QString,   20,
    QMetaType::Void, QMetaType::QString,    2,

 // properties: name, type, flags
      24, QMetaType::Bool, 0x00095103,
      25, QMetaType::Bool, 0x00095103,
      26, QMetaType::Bool, 0x00095103,

       0        // eod
};

void KComboBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<KComboBox *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->returnPressed(); break;
        case 1: _t->returnPressed((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->completion((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->substringCompletion((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->textRotation((*reinterpret_cast< KCompletionBase::KeyBindingType(*)>(_a[1]))); break;
        case 5: _t->completionModeChanged((*reinterpret_cast< KCompletion::CompletionMode(*)>(_a[1]))); break;
        case 6: _t->aboutToShowContextMenu((*reinterpret_cast< QMenu*(*)>(_a[1]))); break;
        case 7: _t->rotateText((*reinterpret_cast< KCompletionBase::KeyBindingType(*)>(_a[1]))); break;
        case 8: _t->setCompletedText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->setCompletedItems((*reinterpret_cast< const QStringList(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 10: _t->setCompletedItems((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 11: _t->setCurrentItem((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 12: _t->setCurrentItem((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 13: _t->setCurrentItem((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 14: _t->makeCompletion((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (KComboBox::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KComboBox::returnPressed)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (KComboBox::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KComboBox::returnPressed)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (KComboBox::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KComboBox::completion)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (KComboBox::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KComboBox::substringCompletion)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (KComboBox::*)(KCompletionBase::KeyBindingType );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KComboBox::textRotation)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (KComboBox::*)(KCompletion::CompletionMode );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KComboBox::completionModeChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (KComboBox::*)(QMenu * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KComboBox::aboutToShowContextMenu)) {
                *result = 6;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<KComboBox *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->autoCompletion(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->urlDropsEnabled(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->trapReturnKey(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<KComboBox *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setAutoCompletion(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setUrlDropsEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setTrapReturnKey(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject KComboBox::staticMetaObject = { {
    QMetaObject::SuperData::link<QComboBox::staticMetaObject>(),
    qt_meta_stringdata_KComboBox.data,
    qt_meta_data_KComboBox,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KComboBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KComboBox::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KComboBox.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "KCompletionBase"))
        return static_cast< KCompletionBase*>(this);
    return QComboBox::qt_metacast(_clname);
}

int KComboBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QComboBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void KComboBox::returnPressed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void KComboBox::returnPressed(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void KComboBox::completion(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void KComboBox::substringCompletion(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void KComboBox::textRotation(KCompletionBase::KeyBindingType _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void KComboBox::completionModeChanged(KCompletion::CompletionMode _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void KComboBox::aboutToShowContextMenu(QMenu * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
