/****************************************************************************
** Meta object code from reading C++ file 'kfileplacesmodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../frameworks/kio/src/filewidgets/kfileplacesmodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kfileplacesmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KFilePlacesModel_t {
    QByteArrayData data[68];
    char stringdata0[869];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KFilePlacesModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KFilePlacesModel_t qt_meta_stringdata_KFilePlacesModel = {
    {
QT_MOC_LITERAL(0, 0, 16), // "KFilePlacesModel"
QT_MOC_LITERAL(1, 17, 12), // "errorMessage"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 7), // "message"
QT_MOC_LITERAL(4, 39, 9), // "setupDone"
QT_MOC_LITERAL(5, 49, 11), // "QModelIndex"
QT_MOC_LITERAL(6, 61, 5), // "index"
QT_MOC_LITERAL(7, 67, 7), // "success"
QT_MOC_LITERAL(8, 75, 12), // "teardownDone"
QT_MOC_LITERAL(9, 88, 16), // "Solid::ErrorType"
QT_MOC_LITERAL(10, 105, 5), // "error"
QT_MOC_LITERAL(11, 111, 9), // "errorData"
QT_MOC_LITERAL(12, 121, 18), // "groupHiddenChanged"
QT_MOC_LITERAL(13, 140, 27), // "KFilePlacesModel::GroupType"
QT_MOC_LITERAL(14, 168, 5), // "group"
QT_MOC_LITERAL(15, 174, 6), // "hidden"
QT_MOC_LITERAL(16, 181, 8), // "reloaded"
QT_MOC_LITERAL(17, 190, 23), // "supportedSchemesChanged"
QT_MOC_LITERAL(18, 214, 3), // "url"
QT_MOC_LITERAL(19, 218, 11), // "setupNeeded"
QT_MOC_LITERAL(20, 230, 17), // "isTeardownAllowed"
QT_MOC_LITERAL(21, 248, 14), // "isEjectAllowed"
QT_MOC_LITERAL(22, 263, 28), // "isTeardownOverlayRecommended"
QT_MOC_LITERAL(23, 292, 19), // "deviceAccessibility"
QT_MOC_LITERAL(24, 312, 37), // "KFilePlacesModel::DeviceAcces..."
QT_MOC_LITERAL(25, 350, 4), // "icon"
QT_MOC_LITERAL(26, 355, 4), // "text"
QT_MOC_LITERAL(27, 360, 8), // "isHidden"
QT_MOC_LITERAL(28, 369, 13), // "isGroupHidden"
QT_MOC_LITERAL(29, 383, 9), // "GroupType"
QT_MOC_LITERAL(30, 393, 4), // "type"
QT_MOC_LITERAL(31, 398, 8), // "isDevice"
QT_MOC_LITERAL(32, 407, 9), // "groupType"
QT_MOC_LITERAL(33, 417, 12), // "groupIndexes"
QT_MOC_LITERAL(34, 430, 15), // "QModelIndexList"
QT_MOC_LITERAL(35, 446, 22), // "teardownActionForIndex"
QT_MOC_LITERAL(36, 469, 8), // "QAction*"
QT_MOC_LITERAL(37, 478, 19), // "ejectActionForIndex"
QT_MOC_LITERAL(38, 498, 15), // "requestTeardown"
QT_MOC_LITERAL(39, 514, 12), // "requestEject"
QT_MOC_LITERAL(40, 527, 12), // "requestSetup"
QT_MOC_LITERAL(41, 540, 8), // "addPlace"
QT_MOC_LITERAL(42, 549, 8), // "iconName"
QT_MOC_LITERAL(43, 558, 7), // "appName"
QT_MOC_LITERAL(44, 566, 5), // "after"
QT_MOC_LITERAL(45, 572, 9), // "editPlace"
QT_MOC_LITERAL(46, 582, 11), // "removePlace"
QT_MOC_LITERAL(47, 594, 14), // "setPlaceHidden"
QT_MOC_LITERAL(48, 609, 14), // "setGroupHidden"
QT_MOC_LITERAL(49, 624, 9), // "movePlace"
QT_MOC_LITERAL(50, 634, 7), // "itemRow"
QT_MOC_LITERAL(51, 642, 3), // "row"
QT_MOC_LITERAL(52, 646, 11), // "hiddenCount"
QT_MOC_LITERAL(53, 658, 7), // "refresh"
QT_MOC_LITERAL(54, 666, 16), // "supportedSchemes"
QT_MOC_LITERAL(55, 683, 10), // "PlacesType"
QT_MOC_LITERAL(56, 694, 10), // "RemoteType"
QT_MOC_LITERAL(57, 705, 17), // "RecentlySavedType"
QT_MOC_LITERAL(58, 723, 13), // "SearchForType"
QT_MOC_LITERAL(59, 737, 11), // "DevicesType"
QT_MOC_LITERAL(60, 749, 20), // "RemovableDevicesType"
QT_MOC_LITERAL(61, 770, 11), // "UnknownType"
QT_MOC_LITERAL(62, 782, 8), // "TagsType"
QT_MOC_LITERAL(63, 791, 19), // "DeviceAccessibility"
QT_MOC_LITERAL(64, 811, 11), // "SetupNeeded"
QT_MOC_LITERAL(65, 823, 15), // "SetupInProgress"
QT_MOC_LITERAL(66, 839, 10), // "Accessible"
QT_MOC_LITERAL(67, 850, 18) // "TeardownInProgress"

    },
    "KFilePlacesModel\0errorMessage\0\0message\0"
    "setupDone\0QModelIndex\0index\0success\0"
    "teardownDone\0Solid::ErrorType\0error\0"
    "errorData\0groupHiddenChanged\0"
    "KFilePlacesModel::GroupType\0group\0"
    "hidden\0reloaded\0supportedSchemesChanged\0"
    "url\0setupNeeded\0isTeardownAllowed\0"
    "isEjectAllowed\0isTeardownOverlayRecommended\0"
    "deviceAccessibility\0"
    "KFilePlacesModel::DeviceAccessibility\0"
    "icon\0text\0isHidden\0isGroupHidden\0"
    "GroupType\0type\0isDevice\0groupType\0"
    "groupIndexes\0QModelIndexList\0"
    "teardownActionForIndex\0QAction*\0"
    "ejectActionForIndex\0requestTeardown\0"
    "requestEject\0requestSetup\0addPlace\0"
    "iconName\0appName\0after\0editPlace\0"
    "removePlace\0setPlaceHidden\0setGroupHidden\0"
    "movePlace\0itemRow\0row\0hiddenCount\0"
    "refresh\0supportedSchemes\0PlacesType\0"
    "RemoteType\0RecentlySavedType\0SearchForType\0"
    "DevicesType\0RemovableDevicesType\0"
    "UnknownType\0TagsType\0DeviceAccessibility\0"
    "SetupNeeded\0SetupInProgress\0Accessible\0"
    "TeardownInProgress"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KFilePlacesModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      38,   14, // methods
       1,  362, // properties
       2,  366, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  204,    2, 0x06 /* Public */,
       4,    2,  207,    2, 0x06 /* Public */,
       8,    3,  212,    2, 0x06 /* Public */,
      12,    2,  219,    2, 0x06 /* Public */,
      16,    0,  224,    2, 0x06 /* Public */,
      17,    0,  225,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
      18,    1,  226,    2, 0x02 /* Public */,
      19,    1,  229,    2, 0x02 /* Public */,
      20,    1,  232,    2, 0x02 /* Public */,
      21,    1,  235,    2, 0x02 /* Public */,
      22,    1,  238,    2, 0x02 /* Public */,
      23,    1,  241,    2, 0x02 /* Public */,
      25,    1,  244,    2, 0x02 /* Public */,
      26,    1,  247,    2, 0x02 /* Public */,
      27,    1,  250,    2, 0x02 /* Public */,
      28,    1,  253,    2, 0x02 /* Public */,
      28,    1,  256,    2, 0x02 /* Public */,
      31,    1,  259,    2, 0x02 /* Public */,
      32,    1,  262,    2, 0x02 /* Public */,
      33,    1,  265,    2, 0x02 /* Public */,
      35,    1,  268,    2, 0x02 /* Public */,
      37,    1,  271,    2, 0x02 /* Public */,
      38,    1,  274,    2, 0x02 /* Public */,
      39,    1,  277,    2, 0x02 /* Public */,
      40,    1,  280,    2, 0x02 /* Public */,
      41,    4,  283,    2, 0x02 /* Public */,
      41,    3,  292,    2, 0x22 /* Public | MethodCloned */,
      41,    2,  299,    2, 0x22 /* Public | MethodCloned */,
      41,    5,  304,    2, 0x02 /* Public */,
      45,    5,  315,    2, 0x02 /* Public */,
      45,    4,  326,    2, 0x22 /* Public | MethodCloned */,
      45,    3,  335,    2, 0x22 /* Public | MethodCloned */,
      46,    1,  342,    2, 0x02 /* Public */,
      47,    2,  345,    2, 0x02 /* Public */,
      48,    2,  350,    2, 0x02 /* Public */,
      49,    2,  355,    2, 0x02 /* Public */,
      52,    0,  360,    2, 0x02 /* Public */,
      53,    0,  361,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, 0x80000000 | 5, QMetaType::Bool,    6,    7,
    QMetaType::Void, 0x80000000 | 5, 0x80000000 | 9, QMetaType::QVariant,    6,   10,   11,
    QMetaType::Void, 0x80000000 | 13, QMetaType::Bool,   14,   15,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::QUrl, 0x80000000 | 5,    6,
    QMetaType::Bool, 0x80000000 | 5,    6,
    QMetaType::Bool, 0x80000000 | 5,    6,
    QMetaType::Bool, 0x80000000 | 5,    6,
    QMetaType::Bool, 0x80000000 | 5,    6,
    0x80000000 | 24, 0x80000000 | 5,    6,
    QMetaType::QIcon, 0x80000000 | 5,    6,
    QMetaType::QString, 0x80000000 | 5,    6,
    QMetaType::Bool, 0x80000000 | 5,    6,
    QMetaType::Bool, 0x80000000 | 29,   30,
    QMetaType::Bool, 0x80000000 | 5,    6,
    QMetaType::Bool, 0x80000000 | 5,    6,
    0x80000000 | 29, 0x80000000 | 5,    6,
    0x80000000 | 34, 0x80000000 | 29,   30,
    0x80000000 | 36, 0x80000000 | 5,    6,
    0x80000000 | 36, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, QMetaType::QString, QMetaType::QUrl, QMetaType::QString, QMetaType::QString,   26,   18,   42,   43,
    QMetaType::Void, QMetaType::QString, QMetaType::QUrl, QMetaType::QString,   26,   18,   42,
    QMetaType::Void, QMetaType::QString, QMetaType::QUrl,   26,   18,
    QMetaType::Void, QMetaType::QString, QMetaType::QUrl, QMetaType::QString, QMetaType::QString, 0x80000000 | 5,   26,   18,   42,   43,   44,
    QMetaType::Void, 0x80000000 | 5, QMetaType::QString, QMetaType::QUrl, QMetaType::QString, QMetaType::QString,    6,   26,   18,   42,   43,
    QMetaType::Void, 0x80000000 | 5, QMetaType::QString, QMetaType::QUrl, QMetaType::QString,    6,   26,   18,   42,
    QMetaType::Void, 0x80000000 | 5, QMetaType::QString, QMetaType::QUrl,    6,   26,   18,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5, QMetaType::Bool,    6,   15,
    QMetaType::Void, 0x80000000 | 29, QMetaType::Bool,   30,   15,
    QMetaType::Bool, QMetaType::Int, QMetaType::Int,   50,   51,
    QMetaType::Int,
    QMetaType::Void,

 // properties: name, type, flags
      54, QMetaType::QStringList, 0x00495103,

 // properties: notify_signal_id
       5,

 // enums: name, alias, flags, count, data
      29,   29, 0x0,    8,  376,
      63,   63, 0x0,    4,  392,

 // enum data: key, value
      55, uint(KFilePlacesModel::PlacesType),
      56, uint(KFilePlacesModel::RemoteType),
      57, uint(KFilePlacesModel::RecentlySavedType),
      58, uint(KFilePlacesModel::SearchForType),
      59, uint(KFilePlacesModel::DevicesType),
      60, uint(KFilePlacesModel::RemovableDevicesType),
      61, uint(KFilePlacesModel::UnknownType),
      62, uint(KFilePlacesModel::TagsType),
      64, uint(KFilePlacesModel::SetupNeeded),
      65, uint(KFilePlacesModel::SetupInProgress),
      66, uint(KFilePlacesModel::Accessible),
      67, uint(KFilePlacesModel::TeardownInProgress),

       0        // eod
};

void KFilePlacesModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<KFilePlacesModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->errorMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->setupDone((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 2: _t->teardownDone((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< Solid::ErrorType(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 3: _t->groupHiddenChanged((*reinterpret_cast< KFilePlacesModel::GroupType(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 4: _t->reloaded(); break;
        case 5: _t->supportedSchemesChanged(); break;
        case 6: { QUrl _r = _t->url((*reinterpret_cast< const QModelIndex(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QUrl*>(_a[0]) = std::move(_r); }  break;
        case 7: { bool _r = _t->setupNeeded((*reinterpret_cast< const QModelIndex(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 8: { bool _r = _t->isTeardownAllowed((*reinterpret_cast< const QModelIndex(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 9: { bool _r = _t->isEjectAllowed((*reinterpret_cast< const QModelIndex(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 10: { bool _r = _t->isTeardownOverlayRecommended((*reinterpret_cast< const QModelIndex(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 11: { KFilePlacesModel::DeviceAccessibility _r = _t->deviceAccessibility((*reinterpret_cast< const QModelIndex(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< KFilePlacesModel::DeviceAccessibility*>(_a[0]) = std::move(_r); }  break;
        case 12: { QIcon _r = _t->icon((*reinterpret_cast< const QModelIndex(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QIcon*>(_a[0]) = std::move(_r); }  break;
        case 13: { QString _r = _t->text((*reinterpret_cast< const QModelIndex(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 14: { bool _r = _t->isHidden((*reinterpret_cast< const QModelIndex(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 15: { bool _r = _t->isGroupHidden((*reinterpret_cast< const GroupType(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 16: { bool _r = _t->isGroupHidden((*reinterpret_cast< const QModelIndex(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 17: { bool _r = _t->isDevice((*reinterpret_cast< const QModelIndex(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 18: { GroupType _r = _t->groupType((*reinterpret_cast< const QModelIndex(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< GroupType*>(_a[0]) = std::move(_r); }  break;
        case 19: { QModelIndexList _r = _t->groupIndexes((*reinterpret_cast< const GroupType(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QModelIndexList*>(_a[0]) = std::move(_r); }  break;
        case 20: { QAction* _r = _t->teardownActionForIndex((*reinterpret_cast< const QModelIndex(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QAction**>(_a[0]) = std::move(_r); }  break;
        case 21: { QAction* _r = _t->ejectActionForIndex((*reinterpret_cast< const QModelIndex(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QAction**>(_a[0]) = std::move(_r); }  break;
        case 22: _t->requestTeardown((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 23: _t->requestEject((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 24: _t->requestSetup((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 25: _t->addPlace((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QUrl(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4]))); break;
        case 26: _t->addPlace((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QUrl(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 27: _t->addPlace((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QUrl(*)>(_a[2]))); break;
        case 28: _t->addPlace((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QUrl(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< const QModelIndex(*)>(_a[5]))); break;
        case 29: _t->editPlace((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QUrl(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5]))); break;
        case 30: _t->editPlace((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QUrl(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4]))); break;
        case 31: _t->editPlace((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QUrl(*)>(_a[3]))); break;
        case 32: _t->removePlace((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 33: _t->setPlaceHidden((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 34: _t->setGroupHidden((*reinterpret_cast< const GroupType(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 35: { bool _r = _t->movePlace((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 36: { int _r = _t->hiddenCount();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 37: _t->refresh(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Solid::ErrorType >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (KFilePlacesModel::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KFilePlacesModel::errorMessage)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (KFilePlacesModel::*)(const QModelIndex & , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KFilePlacesModel::setupDone)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (KFilePlacesModel::*)(const QModelIndex & , Solid::ErrorType , const QVariant & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KFilePlacesModel::teardownDone)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (KFilePlacesModel::*)(KFilePlacesModel::GroupType , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KFilePlacesModel::groupHiddenChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (KFilePlacesModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KFilePlacesModel::reloaded)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (KFilePlacesModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KFilePlacesModel::supportedSchemesChanged)) {
                *result = 5;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<KFilePlacesModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QStringList*>(_v) = _t->supportedSchemes(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<KFilePlacesModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setSupportedSchemes(*reinterpret_cast< QStringList*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject KFilePlacesModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractItemModel::staticMetaObject>(),
    qt_meta_stringdata_KFilePlacesModel.data,
    qt_meta_data_KFilePlacesModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KFilePlacesModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KFilePlacesModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KFilePlacesModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractItemModel::qt_metacast(_clname);
}

int KFilePlacesModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractItemModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 38)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 38;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 38)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 38;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void KFilePlacesModel::errorMessage(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void KFilePlacesModel::setupDone(const QModelIndex & _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void KFilePlacesModel::teardownDone(const QModelIndex & _t1, Solid::ErrorType _t2, const QVariant & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void KFilePlacesModel::groupHiddenChanged(KFilePlacesModel::GroupType _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void KFilePlacesModel::reloaded()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void KFilePlacesModel::supportedSchemesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
