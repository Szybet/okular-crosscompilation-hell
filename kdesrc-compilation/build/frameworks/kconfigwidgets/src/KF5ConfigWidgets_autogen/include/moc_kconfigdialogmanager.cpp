/****************************************************************************
** Meta object code from reading C++ file 'kconfigdialogmanager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../frameworks/kconfigwidgets/src/kconfigdialogmanager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kconfigdialogmanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KConfigDialogManager_t {
    QByteArrayData data[12];
    char stringdata0[173];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KConfigDialogManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KConfigDialogManager_t qt_meta_stringdata_KConfigDialogManager = {
    {
QT_MOC_LITERAL(0, 0, 20), // "KConfigDialogManager"
QT_MOC_LITERAL(1, 21, 15), // "settingsChanged"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 8), // "QWidget*"
QT_MOC_LITERAL(4, 47, 6), // "widget"
QT_MOC_LITERAL(5, 54, 14), // "widgetModified"
QT_MOC_LITERAL(6, 69, 14), // "updateSettings"
QT_MOC_LITERAL(7, 84, 13), // "updateWidgets"
QT_MOC_LITERAL(8, 98, 20), // "updateWidgetsDefault"
QT_MOC_LITERAL(9, 119, 28), // "setDefaultsIndicatorsVisible"
QT_MOC_LITERAL(10, 148, 7), // "enabled"
QT_MOC_LITERAL(11, 156, 16) // "onWidgetModified"

    },
    "KConfigDialogManager\0settingsChanged\0"
    "\0QWidget*\0widget\0widgetModified\0"
    "updateSettings\0updateWidgets\0"
    "updateWidgetsDefault\0setDefaultsIndicatorsVisible\0"
    "enabled\0onWidgetModified"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KConfigDialogManager[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,
       1,    1,   55,    2, 0x06 /* Public */,
       5,    0,   58,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   59,    2, 0x0a /* Public */,
       7,    0,   60,    2, 0x0a /* Public */,
       8,    0,   61,    2, 0x0a /* Public */,
       9,    1,   62,    2, 0x0a /* Public */,
      11,    0,   65,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void,

       0        // eod
};

void KConfigDialogManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<KConfigDialogManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->settingsChanged(); break;
        case 1: _t->settingsChanged((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 2: _t->widgetModified(); break;
        case 3: _t->updateSettings(); break;
        case 4: _t->updateWidgets(); break;
        case 5: _t->updateWidgetsDefault(); break;
        case 6: _t->setDefaultsIndicatorsVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->d->onWidgetModified(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (KConfigDialogManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KConfigDialogManager::settingsChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (KConfigDialogManager::*)(QWidget * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KConfigDialogManager::settingsChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (KConfigDialogManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KConfigDialogManager::widgetModified)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject KConfigDialogManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_KConfigDialogManager.data,
    qt_meta_data_KConfigDialogManager,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KConfigDialogManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KConfigDialogManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KConfigDialogManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int KConfigDialogManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void KConfigDialogManager::settingsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void KConfigDialogManager::settingsChanged(QWidget * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void KConfigDialogManager::widgetModified()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
