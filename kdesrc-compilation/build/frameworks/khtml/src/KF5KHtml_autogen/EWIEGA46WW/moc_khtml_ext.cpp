/****************************************************************************
** Meta object code from reading C++ file 'khtml_ext.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../frameworks/khtml/src/khtml_ext.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'khtml_ext.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KHTMLPartBrowserExtension_t {
    QByteArrayData data[18];
    char stringdata0[289];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KHTMLPartBrowserExtension_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KHTMLPartBrowserExtension_t qt_meta_stringdata_KHTMLPartBrowserExtension = {
    {
QT_MOC_LITERAL(0, 0, 25), // "KHTMLPartBrowserExtension"
QT_MOC_LITERAL(1, 26, 21), // "editableWidgetFocused"
QT_MOC_LITERAL(2, 48, 0), // ""
QT_MOC_LITERAL(3, 49, 21), // "editableWidgetBlurred"
QT_MOC_LITERAL(4, 71, 3), // "cut"
QT_MOC_LITERAL(5, 75, 4), // "copy"
QT_MOC_LITERAL(6, 80, 5), // "paste"
QT_MOC_LITERAL(7, 86, 14), // "searchProvider"
QT_MOC_LITERAL(8, 101, 20), // "reparseConfiguration"
QT_MOC_LITERAL(9, 122, 5), // "print"
QT_MOC_LITERAL(10, 128, 16), // "disableScrolling"
QT_MOC_LITERAL(11, 145, 17), // "updateEditActions"
QT_MOC_LITERAL(12, 163, 27), // "extensionProxyActionEnabled"
QT_MOC_LITERAL(13, 191, 11), // "const char*"
QT_MOC_LITERAL(14, 203, 6), // "action"
QT_MOC_LITERAL(15, 210, 6), // "enable"
QT_MOC_LITERAL(16, 217, 35), // "extensionProxyEditableWidgetF..."
QT_MOC_LITERAL(17, 253, 35) // "extensionProxyEditableWidgetB..."

    },
    "KHTMLPartBrowserExtension\0"
    "editableWidgetFocused\0\0editableWidgetBlurred\0"
    "cut\0copy\0paste\0searchProvider\0"
    "reparseConfiguration\0print\0disableScrolling\0"
    "updateEditActions\0extensionProxyActionEnabled\0"
    "const char*\0action\0enable\0"
    "extensionProxyEditableWidgetFocused\0"
    "extensionProxyEditableWidgetBlurred"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KHTMLPartBrowserExtension[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x06 /* Public */,
       3,    0,   80,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   81,    2, 0x0a /* Public */,
       5,    0,   82,    2, 0x0a /* Public */,
       6,    0,   83,    2, 0x0a /* Public */,
       7,    0,   84,    2, 0x0a /* Public */,
       8,    0,   85,    2, 0x0a /* Public */,
       9,    0,   86,    2, 0x0a /* Public */,
      10,    0,   87,    2, 0x0a /* Public */,
      11,    0,   88,    2, 0x0a /* Public */,
      12,    2,   89,    2, 0x08 /* Private */,
      16,    0,   94,    2, 0x08 /* Private */,
      17,    0,   95,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 13, QMetaType::Bool,   14,   15,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void KHTMLPartBrowserExtension::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<KHTMLPartBrowserExtension *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->editableWidgetFocused(); break;
        case 1: _t->editableWidgetBlurred(); break;
        case 2: _t->cut(); break;
        case 3: _t->copy(); break;
        case 4: _t->paste(); break;
        case 5: _t->searchProvider(); break;
        case 6: _t->reparseConfiguration(); break;
        case 7: _t->print(); break;
        case 8: _t->disableScrolling(); break;
        case 9: _t->updateEditActions(); break;
        case 10: _t->extensionProxyActionEnabled((*reinterpret_cast< const char*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 11: _t->extensionProxyEditableWidgetFocused(); break;
        case 12: _t->extensionProxyEditableWidgetBlurred(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (KHTMLPartBrowserExtension::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KHTMLPartBrowserExtension::editableWidgetFocused)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (KHTMLPartBrowserExtension::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KHTMLPartBrowserExtension::editableWidgetBlurred)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject KHTMLPartBrowserExtension::staticMetaObject = { {
    QMetaObject::SuperData::link<KParts::BrowserExtension::staticMetaObject>(),
    qt_meta_stringdata_KHTMLPartBrowserExtension.data,
    qt_meta_data_KHTMLPartBrowserExtension,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KHTMLPartBrowserExtension::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KHTMLPartBrowserExtension::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KHTMLPartBrowserExtension.stringdata0))
        return static_cast<void*>(this);
    return KParts::BrowserExtension::qt_metacast(_clname);
}

int KHTMLPartBrowserExtension::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KParts::BrowserExtension::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void KHTMLPartBrowserExtension::editableWidgetFocused()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void KHTMLPartBrowserExtension::editableWidgetBlurred()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
struct qt_meta_stringdata_KHTMLPopupGUIClient_t {
    QByteArrayData data[18];
    char stringdata0[279];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KHTMLPopupGUIClient_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KHTMLPopupGUIClient_t qt_meta_stringdata_KHTMLPopupGUIClient = {
    {
QT_MOC_LITERAL(0, 0, 19), // "KHTMLPopupGUIClient"
QT_MOC_LITERAL(1, 20, 14), // "slotSaveLinkAs"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 15), // "slotSaveImageAs"
QT_MOC_LITERAL(4, 52, 20), // "slotCopyLinkLocation"
QT_MOC_LITERAL(5, 73, 13), // "slotSendImage"
QT_MOC_LITERAL(6, 87, 18), // "slotStopAnimations"
QT_MOC_LITERAL(7, 106, 21), // "slotCopyImageLocation"
QT_MOC_LITERAL(8, 128, 13), // "slotCopyImage"
QT_MOC_LITERAL(9, 142, 13), // "slotViewImage"
QT_MOC_LITERAL(10, 156, 15), // "slotReloadFrame"
QT_MOC_LITERAL(11, 172, 17), // "slotFrameInWindow"
QT_MOC_LITERAL(12, 190, 14), // "slotFrameInTop"
QT_MOC_LITERAL(13, 205, 14), // "slotFrameInTab"
QT_MOC_LITERAL(14, 220, 14), // "slotBlockImage"
QT_MOC_LITERAL(15, 235, 13), // "slotBlockHost"
QT_MOC_LITERAL(16, 249, 15), // "slotBlockIFrame"
QT_MOC_LITERAL(17, 265, 13) // "openSelection"

    },
    "KHTMLPopupGUIClient\0slotSaveLinkAs\0\0"
    "slotSaveImageAs\0slotCopyLinkLocation\0"
    "slotSendImage\0slotStopAnimations\0"
    "slotCopyImageLocation\0slotCopyImage\0"
    "slotViewImage\0slotReloadFrame\0"
    "slotFrameInWindow\0slotFrameInTop\0"
    "slotFrameInTab\0slotBlockImage\0"
    "slotBlockHost\0slotBlockIFrame\0"
    "openSelection"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KHTMLPopupGUIClient[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   94,    2, 0x08 /* Private */,
       3,    0,   95,    2, 0x08 /* Private */,
       4,    0,   96,    2, 0x08 /* Private */,
       5,    0,   97,    2, 0x08 /* Private */,
       6,    0,   98,    2, 0x08 /* Private */,
       7,    0,   99,    2, 0x08 /* Private */,
       8,    0,  100,    2, 0x08 /* Private */,
       9,    0,  101,    2, 0x08 /* Private */,
      10,    0,  102,    2, 0x08 /* Private */,
      11,    0,  103,    2, 0x08 /* Private */,
      12,    0,  104,    2, 0x08 /* Private */,
      13,    0,  105,    2, 0x08 /* Private */,
      14,    0,  106,    2, 0x08 /* Private */,
      15,    0,  107,    2, 0x08 /* Private */,
      16,    0,  108,    2, 0x08 /* Private */,
      17,    0,  109,    2, 0x08 /* Private */,

 // slots: parameters
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

       0        // eod
};

void KHTMLPopupGUIClient::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<KHTMLPopupGUIClient *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotSaveLinkAs(); break;
        case 1: _t->slotSaveImageAs(); break;
        case 2: _t->slotCopyLinkLocation(); break;
        case 3: _t->slotSendImage(); break;
        case 4: _t->slotStopAnimations(); break;
        case 5: _t->slotCopyImageLocation(); break;
        case 6: _t->slotCopyImage(); break;
        case 7: _t->slotViewImage(); break;
        case 8: _t->slotReloadFrame(); break;
        case 9: _t->slotFrameInWindow(); break;
        case 10: _t->slotFrameInTop(); break;
        case 11: _t->slotFrameInTab(); break;
        case 12: _t->slotBlockImage(); break;
        case 13: _t->slotBlockHost(); break;
        case 14: _t->slotBlockIFrame(); break;
        case 15: _t->openSelection(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject KHTMLPopupGUIClient::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_KHTMLPopupGUIClient.data,
    qt_meta_data_KHTMLPopupGUIClient,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KHTMLPopupGUIClient::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KHTMLPopupGUIClient::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KHTMLPopupGUIClient.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int KHTMLPopupGUIClient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 16;
    }
    return _id;
}
struct qt_meta_stringdata_KHTMLZoomFactorAction_t {
    QByteArrayData data[5];
    char stringdata0[53];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KHTMLZoomFactorAction_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KHTMLZoomFactorAction_t qt_meta_stringdata_KHTMLZoomFactorAction = {
    {
QT_MOC_LITERAL(0, 0, 21), // "KHTMLZoomFactorAction"
QT_MOC_LITERAL(1, 22, 13), // "slotTriggered"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 8), // "QAction*"
QT_MOC_LITERAL(4, 46, 6) // "action"

    },
    "KHTMLZoomFactorAction\0slotTriggered\0"
    "\0QAction*\0action"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KHTMLZoomFactorAction[] = {

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
       1,    1,   19,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void KHTMLZoomFactorAction::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<KHTMLZoomFactorAction *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotTriggered((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAction* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject KHTMLZoomFactorAction::staticMetaObject = { {
    QMetaObject::SuperData::link<KSelectAction::staticMetaObject>(),
    qt_meta_stringdata_KHTMLZoomFactorAction.data,
    qt_meta_data_KHTMLZoomFactorAction,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KHTMLZoomFactorAction::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KHTMLZoomFactorAction::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KHTMLZoomFactorAction.stringdata0))
        return static_cast<void*>(this);
    return KSelectAction::qt_metacast(_clname);
}

int KHTMLZoomFactorAction::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KSelectAction::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
struct qt_meta_stringdata_KHTMLTextExtension_t {
    QByteArrayData data[1];
    char stringdata0[19];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KHTMLTextExtension_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KHTMLTextExtension_t qt_meta_stringdata_KHTMLTextExtension = {
    {
QT_MOC_LITERAL(0, 0, 18) // "KHTMLTextExtension"

    },
    "KHTMLTextExtension"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KHTMLTextExtension[] = {

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

void KHTMLTextExtension::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject KHTMLTextExtension::staticMetaObject = { {
    QMetaObject::SuperData::link<KParts::TextExtension::staticMetaObject>(),
    qt_meta_stringdata_KHTMLTextExtension.data,
    qt_meta_data_KHTMLTextExtension,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KHTMLTextExtension::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KHTMLTextExtension::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KHTMLTextExtension.stringdata0))
        return static_cast<void*>(this);
    return KParts::TextExtension::qt_metacast(_clname);
}

int KHTMLTextExtension::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KParts::TextExtension::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_KHTMLHtmlExtension_t {
    QByteArrayData data[1];
    char stringdata0[19];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KHTMLHtmlExtension_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KHTMLHtmlExtension_t qt_meta_stringdata_KHTMLHtmlExtension = {
    {
QT_MOC_LITERAL(0, 0, 18) // "KHTMLHtmlExtension"

    },
    "KHTMLHtmlExtension"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KHTMLHtmlExtension[] = {

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

void KHTMLHtmlExtension::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject KHTMLHtmlExtension::staticMetaObject = { {
    QMetaObject::SuperData::link<KParts::HtmlExtension::staticMetaObject>(),
    qt_meta_stringdata_KHTMLHtmlExtension.data,
    qt_meta_data_KHTMLHtmlExtension,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KHTMLHtmlExtension::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KHTMLHtmlExtension::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KHTMLHtmlExtension.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "KParts::SelectorInterface"))
        return static_cast< KParts::SelectorInterface*>(this);
    if (!strcmp(_clname, "KParts::HtmlSettingsInterface"))
        return static_cast< KParts::HtmlSettingsInterface*>(this);
    if (!strcmp(_clname, "org.kde.KParts.SelectorInterface"))
        return static_cast< KParts::SelectorInterface*>(this);
    if (!strcmp(_clname, "org.kde.KParts.HtmlSettingsInterface"))
        return static_cast< KParts::HtmlSettingsInterface*>(this);
    return KParts::HtmlExtension::qt_metacast(_clname);
}

int KHTMLHtmlExtension::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KParts::HtmlExtension::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
