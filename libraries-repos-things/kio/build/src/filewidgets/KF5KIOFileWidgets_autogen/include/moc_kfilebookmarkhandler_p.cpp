/****************************************************************************
** Meta object code from reading C++ file 'kfilebookmarkhandler_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../src/filewidgets/kfilebookmarkhandler_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kfilebookmarkhandler_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KFileBookmarkHandler_t {
    QByteArrayData data[11];
    char stringdata0[117];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KFileBookmarkHandler_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KFileBookmarkHandler_t qt_meta_stringdata_KFileBookmarkHandler = {
    {
QT_MOC_LITERAL(0, 0, 20), // "KFileBookmarkHandler"
QT_MOC_LITERAL(1, 21, 7), // "openUrl"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 3), // "url"
QT_MOC_LITERAL(4, 34, 12), // "openBookmark"
QT_MOC_LITERAL(5, 47, 9), // "KBookmark"
QT_MOC_LITERAL(6, 57, 2), // "bm"
QT_MOC_LITERAL(7, 60, 16), // "Qt::MouseButtons"
QT_MOC_LITERAL(8, 77, 7), // "buttons"
QT_MOC_LITERAL(9, 85, 21), // "Qt::KeyboardModifiers"
QT_MOC_LITERAL(10, 107, 9) // "modifiers"

    },
    "KFileBookmarkHandler\0openUrl\0\0url\0"
    "openBookmark\0KBookmark\0bm\0Qt::MouseButtons\0"
    "buttons\0Qt::KeyboardModifiers\0modifiers"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KFileBookmarkHandler[] = {

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
       1,    1,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    3,   27,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5, 0x80000000 | 7, 0x80000000 | 9,    6,    8,   10,

       0        // eod
};

void KFileBookmarkHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<KFileBookmarkHandler *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->openUrl((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->openBookmark((*reinterpret_cast< const KBookmark(*)>(_a[1])),(*reinterpret_cast< Qt::MouseButtons(*)>(_a[2])),(*reinterpret_cast< Qt::KeyboardModifiers(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KBookmark >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (KFileBookmarkHandler::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KFileBookmarkHandler::openUrl)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject KFileBookmarkHandler::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_KFileBookmarkHandler.data,
    qt_meta_data_KFileBookmarkHandler,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KFileBookmarkHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KFileBookmarkHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KFileBookmarkHandler.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "KBookmarkOwner"))
        return static_cast< KBookmarkOwner*>(this);
    return QObject::qt_metacast(_clname);
}

int KFileBookmarkHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void KFileBookmarkHandler::openUrl(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
