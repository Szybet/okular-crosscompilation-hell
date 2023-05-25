/****************************************************************************
** Meta object code from reading C++ file 'searchlineedit.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../part/searchlineedit.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'searchlineedit.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SearchLineEdit_t {
    QByteArrayData data[16];
    char stringdata0[197];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SearchLineEdit_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SearchLineEdit_t qt_meta_stringdata_SearchLineEdit = {
    {
QT_MOC_LITERAL(0, 0, 14), // "SearchLineEdit"
QT_MOC_LITERAL(1, 15, 13), // "searchStarted"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 13), // "searchStopped"
QT_MOC_LITERAL(4, 44, 13), // "restartSearch"
QT_MOC_LITERAL(5, 58, 10), // "stopSearch"
QT_MOC_LITERAL(6, 69, 8), // "findNext"
QT_MOC_LITERAL(7, 78, 8), // "findPrev"
QT_MOC_LITERAL(8, 87, 15), // "slotTextChanged"
QT_MOC_LITERAL(9, 103, 4), // "text"
QT_MOC_LITERAL(10, 108, 17), // "slotReturnPressed"
QT_MOC_LITERAL(11, 126, 11), // "startSearch"
QT_MOC_LITERAL(12, 138, 14), // "searchFinished"
QT_MOC_LITERAL(13, 153, 2), // "id"
QT_MOC_LITERAL(14, 156, 30), // "Okular::Document::SearchStatus"
QT_MOC_LITERAL(15, 187, 9) // "endStatus"

    },
    "SearchLineEdit\0searchStarted\0\0"
    "searchStopped\0restartSearch\0stopSearch\0"
    "findNext\0findPrev\0slotTextChanged\0"
    "text\0slotReturnPressed\0startSearch\0"
    "searchFinished\0id\0Okular::Document::SearchStatus\0"
    "endStatus"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SearchLineEdit[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x06 /* Public */,
       3,    0,   65,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   66,    2, 0x0a /* Public */,
       5,    0,   67,    2, 0x0a /* Public */,
       6,    0,   68,    2, 0x0a /* Public */,
       7,    0,   69,    2, 0x0a /* Public */,
       8,    1,   70,    2, 0x08 /* Private */,
      10,    1,   73,    2, 0x08 /* Private */,
      11,    0,   76,    2, 0x08 /* Private */,
      12,    2,   77,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 14,   13,   15,

       0        // eod
};

void SearchLineEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SearchLineEdit *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->searchStarted(); break;
        case 1: _t->searchStopped(); break;
        case 2: _t->restartSearch(); break;
        case 3: _t->stopSearch(); break;
        case 4: _t->findNext(); break;
        case 5: _t->findPrev(); break;
        case 6: _t->slotTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->slotReturnPressed((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->startSearch(); break;
        case 9: _t->searchFinished((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< Okular::Document::SearchStatus(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SearchLineEdit::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SearchLineEdit::searchStarted)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SearchLineEdit::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SearchLineEdit::searchStopped)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SearchLineEdit::staticMetaObject = { {
    QMetaObject::SuperData::link<KLineEdit::staticMetaObject>(),
    qt_meta_stringdata_SearchLineEdit.data,
    qt_meta_data_SearchLineEdit,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SearchLineEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SearchLineEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SearchLineEdit.stringdata0))
        return static_cast<void*>(this);
    return KLineEdit::qt_metacast(_clname);
}

int SearchLineEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KLineEdit::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void SearchLineEdit::searchStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void SearchLineEdit::searchStopped()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
struct qt_meta_stringdata_SearchLineWidget_t {
    QByteArrayData data[5];
    char stringdata0[67];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SearchLineWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SearchLineWidget_t qt_meta_stringdata_SearchLineWidget = {
    {
QT_MOC_LITERAL(0, 0, 16), // "SearchLineWidget"
QT_MOC_LITERAL(1, 17, 17), // "slotSearchStarted"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 17), // "slotSearchStopped"
QT_MOC_LITERAL(4, 54, 12) // "slotTimedout"

    },
    "SearchLineWidget\0slotSearchStarted\0\0"
    "slotSearchStopped\0slotTimedout"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SearchLineWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x08 /* Private */,
       3,    0,   30,    2, 0x08 /* Private */,
       4,    0,   31,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void SearchLineWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SearchLineWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotSearchStarted(); break;
        case 1: _t->slotSearchStopped(); break;
        case 2: _t->slotTimedout(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject SearchLineWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_SearchLineWidget.data,
    qt_meta_data_SearchLineWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SearchLineWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SearchLineWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SearchLineWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int SearchLineWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
