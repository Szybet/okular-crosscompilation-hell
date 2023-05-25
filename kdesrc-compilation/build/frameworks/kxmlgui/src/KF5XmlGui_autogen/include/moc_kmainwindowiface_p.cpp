/****************************************************************************
** Meta object code from reading C++ file 'kmainwindowiface_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../frameworks/kxmlgui/src/kmainwindowiface_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kmainwindowiface_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KMainWindowInterface_t {
    QByteArrayData data[13];
    char stringdata0[173];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KMainWindowInterface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KMainWindowInterface_t qt_meta_stringdata_KMainWindowInterface = {
    {
QT_MOC_LITERAL(0, 0, 20), // "KMainWindowInterface"
QT_MOC_LITERAL(1, 21, 15), // "D-Bus Interface"
QT_MOC_LITERAL(2, 37, 19), // "org.kde.KMainWindow"
QT_MOC_LITERAL(3, 57, 7), // "actions"
QT_MOC_LITERAL(4, 65, 0), // ""
QT_MOC_LITERAL(5, 66, 14), // "activateAction"
QT_MOC_LITERAL(6, 81, 6), // "action"
QT_MOC_LITERAL(7, 88, 13), // "disableAction"
QT_MOC_LITERAL(8, 102, 12), // "enableAction"
QT_MOC_LITERAL(9, 115, 15), // "actionIsEnabled"
QT_MOC_LITERAL(10, 131, 13), // "actionToolTip"
QT_MOC_LITERAL(11, 145, 5), // "winId"
QT_MOC_LITERAL(12, 151, 21) // "grabWindowToClipBoard"

    },
    "KMainWindowInterface\0D-Bus Interface\0"
    "org.kde.KMainWindow\0actions\0\0"
    "activateAction\0action\0disableAction\0"
    "enableAction\0actionIsEnabled\0actionToolTip\0"
    "winId\0grabWindowToClipBoard"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KMainWindowInterface[] = {

 // content:
       8,       // revision
       0,       // classname
       1,   14, // classinfo
       8,   16, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // classinfo: key, value
       1,    2,

 // slots: name, argc, parameters, tag, flags
       3,    0,   56,    4, 0x0a /* Public */,
       5,    1,   57,    4, 0x0a /* Public */,
       7,    1,   60,    4, 0x0a /* Public */,
       8,    1,   63,    4, 0x0a /* Public */,
       9,    1,   66,    4, 0x0a /* Public */,
      10,    1,   69,    4, 0x0a /* Public */,
      11,    0,   72,    4, 0x0a /* Public */,
      12,    0,   73,    4, 0x0a /* Public */,

 // slots: parameters
    QMetaType::QStringList,
    QMetaType::Bool, QMetaType::QString,    6,
    QMetaType::Bool, QMetaType::QString,    6,
    QMetaType::Bool, QMetaType::QString,    6,
    QMetaType::Bool, QMetaType::QString,    6,
    QMetaType::QString, QMetaType::QString,    6,
    QMetaType::LongLong,
    QMetaType::Void,

       0        // eod
};

void KMainWindowInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<KMainWindowInterface *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { QStringList _r = _t->actions();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        case 1: { bool _r = _t->activateAction((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 2: { bool _r = _t->disableAction((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 3: { bool _r = _t->enableAction((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 4: { bool _r = _t->actionIsEnabled((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 5: { QString _r = _t->actionToolTip((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 6: { qlonglong _r = _t->winId();
            if (_a[0]) *reinterpret_cast< qlonglong*>(_a[0]) = std::move(_r); }  break;
        case 7: _t->grabWindowToClipBoard(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject KMainWindowInterface::staticMetaObject = { {
    QMetaObject::SuperData::link<QDBusAbstractAdaptor::staticMetaObject>(),
    qt_meta_stringdata_KMainWindowInterface.data,
    qt_meta_data_KMainWindowInterface,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KMainWindowInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KMainWindowInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KMainWindowInterface.stringdata0))
        return static_cast<void*>(this);
    return QDBusAbstractAdaptor::qt_metacast(_clname);
}

int KMainWindowInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDBusAbstractAdaptor::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
