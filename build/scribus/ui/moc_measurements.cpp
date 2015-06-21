/****************************************************************************
** Meta object code from reading C++ file 'measurements.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../scribus/ui/measurements.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'measurements.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Measurements_t {
    QByteArrayData data[11];
    char stringdata[76];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Measurements_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Measurements_t qt_meta_stringdata_Measurements = {
    {
QT_MOC_LITERAL(0, 0, 12), // "Measurements"
QT_MOC_LITERAL(1, 13, 9), // "setValues"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 2), // "x1"
QT_MOC_LITERAL(4, 27, 2), // "y1"
QT_MOC_LITERAL(5, 30, 2), // "x2"
QT_MOC_LITERAL(6, 33, 2), // "y2"
QT_MOC_LITERAL(7, 36, 5), // "angle"
QT_MOC_LITERAL(8, 42, 6), // "length"
QT_MOC_LITERAL(9, 49, 11), // "unitChanged"
QT_MOC_LITERAL(10, 61, 14) // "languageChange"

    },
    "Measurements\0setValues\0\0x1\0y1\0x2\0y2\0"
    "angle\0length\0unitChanged\0languageChange"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Measurements[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    6,   29,    2, 0x0a /* Public */,
       9,    0,   42,    2, 0x0a /* Public */,
      10,    0,   43,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double,    3,    4,    5,    6,    7,    8,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Measurements::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Measurements *_t = static_cast<Measurements *>(_o);
        switch (_id) {
        case 0: _t->setValues((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< double(*)>(_a[6]))); break;
        case 1: _t->unitChanged(); break;
        case 2: _t->languageChange(); break;
        default: ;
        }
    }
}

const QMetaObject Measurements::staticMetaObject = {
    { &ScrPaletteBase::staticMetaObject, qt_meta_stringdata_Measurements.data,
      qt_meta_data_Measurements,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Measurements::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Measurements::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Measurements.stringdata))
        return static_cast<void*>(const_cast< Measurements*>(this));
    if (!strcmp(_clname, "Ui::MeasurementsBase"))
        return static_cast< Ui::MeasurementsBase*>(const_cast< Measurements*>(this));
    return ScrPaletteBase::qt_metacast(_clname);
}

int Measurements::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ScrPaletteBase::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
