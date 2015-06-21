/****************************************************************************
** Meta object code from reading C++ file 'previewimage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../scribus/plugins/picbrowser/previewimage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'previewimage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_PreviewImagesModel_t {
    QByteArrayData data[10];
    char stringdata[112];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PreviewImagesModel_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PreviewImagesModel_t qt_meta_stringdata_PreviewImagesModel = {
    {
QT_MOC_LITERAL(0, 0, 18), // "PreviewImagesModel"
QT_MOC_LITERAL(1, 19, 18), // "processLoadedImage"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 3), // "row"
QT_MOC_LITERAL(4, 43, 5), // "image"
QT_MOC_LITERAL(5, 49, 17), // "ImageInformation*"
QT_MOC_LITERAL(6, 67, 7), // "imgInfo"
QT_MOC_LITERAL(7, 75, 4), // "tpId"
QT_MOC_LITERAL(8, 80, 21), // "processImageLoadError"
QT_MOC_LITERAL(9, 102, 9) // "errorcode"

    },
    "PreviewImagesModel\0processLoadedImage\0"
    "\0row\0image\0ImageInformation*\0imgInfo\0"
    "tpId\0processImageLoadError\0errorcode"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PreviewImagesModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    4,   24,    2, 0x08 /* Private */,
       8,    3,   33,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::QImage, 0x80000000 | 5, QMetaType::Int,    3,    4,    6,    7,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,    3,    7,    9,

       0        // eod
};

void PreviewImagesModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PreviewImagesModel *_t = static_cast<PreviewImagesModel *>(_o);
        switch (_id) {
        case 0: _t->processLoadedImage((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QImage(*)>(_a[2])),(*reinterpret_cast< ImageInformation*(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 1: _t->processImageLoadError((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        default: ;
        }
    }
}

const QMetaObject PreviewImagesModel::staticMetaObject = {
    { &QAbstractListModel::staticMetaObject, qt_meta_stringdata_PreviewImagesModel.data,
      qt_meta_data_PreviewImagesModel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PreviewImagesModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PreviewImagesModel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PreviewImagesModel.stringdata))
        return static_cast<void*>(const_cast< PreviewImagesModel*>(this));
    return QAbstractListModel::qt_metacast(_clname);
}

int PreviewImagesModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
