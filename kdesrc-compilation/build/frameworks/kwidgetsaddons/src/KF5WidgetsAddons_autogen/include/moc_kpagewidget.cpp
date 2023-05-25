/****************************************************************************
** Meta object code from reading C++ file 'kpagewidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../frameworks/kwidgetsaddons/src/kpagewidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kpagewidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KPageWidget_t {
    QByteArrayData data[10];
    char stringdata0[101];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KPageWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KPageWidget_t qt_meta_stringdata_KPageWidget = {
    {
QT_MOC_LITERAL(0, 0, 11), // "KPageWidget"
QT_MOC_LITERAL(1, 12, 18), // "currentPageChanged"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 16), // "KPageWidgetItem*"
QT_MOC_LITERAL(4, 49, 7), // "current"
QT_MOC_LITERAL(5, 57, 6), // "before"
QT_MOC_LITERAL(6, 64, 11), // "pageToggled"
QT_MOC_LITERAL(7, 76, 4), // "page"
QT_MOC_LITERAL(8, 81, 7), // "checked"
QT_MOC_LITERAL(9, 89, 11) // "pageRemoved"

    },
    "KPageWidget\0currentPageChanged\0\0"
    "KPageWidgetItem*\0current\0before\0"
    "pageToggled\0page\0checked\0pageRemoved"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KPageWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   29,    2, 0x06 /* Public */,
       6,    2,   34,    2, 0x06 /* Public */,
       9,    1,   39,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,    4,    5,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Bool,    7,    8,
    QMetaType::Void, 0x80000000 | 3,    7,

       0        // eod
};

void KPageWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<KPageWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->currentPageChanged((*reinterpret_cast< KPageWidgetItem*(*)>(_a[1])),(*reinterpret_cast< KPageWidgetItem*(*)>(_a[2]))); break;
        case 1: _t->pageToggled((*reinterpret_cast< KPageWidgetItem*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 2: _t->pageRemoved((*reinterpret_cast< KPageWidgetItem*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KPageWidgetItem* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KPageWidgetItem* >(); break;
            }
            break;
        case 2:
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
            using _t = void (KPageWidget::*)(KPageWidgetItem * , KPageWidgetItem * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KPageWidget::currentPageChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (KPageWidget::*)(KPageWidgetItem * , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KPageWidget::pageToggled)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (KPageWidget::*)(KPageWidgetItem * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KPageWidget::pageRemoved)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject KPageWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<KPageView::staticMetaObject>(),
    qt_meta_stringdata_KPageWidget.data,
    qt_meta_data_KPageWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KPageWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KPageWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KPageWidget.stringdata0))
        return static_cast<void*>(this);
    return KPageView::qt_metacast(_clname);
}

int KPageWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KPageView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void KPageWidget::currentPageChanged(KPageWidgetItem * _t1, KPageWidgetItem * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void KPageWidget::pageToggled(KPageWidgetItem * _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void KPageWidget::pageRemoved(KPageWidgetItem * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
