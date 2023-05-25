/****************************************************************************
** Meta object code from reading C++ file 'browserextension.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../frameworks/kparts/src/browserextension.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'browserextension.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KParts__BrowserExtension_t {
    QByteArrayData data[62];
    char stringdata0[834];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KParts__BrowserExtension_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KParts__BrowserExtension_t qt_meta_stringdata_KParts__BrowserExtension = {
    {
QT_MOC_LITERAL(0, 0, 24), // "KParts::BrowserExtension"
QT_MOC_LITERAL(1, 25, 12), // "enableAction"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 11), // "const char*"
QT_MOC_LITERAL(4, 51, 4), // "name"
QT_MOC_LITERAL(5, 56, 7), // "enabled"
QT_MOC_LITERAL(6, 64, 13), // "setActionText"
QT_MOC_LITERAL(7, 78, 4), // "text"
QT_MOC_LITERAL(8, 83, 14), // "openUrlRequest"
QT_MOC_LITERAL(9, 98, 3), // "url"
QT_MOC_LITERAL(10, 102, 24), // "KParts::OpenUrlArguments"
QT_MOC_LITERAL(11, 127, 9), // "arguments"
QT_MOC_LITERAL(12, 137, 24), // "KParts::BrowserArguments"
QT_MOC_LITERAL(13, 162, 16), // "browserArguments"
QT_MOC_LITERAL(14, 179, 21), // "openUrlRequestDelayed"
QT_MOC_LITERAL(15, 201, 13), // "openUrlNotify"
QT_MOC_LITERAL(16, 215, 17), // "setLocationBarUrl"
QT_MOC_LITERAL(17, 233, 10), // "setIconUrl"
QT_MOC_LITERAL(18, 244, 15), // "createNewWindow"
QT_MOC_LITERAL(19, 260, 18), // "KParts::WindowArgs"
QT_MOC_LITERAL(20, 279, 10), // "windowArgs"
QT_MOC_LITERAL(21, 290, 22), // "KParts::ReadOnlyPart**"
QT_MOC_LITERAL(22, 313, 4), // "part"
QT_MOC_LITERAL(23, 318, 15), // "loadingProgress"
QT_MOC_LITERAL(24, 334, 7), // "percent"
QT_MOC_LITERAL(25, 342, 13), // "speedProgress"
QT_MOC_LITERAL(26, 356, 14), // "bytesPerSecond"
QT_MOC_LITERAL(27, 371, 11), // "infoMessage"
QT_MOC_LITERAL(28, 383, 9), // "popupMenu"
QT_MOC_LITERAL(29, 393, 6), // "global"
QT_MOC_LITERAL(30, 400, 13), // "KFileItemList"
QT_MOC_LITERAL(31, 414, 5), // "items"
QT_MOC_LITERAL(32, 420, 4), // "args"
QT_MOC_LITERAL(33, 425, 36), // "KParts::BrowserExtension::Pop..."
QT_MOC_LITERAL(34, 462, 5), // "flags"
QT_MOC_LITERAL(35, 468, 40), // "KParts::BrowserExtension::Act..."
QT_MOC_LITERAL(36, 509, 12), // "actionGroups"
QT_MOC_LITERAL(37, 522, 6), // "mode_t"
QT_MOC_LITERAL(38, 529, 4), // "mode"
QT_MOC_LITERAL(39, 534, 13), // "selectionInfo"
QT_MOC_LITERAL(40, 548, 11), // "QList<QUrl>"
QT_MOC_LITERAL(41, 560, 4), // "urls"
QT_MOC_LITERAL(42, 565, 13), // "mouseOverInfo"
QT_MOC_LITERAL(43, 579, 9), // "KFileItem"
QT_MOC_LITERAL(44, 589, 4), // "item"
QT_MOC_LITERAL(45, 594, 13), // "addWebSideBar"
QT_MOC_LITERAL(46, 608, 18), // "moveTopLevelWidget"
QT_MOC_LITERAL(47, 627, 1), // "x"
QT_MOC_LITERAL(48, 629, 1), // "y"
QT_MOC_LITERAL(49, 631, 20), // "resizeTopLevelWidget"
QT_MOC_LITERAL(50, 652, 1), // "w"
QT_MOC_LITERAL(51, 654, 1), // "h"
QT_MOC_LITERAL(52, 656, 12), // "requestFocus"
QT_MOC_LITERAL(53, 669, 21), // "KParts::ReadOnlyPart*"
QT_MOC_LITERAL(54, 691, 15), // "setPageSecurity"
QT_MOC_LITERAL(55, 707, 12), // "itemsRemoved"
QT_MOC_LITERAL(56, 720, 13), // "slotCompleted"
QT_MOC_LITERAL(57, 734, 18), // "slotOpenUrlRequest"
QT_MOC_LITERAL(58, 753, 29), // "slotEmitOpenUrlRequestDelayed"
QT_MOC_LITERAL(59, 783, 16), // "slotEnableAction"
QT_MOC_LITERAL(60, 800, 17), // "slotSetActionText"
QT_MOC_LITERAL(61, 818, 15) // "urlDropHandling"

    },
    "KParts::BrowserExtension\0enableAction\0"
    "\0const char*\0name\0enabled\0setActionText\0"
    "text\0openUrlRequest\0url\0"
    "KParts::OpenUrlArguments\0arguments\0"
    "KParts::BrowserArguments\0browserArguments\0"
    "openUrlRequestDelayed\0openUrlNotify\0"
    "setLocationBarUrl\0setIconUrl\0"
    "createNewWindow\0KParts::WindowArgs\0"
    "windowArgs\0KParts::ReadOnlyPart**\0"
    "part\0loadingProgress\0percent\0speedProgress\0"
    "bytesPerSecond\0infoMessage\0popupMenu\0"
    "global\0KFileItemList\0items\0args\0"
    "KParts::BrowserExtension::PopupFlags\0"
    "flags\0KParts::BrowserExtension::ActionGroupMap\0"
    "actionGroups\0mode_t\0mode\0selectionInfo\0"
    "QList<QUrl>\0urls\0mouseOverInfo\0KFileItem\0"
    "item\0addWebSideBar\0moveTopLevelWidget\0"
    "x\0y\0resizeTopLevelWidget\0w\0h\0requestFocus\0"
    "KParts::ReadOnlyPart*\0setPageSecurity\0"
    "itemsRemoved\0slotCompleted\0"
    "slotOpenUrlRequest\0slotEmitOpenUrlRequestDelayed\0"
    "slotEnableAction\0slotSetActionText\0"
    "urlDropHandling"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KParts__BrowserExtension[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      45,   14, // methods
       1,  490, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      38,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,  239,    2, 0x06 /* Public */,
       6,    2,  244,    2, 0x06 /* Public */,
       8,    3,  249,    2, 0x06 /* Public */,
       8,    2,  256,    2, 0x26 /* Public | MethodCloned */,
       8,    1,  261,    2, 0x26 /* Public | MethodCloned */,
      14,    3,  264,    2, 0x06 /* Public */,
      15,    0,  271,    2, 0x06 /* Public */,
      16,    1,  272,    2, 0x06 /* Public */,
      17,    1,  275,    2, 0x06 /* Public */,
      18,    5,  278,    2, 0x06 /* Public */,
      18,    4,  289,    2, 0x26 /* Public | MethodCloned */,
      18,    3,  298,    2, 0x26 /* Public | MethodCloned */,
      18,    2,  305,    2, 0x26 /* Public | MethodCloned */,
      18,    1,  310,    2, 0x26 /* Public | MethodCloned */,
      23,    1,  313,    2, 0x06 /* Public */,
      25,    1,  316,    2, 0x06 /* Public */,
      27,    1,  319,    2, 0x06 /* Public */,
      28,    6,  322,    2, 0x06 /* Public */,
      28,    5,  335,    2, 0x26 /* Public | MethodCloned */,
      28,    4,  346,    2, 0x26 /* Public | MethodCloned */,
      28,    3,  355,    2, 0x26 /* Public | MethodCloned */,
      28,    2,  362,    2, 0x26 /* Public | MethodCloned */,
      28,    7,  367,    2, 0x06 /* Public */,
      28,    6,  382,    2, 0x26 /* Public | MethodCloned */,
      28,    5,  395,    2, 0x26 /* Public | MethodCloned */,
      28,    4,  406,    2, 0x26 /* Public | MethodCloned */,
      28,    3,  415,    2, 0x26 /* Public | MethodCloned */,
      28,    2,  422,    2, 0x26 /* Public | MethodCloned */,
      39,    1,  427,    2, 0x06 /* Public */,
      39,    1,  430,    2, 0x06 /* Public */,
      39,    1,  433,    2, 0x06 /* Public */,
      42,    1,  436,    2, 0x06 /* Public */,
      45,    2,  439,    2, 0x06 /* Public */,
      46,    2,  444,    2, 0x06 /* Public */,
      49,    2,  449,    2, 0x06 /* Public */,
      52,    1,  454,    2, 0x06 /* Public */,
      54,    1,  457,    2, 0x06 /* Public */,
      55,    1,  460,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      56,    0,  463,    2, 0x08 /* Private */,
      57,    3,  464,    2, 0x08 /* Private */,
      57,    2,  471,    2, 0x28 /* Private | MethodCloned */,
      57,    1,  476,    2, 0x28 /* Private | MethodCloned */,
      58,    0,  479,    2, 0x08 /* Private */,
      59,    2,  480,    2, 0x08 /* Private */,
      60,    2,  485,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Bool,    4,    5,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString,    4,    7,
    QMetaType::Void, QMetaType::QUrl, 0x80000000 | 10, 0x80000000 | 12,    9,   11,   13,
    QMetaType::Void, QMetaType::QUrl, 0x80000000 | 10,    9,   11,
    QMetaType::Void, QMetaType::QUrl,    9,
    QMetaType::Void, QMetaType::QUrl, 0x80000000 | 10, 0x80000000 | 12,    9,   11,   13,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::QUrl,    9,
    QMetaType::Void, QMetaType::QUrl, 0x80000000 | 10, 0x80000000 | 12, 0x80000000 | 19, 0x80000000 | 21,    9,   11,   13,   20,   22,
    QMetaType::Void, QMetaType::QUrl, 0x80000000 | 10, 0x80000000 | 12, 0x80000000 | 19,    9,   11,   13,   20,
    QMetaType::Void, QMetaType::QUrl, 0x80000000 | 10, 0x80000000 | 12,    9,   11,   13,
    QMetaType::Void, QMetaType::QUrl, 0x80000000 | 10,    9,   11,
    QMetaType::Void, QMetaType::QUrl,    9,
    QMetaType::Void, QMetaType::Int,   24,
    QMetaType::Void, QMetaType::Int,   26,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QPoint, 0x80000000 | 30, 0x80000000 | 10, 0x80000000 | 12, 0x80000000 | 33, 0x80000000 | 35,   29,   31,   32,   13,   34,   36,
    QMetaType::Void, QMetaType::QPoint, 0x80000000 | 30, 0x80000000 | 10, 0x80000000 | 12, 0x80000000 | 33,   29,   31,   32,   13,   34,
    QMetaType::Void, QMetaType::QPoint, 0x80000000 | 30, 0x80000000 | 10, 0x80000000 | 12,   29,   31,   32,   13,
    QMetaType::Void, QMetaType::QPoint, 0x80000000 | 30, 0x80000000 | 10,   29,   31,   32,
    QMetaType::Void, QMetaType::QPoint, 0x80000000 | 30,   29,   31,
    QMetaType::Void, QMetaType::QPoint, QMetaType::QUrl, 0x80000000 | 37, 0x80000000 | 10, 0x80000000 | 12, 0x80000000 | 33, 0x80000000 | 35,   29,    9,   38,   32,   13,   34,   36,
    QMetaType::Void, QMetaType::QPoint, QMetaType::QUrl, 0x80000000 | 37, 0x80000000 | 10, 0x80000000 | 12, 0x80000000 | 33,   29,    9,   38,   32,   13,   34,
    QMetaType::Void, QMetaType::QPoint, QMetaType::QUrl, 0x80000000 | 37, 0x80000000 | 10, 0x80000000 | 12,   29,    9,   38,   32,   13,
    QMetaType::Void, QMetaType::QPoint, QMetaType::QUrl, 0x80000000 | 37, 0x80000000 | 10,   29,    9,   38,   32,
    QMetaType::Void, QMetaType::QPoint, QMetaType::QUrl, 0x80000000 | 37,   29,    9,   38,
    QMetaType::Void, QMetaType::QPoint, QMetaType::QUrl,   29,    9,
    QMetaType::Void, 0x80000000 | 30,   31,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, 0x80000000 | 40,   41,
    QMetaType::Void, 0x80000000 | 43,   44,
    QMetaType::Void, QMetaType::QUrl, QMetaType::QString,    9,    4,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   47,   48,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   50,   51,
    QMetaType::Void, 0x80000000 | 53,   22,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, 0x80000000 | 30,   31,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QUrl, 0x80000000 | 10, 0x80000000 | 12,    9,   11,   13,
    QMetaType::Void, QMetaType::QUrl, 0x80000000 | 10,    9,   11,
    QMetaType::Void, QMetaType::QUrl,    9,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Bool,    2,    2,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString,    2,    2,

 // properties: name, type, flags
      61, QMetaType::Bool, 0x00095003,

       0        // eod
};

void KParts::BrowserExtension::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<BrowserExtension *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->enableAction((*reinterpret_cast< const char*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 1: _t->setActionText((*reinterpret_cast< const char*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 2: _t->openUrlRequest((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< const KParts::OpenUrlArguments(*)>(_a[2])),(*reinterpret_cast< const KParts::BrowserArguments(*)>(_a[3]))); break;
        case 3: _t->openUrlRequest((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< const KParts::OpenUrlArguments(*)>(_a[2]))); break;
        case 4: _t->openUrlRequest((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 5: _t->openUrlRequestDelayed((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< const KParts::OpenUrlArguments(*)>(_a[2])),(*reinterpret_cast< const KParts::BrowserArguments(*)>(_a[3]))); break;
        case 6: _t->openUrlNotify(); break;
        case 7: _t->setLocationBarUrl((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->setIconUrl((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 9: _t->createNewWindow((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< const KParts::OpenUrlArguments(*)>(_a[2])),(*reinterpret_cast< const KParts::BrowserArguments(*)>(_a[3])),(*reinterpret_cast< const KParts::WindowArgs(*)>(_a[4])),(*reinterpret_cast< KParts::ReadOnlyPart**(*)>(_a[5]))); break;
        case 10: _t->createNewWindow((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< const KParts::OpenUrlArguments(*)>(_a[2])),(*reinterpret_cast< const KParts::BrowserArguments(*)>(_a[3])),(*reinterpret_cast< const KParts::WindowArgs(*)>(_a[4]))); break;
        case 11: _t->createNewWindow((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< const KParts::OpenUrlArguments(*)>(_a[2])),(*reinterpret_cast< const KParts::BrowserArguments(*)>(_a[3]))); break;
        case 12: _t->createNewWindow((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< const KParts::OpenUrlArguments(*)>(_a[2]))); break;
        case 13: _t->createNewWindow((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 14: _t->loadingProgress((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->speedProgress((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->infoMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 17: _t->popupMenu((*reinterpret_cast< const QPoint(*)>(_a[1])),(*reinterpret_cast< const KFileItemList(*)>(_a[2])),(*reinterpret_cast< const KParts::OpenUrlArguments(*)>(_a[3])),(*reinterpret_cast< const KParts::BrowserArguments(*)>(_a[4])),(*reinterpret_cast< KParts::BrowserExtension::PopupFlags(*)>(_a[5])),(*reinterpret_cast< const KParts::BrowserExtension::ActionGroupMap(*)>(_a[6]))); break;
        case 18: _t->popupMenu((*reinterpret_cast< const QPoint(*)>(_a[1])),(*reinterpret_cast< const KFileItemList(*)>(_a[2])),(*reinterpret_cast< const KParts::OpenUrlArguments(*)>(_a[3])),(*reinterpret_cast< const KParts::BrowserArguments(*)>(_a[4])),(*reinterpret_cast< KParts::BrowserExtension::PopupFlags(*)>(_a[5]))); break;
        case 19: _t->popupMenu((*reinterpret_cast< const QPoint(*)>(_a[1])),(*reinterpret_cast< const KFileItemList(*)>(_a[2])),(*reinterpret_cast< const KParts::OpenUrlArguments(*)>(_a[3])),(*reinterpret_cast< const KParts::BrowserArguments(*)>(_a[4]))); break;
        case 20: _t->popupMenu((*reinterpret_cast< const QPoint(*)>(_a[1])),(*reinterpret_cast< const KFileItemList(*)>(_a[2])),(*reinterpret_cast< const KParts::OpenUrlArguments(*)>(_a[3]))); break;
        case 21: _t->popupMenu((*reinterpret_cast< const QPoint(*)>(_a[1])),(*reinterpret_cast< const KFileItemList(*)>(_a[2]))); break;
        case 22: _t->popupMenu((*reinterpret_cast< const QPoint(*)>(_a[1])),(*reinterpret_cast< const QUrl(*)>(_a[2])),(*reinterpret_cast< mode_t(*)>(_a[3])),(*reinterpret_cast< const KParts::OpenUrlArguments(*)>(_a[4])),(*reinterpret_cast< const KParts::BrowserArguments(*)>(_a[5])),(*reinterpret_cast< KParts::BrowserExtension::PopupFlags(*)>(_a[6])),(*reinterpret_cast< const KParts::BrowserExtension::ActionGroupMap(*)>(_a[7]))); break;
        case 23: _t->popupMenu((*reinterpret_cast< const QPoint(*)>(_a[1])),(*reinterpret_cast< const QUrl(*)>(_a[2])),(*reinterpret_cast< mode_t(*)>(_a[3])),(*reinterpret_cast< const KParts::OpenUrlArguments(*)>(_a[4])),(*reinterpret_cast< const KParts::BrowserArguments(*)>(_a[5])),(*reinterpret_cast< KParts::BrowserExtension::PopupFlags(*)>(_a[6]))); break;
        case 24: _t->popupMenu((*reinterpret_cast< const QPoint(*)>(_a[1])),(*reinterpret_cast< const QUrl(*)>(_a[2])),(*reinterpret_cast< mode_t(*)>(_a[3])),(*reinterpret_cast< const KParts::OpenUrlArguments(*)>(_a[4])),(*reinterpret_cast< const KParts::BrowserArguments(*)>(_a[5]))); break;
        case 25: _t->popupMenu((*reinterpret_cast< const QPoint(*)>(_a[1])),(*reinterpret_cast< const QUrl(*)>(_a[2])),(*reinterpret_cast< mode_t(*)>(_a[3])),(*reinterpret_cast< const KParts::OpenUrlArguments(*)>(_a[4]))); break;
        case 26: _t->popupMenu((*reinterpret_cast< const QPoint(*)>(_a[1])),(*reinterpret_cast< const QUrl(*)>(_a[2])),(*reinterpret_cast< mode_t(*)>(_a[3]))); break;
        case 27: _t->popupMenu((*reinterpret_cast< const QPoint(*)>(_a[1])),(*reinterpret_cast< const QUrl(*)>(_a[2]))); break;
        case 28: _t->selectionInfo((*reinterpret_cast< const KFileItemList(*)>(_a[1]))); break;
        case 29: _t->selectionInfo((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 30: _t->selectionInfo((*reinterpret_cast< const QList<QUrl>(*)>(_a[1]))); break;
        case 31: _t->mouseOverInfo((*reinterpret_cast< const KFileItem(*)>(_a[1]))); break;
        case 32: _t->addWebSideBar((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 33: _t->moveTopLevelWidget((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 34: _t->resizeTopLevelWidget((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 35: _t->requestFocus((*reinterpret_cast< KParts::ReadOnlyPart*(*)>(_a[1]))); break;
        case 36: _t->setPageSecurity((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 37: _t->itemsRemoved((*reinterpret_cast< const KFileItemList(*)>(_a[1]))); break;
        case 38: _t->slotCompleted(); break;
        case 39: _t->slotOpenUrlRequest((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< const KParts::OpenUrlArguments(*)>(_a[2])),(*reinterpret_cast< const KParts::BrowserArguments(*)>(_a[3]))); break;
        case 40: _t->slotOpenUrlRequest((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< const KParts::OpenUrlArguments(*)>(_a[2]))); break;
        case 41: _t->slotOpenUrlRequest((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 42: _t->slotEmitOpenUrlRequestDelayed(); break;
        case 43: _t->slotEnableAction((*reinterpret_cast< const char*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 44: _t->slotSetActionText((*reinterpret_cast< const char*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 30:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QUrl> >(); break;
            }
            break;
        case 35:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KParts::ReadOnlyPart* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (BrowserExtension::*)(const char * , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BrowserExtension::enableAction)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (BrowserExtension::*)(const char * , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BrowserExtension::setActionText)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (BrowserExtension::*)(const QUrl & , const KParts::OpenUrlArguments & , const KParts::BrowserArguments & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BrowserExtension::openUrlRequest)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (BrowserExtension::*)(const QUrl & , const KParts::OpenUrlArguments & , const KParts::BrowserArguments & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BrowserExtension::openUrlRequestDelayed)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (BrowserExtension::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BrowserExtension::openUrlNotify)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (BrowserExtension::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BrowserExtension::setLocationBarUrl)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (BrowserExtension::*)(const QUrl & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BrowserExtension::setIconUrl)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (BrowserExtension::*)(const QUrl & , const KParts::OpenUrlArguments & , const KParts::BrowserArguments & , const KParts::WindowArgs & , KParts::ReadOnlyPart * * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BrowserExtension::createNewWindow)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (BrowserExtension::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BrowserExtension::loadingProgress)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (BrowserExtension::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BrowserExtension::speedProgress)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (BrowserExtension::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BrowserExtension::infoMessage)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (BrowserExtension::*)(const QPoint & , const KFileItemList & , const KParts::OpenUrlArguments & , const KParts::BrowserArguments & , KParts::BrowserExtension::PopupFlags , const KParts::BrowserExtension::ActionGroupMap & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BrowserExtension::popupMenu)) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (BrowserExtension::*)(const QPoint & , const QUrl & , mode_t , const KParts::OpenUrlArguments & , const KParts::BrowserArguments & , KParts::BrowserExtension::PopupFlags , const KParts::BrowserExtension::ActionGroupMap & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BrowserExtension::popupMenu)) {
                *result = 22;
                return;
            }
        }
        {
            using _t = void (BrowserExtension::*)(const KFileItemList & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BrowserExtension::selectionInfo)) {
                *result = 28;
                return;
            }
        }
        {
            using _t = void (BrowserExtension::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BrowserExtension::selectionInfo)) {
                *result = 29;
                return;
            }
        }
        {
            using _t = void (BrowserExtension::*)(const QList<QUrl> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BrowserExtension::selectionInfo)) {
                *result = 30;
                return;
            }
        }
        {
            using _t = void (BrowserExtension::*)(const KFileItem & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BrowserExtension::mouseOverInfo)) {
                *result = 31;
                return;
            }
        }
        {
            using _t = void (BrowserExtension::*)(const QUrl & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BrowserExtension::addWebSideBar)) {
                *result = 32;
                return;
            }
        }
        {
            using _t = void (BrowserExtension::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BrowserExtension::moveTopLevelWidget)) {
                *result = 33;
                return;
            }
        }
        {
            using _t = void (BrowserExtension::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BrowserExtension::resizeTopLevelWidget)) {
                *result = 34;
                return;
            }
        }
        {
            using _t = void (BrowserExtension::*)(KParts::ReadOnlyPart * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BrowserExtension::requestFocus)) {
                *result = 35;
                return;
            }
        }
        {
            using _t = void (BrowserExtension::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BrowserExtension::setPageSecurity)) {
                *result = 36;
                return;
            }
        }
        {
            using _t = void (BrowserExtension::*)(const KFileItemList & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BrowserExtension::itemsRemoved)) {
                *result = 37;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<BrowserExtension *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->isURLDropHandlingEnabled(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<BrowserExtension *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setURLDropHandlingEnabled(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject KParts::BrowserExtension::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_KParts__BrowserExtension.data,
    qt_meta_data_KParts__BrowserExtension,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KParts::BrowserExtension::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KParts::BrowserExtension::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KParts__BrowserExtension.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int KParts::BrowserExtension::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 45)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 45;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 45)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 45;
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
void KParts::BrowserExtension::enableAction(const char * _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void KParts::BrowserExtension::setActionText(const char * _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void KParts::BrowserExtension::openUrlRequest(const QUrl & _t1, const KParts::OpenUrlArguments & _t2, const KParts::BrowserArguments & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 5
void KParts::BrowserExtension::openUrlRequestDelayed(const QUrl & _t1, const KParts::OpenUrlArguments & _t2, const KParts::BrowserArguments & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void KParts::BrowserExtension::openUrlNotify()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void KParts::BrowserExtension::setLocationBarUrl(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void KParts::BrowserExtension::setIconUrl(const QUrl & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void KParts::BrowserExtension::createNewWindow(const QUrl & _t1, const KParts::OpenUrlArguments & _t2, const KParts::BrowserArguments & _t3, const KParts::WindowArgs & _t4, KParts::ReadOnlyPart * * _t5)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 14
void KParts::BrowserExtension::loadingProgress(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void KParts::BrowserExtension::speedProgress(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void KParts::BrowserExtension::infoMessage(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void KParts::BrowserExtension::popupMenu(const QPoint & _t1, const KFileItemList & _t2, const KParts::OpenUrlArguments & _t3, const KParts::BrowserArguments & _t4, KParts::BrowserExtension::PopupFlags _t5, const KParts::BrowserExtension::ActionGroupMap & _t6)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t6))) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 22
void KParts::BrowserExtension::popupMenu(const QPoint & _t1, const QUrl & _t2, mode_t _t3, const KParts::OpenUrlArguments & _t4, const KParts::BrowserArguments & _t5, KParts::BrowserExtension::PopupFlags _t6, const KParts::BrowserExtension::ActionGroupMap & _t7)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t6))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t7))) };
    QMetaObject::activate(this, &staticMetaObject, 22, _a);
}

// SIGNAL 28
void KParts::BrowserExtension::selectionInfo(const KFileItemList & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 28, _a);
}

// SIGNAL 29
void KParts::BrowserExtension::selectionInfo(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 29, _a);
}

// SIGNAL 30
void KParts::BrowserExtension::selectionInfo(const QList<QUrl> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 30, _a);
}

// SIGNAL 31
void KParts::BrowserExtension::mouseOverInfo(const KFileItem & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 31, _a);
}

// SIGNAL 32
void KParts::BrowserExtension::addWebSideBar(const QUrl & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 32, _a);
}

// SIGNAL 33
void KParts::BrowserExtension::moveTopLevelWidget(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 33, _a);
}

// SIGNAL 34
void KParts::BrowserExtension::resizeTopLevelWidget(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 34, _a);
}

// SIGNAL 35
void KParts::BrowserExtension::requestFocus(KParts::ReadOnlyPart * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 35, _a);
}

// SIGNAL 36
void KParts::BrowserExtension::setPageSecurity(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 36, _a);
}

// SIGNAL 37
void KParts::BrowserExtension::itemsRemoved(const KFileItemList & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 37, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
