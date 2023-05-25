/****************************************************************************
** Meta object code from reading C++ file 'kconfigdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../frameworks/kconfigwidgets/src/kconfigdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kconfigdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KConfigDialog_t {
    QByteArrayData data[17];
    char stringdata0[209];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KConfigDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KConfigDialog_t qt_meta_stringdata_KConfigDialog = {
    {
QT_MOC_LITERAL(0, 0, 13), // "KConfigDialog"
QT_MOC_LITERAL(1, 14, 14), // "widgetModified"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 15), // "settingsChanged"
QT_MOC_LITERAL(4, 46, 10), // "dialogName"
QT_MOC_LITERAL(5, 57, 14), // "updateSettings"
QT_MOC_LITERAL(6, 72, 13), // "updateWidgets"
QT_MOC_LITERAL(7, 86, 20), // "updateWidgetsDefault"
QT_MOC_LITERAL(8, 107, 13), // "updateButtons"
QT_MOC_LITERAL(9, 121, 19), // "settingsChangedSlot"
QT_MOC_LITERAL(10, 141, 7), // "setHelp"
QT_MOC_LITERAL(11, 149, 6), // "anchor"
QT_MOC_LITERAL(12, 156, 7), // "appname"
QT_MOC_LITERAL(13, 164, 8), // "showHelp"
QT_MOC_LITERAL(14, 173, 13), // "onPageRemoved"
QT_MOC_LITERAL(15, 187, 16), // "KPageWidgetItem*"
QT_MOC_LITERAL(16, 204, 4) // "item"

    },
    "KConfigDialog\0widgetModified\0\0"
    "settingsChanged\0dialogName\0updateSettings\0"
    "updateWidgets\0updateWidgetsDefault\0"
    "updateButtons\0settingsChangedSlot\0"
    "setHelp\0anchor\0appname\0showHelp\0"
    "onPageRemoved\0KPageWidgetItem*\0item"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KConfigDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x06 /* Public */,
       3,    1,   70,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   73,    2, 0x09 /* Protected */,
       6,    0,   74,    2, 0x09 /* Protected */,
       7,    0,   75,    2, 0x09 /* Protected */,
       8,    0,   76,    2, 0x09 /* Protected */,
       9,    0,   77,    2, 0x09 /* Protected */,
      10,    2,   78,    2, 0x09 /* Protected */,
      10,    1,   83,    2, 0x29 /* Protected | MethodCloned */,
      13,    0,   86,    2, 0x09 /* Protected */,
      14,    1,   87,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   11,   12,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 15,   16,

       0        // eod
};

void KConfigDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<KConfigDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->widgetModified(); break;
        case 1: _t->settingsChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->updateSettings(); break;
        case 3: _t->updateWidgets(); break;
        case 4: _t->updateWidgetsDefault(); break;
        case 5: _t->updateButtons(); break;
        case 6: _t->settingsChangedSlot(); break;
        case 7: _t->setHelp((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 8: _t->setHelp((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->showHelp(); break;
        case 10: _t->onPageRemoved((*reinterpret_cast< KPageWidgetItem*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KPageWidgetItem* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (KConfigDialog::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KConfigDialog::widgetModified)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (KConfigDialog::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KConfigDialog::settingsChanged)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject KConfigDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<KPageDialog::staticMetaObject>(),
    qt_meta_stringdata_KConfigDialog.data,
    qt_meta_data_KConfigDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KConfigDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KConfigDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KConfigDialog.stringdata0))
        return static_cast<void*>(this);
    return KPageDialog::qt_metacast(_clname);
}

int KConfigDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KPageDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void KConfigDialog::widgetModified()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void KConfigDialog::settingsChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
