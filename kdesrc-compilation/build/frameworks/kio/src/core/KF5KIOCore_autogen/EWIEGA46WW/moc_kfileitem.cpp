/****************************************************************************
** Meta object code from reading C++ file 'kfileitem.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../frameworks/kio/src/core/kfileitem.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kfileitem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KFileItem_t {
    QByteArrayData data[41];
    char stringdata0[451];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KFileItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KFileItem_t qt_meta_stringdata_KFileItem = {
    {
QT_MOC_LITERAL(0, 0, 9), // "KFileItem"
QT_MOC_LITERAL(1, 10, 4), // "time"
QT_MOC_LITERAL(2, 15, 0), // ""
QT_MOC_LITERAL(3, 16, 9), // "FileTimes"
QT_MOC_LITERAL(4, 26, 5), // "which"
QT_MOC_LITERAL(5, 32, 10), // "timeString"
QT_MOC_LITERAL(6, 43, 3), // "url"
QT_MOC_LITERAL(7, 47, 4), // "user"
QT_MOC_LITERAL(8, 52, 5), // "group"
QT_MOC_LITERAL(9, 58, 6), // "isLink"
QT_MOC_LITERAL(10, 65, 5), // "isDir"
QT_MOC_LITERAL(11, 71, 6), // "isFile"
QT_MOC_LITERAL(12, 78, 10), // "isReadable"
QT_MOC_LITERAL(13, 89, 10), // "isWritable"
QT_MOC_LITERAL(14, 100, 8), // "isHidden"
QT_MOC_LITERAL(15, 109, 6), // "isSlow"
QT_MOC_LITERAL(16, 116, 13), // "isDesktopFile"
QT_MOC_LITERAL(17, 130, 8), // "linkDest"
QT_MOC_LITERAL(18, 139, 9), // "targetUrl"
QT_MOC_LITERAL(19, 149, 9), // "localPath"
QT_MOC_LITERAL(20, 159, 11), // "isLocalFile"
QT_MOC_LITERAL(21, 171, 4), // "text"
QT_MOC_LITERAL(22, 176, 4), // "name"
QT_MOC_LITERAL(23, 181, 8), // "mimetype"
QT_MOC_LITERAL(24, 190, 17), // "determineMimeType"
QT_MOC_LITERAL(25, 208, 9), // "QMimeType"
QT_MOC_LITERAL(26, 218, 15), // "currentMimeType"
QT_MOC_LITERAL(27, 234, 16), // "isFinalIconKnown"
QT_MOC_LITERAL(28, 251, 15), // "isMimeTypeKnown"
QT_MOC_LITERAL(29, 267, 11), // "mimeComment"
QT_MOC_LITERAL(30, 279, 8), // "iconName"
QT_MOC_LITERAL(31, 288, 8), // "overlays"
QT_MOC_LITERAL(32, 297, 7), // "comment"
QT_MOC_LITERAL(33, 305, 16), // "getStatusBarInfo"
QT_MOC_LITERAL(34, 322, 13), // "isRegularFile"
QT_MOC_LITERAL(35, 336, 16), // "ModificationTime"
QT_MOC_LITERAL(36, 353, 10), // "AccessTime"
QT_MOC_LITERAL(37, 364, 12), // "CreationTime"
QT_MOC_LITERAL(38, 377, 21), // "MimeTypeDetermination"
QT_MOC_LITERAL(39, 399, 27), // "NormalMimeTypeDetermination"
QT_MOC_LITERAL(40, 427, 23) // "SkipMimeTypeFromContent"

    },
    "KFileItem\0time\0\0FileTimes\0which\0"
    "timeString\0url\0user\0group\0isLink\0isDir\0"
    "isFile\0isReadable\0isWritable\0isHidden\0"
    "isSlow\0isDesktopFile\0linkDest\0targetUrl\0"
    "localPath\0isLocalFile\0text\0name\0"
    "mimetype\0determineMimeType\0QMimeType\0"
    "currentMimeType\0isFinalIconKnown\0"
    "isMimeTypeKnown\0mimeComment\0iconName\0"
    "overlays\0comment\0getStatusBarInfo\0"
    "isRegularFile\0ModificationTime\0"
    "AccessTime\0CreationTime\0MimeTypeDetermination\0"
    "NormalMimeTypeDetermination\0"
    "SkipMimeTypeFromContent"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KFileItem[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
      28,   36, // properties
       2,  120, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x02 /* Public */,
       5,    1,   32,    2, 0x02 /* Public */,
       5,    0,   35,    2, 0x22 /* Public | MethodCloned */,

 // methods: parameters
    QMetaType::QDateTime, 0x80000000 | 3,    4,
    QMetaType::QString, 0x80000000 | 3,    4,
    QMetaType::QString,

 // properties: name, type, flags
       6, QMetaType::QUrl, 0x00095103,
       7, QMetaType::QString, 0x00095001,
       8, QMetaType::QString, 0x00095001,
       9, QMetaType::Bool, 0x00095001,
      10, QMetaType::Bool, 0x00095001,
      11, QMetaType::Bool, 0x00095001,
      12, QMetaType::Bool, 0x00095001,
      13, QMetaType::Bool, 0x00095001,
      14, QMetaType::Bool, 0x00095001,
      15, QMetaType::Bool, 0x00095001,
      16, QMetaType::Bool, 0x00095001,
      17, QMetaType::QString, 0x00095001,
      18, QMetaType::QUrl, 0x00095001,
      19, QMetaType::QString, 0x00095103,
      20, QMetaType::Bool, 0x00095001,
      21, QMetaType::QString, 0x00095001,
      22, QMetaType::QString, 0x00095103,
      23, QMetaType::QString, 0x00095001,
      24, 0x80000000 | 25, 0x00095009,
      26, 0x80000000 | 25, 0x00095009,
      27, QMetaType::Bool, 0x00095001,
      28, QMetaType::Bool, 0x00095001,
      29, QMetaType::QString, 0x00095001,
      30, QMetaType::QString, 0x00095001,
      31, QMetaType::QStringList, 0x00095001,
      32, QMetaType::QString, 0x00095001,
      33, QMetaType::QString, 0x00095001,
      34, QMetaType::Bool, 0x00095001,

 // enums: name, alias, flags, count, data
       3,    3, 0x0,    3,  130,
      38,   38, 0x0,    2,  136,

 // enum data: key, value
      35, uint(KFileItem::ModificationTime),
      36, uint(KFileItem::AccessTime),
      37, uint(KFileItem::CreationTime),
      39, uint(KFileItem::NormalMimeTypeDetermination),
      40, uint(KFileItem::SkipMimeTypeFromContent),

       0        // eod
};

void KFileItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = reinterpret_cast<KFileItem *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { QDateTime _r = _t->time((*reinterpret_cast< FileTimes(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDateTime*>(_a[0]) = std::move(_r); }  break;
        case 1: { QString _r = _t->timeString((*reinterpret_cast< FileTimes(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 2: { QString _r = _t->timeString();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = reinterpret_cast<KFileItem *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QUrl*>(_v) = _t->url(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->user(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->group(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->isLink(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->isDir(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->isFile(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->isReadable(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->isWritable(); break;
        case 8: *reinterpret_cast< bool*>(_v) = _t->isHidden(); break;
        case 9: *reinterpret_cast< bool*>(_v) = _t->isSlow(); break;
        case 10: *reinterpret_cast< bool*>(_v) = _t->isDesktopFile(); break;
        case 11: *reinterpret_cast< QString*>(_v) = _t->linkDest(); break;
        case 12: *reinterpret_cast< QUrl*>(_v) = _t->targetUrl(); break;
        case 13: *reinterpret_cast< QString*>(_v) = _t->localPath(); break;
        case 14: *reinterpret_cast< bool*>(_v) = _t->isLocalFile(); break;
        case 15: *reinterpret_cast< QString*>(_v) = _t->text(); break;
        case 16: *reinterpret_cast< QString*>(_v) = _t->name(); break;
        case 17: *reinterpret_cast< QString*>(_v) = _t->mimetype(); break;
        case 18: *reinterpret_cast< QMimeType*>(_v) = _t->determineMimeType(); break;
        case 19: *reinterpret_cast< QMimeType*>(_v) = _t->currentMimeType(); break;
        case 20: *reinterpret_cast< bool*>(_v) = _t->isFinalIconKnown(); break;
        case 21: *reinterpret_cast< bool*>(_v) = _t->isMimeTypeKnown(); break;
        case 22: *reinterpret_cast< QString*>(_v) = _t->mimeComment(); break;
        case 23: *reinterpret_cast< QString*>(_v) = _t->iconName(); break;
        case 24: *reinterpret_cast< QStringList*>(_v) = _t->overlays(); break;
        case 25: *reinterpret_cast< QString*>(_v) = _t->comment(); break;
        case 26: *reinterpret_cast< QString*>(_v) = _t->getStatusBarInfo(); break;
        case 27: *reinterpret_cast< bool*>(_v) = _t->isRegularFile(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = reinterpret_cast<KFileItem *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setUrl(*reinterpret_cast< QUrl*>(_v)); break;
        case 13: _t->setLocalPath(*reinterpret_cast< QString*>(_v)); break;
        case 16: _t->setName(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject KFileItem::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_KFileItem.data,
    qt_meta_data_KFileItem,
    qt_static_metacall,
    nullptr,
    nullptr
} };

QT_WARNING_POP
QT_END_MOC_NAMESPACE
