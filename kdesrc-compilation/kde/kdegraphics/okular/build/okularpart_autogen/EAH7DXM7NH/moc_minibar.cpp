/****************************************************************************
** Meta object code from reading C++ file 'minibar.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../part/minibar.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'minibar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PagesEdit_t {
    QByteArrayData data[3];
    char stringdata0[25];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PagesEdit_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PagesEdit_t qt_meta_stringdata_PagesEdit = {
    {
QT_MOC_LITERAL(0, 0, 9), // "PagesEdit"
QT_MOC_LITERAL(1, 10, 13), // "updatePalette"
QT_MOC_LITERAL(2, 24, 0) // ""

    },
    "PagesEdit\0updatePalette\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PagesEdit[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void PagesEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PagesEdit *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updatePalette(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject PagesEdit::staticMetaObject = { {
    QMetaObject::SuperData::link<KLineEdit::staticMetaObject>(),
    qt_meta_stringdata_PagesEdit.data,
    qt_meta_data_PagesEdit,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PagesEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PagesEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PagesEdit.stringdata0))
        return static_cast<void*>(this);
    return KLineEdit::qt_metacast(_clname);
}

int PagesEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KLineEdit::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_PageNumberEdit_t {
    QByteArrayData data[1];
    char stringdata0[15];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PageNumberEdit_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PageNumberEdit_t qt_meta_stringdata_PageNumberEdit = {
    {
QT_MOC_LITERAL(0, 0, 14) // "PageNumberEdit"

    },
    "PageNumberEdit"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PageNumberEdit[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void PageNumberEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject PageNumberEdit::staticMetaObject = { {
    QMetaObject::SuperData::link<PagesEdit::staticMetaObject>(),
    qt_meta_stringdata_PageNumberEdit.data,
    qt_meta_data_PageNumberEdit,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PageNumberEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PageNumberEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PageNumberEdit.stringdata0))
        return static_cast<void*>(this);
    return PagesEdit::qt_metacast(_clname);
}

int PageNumberEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PagesEdit::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_PageLabelEdit_t {
    QByteArrayData data[5];
    char stringdata0[48];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PageLabelEdit_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PageLabelEdit_t qt_meta_stringdata_PageLabelEdit = {
    {
QT_MOC_LITERAL(0, 0, 13), // "PageLabelEdit"
QT_MOC_LITERAL(1, 14, 16), // "pageNumberChosen"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 4), // "page"
QT_MOC_LITERAL(4, 37, 10) // "pageChosen"

    },
    "PageLabelEdit\0pageNumberChosen\0\0page\0"
    "pageChosen"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PageLabelEdit[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   27,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void PageLabelEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PageLabelEdit *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->pageNumberChosen((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->pageChosen(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PageLabelEdit::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PageLabelEdit::pageNumberChosen)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PageLabelEdit::staticMetaObject = { {
    QMetaObject::SuperData::link<PagesEdit::staticMetaObject>(),
    qt_meta_stringdata_PageLabelEdit.data,
    qt_meta_data_PageLabelEdit,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PageLabelEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PageLabelEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PageLabelEdit.stringdata0))
        return static_cast<void*>(this);
    return PagesEdit::qt_metacast(_clname);
}

int PageLabelEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PagesEdit::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void PageLabelEdit::pageNumberChosen(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_MiniBarLogic_t {
    QByteArrayData data[1];
    char stringdata0[13];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MiniBarLogic_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MiniBarLogic_t qt_meta_stringdata_MiniBarLogic = {
    {
QT_MOC_LITERAL(0, 0, 12) // "MiniBarLogic"

    },
    "MiniBarLogic"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MiniBarLogic[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void MiniBarLogic::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject MiniBarLogic::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_MiniBarLogic.data,
    qt_meta_data_MiniBarLogic,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MiniBarLogic::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MiniBarLogic::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MiniBarLogic.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Okular::DocumentObserver"))
        return static_cast< Okular::DocumentObserver*>(this);
    return QObject::qt_metacast(_clname);
}

int MiniBarLogic::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_MiniBar_t {
    QByteArrayData data[14];
    char stringdata0[176];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MiniBar_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MiniBar_t qt_meta_stringdata_MiniBar = {
    {
QT_MOC_LITERAL(0, 0, 7), // "MiniBar"
QT_MOC_LITERAL(1, 8, 8), // "gotoPage"
QT_MOC_LITERAL(2, 17, 0), // ""
QT_MOC_LITERAL(3, 18, 8), // "prevPage"
QT_MOC_LITERAL(4, 27, 8), // "nextPage"
QT_MOC_LITERAL(5, 36, 20), // "forwardKeyPressEvent"
QT_MOC_LITERAL(6, 57, 10), // "QKeyEvent*"
QT_MOC_LITERAL(7, 68, 1), // "e"
QT_MOC_LITERAL(8, 70, 24), // "slotChangePageFromReturn"
QT_MOC_LITERAL(9, 95, 14), // "slotChangePage"
QT_MOC_LITERAL(10, 110, 4), // "page"
QT_MOC_LITERAL(11, 115, 16), // "slotEmitNextPage"
QT_MOC_LITERAL(12, 132, 16), // "slotEmitPrevPage"
QT_MOC_LITERAL(13, 149, 26) // "slotToolBarIconSizeChanged"

    },
    "MiniBar\0gotoPage\0\0prevPage\0nextPage\0"
    "forwardKeyPressEvent\0QKeyEvent*\0e\0"
    "slotChangePageFromReturn\0slotChangePage\0"
    "page\0slotEmitNextPage\0slotEmitPrevPage\0"
    "slotToolBarIconSizeChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MiniBar[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x06 /* Public */,
       3,    0,   60,    2, 0x06 /* Public */,
       4,    0,   61,    2, 0x06 /* Public */,
       5,    1,   62,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   65,    2, 0x0a /* Public */,
       9,    1,   66,    2, 0x0a /* Public */,
      11,    0,   69,    2, 0x0a /* Public */,
      12,    0,   70,    2, 0x0a /* Public */,
      13,    0,   71,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MiniBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MiniBar *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->gotoPage(); break;
        case 1: _t->prevPage(); break;
        case 2: _t->nextPage(); break;
        case 3: _t->forwardKeyPressEvent((*reinterpret_cast< QKeyEvent*(*)>(_a[1]))); break;
        case 4: _t->slotChangePageFromReturn(); break;
        case 5: _t->slotChangePage((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->slotEmitNextPage(); break;
        case 7: _t->slotEmitPrevPage(); break;
        case 8: _t->slotToolBarIconSizeChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MiniBar::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MiniBar::gotoPage)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MiniBar::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MiniBar::prevPage)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MiniBar::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MiniBar::nextPage)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (MiniBar::*)(QKeyEvent * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MiniBar::forwardKeyPressEvent)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MiniBar::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_MiniBar.data,
    qt_meta_data_MiniBar,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MiniBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MiniBar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MiniBar.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int MiniBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void MiniBar::gotoPage()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void MiniBar::prevPage()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void MiniBar::nextPage()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void MiniBar::forwardKeyPressEvent(QKeyEvent * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
struct qt_meta_stringdata_ProgressWidget_t {
    QByteArrayData data[4];
    char stringdata0[34];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ProgressWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ProgressWidget_t qt_meta_stringdata_ProgressWidget = {
    {
QT_MOC_LITERAL(0, 0, 14), // "ProgressWidget"
QT_MOC_LITERAL(1, 15, 8), // "prevPage"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 8) // "nextPage"

    },
    "ProgressWidget\0prevPage\0\0nextPage"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ProgressWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x06 /* Public */,
       3,    0,   25,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ProgressWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ProgressWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->prevPage(); break;
        case 1: _t->nextPage(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ProgressWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ProgressWidget::prevPage)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ProgressWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ProgressWidget::nextPage)) {
                *result = 1;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject ProgressWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_ProgressWidget.data,
    qt_meta_data_ProgressWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ProgressWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ProgressWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ProgressWidget.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Okular::DocumentObserver"))
        return static_cast< Okular::DocumentObserver*>(this);
    return QWidget::qt_metacast(_clname);
}

int ProgressWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void ProgressWidget::prevPage()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ProgressWidget::nextPage()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
