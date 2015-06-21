/****************************************************************************
** Meta object code from reading C++ file 'scdlmgr.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../scribus/downloadmanager/scdlmgr.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'scdlmgr.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ScDLManager_t {
    QByteArrayData data[11];
    char stringdata[109];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ScDLManager_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ScDLManager_t qt_meta_stringdata_ScDLManager = {
    {
QT_MOC_LITERAL(0, 0, 11), // "ScDLManager"
QT_MOC_LITERAL(1, 12, 8), // "finished"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 12), // "fileReceived"
QT_MOC_LITERAL(4, 35, 1), // "t"
QT_MOC_LITERAL(5, 37, 10), // "fileFailed"
QT_MOC_LITERAL(6, 48, 9), // "dlStarted"
QT_MOC_LITERAL(7, 58, 8), // "filename"
QT_MOC_LITERAL(8, 67, 10), // "dlReceived"
QT_MOC_LITERAL(9, 78, 8), // "dlFailed"
QT_MOC_LITERAL(10, 87, 21) // "moveFinishedDownloads"

    },
    "ScDLManager\0finished\0\0fileReceived\0t\0"
    "fileFailed\0dlStarted\0filename\0dlReceived\0"
    "dlFailed\0moveFinishedDownloads"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ScDLManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,
       3,    1,   50,    2, 0x06 /* Public */,
       5,    1,   53,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   56,    2, 0x0a /* Public */,
       8,    1,   59,    2, 0x0a /* Public */,
       9,    1,   62,    2, 0x0a /* Public */,
      10,    0,   65,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void,

       0        // eod
};

void ScDLManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ScDLManager *_t = static_cast<ScDLManager *>(_o);
        switch (_id) {
        case 0: _t->finished(); break;
        case 1: _t->fileReceived((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->fileFailed((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->dlStarted((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->dlReceived((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->dlFailed((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->moveFinishedDownloads(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ScDLManager::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ScDLManager::finished)) {
                *result = 0;
            }
        }
        {
            typedef void (ScDLManager::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ScDLManager::fileReceived)) {
                *result = 1;
            }
        }
        {
            typedef void (ScDLManager::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ScDLManager::fileFailed)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject ScDLManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ScDLManager.data,
      qt_meta_data_ScDLManager,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ScDLManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ScDLManager::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ScDLManager.stringdata))
        return static_cast<void*>(const_cast< ScDLManager*>(this));
    return QObject::qt_metacast(_clname);
}

int ScDLManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void ScDLManager::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void ScDLManager::fileReceived(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ScDLManager::fileFailed(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
