/****************************************************************************
** Meta object code from reading C++ file 'scimagecachedir.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../scribus/scimagecachedir.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'scimagecachedir.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ScImageCacheDir_t {
    QByteArrayData data[9];
    char stringdata[91];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ScImageCacheDir_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ScImageCacheDir_t qt_meta_stringdata_ScImageCacheDir = {
    {
QT_MOC_LITERAL(0, 0, 15), // "ScImageCacheDir"
QT_MOC_LITERAL(1, 16, 11), // "fileCreated"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 17), // "ScImageCacheFile*"
QT_MOC_LITERAL(4, 47, 4), // "file"
QT_MOC_LITERAL(5, 52, 9), // "QFileInfo"
QT_MOC_LITERAL(6, 62, 4), // "info"
QT_MOC_LITERAL(7, 67, 11), // "fileChanged"
QT_MOC_LITERAL(8, 79, 11) // "fileRemoved"

    },
    "ScImageCacheDir\0fileCreated\0\0"
    "ScImageCacheFile*\0file\0QFileInfo\0info\0"
    "fileChanged\0fileRemoved"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ScImageCacheDir[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   29,    2, 0x06 /* Public */,
       7,    2,   34,    2, 0x06 /* Public */,
       8,    1,   39,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void ScImageCacheDir::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ScImageCacheDir *_t = static_cast<ScImageCacheDir *>(_o);
        switch (_id) {
        case 0: _t->fileCreated((*reinterpret_cast< ScImageCacheFile*(*)>(_a[1])),(*reinterpret_cast< const QFileInfo(*)>(_a[2]))); break;
        case 1: _t->fileChanged((*reinterpret_cast< ScImageCacheFile*(*)>(_a[1])),(*reinterpret_cast< const QFileInfo(*)>(_a[2]))); break;
        case 2: _t->fileRemoved((*reinterpret_cast< ScImageCacheFile*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ScImageCacheDir::*_t)(ScImageCacheFile * , const QFileInfo & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ScImageCacheDir::fileCreated)) {
                *result = 0;
            }
        }
        {
            typedef void (ScImageCacheDir::*_t)(ScImageCacheFile * , const QFileInfo & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ScImageCacheDir::fileChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (ScImageCacheDir::*_t)(ScImageCacheFile * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ScImageCacheDir::fileRemoved)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject ScImageCacheDir::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ScImageCacheDir.data,
      qt_meta_data_ScImageCacheDir,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ScImageCacheDir::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ScImageCacheDir::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ScImageCacheDir.stringdata))
        return static_cast<void*>(const_cast< ScImageCacheDir*>(this));
    return QObject::qt_metacast(_clname);
}

int ScImageCacheDir::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void ScImageCacheDir::fileCreated(ScImageCacheFile * _t1, const QFileInfo & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ScImageCacheDir::fileChanged(ScImageCacheFile * _t1, const QFileInfo & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ScImageCacheDir::fileRemoved(ScImageCacheFile * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
