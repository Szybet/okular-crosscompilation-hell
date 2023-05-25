/****************************************************************************
** Meta object code from reading C++ file 'khelpmenu.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../frameworks/kxmlgui/src/khelpmenu.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'khelpmenu.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KHelpMenu_t {
    QByteArrayData data[13];
    char stringdata0[181];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KHelpMenu_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KHelpMenu_t qt_meta_stringdata_KHelpMenu = {
    {
QT_MOC_LITERAL(0, 0, 9), // "KHelpMenu"
QT_MOC_LITERAL(1, 10, 20), // "showAboutApplication"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 16), // "appHelpActivated"
QT_MOC_LITERAL(4, 49, 20), // "contextHelpActivated"
QT_MOC_LITERAL(5, 70, 16), // "aboutApplication"
QT_MOC_LITERAL(6, 87, 8), // "aboutKDE"
QT_MOC_LITERAL(7, 96, 9), // "reportBug"
QT_MOC_LITERAL(8, 106, 25), // "switchApplicationLanguage"
QT_MOC_LITERAL(9, 132, 6), // "donate"
QT_MOC_LITERAL(10, 139, 13), // "menuDestroyed"
QT_MOC_LITERAL(11, 153, 14), // "dialogFinished"
QT_MOC_LITERAL(12, 168, 12) // "timerExpired"

    },
    "KHelpMenu\0showAboutApplication\0\0"
    "appHelpActivated\0contextHelpActivated\0"
    "aboutApplication\0aboutKDE\0reportBug\0"
    "switchApplicationLanguage\0donate\0"
    "menuDestroyed\0dialogFinished\0timerExpired"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KHelpMenu[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   70,    2, 0x0a /* Public */,
       4,    0,   71,    2, 0x0a /* Public */,
       5,    0,   72,    2, 0x0a /* Public */,
       6,    0,   73,    2, 0x0a /* Public */,
       7,    0,   74,    2, 0x0a /* Public */,
       8,    0,   75,    2, 0x0a /* Public */,
       9,    0,   76,    2, 0x0a /* Public */,
      10,    0,   77,    2, 0x08 /* Private */,
      11,    0,   78,    2, 0x08 /* Private */,
      12,    0,   79,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void KHelpMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<KHelpMenu *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->showAboutApplication(); break;
        case 1: _t->appHelpActivated(); break;
        case 2: _t->contextHelpActivated(); break;
        case 3: _t->aboutApplication(); break;
        case 4: _t->aboutKDE(); break;
        case 5: _t->reportBug(); break;
        case 6: _t->switchApplicationLanguage(); break;
        case 7: _t->donate(); break;
        case 8: _t->menuDestroyed(); break;
        case 9: _t->dialogFinished(); break;
        case 10: _t->timerExpired(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (KHelpMenu::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KHelpMenu::showAboutApplication)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject KHelpMenu::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_KHelpMenu.data,
    qt_meta_data_KHelpMenu,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KHelpMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KHelpMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KHelpMenu.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int KHelpMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void KHelpMenu::showAboutApplication()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
