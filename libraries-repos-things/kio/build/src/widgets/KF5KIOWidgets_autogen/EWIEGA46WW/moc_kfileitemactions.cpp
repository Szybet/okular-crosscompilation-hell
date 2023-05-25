/****************************************************************************
** Meta object code from reading C++ file 'kfileitemactions.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../src/widgets/kfileitemactions.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kfileitemactions.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KFileItemActions_t {
    QByteArrayData data[9];
    char stringdata0[135];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KFileItemActions_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KFileItemActions_t qt_meta_stringdata_KFileItemActions = {
    {
QT_MOC_LITERAL(0, 0, 16), // "KFileItemActions"
QT_MOC_LITERAL(1, 17, 28), // "openWithDialogAboutToBeShown"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 5), // "error"
QT_MOC_LITERAL(4, 53, 12), // "errorMessage"
QT_MOC_LITERAL(5, 66, 24), // "runPreferredApplications"
QT_MOC_LITERAL(6, 91, 13), // "KFileItemList"
QT_MOC_LITERAL(7, 105, 12), // "fileOpenList"
QT_MOC_LITERAL(8, 118, 16) // "traderConstraint"

    },
    "KFileItemActions\0openWithDialogAboutToBeShown\0"
    "\0error\0errorMessage\0runPreferredApplications\0"
    "KFileItemList\0fileOpenList\0traderConstraint"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KFileItemActions[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,
       3,    1,   35,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    2,   38,    2, 0x0a /* Public */,
       5,    1,   43,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6, QMetaType::QString,    7,    8,
    QMetaType::Void, 0x80000000 | 6,    7,

       0        // eod
};

void KFileItemActions::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<KFileItemActions *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->openWithDialogAboutToBeShown(); break;
        case 1: _t->error((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->runPreferredApplications((*reinterpret_cast< const KFileItemList(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 3: _t->runPreferredApplications((*reinterpret_cast< const KFileItemList(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (KFileItemActions::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KFileItemActions::openWithDialogAboutToBeShown)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (KFileItemActions::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KFileItemActions::error)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject KFileItemActions::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_KFileItemActions.data,
    qt_meta_data_KFileItemActions,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KFileItemActions::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KFileItemActions::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KFileItemActions.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int KFileItemActions::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void KFileItemActions::openWithDialogAboutToBeShown()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void KFileItemActions::error(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
