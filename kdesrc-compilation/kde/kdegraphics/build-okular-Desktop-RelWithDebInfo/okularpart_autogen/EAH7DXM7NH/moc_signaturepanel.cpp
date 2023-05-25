/****************************************************************************
** Meta object code from reading C++ file 'signaturepanel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../okular/part/signaturepanel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'signaturepanel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SignaturePanel_t {
    QByteArrayData data[9];
    char stringdata0[135];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SignaturePanel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SignaturePanel_t qt_meta_stringdata_SignaturePanel = {
    {
QT_MOC_LITERAL(0, 0, 14), // "SignaturePanel"
QT_MOC_LITERAL(1, 15, 21), // "documentHasSignatures"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 13), // "hasSignatures"
QT_MOC_LITERAL(4, 52, 9), // "activated"
QT_MOC_LITERAL(5, 62, 11), // "QModelIndex"
QT_MOC_LITERAL(6, 74, 19), // "slotShowContextMenu"
QT_MOC_LITERAL(7, 94, 18), // "slotViewProperties"
QT_MOC_LITERAL(8, 113, 21) // "signUnsignedSignature"

    },
    "SignaturePanel\0documentHasSignatures\0"
    "\0hasSignatures\0activated\0QModelIndex\0"
    "slotShowContextMenu\0slotViewProperties\0"
    "signUnsignedSignature"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SignaturePanel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   42,    2, 0x08 /* Private */,
       6,    0,   45,    2, 0x08 /* Private */,
       7,    0,   46,    2, 0x08 /* Private */,
       8,    0,   47,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void SignaturePanel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SignaturePanel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->documentHasSignatures((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->activated((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 2: _t->slotShowContextMenu(); break;
        case 3: _t->slotViewProperties(); break;
        case 4: _t->signUnsignedSignature(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SignaturePanel::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SignaturePanel::documentHasSignatures)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SignaturePanel::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_SignaturePanel.data,
    qt_meta_data_SignaturePanel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SignaturePanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SignaturePanel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SignaturePanel.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Okular::DocumentObserver"))
        return static_cast< Okular::DocumentObserver*>(this);
    return QWidget::qt_metacast(_clname);
}

int SignaturePanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void SignaturePanel::documentHasSignatures(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
