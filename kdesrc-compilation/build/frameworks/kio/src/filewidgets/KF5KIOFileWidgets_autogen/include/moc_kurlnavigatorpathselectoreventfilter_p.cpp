/****************************************************************************
** Meta object code from reading C++ file 'kurlnavigatorpathselectoreventfilter_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../frameworks/kio/src/filewidgets/kurlnavigatorpathselectoreventfilter_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kurlnavigatorpathselectoreventfilter_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KDEPrivate__KUrlNavigatorPathSelectorEventFilter_t {
    QByteArrayData data[4];
    char stringdata0[67];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KDEPrivate__KUrlNavigatorPathSelectorEventFilter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KDEPrivate__KUrlNavigatorPathSelectorEventFilter_t qt_meta_stringdata_KDEPrivate__KUrlNavigatorPathSelectorEventFilter = {
    {
QT_MOC_LITERAL(0, 0, 48), // "KDEPrivate::KUrlNavigatorPath..."
QT_MOC_LITERAL(1, 49, 12), // "tabRequested"
QT_MOC_LITERAL(2, 62, 0), // ""
QT_MOC_LITERAL(3, 63, 3) // "url"

    },
    "KDEPrivate::KUrlNavigatorPathSelectorEventFilter\0"
    "tabRequested\0\0url"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KDEPrivate__KUrlNavigatorPathSelectorEventFilter[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QUrl,    3,

       0        // eod
};

void KDEPrivate::KUrlNavigatorPathSelectorEventFilter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<KUrlNavigatorPathSelectorEventFilter *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->tabRequested((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (KUrlNavigatorPathSelectorEventFilter::*)(const QUrl & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KUrlNavigatorPathSelectorEventFilter::tabRequested)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject KDEPrivate::KUrlNavigatorPathSelectorEventFilter::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_KDEPrivate__KUrlNavigatorPathSelectorEventFilter.data,
    qt_meta_data_KDEPrivate__KUrlNavigatorPathSelectorEventFilter,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KDEPrivate::KUrlNavigatorPathSelectorEventFilter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KDEPrivate::KUrlNavigatorPathSelectorEventFilter::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KDEPrivate__KUrlNavigatorPathSelectorEventFilter.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int KDEPrivate::KUrlNavigatorPathSelectorEventFilter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void KDEPrivate::KUrlNavigatorPathSelectorEventFilter::tabRequested(const QUrl & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
