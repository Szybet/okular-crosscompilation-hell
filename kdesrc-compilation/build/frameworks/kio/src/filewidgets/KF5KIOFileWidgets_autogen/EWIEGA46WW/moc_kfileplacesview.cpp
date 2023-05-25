/****************************************************************************
** Meta object code from reading C++ file 'kfileplacesview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../frameworks/kio/src/filewidgets/kfileplacesview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kfileplacesview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KFilePlacesView_t {
    QByteArrayData data[36];
    char stringdata0[383];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KFilePlacesView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KFilePlacesView_t qt_meta_stringdata_KFilePlacesView = {
    {
QT_MOC_LITERAL(0, 0, 15), // "KFilePlacesView"
QT_MOC_LITERAL(1, 16, 14), // "placeActivated"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 3), // "url"
QT_MOC_LITERAL(4, 36, 12), // "tabRequested"
QT_MOC_LITERAL(5, 49, 18), // "activeTabRequested"
QT_MOC_LITERAL(6, 68, 18), // "newWindowRequested"
QT_MOC_LITERAL(7, 87, 22), // "contextMenuAboutToShow"
QT_MOC_LITERAL(8, 110, 11), // "QModelIndex"
QT_MOC_LITERAL(9, 122, 5), // "index"
QT_MOC_LITERAL(10, 128, 6), // "QMenu*"
QT_MOC_LITERAL(11, 135, 4), // "menu"
QT_MOC_LITERAL(12, 140, 21), // "allPlacesShownChanged"
QT_MOC_LITERAL(13, 162, 14), // "allPlacesShown"
QT_MOC_LITERAL(14, 177, 10), // "urlChanged"
QT_MOC_LITERAL(15, 188, 11), // "urlsDropped"
QT_MOC_LITERAL(16, 200, 4), // "dest"
QT_MOC_LITERAL(17, 205, 11), // "QDropEvent*"
QT_MOC_LITERAL(18, 217, 5), // "event"
QT_MOC_LITERAL(19, 223, 8), // "QWidget*"
QT_MOC_LITERAL(20, 232, 6), // "parent"
QT_MOC_LITERAL(21, 239, 6), // "setUrl"
QT_MOC_LITERAL(22, 246, 10), // "setShowAll"
QT_MOC_LITERAL(23, 257, 7), // "showAll"
QT_MOC_LITERAL(24, 265, 8), // "sizeHint"
QT_MOC_LITERAL(25, 274, 8), // "setModel"
QT_MOC_LITERAL(26, 283, 19), // "QAbstractItemModel*"
QT_MOC_LITERAL(27, 303, 5), // "model"
QT_MOC_LITERAL(28, 309, 12), // "rowsInserted"
QT_MOC_LITERAL(29, 322, 5), // "start"
QT_MOC_LITERAL(30, 328, 3), // "end"
QT_MOC_LITERAL(31, 332, 11), // "dataChanged"
QT_MOC_LITERAL(32, 344, 7), // "topLeft"
QT_MOC_LITERAL(33, 352, 11), // "bottomRight"
QT_MOC_LITERAL(34, 364, 12), // "QVector<int>"
QT_MOC_LITERAL(35, 377, 5) // "roles"

    },
    "KFilePlacesView\0placeActivated\0\0url\0"
    "tabRequested\0activeTabRequested\0"
    "newWindowRequested\0contextMenuAboutToShow\0"
    "QModelIndex\0index\0QMenu*\0menu\0"
    "allPlacesShownChanged\0allPlacesShown\0"
    "urlChanged\0urlsDropped\0dest\0QDropEvent*\0"
    "event\0QWidget*\0parent\0setUrl\0setShowAll\0"
    "showAll\0sizeHint\0setModel\0QAbstractItemModel*\0"
    "model\0rowsInserted\0start\0end\0dataChanged\0"
    "topLeft\0bottomRight\0QVector<int>\0roles"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KFilePlacesView[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   84,    2, 0x06 /* Public */,
       4,    1,   87,    2, 0x06 /* Public */,
       5,    1,   90,    2, 0x06 /* Public */,
       6,    1,   93,    2, 0x06 /* Public */,
       7,    2,   96,    2, 0x06 /* Public */,
      12,    1,  101,    2, 0x06 /* Public */,
      14,    1,  104,    2, 0x06 /* Public */,
      15,    3,  107,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      21,    1,  114,    2, 0x0a /* Public */,
      22,    1,  117,    2, 0x0a /* Public */,
      24,    0,  120,    2, 0x0a /* Public */,
      25,    1,  121,    2, 0x0a /* Public */,
      28,    3,  124,    2, 0x09 /* Protected */,
      31,    3,  131,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::QUrl,    3,
    QMetaType::Void, QMetaType::QUrl,    3,
    QMetaType::Void, QMetaType::QUrl,    3,
    QMetaType::Void, QMetaType::QUrl,    3,
    QMetaType::Void, 0x80000000 | 8, 0x80000000 | 10,    9,   11,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void, QMetaType::QUrl,    3,
    QMetaType::Void, QMetaType::QUrl, 0x80000000 | 17, 0x80000000 | 19,   16,   18,   20,

 // slots: parameters
    QMetaType::Void, QMetaType::QUrl,    3,
    QMetaType::Void, QMetaType::Bool,   23,
    QMetaType::QSize,
    QMetaType::Void, 0x80000000 | 26,   27,
    QMetaType::Void, 0x80000000 | 8, QMetaType::Int, QMetaType::Int,   20,   29,   30,
    QMetaType::Void, 0x80000000 | 8, 0x80000000 | 8, 0x80000000 | 34,   32,   33,   35,

       0        // eod
};

void KFilePlacesView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<KFilePlacesView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->placeActivated((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 1: _t->tabRequested((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 2: _t->activeTabRequested((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 3: _t->newWindowRequested((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 4: _t->contextMenuAboutToShow((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< QMenu*(*)>(_a[2]))); break;
        case 5: _t->allPlacesShownChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->urlChanged((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 7: _t->urlsDropped((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< QDropEvent*(*)>(_a[2])),(*reinterpret_cast< QWidget*(*)>(_a[3]))); break;
        case 8: _t->setUrl((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 9: _t->setShowAll((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: { QSize _r = _t->sizeHint();
            if (_a[0]) *reinterpret_cast< QSize*>(_a[0]) = std::move(_r); }  break;
        case 11: _t->setModel((*reinterpret_cast< QAbstractItemModel*(*)>(_a[1]))); break;
        case 12: _t->rowsInserted((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 13: _t->dataChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])),(*reinterpret_cast< const QVector<int>(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWidget* >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractItemModel* >(); break;
            }
            break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (KFilePlacesView::*)(const QUrl & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KFilePlacesView::placeActivated)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (KFilePlacesView::*)(const QUrl & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KFilePlacesView::tabRequested)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (KFilePlacesView::*)(const QUrl & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KFilePlacesView::activeTabRequested)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (KFilePlacesView::*)(const QUrl & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KFilePlacesView::newWindowRequested)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (KFilePlacesView::*)(const QModelIndex & , QMenu * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KFilePlacesView::contextMenuAboutToShow)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (KFilePlacesView::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KFilePlacesView::allPlacesShownChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (KFilePlacesView::*)(const QUrl & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KFilePlacesView::urlChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (KFilePlacesView::*)(const QUrl & , QDropEvent * , QWidget * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KFilePlacesView::urlsDropped)) {
                *result = 7;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject KFilePlacesView::staticMetaObject = { {
    QMetaObject::SuperData::link<QListView::staticMetaObject>(),
    qt_meta_stringdata_KFilePlacesView.data,
    qt_meta_data_KFilePlacesView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KFilePlacesView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KFilePlacesView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KFilePlacesView.stringdata0))
        return static_cast<void*>(this);
    return QListView::qt_metacast(_clname);
}

int KFilePlacesView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QListView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void KFilePlacesView::placeActivated(const QUrl & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void KFilePlacesView::tabRequested(const QUrl & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void KFilePlacesView::activeTabRequested(const QUrl & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void KFilePlacesView::newWindowRequested(const QUrl & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void KFilePlacesView::contextMenuAboutToShow(const QModelIndex & _t1, QMenu * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void KFilePlacesView::allPlacesShownChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void KFilePlacesView::urlChanged(const QUrl & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void KFilePlacesView::urlsDropped(const QUrl & _t1, QDropEvent * _t2, QWidget * _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
