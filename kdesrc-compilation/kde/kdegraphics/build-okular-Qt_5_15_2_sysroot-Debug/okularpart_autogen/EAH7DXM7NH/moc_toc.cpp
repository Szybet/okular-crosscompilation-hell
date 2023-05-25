/****************************************************************************
** Meta object code from reading C++ file 'toc.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../okular/part/toc.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'toc.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TOC_t {
    QByteArrayData data[13];
    char stringdata0[155];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TOC_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TOC_t qt_meta_stringdata_TOC = {
    {
QT_MOC_LITERAL(0, 0, 3), // "TOC"
QT_MOC_LITERAL(1, 4, 6), // "hasTOC"
QT_MOC_LITERAL(2, 11, 0), // ""
QT_MOC_LITERAL(3, 12, 3), // "has"
QT_MOC_LITERAL(4, 16, 10), // "rightClick"
QT_MOC_LITERAL(5, 27, 24), // "Okular::DocumentViewport"
QT_MOC_LITERAL(6, 52, 17), // "expandRecursively"
QT_MOC_LITERAL(7, 70, 19), // "collapseRecursively"
QT_MOC_LITERAL(8, 90, 9), // "expandAll"
QT_MOC_LITERAL(9, 100, 11), // "collapseAll"
QT_MOC_LITERAL(10, 112, 12), // "slotExecuted"
QT_MOC_LITERAL(11, 125, 11), // "QModelIndex"
QT_MOC_LITERAL(12, 137, 17) // "saveSearchOptions"

    },
    "TOC\0hasTOC\0\0has\0rightClick\0"
    "Okular::DocumentViewport\0expandRecursively\0"
    "collapseRecursively\0expandAll\0collapseAll\0"
    "slotExecuted\0QModelIndex\0saveSearchOptions"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TOC[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,
       4,    3,   57,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   64,    2, 0x0a /* Public */,
       7,    0,   65,    2, 0x0a /* Public */,
       8,    0,   66,    2, 0x0a /* Public */,
       9,    0,   67,    2, 0x0a /* Public */,
      10,    1,   68,    2, 0x08 /* Private */,
      12,    0,   71,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, 0x80000000 | 5, QMetaType::QPoint, QMetaType::QString,    2,    2,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 11,    2,
    QMetaType::Void,

       0        // eod
};

void TOC::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TOC *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->hasTOC((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->rightClick((*reinterpret_cast< const Okular::DocumentViewport(*)>(_a[1])),(*reinterpret_cast< const QPoint(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 2: _t->expandRecursively(); break;
        case 3: _t->collapseRecursively(); break;
        case 4: _t->expandAll(); break;
        case 5: _t->collapseAll(); break;
        case 6: _t->slotExecuted((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 7: _t->saveSearchOptions(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TOC::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TOC::hasTOC)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (TOC::*)(const Okular::DocumentViewport & , const QPoint , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TOC::rightClick)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject TOC::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_TOC.data,
    qt_meta_data_TOC,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TOC::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TOC::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TOC.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Okular::DocumentObserver"))
        return static_cast< Okular::DocumentObserver*>(this);
    return QWidget::qt_metacast(_clname);
}

int TOC::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void TOC::hasTOC(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void TOC::rightClick(const Okular::DocumentViewport & _t1, const QPoint _t2, const QString & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
