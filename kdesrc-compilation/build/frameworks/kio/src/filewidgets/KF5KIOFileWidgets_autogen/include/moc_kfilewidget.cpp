/****************************************************************************
** Meta object code from reading C++ file 'kfilewidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../frameworks/kio/src/filewidgets/kfilewidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kfilewidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KFileWidget_t {
    QByteArrayData data[11];
    char stringdata0[114];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KFileWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KFileWidget_t qt_meta_stringdata_KFileWidget = {
    {
QT_MOC_LITERAL(0, 0, 11), // "KFileWidget"
QT_MOC_LITERAL(1, 12, 12), // "fileSelected"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 15), // "fileHighlighted"
QT_MOC_LITERAL(4, 42, 16), // "selectionChanged"
QT_MOC_LITERAL(5, 59, 13), // "filterChanged"
QT_MOC_LITERAL(6, 73, 6), // "filter"
QT_MOC_LITERAL(7, 80, 8), // "accepted"
QT_MOC_LITERAL(8, 89, 6), // "slotOk"
QT_MOC_LITERAL(9, 96, 6), // "accept"
QT_MOC_LITERAL(10, 103, 10) // "slotCancel"

    },
    "KFileWidget\0fileSelected\0\0fileHighlighted\0"
    "selectionChanged\0filterChanged\0filter\0"
    "accepted\0slotOk\0accept\0slotCancel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KFileWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,
       3,    1,   57,    2, 0x06 /* Public */,
       4,    0,   60,    2, 0x06 /* Public */,
       5,    1,   61,    2, 0x06 /* Public */,
       7,    0,   64,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   65,    2, 0x0a /* Public */,
       9,    0,   66,    2, 0x0a /* Public */,
      10,    0,   67,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QUrl,    2,
    QMetaType::Void, QMetaType::QUrl,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void KFileWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<KFileWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->fileSelected((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 1: _t->fileHighlighted((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 2: _t->selectionChanged(); break;
        case 3: _t->filterChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->accepted(); break;
        case 5: _t->slotOk(); break;
        case 6: _t->accept(); break;
        case 7: _t->slotCancel(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (KFileWidget::*)(const QUrl & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KFileWidget::fileSelected)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (KFileWidget::*)(const QUrl & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KFileWidget::fileHighlighted)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (KFileWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KFileWidget::selectionChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (KFileWidget::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KFileWidget::filterChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (KFileWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KFileWidget::accepted)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject KFileWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_KFileWidget.data,
    qt_meta_data_KFileWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KFileWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KFileWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KFileWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int KFileWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void KFileWidget::fileSelected(const QUrl & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void KFileWidget::fileHighlighted(const QUrl & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void KFileWidget::selectionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void KFileWidget::filterChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void KFileWidget::accepted()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
