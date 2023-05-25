/****************************************************************************
** Meta object code from reading C++ file 'kwallet.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../../frameworks/kwallet/src/api/KWallet/kwallet.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kwallet.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KWallet__Wallet_t {
    QByteArrayData data[23];
    char stringdata0[355];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KWallet__Wallet_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KWallet__Wallet_t qt_meta_stringdata_KWallet__Wallet = {
    {
QT_MOC_LITERAL(0, 0, 15), // "KWallet::Wallet"
QT_MOC_LITERAL(1, 16, 12), // "walletClosed"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 13), // "folderUpdated"
QT_MOC_LITERAL(4, 44, 6), // "folder"
QT_MOC_LITERAL(5, 51, 17), // "folderListUpdated"
QT_MOC_LITERAL(6, 69, 13), // "folderRemoved"
QT_MOC_LITERAL(7, 83, 12), // "walletOpened"
QT_MOC_LITERAL(8, 96, 7), // "success"
QT_MOC_LITERAL(9, 104, 16), // "slotWalletClosed"
QT_MOC_LITERAL(10, 121, 6), // "handle"
QT_MOC_LITERAL(11, 128, 17), // "slotFolderUpdated"
QT_MOC_LITERAL(12, 146, 6), // "wallet"
QT_MOC_LITERAL(13, 153, 21), // "slotFolderListUpdated"
QT_MOC_LITERAL(14, 175, 27), // "slotApplicationDisconnected"
QT_MOC_LITERAL(15, 203, 11), // "application"
QT_MOC_LITERAL(16, 215, 17), // "walletAsyncOpened"
QT_MOC_LITERAL(17, 233, 3), // "tId"
QT_MOC_LITERAL(18, 237, 24), // "emitWalletAsyncOpenError"
QT_MOC_LITERAL(19, 262, 16), // "emitWalletOpened"
QT_MOC_LITERAL(20, 279, 27), // "slotCollectionStatusChanged"
QT_MOC_LITERAL(21, 307, 21), // "slotCollectionDeleted"
QT_MOC_LITERAL(22, 329, 25) // "walletServiceUnregistered"

    },
    "KWallet::Wallet\0walletClosed\0\0"
    "folderUpdated\0folder\0folderListUpdated\0"
    "folderRemoved\0walletOpened\0success\0"
    "slotWalletClosed\0handle\0slotFolderUpdated\0"
    "wallet\0slotFolderListUpdated\0"
    "slotApplicationDisconnected\0application\0"
    "walletAsyncOpened\0tId\0emitWalletAsyncOpenError\0"
    "emitWalletOpened\0slotCollectionStatusChanged\0"
    "slotCollectionDeleted\0walletServiceUnregistered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KWallet__Wallet[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   89,    2, 0x06 /* Public */,
       3,    1,   90,    2, 0x06 /* Public */,
       5,    0,   93,    2, 0x06 /* Public */,
       6,    1,   94,    2, 0x06 /* Public */,
       7,    1,   97,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    1,  100,    2, 0x08 /* Private */,
      11,    2,  103,    2, 0x08 /* Private */,
      13,    1,  108,    2, 0x08 /* Private */,
      14,    2,  111,    2, 0x08 /* Private */,
      16,    2,  116,    2, 0x08 /* Private */,
      18,    0,  121,    2, 0x08 /* Private */,
      19,    0,  122,    2, 0x08 /* Private */,
      20,    1,  123,    2, 0x08 /* Private */,
      21,    0,  126,    2, 0x08 /* Private */,
      22,    0,  127,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::Bool,    8,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   12,    4,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   12,   15,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   17,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void KWallet::Wallet::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Wallet *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->walletClosed(); break;
        case 1: _t->folderUpdated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->folderListUpdated(); break;
        case 3: _t->folderRemoved((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->walletOpened((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->slotWalletClosed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->slotFolderUpdated((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 7: _t->slotFolderListUpdated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->slotApplicationDisconnected((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 9: _t->walletAsyncOpened((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 10: _t->emitWalletAsyncOpenError(); break;
        case 11: _t->emitWalletOpened(); break;
        case 12: _t->slotCollectionStatusChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->slotCollectionDeleted(); break;
        case 14: _t->d->walletServiceUnregistered(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Wallet::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Wallet::walletClosed)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Wallet::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Wallet::folderUpdated)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Wallet::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Wallet::folderListUpdated)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Wallet::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Wallet::folderRemoved)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Wallet::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Wallet::walletOpened)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject KWallet::Wallet::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_KWallet__Wallet.data,
    qt_meta_data_KWallet__Wallet,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KWallet::Wallet::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KWallet::Wallet::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KWallet__Wallet.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int KWallet::Wallet::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void KWallet::Wallet::walletClosed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void KWallet::Wallet::folderUpdated(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void KWallet::Wallet::folderListUpdated()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void KWallet::Wallet::folderRemoved(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void KWallet::Wallet::walletOpened(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
