/****************************************************************************
** Meta object code from reading C++ file 'canvasmode_editpolygon.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../scribus/canvasmode_editpolygon.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'canvasmode_editpolygon.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CanvasMode_EditPolygon_t {
    QByteArrayData data[13];
    char stringdata[123];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CanvasMode_EditPolygon_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CanvasMode_EditPolygon_t qt_meta_stringdata_CanvasMode_EditPolygon = {
    {
QT_MOC_LITERAL(0, 0, 22), // "CanvasMode_EditPolygon"
QT_MOC_LITERAL(1, 23, 11), // "applyValues"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 5), // "polyC"
QT_MOC_LITERAL(4, 42, 5), // "polyF"
QT_MOC_LITERAL(5, 48, 9), // "polyUseCF"
QT_MOC_LITERAL(6, 58, 5), // "polyR"
QT_MOC_LITERAL(7, 64, 7), // "polyCur"
QT_MOC_LITERAL(8, 72, 8), // "polyIRot"
QT_MOC_LITERAL(9, 81, 8), // "polyOCur"
QT_MOC_LITERAL(10, 90, 14), // "updateFromItem"
QT_MOC_LITERAL(11, 105, 10), // "endEditing"
QT_MOC_LITERAL(12, 116, 6) // "active"

    },
    "CanvasMode_EditPolygon\0applyValues\0\0"
    "polyC\0polyF\0polyUseCF\0polyR\0polyCur\0"
    "polyIRot\0polyOCur\0updateFromItem\0"
    "endEditing\0active"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CanvasMode_EditPolygon[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    7,   34,    2, 0x0a /* Public */,
      10,    0,   49,    2, 0x0a /* Public */,
      11,    1,   50,    2, 0x0a /* Public */,
      11,    0,   53,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Double, QMetaType::Bool, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double,    3,    4,    5,    6,    7,    8,    9,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   12,
    QMetaType::Void,

       0        // eod
};

void CanvasMode_EditPolygon::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CanvasMode_EditPolygon *_t = static_cast<CanvasMode_EditPolygon *>(_o);
        switch (_id) {
        case 0: _t->applyValues((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< double(*)>(_a[6])),(*reinterpret_cast< double(*)>(_a[7]))); break;
        case 1: _t->updateFromItem(); break;
        case 2: _t->endEditing((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->endEditing(); break;
        default: ;
        }
    }
}

const QMetaObject CanvasMode_EditPolygon::staticMetaObject = {
    { &CanvasMode::staticMetaObject, qt_meta_stringdata_CanvasMode_EditPolygon.data,
      qt_meta_data_CanvasMode_EditPolygon,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CanvasMode_EditPolygon::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CanvasMode_EditPolygon::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CanvasMode_EditPolygon.stringdata))
        return static_cast<void*>(const_cast< CanvasMode_EditPolygon*>(this));
    return CanvasMode::qt_metacast(_clname);
}

int CanvasMode_EditPolygon::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CanvasMode::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
