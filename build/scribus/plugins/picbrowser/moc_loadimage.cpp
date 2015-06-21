/****************************************************************************
** Meta object code from reading C++ file 'loadimage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../scribus/plugins/picbrowser/loadimage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'loadimage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_loadImagesThread_t {
    QByteArrayData data[10];
    char stringdata[102];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_loadImagesThread_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_loadImagesThread_t qt_meta_stringdata_loadImagesThread = {
    {
QT_MOC_LITERAL(0, 0, 16), // "loadImagesThread"
QT_MOC_LITERAL(1, 17, 11), // "imageLoaded"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 17), // "ImageInformation*"
QT_MOC_LITERAL(4, 48, 14), // "imageLoadError"
QT_MOC_LITERAL(5, 63, 19), // "processLoadImageJob"
QT_MOC_LITERAL(6, 83, 3), // "row"
QT_MOC_LITERAL(7, 87, 4), // "path"
QT_MOC_LITERAL(8, 92, 4), // "size"
QT_MOC_LITERAL(9, 97, 4) // "tpId"

    },
    "loadImagesThread\0imageLoaded\0\0"
    "ImageInformation*\0imageLoadError\0"
    "processLoadImageJob\0row\0path\0size\0"
    "tpId"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_loadImagesThread[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    4,   29,    2, 0x06 /* Public */,
       4,    3,   38,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    4,   45,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::QImage, 0x80000000 | 3, QMetaType::Int,    2,    2,    2,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,    2,    2,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::Int, QMetaType::Int,    6,    7,    8,    9,

       0        // eod
};

void loadImagesThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        loadImagesThread *_t = static_cast<loadImagesThread *>(_o);
        switch (_id) {
        case 0: _t->imageLoaded((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QImage(*)>(_a[2])),(*reinterpret_cast< ImageInformation*(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 1: _t->imageLoadError((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 2: _t->processLoadImageJob((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (loadImagesThread::*_t)(int , const QImage , ImageInformation * , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&loadImagesThread::imageLoaded)) {
                *result = 0;
            }
        }
        {
            typedef void (loadImagesThread::*_t)(int , int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&loadImagesThread::imageLoadError)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject loadImagesThread::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_loadImagesThread.data,
      qt_meta_data_loadImagesThread,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *loadImagesThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *loadImagesThread::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_loadImagesThread.stringdata))
        return static_cast<void*>(const_cast< loadImagesThread*>(this));
    return QThread::qt_metacast(_clname);
}

int loadImagesThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
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
void loadImagesThread::imageLoaded(int _t1, const QImage _t2, ImageInformation * _t3, int _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void loadImagesThread::imageLoadError(int _t1, int _t2, int _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
