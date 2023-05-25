/****************************************************************************
** Meta object code from reading C++ file 'kurlnavigatorbutton_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../frameworks/kio/src/filewidgets/kurlnavigatorbutton_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kurlnavigatorbutton_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KDEPrivate__KUrlNavigatorButton_t {
    QByteArrayData data[30];
    char stringdata0[417];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KDEPrivate__KUrlNavigatorButton_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KDEPrivate__KUrlNavigatorButton_t qt_meta_stringdata_KDEPrivate__KUrlNavigatorButton = {
    {
QT_MOC_LITERAL(0, 0, 31), // "KDEPrivate::KUrlNavigatorButton"
QT_MOC_LITERAL(1, 32, 22), // "urlsDroppedOnNavButton"
QT_MOC_LITERAL(2, 55, 0), // ""
QT_MOC_LITERAL(3, 56, 11), // "destination"
QT_MOC_LITERAL(4, 68, 11), // "QDropEvent*"
QT_MOC_LITERAL(5, 80, 5), // "event"
QT_MOC_LITERAL(6, 86, 24), // "navigatorButtonActivated"
QT_MOC_LITERAL(7, 111, 3), // "url"
QT_MOC_LITERAL(8, 115, 15), // "Qt::MouseButton"
QT_MOC_LITERAL(9, 131, 6), // "button"
QT_MOC_LITERAL(10, 138, 21), // "Qt::KeyboardModifiers"
QT_MOC_LITERAL(11, 160, 9), // "modifiers"
QT_MOC_LITERAL(12, 170, 20), // "startedTextResolving"
QT_MOC_LITERAL(13, 191, 21), // "finishedTextResolving"
QT_MOC_LITERAL(14, 213, 14), // "requestSubDirs"
QT_MOC_LITERAL(15, 228, 15), // "startSubDirsJob"
QT_MOC_LITERAL(16, 244, 19), // "addEntriesToSubDirs"
QT_MOC_LITERAL(17, 264, 9), // "KIO::Job*"
QT_MOC_LITERAL(18, 274, 3), // "job"
QT_MOC_LITERAL(19, 278, 17), // "KIO::UDSEntryList"
QT_MOC_LITERAL(20, 296, 7), // "entries"
QT_MOC_LITERAL(21, 304, 15), // "openSubDirsMenu"
QT_MOC_LITERAL(22, 320, 5), // "KJob*"
QT_MOC_LITERAL(23, 326, 13), // "replaceButton"
QT_MOC_LITERAL(24, 340, 15), // "slotUrlsDropped"
QT_MOC_LITERAL(25, 356, 8), // "QAction*"
QT_MOC_LITERAL(26, 365, 6), // "action"
QT_MOC_LITERAL(27, 372, 21), // "slotMenuActionClicked"
QT_MOC_LITERAL(28, 394, 12), // "statFinished"
QT_MOC_LITERAL(29, 407, 9) // "plainText"

    },
    "KDEPrivate::KUrlNavigatorButton\0"
    "urlsDroppedOnNavButton\0\0destination\0"
    "QDropEvent*\0event\0navigatorButtonActivated\0"
    "url\0Qt::MouseButton\0button\0"
    "Qt::KeyboardModifiers\0modifiers\0"
    "startedTextResolving\0finishedTextResolving\0"
    "requestSubDirs\0startSubDirsJob\0"
    "addEntriesToSubDirs\0KIO::Job*\0job\0"
    "KIO::UDSEntryList\0entries\0openSubDirsMenu\0"
    "KJob*\0replaceButton\0slotUrlsDropped\0"
    "QAction*\0action\0slotMenuActionClicked\0"
    "statFinished\0plainText"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KDEPrivate__KUrlNavigatorButton[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       1,  114, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   74,    2, 0x06 /* Public */,
       6,    3,   79,    2, 0x06 /* Public */,
      12,    0,   86,    2, 0x06 /* Public */,
      13,    0,   87,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      14,    0,   88,    2, 0x08 /* Private */,
      15,    0,   89,    2, 0x08 /* Private */,
      16,    2,   90,    2, 0x08 /* Private */,
      21,    1,   95,    2, 0x08 /* Private */,
      23,    1,   98,    2, 0x08 /* Private */,
      24,    2,  101,    2, 0x08 /* Private */,
      27,    2,  106,    2, 0x08 /* Private */,
      28,    1,  111,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QUrl, 0x80000000 | 4,    3,    5,
    QMetaType::Void, QMetaType::QUrl, 0x80000000 | 8, 0x80000000 | 10,    7,    9,   11,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 17, 0x80000000 | 19,   18,   20,
    QMetaType::Void, 0x80000000 | 22,   18,
    QMetaType::Void, 0x80000000 | 22,   18,
    QMetaType::Void, 0x80000000 | 25, 0x80000000 | 4,   26,    5,
    QMetaType::Void, 0x80000000 | 25, 0x80000000 | 8,   26,    9,
    QMetaType::Void, 0x80000000 | 22,    2,

 // properties: name, type, flags
      29, QMetaType::QString, 0x00095001,

       0        // eod
};

void KDEPrivate::KUrlNavigatorButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<KUrlNavigatorButton *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->urlsDroppedOnNavButton((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< QDropEvent*(*)>(_a[2]))); break;
        case 1: _t->navigatorButtonActivated((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< Qt::MouseButton(*)>(_a[2])),(*reinterpret_cast< Qt::KeyboardModifiers(*)>(_a[3]))); break;
        case 2: _t->startedTextResolving(); break;
        case 3: _t->finishedTextResolving(); break;
        case 4: _t->requestSubDirs(); break;
        case 5: _t->startSubDirsJob(); break;
        case 6: _t->addEntriesToSubDirs((*reinterpret_cast< KIO::Job*(*)>(_a[1])),(*reinterpret_cast< const KIO::UDSEntryList(*)>(_a[2]))); break;
        case 7: _t->openSubDirsMenu((*reinterpret_cast< KJob*(*)>(_a[1]))); break;
        case 8: _t->replaceButton((*reinterpret_cast< KJob*(*)>(_a[1]))); break;
        case 9: _t->slotUrlsDropped((*reinterpret_cast< QAction*(*)>(_a[1])),(*reinterpret_cast< QDropEvent*(*)>(_a[2]))); break;
        case 10: _t->slotMenuActionClicked((*reinterpret_cast< QAction*(*)>(_a[1])),(*reinterpret_cast< Qt::MouseButton(*)>(_a[2]))); break;
        case 11: _t->statFinished((*reinterpret_cast< KJob*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KJob* >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KJob* >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAction* >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAction* >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KJob* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (KUrlNavigatorButton::*)(const QUrl & , QDropEvent * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KUrlNavigatorButton::urlsDroppedOnNavButton)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (KUrlNavigatorButton::*)(const QUrl & , Qt::MouseButton , Qt::KeyboardModifiers );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KUrlNavigatorButton::navigatorButtonActivated)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (KUrlNavigatorButton::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KUrlNavigatorButton::startedTextResolving)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (KUrlNavigatorButton::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KUrlNavigatorButton::finishedTextResolving)) {
                *result = 3;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<KUrlNavigatorButton *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->plainText(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject KDEPrivate::KUrlNavigatorButton::staticMetaObject = { {
    QMetaObject::SuperData::link<KUrlNavigatorButtonBase::staticMetaObject>(),
    qt_meta_stringdata_KDEPrivate__KUrlNavigatorButton.data,
    qt_meta_data_KDEPrivate__KUrlNavigatorButton,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KDEPrivate::KUrlNavigatorButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KDEPrivate::KUrlNavigatorButton::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KDEPrivate__KUrlNavigatorButton.stringdata0))
        return static_cast<void*>(this);
    return KUrlNavigatorButtonBase::qt_metacast(_clname);
}

int KDEPrivate::KUrlNavigatorButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KUrlNavigatorButtonBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void KDEPrivate::KUrlNavigatorButton::urlsDroppedOnNavButton(const QUrl & _t1, QDropEvent * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void KDEPrivate::KUrlNavigatorButton::navigatorButtonActivated(const QUrl & _t1, Qt::MouseButton _t2, Qt::KeyboardModifiers _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void KDEPrivate::KUrlNavigatorButton::startedTextResolving()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void KDEPrivate::KUrlNavigatorButton::finishedTextResolving()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
