/****************************************************************************
** Meta object code from reading C++ file 'columnview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../frameworks/kirigami/src/columnview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'columnview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ScrollIntentionEvent_t {
    QByteArrayData data[3];
    char stringdata0[36];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ScrollIntentionEvent_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ScrollIntentionEvent_t qt_meta_stringdata_ScrollIntentionEvent = {
    {
QT_MOC_LITERAL(0, 0, 20), // "ScrollIntentionEvent"
QT_MOC_LITERAL(1, 21, 5), // "delta"
QT_MOC_LITERAL(2, 27, 8) // "accepted"

    },
    "ScrollIntentionEvent\0delta\0accepted"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ScrollIntentionEvent[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       2,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QPointF, 0x00095401,
       2, QMetaType::Bool, 0x00095003,

       0        // eod
};

void ScrollIntentionEvent::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ScrollIntentionEvent *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QPointF*>(_v) = _t->delta; break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->accepted; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ScrollIntentionEvent *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 1:
            if (_t->accepted != *reinterpret_cast< bool*>(_v)) {
                _t->accepted = *reinterpret_cast< bool*>(_v);
            }
            break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject ScrollIntentionEvent::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ScrollIntentionEvent.data,
    qt_meta_data_ScrollIntentionEvent,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ScrollIntentionEvent::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ScrollIntentionEvent::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ScrollIntentionEvent.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ScrollIntentionEvent::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
struct qt_meta_stringdata_ColumnViewAttached_t {
    QByteArrayData data[20];
    char stringdata0[263];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ColumnViewAttached_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ColumnViewAttached_t qt_meta_stringdata_ColumnViewAttached = {
    {
QT_MOC_LITERAL(0, 0, 18), // "ColumnViewAttached"
QT_MOC_LITERAL(1, 19, 12), // "indexChanged"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 16), // "fillWidthChanged"
QT_MOC_LITERAL(4, 50, 20), // "reservedSpaceChanged"
QT_MOC_LITERAL(5, 71, 11), // "viewChanged"
QT_MOC_LITERAL(6, 83, 22), // "preventStealingChanged"
QT_MOC_LITERAL(7, 106, 13), // "pinnedChanged"
QT_MOC_LITERAL(8, 120, 15), // "scrollIntention"
QT_MOC_LITERAL(9, 136, 21), // "ScrollIntentionEvent*"
QT_MOC_LITERAL(10, 158, 5), // "event"
QT_MOC_LITERAL(11, 164, 17), // "inViewportChanged"
QT_MOC_LITERAL(12, 182, 5), // "index"
QT_MOC_LITERAL(13, 188, 9), // "fillWidth"
QT_MOC_LITERAL(14, 198, 13), // "reservedSpace"
QT_MOC_LITERAL(15, 212, 15), // "preventStealing"
QT_MOC_LITERAL(16, 228, 6), // "pinned"
QT_MOC_LITERAL(17, 235, 4), // "view"
QT_MOC_LITERAL(18, 240, 11), // "ColumnView*"
QT_MOC_LITERAL(19, 252, 10) // "inViewport"

    },
    "ColumnViewAttached\0indexChanged\0\0"
    "fillWidthChanged\0reservedSpaceChanged\0"
    "viewChanged\0preventStealingChanged\0"
    "pinnedChanged\0scrollIntention\0"
    "ScrollIntentionEvent*\0event\0"
    "inViewportChanged\0index\0fillWidth\0"
    "reservedSpace\0preventStealing\0pinned\0"
    "view\0ColumnView*\0inViewport"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ColumnViewAttached[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       7,   64, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,
       3,    0,   55,    2, 0x06 /* Public */,
       4,    0,   56,    2, 0x06 /* Public */,
       5,    0,   57,    2, 0x06 /* Public */,
       6,    0,   58,    2, 0x06 /* Public */,
       7,    0,   59,    2, 0x06 /* Public */,
       8,    1,   60,    2, 0x06 /* Public */,
      11,    0,   63,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void,

 // properties: name, type, flags
      12, QMetaType::Int, 0x00495103,
      13, QMetaType::Bool, 0x00495103,
      14, QMetaType::QReal, 0x00495103,
      15, QMetaType::Bool, 0x00495103,
      16, QMetaType::Bool, 0x00495103,
      17, 0x80000000 | 18, 0x00495009,
      19, QMetaType::Bool, 0x00495001,

 // properties: notify_signal_id
       0,
       1,
       2,
       4,
       5,
       3,
       7,

       0        // eod
};

void ColumnViewAttached::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ColumnViewAttached *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->indexChanged(); break;
        case 1: _t->fillWidthChanged(); break;
        case 2: _t->reservedSpaceChanged(); break;
        case 3: _t->viewChanged(); break;
        case 4: _t->preventStealingChanged(); break;
        case 5: _t->pinnedChanged(); break;
        case 6: _t->scrollIntention((*reinterpret_cast< ScrollIntentionEvent*(*)>(_a[1]))); break;
        case 7: _t->inViewportChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ScrollIntentionEvent* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ColumnViewAttached::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ColumnViewAttached::indexChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ColumnViewAttached::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ColumnViewAttached::fillWidthChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ColumnViewAttached::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ColumnViewAttached::reservedSpaceChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ColumnViewAttached::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ColumnViewAttached::viewChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ColumnViewAttached::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ColumnViewAttached::preventStealingChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (ColumnViewAttached::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ColumnViewAttached::pinnedChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (ColumnViewAttached::*)(ScrollIntentionEvent * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ColumnViewAttached::scrollIntention)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (ColumnViewAttached::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ColumnViewAttached::inViewportChanged)) {
                *result = 7;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 5:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ColumnView* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ColumnViewAttached *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->index(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->fillWidth(); break;
        case 2: *reinterpret_cast< qreal*>(_v) = _t->reservedSpace(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->preventStealing(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->isPinned(); break;
        case 5: *reinterpret_cast< ColumnView**>(_v) = _t->view(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->inViewport(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ColumnViewAttached *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setIndex(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setFillWidth(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setReservedSpace(*reinterpret_cast< qreal*>(_v)); break;
        case 3: _t->setPreventStealing(*reinterpret_cast< bool*>(_v)); break;
        case 4: _t->setPinned(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject ColumnViewAttached::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ColumnViewAttached.data,
    qt_meta_data_ColumnViewAttached,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ColumnViewAttached::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ColumnViewAttached::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ColumnViewAttached.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ColumnViewAttached::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 7;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void ColumnViewAttached::indexChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ColumnViewAttached::fillWidthChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void ColumnViewAttached::reservedSpaceChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void ColumnViewAttached::viewChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void ColumnViewAttached::preventStealingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void ColumnViewAttached::pinnedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void ColumnViewAttached::scrollIntention(ScrollIntentionEvent * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void ColumnViewAttached::inViewportChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}
struct qt_meta_stringdata_ColumnView_t {
    QByteArrayData data[69];
    char stringdata0[946];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ColumnView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ColumnView_t qt_meta_stringdata_ColumnView = {
    {
QT_MOC_LITERAL(0, 0, 10), // "ColumnView"
QT_MOC_LITERAL(1, 11, 15), // "DefaultProperty"
QT_MOC_LITERAL(2, 27, 11), // "contentData"
QT_MOC_LITERAL(3, 39, 12), // "itemInserted"
QT_MOC_LITERAL(4, 52, 0), // ""
QT_MOC_LITERAL(5, 53, 8), // "position"
QT_MOC_LITERAL(6, 62, 11), // "QQuickItem*"
QT_MOC_LITERAL(7, 74, 4), // "item"
QT_MOC_LITERAL(8, 79, 11), // "itemRemoved"
QT_MOC_LITERAL(9, 91, 22), // "contentChildrenChanged"
QT_MOC_LITERAL(10, 114, 23), // "columnResizeModeChanged"
QT_MOC_LITERAL(11, 138, 18), // "columnWidthChanged"
QT_MOC_LITERAL(12, 157, 19), // "currentIndexChanged"
QT_MOC_LITERAL(13, 177, 18), // "currentItemChanged"
QT_MOC_LITERAL(14, 196, 19), // "visibleItemsChanged"
QT_MOC_LITERAL(15, 216, 12), // "countChanged"
QT_MOC_LITERAL(16, 229, 15), // "draggingChanged"
QT_MOC_LITERAL(17, 245, 13), // "movingChanged"
QT_MOC_LITERAL(18, 259, 15), // "contentXChanged"
QT_MOC_LITERAL(19, 275, 19), // "contentWidthChanged"
QT_MOC_LITERAL(20, 295, 18), // "interactiveChanged"
QT_MOC_LITERAL(21, 314, 19), // "acceptsMouseChanged"
QT_MOC_LITERAL(22, 334, 21), // "scrollDurationChanged"
QT_MOC_LITERAL(23, 356, 23), // "separatorVisibleChanged"
QT_MOC_LITERAL(24, 380, 23), // "firstVisibleItemChanged"
QT_MOC_LITERAL(25, 404, 22), // "lastVisibleItemChanged"
QT_MOC_LITERAL(26, 427, 17), // "topPaddingChanged"
QT_MOC_LITERAL(27, 445, 20), // "bottomPaddingChanged"
QT_MOC_LITERAL(28, 466, 7), // "addItem"
QT_MOC_LITERAL(29, 474, 10), // "insertItem"
QT_MOC_LITERAL(30, 485, 3), // "pos"
QT_MOC_LITERAL(31, 489, 11), // "replaceItem"
QT_MOC_LITERAL(32, 501, 8), // "moveItem"
QT_MOC_LITERAL(33, 510, 4), // "from"
QT_MOC_LITERAL(34, 515, 2), // "to"
QT_MOC_LITERAL(35, 518, 10), // "removeItem"
QT_MOC_LITERAL(36, 529, 3), // "pop"
QT_MOC_LITERAL(37, 533, 5), // "clear"
QT_MOC_LITERAL(38, 539, 12), // "containsItem"
QT_MOC_LITERAL(39, 552, 6), // "itemAt"
QT_MOC_LITERAL(40, 559, 1), // "x"
QT_MOC_LITERAL(41, 561, 1), // "y"
QT_MOC_LITERAL(42, 563, 16), // "columnResizeMode"
QT_MOC_LITERAL(43, 580, 16), // "ColumnResizeMode"
QT_MOC_LITERAL(44, 597, 11), // "columnWidth"
QT_MOC_LITERAL(45, 609, 5), // "count"
QT_MOC_LITERAL(46, 615, 12), // "currentIndex"
QT_MOC_LITERAL(47, 628, 11), // "currentItem"
QT_MOC_LITERAL(48, 640, 11), // "contentItem"
QT_MOC_LITERAL(49, 652, 8), // "contentX"
QT_MOC_LITERAL(50, 661, 12), // "contentWidth"
QT_MOC_LITERAL(51, 674, 10), // "topPadding"
QT_MOC_LITERAL(52, 685, 13), // "bottomPadding"
QT_MOC_LITERAL(53, 699, 14), // "scrollDuration"
QT_MOC_LITERAL(54, 714, 16), // "separatorVisible"
QT_MOC_LITERAL(55, 731, 12), // "visibleItems"
QT_MOC_LITERAL(56, 744, 15), // "QList<QObject*>"
QT_MOC_LITERAL(57, 760, 16), // "firstVisibleItem"
QT_MOC_LITERAL(58, 777, 15), // "lastVisibleItem"
QT_MOC_LITERAL(59, 793, 8), // "dragging"
QT_MOC_LITERAL(60, 802, 6), // "moving"
QT_MOC_LITERAL(61, 809, 11), // "interactive"
QT_MOC_LITERAL(62, 821, 12), // "acceptsMouse"
QT_MOC_LITERAL(63, 834, 15), // "contentChildren"
QT_MOC_LITERAL(64, 850, 28), // "QQmlListProperty<QQuickItem>"
QT_MOC_LITERAL(65, 879, 25), // "QQmlListProperty<QObject>"
QT_MOC_LITERAL(66, 905, 12), // "FixedColumns"
QT_MOC_LITERAL(67, 918, 14), // "DynamicColumns"
QT_MOC_LITERAL(68, 933, 12) // "SingleColumn"

    },
    "ColumnView\0DefaultProperty\0contentData\0"
    "itemInserted\0\0position\0QQuickItem*\0"
    "item\0itemRemoved\0contentChildrenChanged\0"
    "columnResizeModeChanged\0columnWidthChanged\0"
    "currentIndexChanged\0currentItemChanged\0"
    "visibleItemsChanged\0countChanged\0"
    "draggingChanged\0movingChanged\0"
    "contentXChanged\0contentWidthChanged\0"
    "interactiveChanged\0acceptsMouseChanged\0"
    "scrollDurationChanged\0separatorVisibleChanged\0"
    "firstVisibleItemChanged\0lastVisibleItemChanged\0"
    "topPaddingChanged\0bottomPaddingChanged\0"
    "addItem\0insertItem\0pos\0replaceItem\0"
    "moveItem\0from\0to\0removeItem\0pop\0clear\0"
    "containsItem\0itemAt\0x\0y\0columnResizeMode\0"
    "ColumnResizeMode\0columnWidth\0count\0"
    "currentIndex\0currentItem\0contentItem\0"
    "contentX\0contentWidth\0topPadding\0"
    "bottomPadding\0scrollDuration\0"
    "separatorVisible\0visibleItems\0"
    "QList<QObject*>\0firstVisibleItem\0"
    "lastVisibleItem\0dragging\0moving\0"
    "interactive\0acceptsMouse\0contentChildren\0"
    "QQmlListProperty<QQuickItem>\0"
    "QQmlListProperty<QObject>\0FixedColumns\0"
    "DynamicColumns\0SingleColumn"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ColumnView[] = {

 // content:
       8,       // revision
       0,       // classname
       1,   14, // classinfo
      30,   16, // methods
      21,  226, // properties
       1,  310, // enums/sets
       0,    0, // constructors
       0,       // flags
      21,       // signalCount

 // classinfo: key, value
       1,    2,

 // signals: name, argc, parameters, tag, flags
       3,    2,  166,    4, 0x06 /* Public */,
       8,    1,  171,    4, 0x06 /* Public */,
       9,    0,  174,    4, 0x06 /* Public */,
      10,    0,  175,    4, 0x06 /* Public */,
      11,    0,  176,    4, 0x06 /* Public */,
      12,    0,  177,    4, 0x06 /* Public */,
      13,    0,  178,    4, 0x06 /* Public */,
      14,    0,  179,    4, 0x06 /* Public */,
      15,    0,  180,    4, 0x06 /* Public */,
      16,    0,  181,    4, 0x06 /* Public */,
      17,    0,  182,    4, 0x06 /* Public */,
      18,    0,  183,    4, 0x06 /* Public */,
      19,    0,  184,    4, 0x06 /* Public */,
      20,    0,  185,    4, 0x06 /* Public */,
      21,    0,  186,    4, 0x06 /* Public */,
      22,    0,  187,    4, 0x06 /* Public */,
      23,    0,  188,    4, 0x06 /* Public */,
      24,    0,  189,    4, 0x06 /* Public */,
      25,    0,  190,    4, 0x06 /* Public */,
      26,    0,  191,    4, 0x06 /* Public */,
      27,    0,  192,    4, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      28,    1,  193,    4, 0x0a /* Public */,
      29,    2,  196,    4, 0x0a /* Public */,
      31,    2,  201,    4, 0x0a /* Public */,
      32,    2,  206,    4, 0x0a /* Public */,
      35,    1,  211,    4, 0x0a /* Public */,
      36,    1,  214,    4, 0x0a /* Public */,
      37,    0,  217,    4, 0x0a /* Public */,
      38,    1,  218,    4, 0x0a /* Public */,
      39,    2,  221,    4, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, 0x80000000 | 6,    5,    7,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 6,   30,    7,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 6,   30,    7,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   33,   34,
    0x80000000 | 6, QMetaType::QVariant,    7,
    0x80000000 | 6, 0x80000000 | 6,    7,
    QMetaType::Void,
    QMetaType::Bool, 0x80000000 | 6,    7,
    0x80000000 | 6, QMetaType::QReal, QMetaType::QReal,   40,   41,

 // properties: name, type, flags
      42, 0x80000000 | 43, 0x0049510b,
      44, QMetaType::QReal, 0x00495103,
      45, QMetaType::Int, 0x00495001,
      46, QMetaType::Int, 0x00495103,
      47, 0x80000000 | 6, 0x00495009,
      48, 0x80000000 | 6, 0x00095409,
      49, QMetaType::QReal, 0x00495103,
      50, QMetaType::QReal, 0x00495001,
      51, QMetaType::QReal, 0x00495103,
      52, QMetaType::QReal, 0x00495103,
      53, QMetaType::Int, 0x00495103,
      54, QMetaType::Bool, 0x00495103,
      55, 0x80000000 | 56, 0x00495009,
      57, 0x80000000 | 6, 0x00495009,
      58, 0x80000000 | 6, 0x00495009,
      59, QMetaType::Bool, 0x00495001,
      60, QMetaType::Bool, 0x00495001,
      61, QMetaType::Bool, 0x00495103,
      62, QMetaType::Bool, 0x00495103,
      63, 0x80000000 | 64, 0x00495809,
       2, 0x80000000 | 65, 0x00095809,

 // properties: notify_signal_id
       3,
       4,
       8,
       5,
       6,
       0,
      11,
      12,
      19,
      20,
      15,
      16,
       7,
      17,
      18,
       9,
      10,
      13,
      14,
       2,
       0,

 // enums: name, alias, flags, count, data
      43,   43, 0x0,    3,  315,

 // enum data: key, value
      66, uint(ColumnView::FixedColumns),
      67, uint(ColumnView::DynamicColumns),
      68, uint(ColumnView::SingleColumn),

       0        // eod
};

void ColumnView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ColumnView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->itemInserted((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QQuickItem*(*)>(_a[2]))); break;
        case 1: _t->itemRemoved((*reinterpret_cast< QQuickItem*(*)>(_a[1]))); break;
        case 2: _t->contentChildrenChanged(); break;
        case 3: _t->columnResizeModeChanged(); break;
        case 4: _t->columnWidthChanged(); break;
        case 5: _t->currentIndexChanged(); break;
        case 6: _t->currentItemChanged(); break;
        case 7: _t->visibleItemsChanged(); break;
        case 8: _t->countChanged(); break;
        case 9: _t->draggingChanged(); break;
        case 10: _t->movingChanged(); break;
        case 11: _t->contentXChanged(); break;
        case 12: _t->contentWidthChanged(); break;
        case 13: _t->interactiveChanged(); break;
        case 14: _t->acceptsMouseChanged(); break;
        case 15: _t->scrollDurationChanged(); break;
        case 16: _t->separatorVisibleChanged(); break;
        case 17: _t->firstVisibleItemChanged(); break;
        case 18: _t->lastVisibleItemChanged(); break;
        case 19: _t->topPaddingChanged(); break;
        case 20: _t->bottomPaddingChanged(); break;
        case 21: _t->addItem((*reinterpret_cast< QQuickItem*(*)>(_a[1]))); break;
        case 22: _t->insertItem((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QQuickItem*(*)>(_a[2]))); break;
        case 23: _t->replaceItem((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QQuickItem*(*)>(_a[2]))); break;
        case 24: _t->moveItem((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 25: { QQuickItem* _r = _t->removeItem((*reinterpret_cast< const QVariant(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QQuickItem**>(_a[0]) = std::move(_r); }  break;
        case 26: { QQuickItem* _r = _t->pop((*reinterpret_cast< QQuickItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QQuickItem**>(_a[0]) = std::move(_r); }  break;
        case 27: _t->clear(); break;
        case 28: { bool _r = _t->containsItem((*reinterpret_cast< QQuickItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 29: { QQuickItem* _r = _t->itemAt((*reinterpret_cast< qreal(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QQuickItem**>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQuickItem* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQuickItem* >(); break;
            }
            break;
        case 21:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQuickItem* >(); break;
            }
            break;
        case 22:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQuickItem* >(); break;
            }
            break;
        case 23:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQuickItem* >(); break;
            }
            break;
        case 26:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQuickItem* >(); break;
            }
            break;
        case 28:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQuickItem* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ColumnView::*)(int , QQuickItem * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ColumnView::itemInserted)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ColumnView::*)(QQuickItem * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ColumnView::itemRemoved)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ColumnView::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ColumnView::contentChildrenChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ColumnView::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ColumnView::columnResizeModeChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ColumnView::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ColumnView::columnWidthChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (ColumnView::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ColumnView::currentIndexChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (ColumnView::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ColumnView::currentItemChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (ColumnView::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ColumnView::visibleItemsChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (ColumnView::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ColumnView::countChanged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (ColumnView::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ColumnView::draggingChanged)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (ColumnView::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ColumnView::movingChanged)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (ColumnView::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ColumnView::contentXChanged)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (ColumnView::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ColumnView::contentWidthChanged)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (ColumnView::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ColumnView::interactiveChanged)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (ColumnView::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ColumnView::acceptsMouseChanged)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (ColumnView::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ColumnView::scrollDurationChanged)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (ColumnView::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ColumnView::separatorVisibleChanged)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (ColumnView::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ColumnView::firstVisibleItemChanged)) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (ColumnView::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ColumnView::lastVisibleItemChanged)) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (ColumnView::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ColumnView::topPaddingChanged)) {
                *result = 19;
                return;
            }
        }
        {
            using _t = void (ColumnView::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ColumnView::bottomPaddingChanged)) {
                *result = 20;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 12:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QObject*> >(); break;
        case 20:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQmlListProperty<QObject> >(); break;
        case 19:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQmlListProperty<QQuickItem> >(); break;
        case 14:
        case 13:
        case 5:
        case 4:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQuickItem* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ColumnView *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< ColumnResizeMode*>(_v) = _t->columnResizeMode(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = _t->columnWidth(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->count(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->currentIndex(); break;
        case 4: *reinterpret_cast< QQuickItem**>(_v) = _t->currentItem(); break;
        case 5: *reinterpret_cast< QQuickItem**>(_v) = _t->contentItem(); break;
        case 6: *reinterpret_cast< qreal*>(_v) = _t->contentX(); break;
        case 7: *reinterpret_cast< qreal*>(_v) = _t->contentWidth(); break;
        case 8: *reinterpret_cast< qreal*>(_v) = _t->topPadding(); break;
        case 9: *reinterpret_cast< qreal*>(_v) = _t->bottomPadding(); break;
        case 10: *reinterpret_cast< int*>(_v) = _t->scrollDuration(); break;
        case 11: *reinterpret_cast< bool*>(_v) = _t->separatorVisible(); break;
        case 12: *reinterpret_cast< QList<QObject*>*>(_v) = _t->visibleItems(); break;
        case 13: *reinterpret_cast< QQuickItem**>(_v) = _t->firstVisibleItem(); break;
        case 14: *reinterpret_cast< QQuickItem**>(_v) = _t->lastVisibleItem(); break;
        case 15: *reinterpret_cast< bool*>(_v) = _t->dragging(); break;
        case 16: *reinterpret_cast< bool*>(_v) = _t->moving(); break;
        case 17: *reinterpret_cast< bool*>(_v) = _t->interactive(); break;
        case 18: *reinterpret_cast< bool*>(_v) = _t->acceptsMouse(); break;
        case 19: *reinterpret_cast< QQmlListProperty<QQuickItem>*>(_v) = _t->contentChildren(); break;
        case 20: *reinterpret_cast< QQmlListProperty<QObject>*>(_v) = _t->contentData(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ColumnView *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setColumnResizeMode(*reinterpret_cast< ColumnResizeMode*>(_v)); break;
        case 1: _t->setColumnWidth(*reinterpret_cast< qreal*>(_v)); break;
        case 3: _t->setCurrentIndex(*reinterpret_cast< int*>(_v)); break;
        case 6: _t->setContentX(*reinterpret_cast< qreal*>(_v)); break;
        case 8: _t->setTopPadding(*reinterpret_cast< qreal*>(_v)); break;
        case 9: _t->setBottomPadding(*reinterpret_cast< qreal*>(_v)); break;
        case 10: _t->setScrollDuration(*reinterpret_cast< int*>(_v)); break;
        case 11: _t->setSeparatorVisible(*reinterpret_cast< bool*>(_v)); break;
        case 17: _t->setInteractive(*reinterpret_cast< bool*>(_v)); break;
        case 18: _t->setAcceptsMouse(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject ColumnView::staticMetaObject = { {
    QMetaObject::SuperData::link<QQuickItem::staticMetaObject>(),
    qt_meta_stringdata_ColumnView.data,
    qt_meta_data_ColumnView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ColumnView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ColumnView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ColumnView.stringdata0))
        return static_cast<void*>(this);
    return QQuickItem::qt_metacast(_clname);
}

int ColumnView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 30)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 30;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 30)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 30;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 21;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 21;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 21;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 21;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 21;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void ColumnView::itemInserted(int _t1, QQuickItem * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ColumnView::itemRemoved(QQuickItem * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ColumnView::contentChildrenChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void ColumnView::columnResizeModeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void ColumnView::columnWidthChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void ColumnView::currentIndexChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void ColumnView::currentItemChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void ColumnView::visibleItemsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void ColumnView::countChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void ColumnView::draggingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void ColumnView::movingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void ColumnView::contentXChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void ColumnView::contentWidthChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void ColumnView::interactiveChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 13, nullptr);
}

// SIGNAL 14
void ColumnView::acceptsMouseChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 14, nullptr);
}

// SIGNAL 15
void ColumnView::scrollDurationChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 15, nullptr);
}

// SIGNAL 16
void ColumnView::separatorVisibleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 16, nullptr);
}

// SIGNAL 17
void ColumnView::firstVisibleItemChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 17, nullptr);
}

// SIGNAL 18
void ColumnView::lastVisibleItemChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 18, nullptr);
}

// SIGNAL 19
void ColumnView::topPaddingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 19, nullptr);
}

// SIGNAL 20
void ColumnView::bottomPaddingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 20, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
