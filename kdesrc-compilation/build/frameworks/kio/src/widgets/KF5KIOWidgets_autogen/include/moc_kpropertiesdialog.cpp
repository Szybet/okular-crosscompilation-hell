/****************************************************************************
** Meta object code from reading C++ file 'kpropertiesdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../frameworks/kio/src/widgets/kpropertiesdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kpropertiesdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KPropertiesDialog_t {
    QByteArrayData data[14];
    char stringdata0[126];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KPropertiesDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KPropertiesDialog_t qt_meta_stringdata_KPropertiesDialog = {
    {
QT_MOC_LITERAL(0, 0, 17), // "KPropertiesDialog"
QT_MOC_LITERAL(1, 18, 16), // "propertiesClosed"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 7), // "applied"
QT_MOC_LITERAL(4, 44, 8), // "canceled"
QT_MOC_LITERAL(5, 53, 6), // "saveAs"
QT_MOC_LITERAL(6, 60, 6), // "oldUrl"
QT_MOC_LITERAL(7, 67, 5), // "QUrl&"
QT_MOC_LITERAL(8, 73, 6), // "newUrl"
QT_MOC_LITERAL(9, 80, 13), // "leaveModality"
QT_MOC_LITERAL(10, 94, 6), // "slotOk"
QT_MOC_LITERAL(11, 101, 10), // "slotCancel"
QT_MOC_LITERAL(12, 112, 6), // "accept"
QT_MOC_LITERAL(13, 119, 6) // "reject"

    },
    "KPropertiesDialog\0propertiesClosed\0\0"
    "applied\0canceled\0saveAs\0oldUrl\0QUrl&\0"
    "newUrl\0leaveModality\0slotOk\0slotCancel\0"
    "accept\0reject"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KPropertiesDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x06 /* Public */,
       3,    0,   60,    2, 0x06 /* Public */,
       4,    0,   61,    2, 0x06 /* Public */,
       5,    2,   62,    2, 0x06 /* Public */,
       9,    0,   67,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    0,   68,    2, 0x0a /* Public */,
      11,    0,   69,    2, 0x0a /* Public */,
      12,    0,   70,    2, 0x0a /* Public */,
      13,    0,   71,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QUrl, 0x80000000 | 7,    6,    8,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void KPropertiesDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<KPropertiesDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->propertiesClosed(); break;
        case 1: _t->applied(); break;
        case 2: _t->canceled(); break;
        case 3: _t->saveAs((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< QUrl(*)>(_a[2]))); break;
        case 4: _t->leaveModality(); break;
        case 5: _t->slotOk(); break;
        case 6: _t->slotCancel(); break;
        case 7: _t->accept(); break;
        case 8: _t->reject(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (KPropertiesDialog::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KPropertiesDialog::propertiesClosed)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (KPropertiesDialog::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KPropertiesDialog::applied)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (KPropertiesDialog::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KPropertiesDialog::canceled)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (KPropertiesDialog::*)(const QUrl & , QUrl & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KPropertiesDialog::saveAs)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (KPropertiesDialog::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KPropertiesDialog::leaveModality)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject KPropertiesDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<KPageDialog::staticMetaObject>(),
    qt_meta_stringdata_KPropertiesDialog.data,
    qt_meta_data_KPropertiesDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KPropertiesDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KPropertiesDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KPropertiesDialog.stringdata0))
        return static_cast<void*>(this);
    return KPageDialog::qt_metacast(_clname);
}

int KPropertiesDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KPageDialog::qt_metacall(_c, _id, _a);
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
    return _id;
}

// SIGNAL 0
void KPropertiesDialog::propertiesClosed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void KPropertiesDialog::applied()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void KPropertiesDialog::canceled()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void KPropertiesDialog::saveAs(const QUrl & _t1, QUrl & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void KPropertiesDialog::leaveModality()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
struct qt_meta_stringdata_KPropertiesDialogPlugin_t {
    QByteArrayData data[4];
    char stringdata0[42];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KPropertiesDialogPlugin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KPropertiesDialogPlugin_t qt_meta_stringdata_KPropertiesDialogPlugin = {
    {
QT_MOC_LITERAL(0, 0, 23), // "KPropertiesDialogPlugin"
QT_MOC_LITERAL(1, 24, 7), // "changed"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 8) // "setDirty"

    },
    "KPropertiesDialogPlugin\0changed\0\0"
    "setDirty"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KPropertiesDialogPlugin[] = {

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
       1,    0,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   25,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void KPropertiesDialogPlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<KPropertiesDialogPlugin *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->changed(); break;
        case 1: _t->setDirty(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (KPropertiesDialogPlugin::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KPropertiesDialogPlugin::changed)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject KPropertiesDialogPlugin::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_KPropertiesDialogPlugin.data,
    qt_meta_data_KPropertiesDialogPlugin,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KPropertiesDialogPlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KPropertiesDialogPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KPropertiesDialogPlugin.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int KPropertiesDialogPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void KPropertiesDialogPlugin::changed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
