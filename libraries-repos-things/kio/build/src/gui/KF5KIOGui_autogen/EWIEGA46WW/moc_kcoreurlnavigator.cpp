/****************************************************************************
** Meta object code from reading C++ file 'kcoreurlnavigator.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../src/gui/kcoreurlnavigator.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kcoreurlnavigator.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KCoreUrlNavigator_t {
    QByteArrayData data[20];
    char stringdata0[272];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KCoreUrlNavigator_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KCoreUrlNavigator_t qt_meta_stringdata_KCoreUrlNavigator = {
    {
QT_MOC_LITERAL(0, 0, 17), // "KCoreUrlNavigator"
QT_MOC_LITERAL(1, 18, 25), // "currentLocationUrlChanged"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 23), // "currentUrlAboutToChange"
QT_MOC_LITERAL(4, 69, 6), // "newUrl"
QT_MOC_LITERAL(5, 76, 18), // "historySizeChanged"
QT_MOC_LITERAL(6, 95, 21), // "urlSelectionRequested"
QT_MOC_LITERAL(7, 117, 3), // "url"
QT_MOC_LITERAL(8, 121, 19), // "historyIndexChanged"
QT_MOC_LITERAL(9, 141, 14), // "historyChanged"
QT_MOC_LITERAL(10, 156, 11), // "locationUrl"
QT_MOC_LITERAL(11, 168, 12), // "historyIndex"
QT_MOC_LITERAL(12, 181, 17), // "saveLocationState"
QT_MOC_LITERAL(13, 199, 5), // "state"
QT_MOC_LITERAL(14, 205, 13), // "locationState"
QT_MOC_LITERAL(15, 219, 6), // "goBack"
QT_MOC_LITERAL(16, 226, 9), // "goForward"
QT_MOC_LITERAL(17, 236, 4), // "goUp"
QT_MOC_LITERAL(18, 241, 18), // "currentLocationUrl"
QT_MOC_LITERAL(19, 260, 11) // "historySize"

    },
    "KCoreUrlNavigator\0currentLocationUrlChanged\0"
    "\0currentUrlAboutToChange\0newUrl\0"
    "historySizeChanged\0urlSelectionRequested\0"
    "url\0historyIndexChanged\0historyChanged\0"
    "locationUrl\0historyIndex\0saveLocationState\0"
    "state\0locationState\0goBack\0goForward\0"
    "goUp\0currentLocationUrl\0historySize"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KCoreUrlNavigator[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       3,  108, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x06 /* Public */,
       3,    1,   85,    2, 0x06 /* Public */,
       5,    0,   88,    2, 0x06 /* Public */,
       6,    1,   89,    2, 0x06 /* Public */,
       8,    0,   92,    2, 0x06 /* Public */,
       9,    0,   93,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
      10,    1,   94,    2, 0x02 /* Public */,
      10,    0,   97,    2, 0x22 /* Public | MethodCloned */,
      12,    1,   98,    2, 0x02 /* Public */,
      14,    1,  101,    2, 0x02 /* Public */,
      14,    0,  104,    2, 0x22 /* Public | MethodCloned */,
      15,    0,  105,    2, 0x02 /* Public */,
      16,    0,  106,    2, 0x02 /* Public */,
      17,    0,  107,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QUrl,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QUrl,    7,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::QUrl, QMetaType::Int,   11,
    QMetaType::QUrl,
    QMetaType::Void, QMetaType::QVariant,   13,
    QMetaType::QVariant, QMetaType::Int,   11,
    QMetaType::QVariant,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,

 // properties: name, type, flags
      18, QMetaType::QUrl, 0x00495103,
      19, QMetaType::Int, 0x00495001,
      11, QMetaType::Int, 0x00495001,

 // properties: notify_signal_id
       0,
       2,
       4,

       0        // eod
};

void KCoreUrlNavigator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<KCoreUrlNavigator *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->currentLocationUrlChanged(); break;
        case 1: _t->currentUrlAboutToChange((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 2: _t->historySizeChanged(); break;
        case 3: _t->urlSelectionRequested((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 4: _t->historyIndexChanged(); break;
        case 5: _t->historyChanged(); break;
        case 6: { QUrl _r = _t->locationUrl((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QUrl*>(_a[0]) = std::move(_r); }  break;
        case 7: { QUrl _r = _t->locationUrl();
            if (_a[0]) *reinterpret_cast< QUrl*>(_a[0]) = std::move(_r); }  break;
        case 8: _t->saveLocationState((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        case 9: { QVariant _r = _t->locationState((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = std::move(_r); }  break;
        case 10: { QVariant _r = _t->locationState();
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = std::move(_r); }  break;
        case 11: { bool _r = _t->goBack();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 12: { bool _r = _t->goForward();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 13: { bool _r = _t->goUp();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (KCoreUrlNavigator::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KCoreUrlNavigator::currentLocationUrlChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (KCoreUrlNavigator::*)(const QUrl & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KCoreUrlNavigator::currentUrlAboutToChange)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (KCoreUrlNavigator::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KCoreUrlNavigator::historySizeChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (KCoreUrlNavigator::*)(const QUrl & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KCoreUrlNavigator::urlSelectionRequested)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (KCoreUrlNavigator::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KCoreUrlNavigator::historyIndexChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (KCoreUrlNavigator::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KCoreUrlNavigator::historyChanged)) {
                *result = 5;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<KCoreUrlNavigator *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QUrl*>(_v) = _t->currentLocationUrl(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->historySize(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->historyIndex(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<KCoreUrlNavigator *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setCurrentLocationUrl(*reinterpret_cast< QUrl*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject KCoreUrlNavigator::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_KCoreUrlNavigator.data,
    qt_meta_data_KCoreUrlNavigator,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KCoreUrlNavigator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KCoreUrlNavigator::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KCoreUrlNavigator.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int KCoreUrlNavigator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void KCoreUrlNavigator::currentLocationUrlChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void KCoreUrlNavigator::currentUrlAboutToChange(const QUrl & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void KCoreUrlNavigator::historySizeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void KCoreUrlNavigator::urlSelectionRequested(const QUrl & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void KCoreUrlNavigator::historyIndexChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void KCoreUrlNavigator::historyChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
