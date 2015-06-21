/****************************************************************************
** Meta object code from reading C++ file 'canvasmode_editspiral.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../scribus/canvasmode_editspiral.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'canvasmode_editspiral.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CanvasMode_EditSpiral_t {
    QByteArrayData data[9];
    char stringdata[85];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CanvasMode_EditSpiral_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CanvasMode_EditSpiral_t qt_meta_stringdata_CanvasMode_EditSpiral = {
    {
QT_MOC_LITERAL(0, 0, 21), // "CanvasMode_EditSpiral"
QT_MOC_LITERAL(1, 22, 14), // "updateFromItem"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 10), // "endEditing"
QT_MOC_LITERAL(4, 49, 6), // "active"
QT_MOC_LITERAL(5, 56, 11), // "applyValues"
QT_MOC_LITERAL(6, 68, 5), // "start"
QT_MOC_LITERAL(7, 74, 3), // "end"
QT_MOC_LITERAL(8, 78, 6) // "factor"

    },
    "CanvasMode_EditSpiral\0updateFromItem\0"
    "\0endEditing\0active\0applyValues\0start\0"
    "end\0factor"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CanvasMode_EditSpiral[] = {

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
       1,    0,   34,    2, 0x0a /* Public */,
       3,    1,   35,    2, 0x08 /* Private */,
       3,    0,   38,    2, 0x08 /* Private */,
       5,    3,   39,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double,    6,    7,    8,

       0        // eod
};

void CanvasMode_EditSpiral::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CanvasMode_EditSpiral *_t = static_cast<CanvasMode_EditSpiral *>(_o);
        switch (_id) {
        case 0: _t->updateFromItem(); break;
        case 1: _t->endEditing((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->endEditing(); break;
        case 3: _t->applyValues((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        default: ;
        }
    }
}

const QMetaObject CanvasMode_EditSpiral::staticMetaObject = {
    { &CanvasMode::staticMetaObject, qt_meta_stringdata_CanvasMode_EditSpiral.data,
      qt_meta_data_CanvasMode_EditSpiral,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CanvasMode_EditSpiral::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CanvasMode_EditSpiral::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CanvasMode_EditSpiral.stringdata))
        return static_cast<void*>(const_cast< CanvasMode_EditSpiral*>(this));
    return CanvasMode::qt_metacast(_clname);
}

int CanvasMode_EditSpiral::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
