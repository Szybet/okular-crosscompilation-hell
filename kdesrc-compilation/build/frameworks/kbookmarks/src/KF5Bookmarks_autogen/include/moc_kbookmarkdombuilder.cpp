/****************************************************************************
** Meta object code from reading C++ file 'kbookmarkdombuilder.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../frameworks/kbookmarks/src/kbookmarkdombuilder.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kbookmarkdombuilder.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KBookmarkDomBuilder_t {
    QByteArrayData data[10];
    char stringdata0[95];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KBookmarkDomBuilder_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KBookmarkDomBuilder_t qt_meta_stringdata_KBookmarkDomBuilder = {
    {
QT_MOC_LITERAL(0, 0, 19), // "KBookmarkDomBuilder"
QT_MOC_LITERAL(1, 20, 11), // "newBookmark"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 4), // "text"
QT_MOC_LITERAL(4, 38, 3), // "url"
QT_MOC_LITERAL(5, 42, 14), // "additionalInfo"
QT_MOC_LITERAL(6, 57, 9), // "newFolder"
QT_MOC_LITERAL(7, 67, 4), // "open"
QT_MOC_LITERAL(8, 72, 12), // "newSeparator"
QT_MOC_LITERAL(9, 85, 9) // "endFolder"

    },
    "KBookmarkDomBuilder\0newBookmark\0\0text\0"
    "url\0additionalInfo\0newFolder\0open\0"
    "newSeparator\0endFolder"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KBookmarkDomBuilder[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    3,   34,    2, 0x09 /* Protected */,
       6,    3,   41,    2, 0x09 /* Protected */,
       8,    0,   48,    2, 0x09 /* Protected */,
       9,    0,   49,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,    3,    4,    5,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool, QMetaType::QString,    3,    7,    5,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void KBookmarkDomBuilder::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<KBookmarkDomBuilder *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->newBookmark((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 1: _t->newFolder((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 2: _t->newSeparator(); break;
        case 3: _t->endFolder(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject KBookmarkDomBuilder::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_KBookmarkDomBuilder.data,
    qt_meta_data_KBookmarkDomBuilder,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KBookmarkDomBuilder::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KBookmarkDomBuilder::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KBookmarkDomBuilder.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int KBookmarkDomBuilder::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
