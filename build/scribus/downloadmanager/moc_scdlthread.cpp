/****************************************************************************
** Meta object code from reading C++ file 'scdlthread.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../scribus/downloadmanager/scdlthread.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'scdlthread.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ScDLThread_t {
    QByteArrayData data[14];
    char stringdata[163];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ScDLThread_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ScDLThread_t qt_meta_stringdata_ScDLThread = {
    {
QT_MOC_LITERAL(0, 0, 10), // "ScDLThread"
QT_MOC_LITERAL(1, 11, 8), // "finished"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 9), // "runSignal"
QT_MOC_LITERAL(4, 31, 11), // "fileStarted"
QT_MOC_LITERAL(5, 43, 12), // "fileReceived"
QT_MOC_LITERAL(6, 56, 10), // "fileFailed"
QT_MOC_LITERAL(7, 67, 17), // "startNextDownload"
QT_MOC_LITERAL(8, 85, 16), // "downloadFinished"
QT_MOC_LITERAL(9, 102, 13), // "replyFinished"
QT_MOC_LITERAL(10, 116, 14), // "QNetworkReply*"
QT_MOC_LITERAL(11, 131, 5), // "reply"
QT_MOC_LITERAL(12, 137, 17), // "downloadReadyRead"
QT_MOC_LITERAL(13, 155, 7) // "runSlot"

    },
    "ScDLThread\0finished\0\0runSignal\0"
    "fileStarted\0fileReceived\0fileFailed\0"
    "startNextDownload\0downloadFinished\0"
    "replyFinished\0QNetworkReply*\0reply\0"
    "downloadReadyRead\0runSlot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ScDLThread[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x06 /* Public */,
       3,    0,   65,    2, 0x06 /* Public */,
       4,    1,   66,    2, 0x06 /* Public */,
       5,    1,   69,    2, 0x06 /* Public */,
       6,    1,   72,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   75,    2, 0x08 /* Private */,
       8,    0,   76,    2, 0x08 /* Private */,
       9,    1,   77,    2, 0x08 /* Private */,
      12,    0,   80,    2, 0x08 /* Private */,
      13,    0,   81,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ScDLThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ScDLThread *_t = static_cast<ScDLThread *>(_o);
        switch (_id) {
        case 0: _t->finished(); break;
        case 1: _t->runSignal(); break;
        case 2: _t->fileStarted((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->fileReceived((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->fileFailed((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->startNextDownload(); break;
        case 6: _t->downloadFinished(); break;
        case 7: _t->replyFinished((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 8: _t->downloadReadyRead(); break;
        case 9: _t->runSlot(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ScDLThread::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ScDLThread::finished)) {
                *result = 0;
            }
        }
        {
            typedef void (ScDLThread::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ScDLThread::runSignal)) {
                *result = 1;
            }
        }
        {
            typedef void (ScDLThread::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ScDLThread::fileStarted)) {
                *result = 2;
            }
        }
        {
            typedef void (ScDLThread::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ScDLThread::fileReceived)) {
                *result = 3;
            }
        }
        {
            typedef void (ScDLThread::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ScDLThread::fileFailed)) {
                *result = 4;
            }
        }
    }
}

const QMetaObject ScDLThread::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_ScDLThread.data,
      qt_meta_data_ScDLThread,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ScDLThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ScDLThread::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ScDLThread.stringdata))
        return static_cast<void*>(const_cast< ScDLThread*>(this));
    return QThread::qt_metacast(_clname);
}

int ScDLThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void ScDLThread::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void ScDLThread::runSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void ScDLThread::fileStarted(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ScDLThread::fileReceived(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void ScDLThread::fileFailed(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_END_MOC_NAMESPACE
