/****************************************************************************
** Meta object code from reading C++ file 'filewatcher.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../scribus/filewatcher.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'filewatcher.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_FileWatcher_t {
    QByteArrayData data[19];
    char stringdata[170];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FileWatcher_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FileWatcher_t qt_meta_stringdata_FileWatcher = {
    {
QT_MOC_LITERAL(0, 0, 11), // "FileWatcher"
QT_MOC_LITERAL(1, 12, 11), // "fileChanged"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 11), // "fileDeleted"
QT_MOC_LITERAL(4, 37, 10), // "dirChanged"
QT_MOC_LITERAL(5, 48, 10), // "dirDeleted"
QT_MOC_LITERAL(6, 59, 12), // "statePending"
QT_MOC_LITERAL(7, 72, 7), // "addFile"
QT_MOC_LITERAL(8, 80, 8), // "fileName"
QT_MOC_LITERAL(9, 89, 4), // "fast"
QT_MOC_LITERAL(10, 94, 11), // "ScribusDoc*"
QT_MOC_LITERAL(11, 106, 3), // "doc"
QT_MOC_LITERAL(12, 110, 10), // "removeFile"
QT_MOC_LITERAL(13, 121, 6), // "addDir"
QT_MOC_LITERAL(14, 128, 9), // "removeDir"
QT_MOC_LITERAL(15, 138, 5), // "start"
QT_MOC_LITERAL(16, 144, 4), // "stop"
QT_MOC_LITERAL(17, 149, 9), // "forceScan"
QT_MOC_LITERAL(18, 159, 10) // "checkFiles"

    },
    "FileWatcher\0fileChanged\0\0fileDeleted\0"
    "dirChanged\0dirDeleted\0statePending\0"
    "addFile\0fileName\0fast\0ScribusDoc*\0doc\0"
    "removeFile\0addDir\0removeDir\0start\0"
    "stop\0forceScan\0checkFiles"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FileWatcher[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   94,    2, 0x06 /* Public */,
       3,    1,   97,    2, 0x06 /* Public */,
       4,    1,  100,    2, 0x06 /* Public */,
       5,    1,  103,    2, 0x06 /* Public */,
       6,    1,  106,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    3,  109,    2, 0x0a /* Public */,
       7,    2,  116,    2, 0x2a /* Public | MethodCloned */,
       7,    1,  121,    2, 0x2a /* Public | MethodCloned */,
      12,    1,  124,    2, 0x0a /* Public */,
      13,    2,  127,    2, 0x0a /* Public */,
      13,    1,  132,    2, 0x2a /* Public | MethodCloned */,
      14,    1,  135,    2, 0x0a /* Public */,
      15,    0,  138,    2, 0x0a /* Public */,
      16,    0,  139,    2, 0x0a /* Public */,
      17,    0,  140,    2, 0x0a /* Public */,
      18,    0,  141,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Bool, 0x80000000 | 10,    8,    9,   11,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,    8,    9,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,    8,    9,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void FileWatcher::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FileWatcher *_t = static_cast<FileWatcher *>(_o);
        switch (_id) {
        case 0: _t->fileChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->fileDeleted((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->dirChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->dirDeleted((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->statePending((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->addFile((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< ScribusDoc*(*)>(_a[3]))); break;
        case 6: _t->addFile((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 7: _t->addFile((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->removeFile((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 9: _t->addDir((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 10: _t->addDir((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 11: _t->removeDir((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 12: _t->start(); break;
        case 13: _t->stop(); break;
        case 14: _t->forceScan(); break;
        case 15: _t->checkFiles(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ScribusDoc* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (FileWatcher::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FileWatcher::fileChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (FileWatcher::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FileWatcher::fileDeleted)) {
                *result = 1;
            }
        }
        {
            typedef void (FileWatcher::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FileWatcher::dirChanged)) {
                *result = 2;
            }
        }
        {
            typedef void (FileWatcher::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FileWatcher::dirDeleted)) {
                *result = 3;
            }
        }
        {
            typedef void (FileWatcher::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FileWatcher::statePending)) {
                *result = 4;
            }
        }
    }
}

const QMetaObject FileWatcher::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_FileWatcher.data,
      qt_meta_data_FileWatcher,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *FileWatcher::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FileWatcher::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_FileWatcher.stringdata))
        return static_cast<void*>(const_cast< FileWatcher*>(this));
    return QObject::qt_metacast(_clname);
}

int FileWatcher::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
    return _id;
}

// SIGNAL 0
void FileWatcher::fileChanged(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void FileWatcher::fileDeleted(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void FileWatcher::dirChanged(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void FileWatcher::dirDeleted(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void FileWatcher::statePending(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_END_MOC_NAMESPACE
