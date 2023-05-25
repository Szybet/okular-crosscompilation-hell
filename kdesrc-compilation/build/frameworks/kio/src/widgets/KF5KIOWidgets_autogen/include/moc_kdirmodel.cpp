/****************************************************************************
** Meta object code from reading C++ file 'kdirmodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../frameworks/kio/src/widgets/kdirmodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kdirmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KDirModel_t {
    QByteArrayData data[29];
    char stringdata0[329];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KDirModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KDirModel_t qt_meta_stringdata_KDirModel = {
    {
QT_MOC_LITERAL(0, 0, 9), // "KDirModel"
QT_MOC_LITERAL(1, 10, 6), // "expand"
QT_MOC_LITERAL(2, 17, 0), // ""
QT_MOC_LITERAL(3, 18, 11), // "QModelIndex"
QT_MOC_LITERAL(4, 30, 5), // "index"
QT_MOC_LITERAL(5, 36, 16), // "needSequenceIcon"
QT_MOC_LITERAL(6, 53, 13), // "sequenceIndex"
QT_MOC_LITERAL(7, 67, 7), // "openUrl"
QT_MOC_LITERAL(8, 75, 3), // "url"
QT_MOC_LITERAL(9, 79, 12), // "OpenUrlFlags"
QT_MOC_LITERAL(10, 92, 5), // "flags"
QT_MOC_LITERAL(11, 98, 12), // "indexForItem"
QT_MOC_LITERAL(12, 111, 9), // "KFileItem"
QT_MOC_LITERAL(13, 121, 11), // "indexForUrl"
QT_MOC_LITERAL(14, 133, 11), // "expandToUrl"
QT_MOC_LITERAL(15, 145, 11), // "itemChanged"
QT_MOC_LITERAL(16, 157, 16), // "clearAllPreviews"
QT_MOC_LITERAL(17, 174, 15), // "setDropsAllowed"
QT_MOC_LITERAL(18, 190, 12), // "DropsAllowed"
QT_MOC_LITERAL(19, 203, 12), // "dropsAllowed"
QT_MOC_LITERAL(20, 216, 11), // "OpenUrlFlag"
QT_MOC_LITERAL(21, 228, 7), // "NoFlags"
QT_MOC_LITERAL(22, 236, 6), // "Reload"
QT_MOC_LITERAL(23, 243, 8), // "ShowRoot"
QT_MOC_LITERAL(24, 252, 16), // "DropsAllowedFlag"
QT_MOC_LITERAL(25, 269, 7), // "NoDrops"
QT_MOC_LITERAL(26, 277, 15), // "DropOnDirectory"
QT_MOC_LITERAL(27, 293, 13), // "DropOnAnyFile"
QT_MOC_LITERAL(28, 307, 21) // "DropOnLocalExecutable"

    },
    "KDirModel\0expand\0\0QModelIndex\0index\0"
    "needSequenceIcon\0sequenceIndex\0openUrl\0"
    "url\0OpenUrlFlags\0flags\0indexForItem\0"
    "KFileItem\0indexForUrl\0expandToUrl\0"
    "itemChanged\0clearAllPreviews\0"
    "setDropsAllowed\0DropsAllowed\0dropsAllowed\0"
    "OpenUrlFlag\0NoFlags\0Reload\0ShowRoot\0"
    "DropsAllowedFlag\0NoDrops\0DropOnDirectory\0"
    "DropOnAnyFile\0DropOnLocalExecutable"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KDirModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       2,   96, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,
       5,    2,   67,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       7,    2,   72,    2, 0x02 /* Public */,
       7,    1,   77,    2, 0x22 /* Public | MethodCloned */,
      11,    1,   80,    2, 0x02 /* Public */,
      13,    1,   83,    2, 0x02 /* Public */,
      14,    1,   86,    2, 0x02 /* Public */,
      15,    1,   89,    2, 0x02 /* Public */,
      16,    0,   92,    2, 0x02 /* Public */,
      17,    1,   93,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,    4,    6,

 // methods: parameters
    QMetaType::Void, QMetaType::QUrl, 0x80000000 | 9,    8,   10,
    QMetaType::Void, QMetaType::QUrl,    8,
    0x80000000 | 3, 0x80000000 | 12,    2,
    0x80000000 | 3, QMetaType::QUrl,    8,
    QMetaType::Void, QMetaType::QUrl,    8,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 18,   19,

 // enums: name, alias, flags, count, data
       9,   20, 0x1,    3,  106,
      18,   24, 0x1,    4,  112,

 // enum data: key, value
      21, uint(KDirModel::NoFlags),
      22, uint(KDirModel::Reload),
      23, uint(KDirModel::ShowRoot),
      25, uint(KDirModel::NoDrops),
      26, uint(KDirModel::DropOnDirectory),
      27, uint(KDirModel::DropOnAnyFile),
      28, uint(KDirModel::DropOnLocalExecutable),

       0        // eod
};

void KDirModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<KDirModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->expand((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 1: _t->needSequenceIcon((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->openUrl((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< OpenUrlFlags(*)>(_a[2]))); break;
        case 3: _t->openUrl((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 4: { QModelIndex _r = _t->indexForItem((*reinterpret_cast< const KFileItem(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QModelIndex*>(_a[0]) = std::move(_r); }  break;
        case 5: { QModelIndex _r = _t->indexForUrl((*reinterpret_cast< const QUrl(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QModelIndex*>(_a[0]) = std::move(_r); }  break;
        case 6: _t->expandToUrl((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 7: _t->itemChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 8: _t->clearAllPreviews(); break;
        case 9: _t->setDropsAllowed((*reinterpret_cast< DropsAllowed(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KFileItem >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (KDirModel::*)(const QModelIndex & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KDirModel::expand)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (KDirModel::*)(const QModelIndex & , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KDirModel::needSequenceIcon)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject KDirModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractItemModel::staticMetaObject>(),
    qt_meta_stringdata_KDirModel.data,
    qt_meta_data_KDirModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KDirModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KDirModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KDirModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractItemModel::qt_metacast(_clname);
}

int KDirModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractItemModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void KDirModel::expand(const QModelIndex & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void KDirModel::needSequenceIcon(const QModelIndex & _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
