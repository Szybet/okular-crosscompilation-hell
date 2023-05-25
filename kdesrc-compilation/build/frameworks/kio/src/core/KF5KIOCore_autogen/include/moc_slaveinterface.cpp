/****************************************************************************
** Meta object code from reading C++ file 'slaveinterface.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../frameworks/kio/src/core/slaveinterface.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'slaveinterface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KIO__SlaveInterface_t {
    QByteArrayData data[34];
    char stringdata0[369];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KIO__SlaveInterface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KIO__SlaveInterface_t qt_meta_stringdata_KIO__SlaveInterface = {
    {
QT_MOC_LITERAL(0, 0, 19), // "KIO::SlaveInterface"
QT_MOC_LITERAL(1, 20, 4), // "data"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 7), // "dataReq"
QT_MOC_LITERAL(4, 34, 5), // "error"
QT_MOC_LITERAL(5, 40, 9), // "connected"
QT_MOC_LITERAL(6, 50, 8), // "finished"
QT_MOC_LITERAL(7, 59, 11), // "slaveStatus"
QT_MOC_LITERAL(8, 71, 11), // "listEntries"
QT_MOC_LITERAL(9, 83, 17), // "KIO::UDSEntryList"
QT_MOC_LITERAL(10, 101, 9), // "statEntry"
QT_MOC_LITERAL(11, 111, 13), // "KIO::UDSEntry"
QT_MOC_LITERAL(12, 125, 14), // "needSubUrlData"
QT_MOC_LITERAL(13, 140, 9), // "canResume"
QT_MOC_LITERAL(14, 150, 15), // "KIO::filesize_t"
QT_MOC_LITERAL(15, 166, 4), // "open"
QT_MOC_LITERAL(16, 171, 7), // "written"
QT_MOC_LITERAL(17, 179, 5), // "close"
QT_MOC_LITERAL(18, 185, 27), // "privilegeOperationRequested"
QT_MOC_LITERAL(19, 213, 8), // "metaData"
QT_MOC_LITERAL(20, 222, 13), // "KIO::MetaData"
QT_MOC_LITERAL(21, 236, 9), // "totalSize"
QT_MOC_LITERAL(22, 246, 13), // "processedSize"
QT_MOC_LITERAL(23, 260, 11), // "redirection"
QT_MOC_LITERAL(24, 272, 8), // "position"
QT_MOC_LITERAL(25, 281, 9), // "truncated"
QT_MOC_LITERAL(26, 291, 5), // "speed"
QT_MOC_LITERAL(27, 297, 9), // "errorPage"
QT_MOC_LITERAL(28, 307, 8), // "mimeType"
QT_MOC_LITERAL(29, 316, 7), // "warning"
QT_MOC_LITERAL(30, 324, 11), // "infoMessage"
QT_MOC_LITERAL(31, 336, 9), // "calcSpeed"
QT_MOC_LITERAL(32, 346, 12), // "slotHostInfo"
QT_MOC_LITERAL(33, 359, 9) // "QHostInfo"

    },
    "KIO::SlaveInterface\0data\0\0dataReq\0"
    "error\0connected\0finished\0slaveStatus\0"
    "listEntries\0KIO::UDSEntryList\0statEntry\0"
    "KIO::UDSEntry\0needSubUrlData\0canResume\0"
    "KIO::filesize_t\0open\0written\0close\0"
    "privilegeOperationRequested\0metaData\0"
    "KIO::MetaData\0totalSize\0processedSize\0"
    "redirection\0position\0truncated\0speed\0"
    "errorPage\0mimeType\0warning\0infoMessage\0"
    "calcSpeed\0slotHostInfo\0QHostInfo"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KIO__SlaveInterface[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      27,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      25,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  149,    2, 0x06 /* Public */,
       3,    0,  152,    2, 0x06 /* Public */,
       4,    2,  153,    2, 0x06 /* Public */,
       5,    0,  158,    2, 0x06 /* Public */,
       6,    0,  159,    2, 0x06 /* Public */,
       7,    4,  160,    2, 0x06 /* Public */,
       8,    1,  169,    2, 0x06 /* Public */,
      10,    1,  172,    2, 0x06 /* Public */,
      12,    0,  175,    2, 0x06 /* Public */,
      13,    1,  176,    2, 0x06 /* Public */,
      15,    0,  179,    2, 0x06 /* Public */,
      16,    1,  180,    2, 0x06 /* Public */,
      17,    0,  183,    2, 0x06 /* Public */,
      18,    0,  184,    2, 0x06 /* Public */,
      19,    1,  185,    2, 0x06 /* Public */,
      21,    1,  188,    2, 0x06 /* Public */,
      22,    1,  191,    2, 0x06 /* Public */,
      23,    1,  194,    2, 0x06 /* Public */,
      24,    1,  197,    2, 0x06 /* Public */,
      25,    1,  200,    2, 0x06 /* Public */,
      26,    1,  203,    2, 0x06 /* Public */,
      27,    0,  206,    2, 0x06 /* Public */,
      28,    1,  207,    2, 0x06 /* Public */,
      29,    1,  210,    2, 0x06 /* Public */,
      30,    1,  213,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      31,    0,  216,    2, 0x09 /* Protected */,
      32,    1,  217,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QByteArray,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    2,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong, QMetaType::QByteArray, QMetaType::QString, QMetaType::Bool,    2,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 9,    2,
    QMetaType::Void, 0x80000000 | 11,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 14,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 14,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 20,    2,
    QMetaType::Void, 0x80000000 | 14,    2,
    QMetaType::Void, 0x80000000 | 14,    2,
    QMetaType::Void, QMetaType::QUrl,    2,
    QMetaType::Void, 0x80000000 | 14,    2,
    QMetaType::Void, 0x80000000 | 14,    2,
    QMetaType::Void, QMetaType::ULong,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 33,    2,

       0        // eod
};

void KIO::SlaveInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SlaveInterface *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->data((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 1: _t->dataReq(); break;
        case 2: _t->error((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 3: _t->connected(); break;
        case 4: _t->finished(); break;
        case 5: _t->slaveStatus((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 6: _t->listEntries((*reinterpret_cast< const KIO::UDSEntryList(*)>(_a[1]))); break;
        case 7: _t->statEntry((*reinterpret_cast< const KIO::UDSEntry(*)>(_a[1]))); break;
        case 8: _t->needSubUrlData(); break;
        case 9: _t->canResume((*reinterpret_cast< KIO::filesize_t(*)>(_a[1]))); break;
        case 10: _t->open(); break;
        case 11: _t->written((*reinterpret_cast< KIO::filesize_t(*)>(_a[1]))); break;
        case 12: _t->close(); break;
        case 13: _t->privilegeOperationRequested(); break;
        case 14: _t->metaData((*reinterpret_cast< const KIO::MetaData(*)>(_a[1]))); break;
        case 15: _t->totalSize((*reinterpret_cast< KIO::filesize_t(*)>(_a[1]))); break;
        case 16: _t->processedSize((*reinterpret_cast< KIO::filesize_t(*)>(_a[1]))); break;
        case 17: _t->redirection((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 18: _t->position((*reinterpret_cast< KIO::filesize_t(*)>(_a[1]))); break;
        case 19: _t->truncated((*reinterpret_cast< KIO::filesize_t(*)>(_a[1]))); break;
        case 20: _t->speed((*reinterpret_cast< ulong(*)>(_a[1]))); break;
        case 21: _t->errorPage(); break;
        case 22: _t->mimeType((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 23: _t->warning((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 24: _t->infoMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 25: _t->calcSpeed(); break;
        case 26: _t->d_func()->slotHostInfo((*reinterpret_cast< QHostInfo(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KIO::UDSEntry >(); break;
            }
            break;
        case 26:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QHostInfo >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SlaveInterface::*)(const QByteArray & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SlaveInterface::data)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SlaveInterface::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SlaveInterface::dataReq)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (SlaveInterface::*)(int , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SlaveInterface::error)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (SlaveInterface::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SlaveInterface::connected)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (SlaveInterface::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SlaveInterface::finished)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (SlaveInterface::*)(qint64 , const QByteArray & , const QString & , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SlaveInterface::slaveStatus)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (SlaveInterface::*)(const KIO::UDSEntryList & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SlaveInterface::listEntries)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (SlaveInterface::*)(const KIO::UDSEntry & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SlaveInterface::statEntry)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (SlaveInterface::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SlaveInterface::needSubUrlData)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (SlaveInterface::*)(KIO::filesize_t );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SlaveInterface::canResume)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (SlaveInterface::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SlaveInterface::open)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (SlaveInterface::*)(KIO::filesize_t );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SlaveInterface::written)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (SlaveInterface::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SlaveInterface::close)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (SlaveInterface::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SlaveInterface::privilegeOperationRequested)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (SlaveInterface::*)(const KIO::MetaData & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SlaveInterface::metaData)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (SlaveInterface::*)(KIO::filesize_t );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SlaveInterface::totalSize)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (SlaveInterface::*)(KIO::filesize_t );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SlaveInterface::processedSize)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (SlaveInterface::*)(const QUrl & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SlaveInterface::redirection)) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (SlaveInterface::*)(KIO::filesize_t );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SlaveInterface::position)) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (SlaveInterface::*)(KIO::filesize_t );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SlaveInterface::truncated)) {
                *result = 19;
                return;
            }
        }
        {
            using _t = void (SlaveInterface::*)(unsigned long );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SlaveInterface::speed)) {
                *result = 20;
                return;
            }
        }
        {
            using _t = void (SlaveInterface::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SlaveInterface::errorPage)) {
                *result = 21;
                return;
            }
        }
        {
            using _t = void (SlaveInterface::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SlaveInterface::mimeType)) {
                *result = 22;
                return;
            }
        }
        {
            using _t = void (SlaveInterface::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SlaveInterface::warning)) {
                *result = 23;
                return;
            }
        }
        {
            using _t = void (SlaveInterface::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SlaveInterface::infoMessage)) {
                *result = 24;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject KIO::SlaveInterface::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_KIO__SlaveInterface.data,
    qt_meta_data_KIO__SlaveInterface,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KIO::SlaveInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KIO::SlaveInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KIO__SlaveInterface.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int KIO::SlaveInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 27)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 27;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 27)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 27;
    }
    return _id;
}

// SIGNAL 0
void KIO::SlaveInterface::data(const QByteArray & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void KIO::SlaveInterface::dataReq()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void KIO::SlaveInterface::error(int _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void KIO::SlaveInterface::connected()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void KIO::SlaveInterface::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void KIO::SlaveInterface::slaveStatus(qint64 _t1, const QByteArray & _t2, const QString & _t3, bool _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void KIO::SlaveInterface::listEntries(const KIO::UDSEntryList & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void KIO::SlaveInterface::statEntry(const KIO::UDSEntry & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void KIO::SlaveInterface::needSubUrlData()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void KIO::SlaveInterface::canResume(KIO::filesize_t _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void KIO::SlaveInterface::open()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void KIO::SlaveInterface::written(KIO::filesize_t _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void KIO::SlaveInterface::close()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void KIO::SlaveInterface::privilegeOperationRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 13, nullptr);
}

// SIGNAL 14
void KIO::SlaveInterface::metaData(const KIO::MetaData & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void KIO::SlaveInterface::totalSize(KIO::filesize_t _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void KIO::SlaveInterface::processedSize(KIO::filesize_t _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void KIO::SlaveInterface::redirection(const QUrl & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void KIO::SlaveInterface::position(KIO::filesize_t _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void KIO::SlaveInterface::truncated(KIO::filesize_t _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void KIO::SlaveInterface::speed(unsigned long _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void KIO::SlaveInterface::errorPage()
{
    QMetaObject::activate(this, &staticMetaObject, 21, nullptr);
}

// SIGNAL 22
void KIO::SlaveInterface::mimeType(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 22, _a);
}

// SIGNAL 23
void KIO::SlaveInterface::warning(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 23, _a);
}

// SIGNAL 24
void KIO::SlaveInterface::infoMessage(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 24, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
