/****************************************************************************
** Meta object code from reading C++ file 'kglobalshortcutinfo.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../frameworks/kglobalaccel/src/kglobalshortcutinfo.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kglobalshortcutinfo.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KGlobalShortcutInfo_t {
    QByteArrayData data[12];
    char stringdata0[212];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KGlobalShortcutInfo_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KGlobalShortcutInfo_t qt_meta_stringdata_KGlobalShortcutInfo = {
    {
QT_MOC_LITERAL(0, 0, 19), // "KGlobalShortcutInfo"
QT_MOC_LITERAL(1, 20, 15), // "D-Bus Interface"
QT_MOC_LITERAL(2, 36, 34), // "org.kde.kglobalaccel.KShortcu..."
QT_MOC_LITERAL(3, 71, 10), // "uniqueName"
QT_MOC_LITERAL(4, 82, 12), // "friendlyName"
QT_MOC_LITERAL(5, 95, 19), // "componentUniqueName"
QT_MOC_LITERAL(6, 115, 21), // "componentFriendlyName"
QT_MOC_LITERAL(7, 137, 17), // "contextUniqueName"
QT_MOC_LITERAL(8, 155, 19), // "contextFriendlyName"
QT_MOC_LITERAL(9, 175, 4), // "keys"
QT_MOC_LITERAL(10, 180, 19), // "QList<QKeySequence>"
QT_MOC_LITERAL(11, 200, 11) // "defaultKeys"

    },
    "KGlobalShortcutInfo\0D-Bus Interface\0"
    "org.kde.kglobalaccel.KShortcutInfo\0"
    "uniqueName\0friendlyName\0componentUniqueName\0"
    "componentFriendlyName\0contextUniqueName\0"
    "contextFriendlyName\0keys\0QList<QKeySequence>\0"
    "defaultKeys"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KGlobalShortcutInfo[] = {

 // content:
       8,       // revision
       0,       // classname
       1,   14, // classinfo
       0,    0, // methods
       8,   16, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // classinfo: key, value
       1,    2,

 // properties: name, type, flags
       3, QMetaType::QString, 0x00095001,
       4, QMetaType::QString, 0x00095001,
       5, QMetaType::QString, 0x00095001,
       6, QMetaType::QString, 0x00095001,
       7, QMetaType::QString, 0x00095001,
       8, QMetaType::QString, 0x00095001,
       9, 0x80000000 | 10, 0x00095009,
      11, 0x80000000 | 10, 0x00095009,

       0        // eod
};

void KGlobalShortcutInfo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 7:
        case 6:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QKeySequence> >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<KGlobalShortcutInfo *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->uniqueName(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->friendlyName(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->componentUniqueName(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->componentFriendlyName(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->contextUniqueName(); break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->contextFriendlyName(); break;
        case 6: *reinterpret_cast< QList<QKeySequence>*>(_v) = _t->keys(); break;
        case 7: *reinterpret_cast< QList<QKeySequence>*>(_v) = _t->keys(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
}

QT_INIT_METAOBJECT const QMetaObject KGlobalShortcutInfo::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_KGlobalShortcutInfo.data,
    qt_meta_data_KGlobalShortcutInfo,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KGlobalShortcutInfo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KGlobalShortcutInfo::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KGlobalShortcutInfo.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int KGlobalShortcutInfo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 8;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
