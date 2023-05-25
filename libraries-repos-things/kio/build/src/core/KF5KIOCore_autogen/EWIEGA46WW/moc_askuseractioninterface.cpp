/****************************************************************************
** Meta object code from reading C++ file 'askuseractioninterface.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../src/core/askuseractioninterface.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'askuseractioninterface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KIO__AskUserActionInterface_t {
    QByteArrayData data[19];
    char stringdata0[282];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KIO__AskUserActionInterface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KIO__AskUserActionInterface_t qt_meta_stringdata_KIO__AskUserActionInterface = {
    {
QT_MOC_LITERAL(0, 0, 27), // "KIO::AskUserActionInterface"
QT_MOC_LITERAL(1, 28, 19), // "askUserRenameResult"
QT_MOC_LITERAL(2, 48, 0), // ""
QT_MOC_LITERAL(3, 49, 24), // "KIO::RenameDialog_Result"
QT_MOC_LITERAL(4, 74, 6), // "result"
QT_MOC_LITERAL(5, 81, 6), // "newUrl"
QT_MOC_LITERAL(6, 88, 5), // "KJob*"
QT_MOC_LITERAL(7, 94, 9), // "parentJob"
QT_MOC_LITERAL(8, 104, 17), // "askUserSkipResult"
QT_MOC_LITERAL(9, 122, 22), // "KIO::SkipDialog_Result"
QT_MOC_LITERAL(10, 145, 19), // "askUserDeleteResult"
QT_MOC_LITERAL(11, 165, 11), // "allowDelete"
QT_MOC_LITERAL(12, 177, 11), // "QList<QUrl>"
QT_MOC_LITERAL(13, 189, 4), // "urls"
QT_MOC_LITERAL(14, 194, 41), // "KIO::AskUserActionInterface::..."
QT_MOC_LITERAL(15, 236, 12), // "deletionType"
QT_MOC_LITERAL(16, 249, 8), // "QWidget*"
QT_MOC_LITERAL(17, 258, 6), // "parent"
QT_MOC_LITERAL(18, 265, 16) // "messageBoxResult"

    },
    "KIO::AskUserActionInterface\0"
    "askUserRenameResult\0\0KIO::RenameDialog_Result\0"
    "result\0newUrl\0KJob*\0parentJob\0"
    "askUserSkipResult\0KIO::SkipDialog_Result\0"
    "askUserDeleteResult\0allowDelete\0"
    "QList<QUrl>\0urls\0"
    "KIO::AskUserActionInterface::DeletionType\0"
    "deletionType\0QWidget*\0parent\0"
    "messageBoxResult"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KIO__AskUserActionInterface[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   34,    2, 0x06 /* Public */,
       8,    2,   41,    2, 0x06 /* Public */,
      10,    4,   46,    2, 0x06 /* Public */,
      18,    1,   55,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QUrl, 0x80000000 | 6,    4,    5,    7,
    QMetaType::Void, 0x80000000 | 9, 0x80000000 | 6,    4,    7,
    QMetaType::Void, QMetaType::Bool, 0x80000000 | 12, 0x80000000 | 14, 0x80000000 | 16,   11,   13,   15,   17,
    QMetaType::Void, QMetaType::Int,    4,

       0        // eod
};

void KIO::AskUserActionInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AskUserActionInterface *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->askUserRenameResult((*reinterpret_cast< KIO::RenameDialog_Result(*)>(_a[1])),(*reinterpret_cast< const QUrl(*)>(_a[2])),(*reinterpret_cast< KJob*(*)>(_a[3]))); break;
        case 1: _t->askUserSkipResult((*reinterpret_cast< KIO::SkipDialog_Result(*)>(_a[1])),(*reinterpret_cast< KJob*(*)>(_a[2]))); break;
        case 2: _t->askUserDeleteResult((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< const QList<QUrl>(*)>(_a[2])),(*reinterpret_cast< KIO::AskUserActionInterface::DeletionType(*)>(_a[3])),(*reinterpret_cast< QWidget*(*)>(_a[4]))); break;
        case 3: _t->messageBoxResult((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KJob* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KJob* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QUrl> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AskUserActionInterface::*)(KIO::RenameDialog_Result , const QUrl & , KJob * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AskUserActionInterface::askUserRenameResult)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (AskUserActionInterface::*)(KIO::SkipDialog_Result , KJob * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AskUserActionInterface::askUserSkipResult)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (AskUserActionInterface::*)(bool , const QList<QUrl> & , KIO::AskUserActionInterface::DeletionType , QWidget * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AskUserActionInterface::askUserDeleteResult)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (AskUserActionInterface::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AskUserActionInterface::messageBoxResult)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject KIO::AskUserActionInterface::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_KIO__AskUserActionInterface.data,
    qt_meta_data_KIO__AskUserActionInterface,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KIO::AskUserActionInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KIO::AskUserActionInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KIO__AskUserActionInterface.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int KIO::AskUserActionInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void KIO::AskUserActionInterface::askUserRenameResult(KIO::RenameDialog_Result _t1, const QUrl & _t2, KJob * _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void KIO::AskUserActionInterface::askUserSkipResult(KIO::SkipDialog_Result _t1, KJob * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void KIO::AskUserActionInterface::askUserDeleteResult(bool _t1, const QList<QUrl> & _t2, KIO::AskUserActionInterface::DeletionType _t3, QWidget * _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void KIO::AskUserActionInterface::messageBoxResult(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
