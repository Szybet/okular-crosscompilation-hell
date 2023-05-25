/****************************************************************************
** Meta object code from reading C++ file 'kfileitemdelegate.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../frameworks/kio/src/widgets/kfileitemdelegate.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kfileitemdelegate.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KFileItemDelegate_t {
    QByteArrayData data[35];
    char stringdata0[420];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KFileItemDelegate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KFileItemDelegate_t qt_meta_stringdata_KFileItemDelegate = {
    {
QT_MOC_LITERAL(0, 0, 17), // "KFileItemDelegate"
QT_MOC_LITERAL(1, 18, 9), // "helpEvent"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 11), // "QHelpEvent*"
QT_MOC_LITERAL(4, 41, 5), // "event"
QT_MOC_LITERAL(5, 47, 18), // "QAbstractItemView*"
QT_MOC_LITERAL(6, 66, 4), // "view"
QT_MOC_LITERAL(7, 71, 20), // "QStyleOptionViewItem"
QT_MOC_LITERAL(8, 92, 6), // "option"
QT_MOC_LITERAL(9, 99, 11), // "QModelIndex"
QT_MOC_LITERAL(10, 111, 5), // "index"
QT_MOC_LITERAL(11, 117, 5), // "shape"
QT_MOC_LITERAL(12, 123, 11), // "information"
QT_MOC_LITERAL(13, 135, 15), // "InformationList"
QT_MOC_LITERAL(14, 151, 11), // "shadowColor"
QT_MOC_LITERAL(15, 163, 12), // "shadowOffset"
QT_MOC_LITERAL(16, 176, 10), // "shadowBlur"
QT_MOC_LITERAL(17, 187, 11), // "maximumSize"
QT_MOC_LITERAL(18, 199, 21), // "showToolTipWhenElided"
QT_MOC_LITERAL(19, 221, 19), // "jobTransfersVisible"
QT_MOC_LITERAL(20, 241, 11), // "Information"
QT_MOC_LITERAL(21, 253, 13), // "NoInformation"
QT_MOC_LITERAL(22, 267, 4), // "Size"
QT_MOC_LITERAL(23, 272, 11), // "Permissions"
QT_MOC_LITERAL(24, 284, 16), // "OctalPermissions"
QT_MOC_LITERAL(25, 301, 5), // "Owner"
QT_MOC_LITERAL(26, 307, 13), // "OwnerAndGroup"
QT_MOC_LITERAL(27, 321, 12), // "CreationTime"
QT_MOC_LITERAL(28, 334, 16), // "ModificationTime"
QT_MOC_LITERAL(29, 351, 10), // "AccessTime"
QT_MOC_LITERAL(30, 362, 8), // "MimeType"
QT_MOC_LITERAL(31, 371, 16), // "FriendlyMimeType"
QT_MOC_LITERAL(32, 388, 8), // "LinkDest"
QT_MOC_LITERAL(33, 397, 14), // "LocalPathOrUrl"
QT_MOC_LITERAL(34, 412, 7) // "Comment"

    },
    "KFileItemDelegate\0helpEvent\0\0QHelpEvent*\0"
    "event\0QAbstractItemView*\0view\0"
    "QStyleOptionViewItem\0option\0QModelIndex\0"
    "index\0shape\0information\0InformationList\0"
    "shadowColor\0shadowOffset\0shadowBlur\0"
    "maximumSize\0showToolTipWhenElided\0"
    "jobTransfersVisible\0Information\0"
    "NoInformation\0Size\0Permissions\0"
    "OctalPermissions\0Owner\0OwnerAndGroup\0"
    "CreationTime\0ModificationTime\0AccessTime\0"
    "MimeType\0FriendlyMimeType\0LinkDest\0"
    "LocalPathOrUrl\0Comment"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KFileItemDelegate[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       7,   38, // properties
       1,   59, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    4,   24,    2, 0x0a /* Public */,
      11,    2,   33,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Bool, 0x80000000 | 3, 0x80000000 | 5, 0x80000000 | 7, 0x80000000 | 9,    4,    6,    8,   10,
    QMetaType::QRegion, 0x80000000 | 7, 0x80000000 | 9,    8,   10,

 // properties: name, type, flags
      12, 0x80000000 | 13, 0x0009500b,
      14, QMetaType::QColor, 0x00095103,
      15, QMetaType::QPointF, 0x00095103,
      16, QMetaType::QReal, 0x00095103,
      17, QMetaType::QSize, 0x00095103,
      18, QMetaType::Bool, 0x00095103,
      19, QMetaType::Bool, 0x00095103,

 // enums: name, alias, flags, count, data
      20,   20, 0x0,   14,   64,

 // enum data: key, value
      21, uint(KFileItemDelegate::NoInformation),
      22, uint(KFileItemDelegate::Size),
      23, uint(KFileItemDelegate::Permissions),
      24, uint(KFileItemDelegate::OctalPermissions),
      25, uint(KFileItemDelegate::Owner),
      26, uint(KFileItemDelegate::OwnerAndGroup),
      27, uint(KFileItemDelegate::CreationTime),
      28, uint(KFileItemDelegate::ModificationTime),
      29, uint(KFileItemDelegate::AccessTime),
      30, uint(KFileItemDelegate::MimeType),
      31, uint(KFileItemDelegate::FriendlyMimeType),
      32, uint(KFileItemDelegate::LinkDest),
      33, uint(KFileItemDelegate::LocalPathOrUrl),
      34, uint(KFileItemDelegate::Comment),

       0        // eod
};

void KFileItemDelegate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<KFileItemDelegate *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { bool _r = _t->helpEvent((*reinterpret_cast< QHelpEvent*(*)>(_a[1])),(*reinterpret_cast< QAbstractItemView*(*)>(_a[2])),(*reinterpret_cast< const QStyleOptionViewItem(*)>(_a[3])),(*reinterpret_cast< const QModelIndex(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 1: { QRegion _r = _t->shape((*reinterpret_cast< const QStyleOptionViewItem(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QRegion*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<KFileItemDelegate *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< InformationList*>(_v) = _t->showInformation(); break;
        case 1: *reinterpret_cast< QColor*>(_v) = _t->shadowColor(); break;
        case 2: *reinterpret_cast< QPointF*>(_v) = _t->shadowOffset(); break;
        case 3: *reinterpret_cast< qreal*>(_v) = _t->shadowBlur(); break;
        case 4: *reinterpret_cast< QSize*>(_v) = _t->maximumSize(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->showToolTipWhenElided(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->jobTransfersVisible(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<KFileItemDelegate *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setShowInformation(*reinterpret_cast< InformationList*>(_v)); break;
        case 1: _t->setShadowColor(*reinterpret_cast< QColor*>(_v)); break;
        case 2: _t->setShadowOffset(*reinterpret_cast< QPointF*>(_v)); break;
        case 3: _t->setShadowBlur(*reinterpret_cast< qreal*>(_v)); break;
        case 4: _t->setMaximumSize(*reinterpret_cast< QSize*>(_v)); break;
        case 5: _t->setShowToolTipWhenElided(*reinterpret_cast< bool*>(_v)); break;
        case 6: _t->setJobTransfersVisible(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject KFileItemDelegate::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractItemDelegate::staticMetaObject>(),
    qt_meta_stringdata_KFileItemDelegate.data,
    qt_meta_data_KFileItemDelegate,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KFileItemDelegate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KFileItemDelegate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KFileItemDelegate.stringdata0))
        return static_cast<void*>(this);
    return QAbstractItemDelegate::qt_metacast(_clname);
}

int KFileItemDelegate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractItemDelegate::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
