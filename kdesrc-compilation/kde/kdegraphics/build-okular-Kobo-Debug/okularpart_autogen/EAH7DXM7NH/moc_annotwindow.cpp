/****************************************************************************
** Meta object code from reading C++ file 'annotwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../okular/part/annotwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'annotwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AnnotWindow_t {
    QByteArrayData data[16];
    char stringdata0[217];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AnnotWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AnnotWindow_t qt_meta_stringdata_AnnotWindow = {
    {
QT_MOC_LITERAL(0, 0, 11), // "AnnotWindow"
QT_MOC_LITERAL(1, 12, 13), // "containsLatex"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 11), // "renderLatex"
QT_MOC_LITERAL(4, 39, 6), // "render"
QT_MOC_LITERAL(5, 46, 34), // "slotUpdateUndoAndRedoInContex..."
QT_MOC_LITERAL(6, 81, 6), // "QMenu*"
QT_MOC_LITERAL(7, 88, 4), // "menu"
QT_MOC_LITERAL(8, 93, 13), // "slotOptionBtn"
QT_MOC_LITERAL(9, 107, 18), // "slotsaveWindowText"
QT_MOC_LITERAL(10, 126, 35), // "slotHandleContentsChangedByUn..."
QT_MOC_LITERAL(11, 162, 19), // "Okular::Annotation*"
QT_MOC_LITERAL(12, 182, 5), // "annot"
QT_MOC_LITERAL(13, 188, 8), // "contents"
QT_MOC_LITERAL(14, 197, 9), // "cursorPos"
QT_MOC_LITERAL(15, 207, 9) // "anchorPos"

    },
    "AnnotWindow\0containsLatex\0\0renderLatex\0"
    "render\0slotUpdateUndoAndRedoInContextMenu\0"
    "QMenu*\0menu\0slotOptionBtn\0slotsaveWindowText\0"
    "slotHandleContentsChangedByUndoRedo\0"
    "Okular::Annotation*\0annot\0contents\0"
    "cursorPos\0anchorPos"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AnnotWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   47,    2, 0x0a /* Public */,
       5,    1,   50,    2, 0x08 /* Private */,
       8,    0,   53,    2, 0x08 /* Private */,
       9,    0,   54,    2, 0x08 /* Private */,
      10,    4,   55,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 11, QMetaType::QString, QMetaType::Int, QMetaType::Int,   12,   13,   14,   15,

       0        // eod
};

void AnnotWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AnnotWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->containsLatex((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->renderLatex((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->slotUpdateUndoAndRedoInContextMenu((*reinterpret_cast< QMenu*(*)>(_a[1]))); break;
        case 3: _t->slotOptionBtn(); break;
        case 4: _t->slotsaveWindowText(); break;
        case 5: _t->slotHandleContentsChangedByUndoRedo((*reinterpret_cast< Okular::Annotation*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AnnotWindow::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AnnotWindow::containsLatex)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AnnotWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QFrame::staticMetaObject>(),
    qt_meta_stringdata_AnnotWindow.data,
    qt_meta_data_AnnotWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AnnotWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AnnotWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AnnotWindow.stringdata0))
        return static_cast<void*>(this);
    return QFrame::qt_metacast(_clname);
}

int AnnotWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void AnnotWindow::containsLatex(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
