/****************************************************************************
** Meta object code from reading C++ file 'spiralvectordialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../scribus/ui/spiralvectordialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'spiralvectordialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SpiralVectorDialog_t {
    QByteArrayData data[10];
    char stringdata[97];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SpiralVectorDialog_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SpiralVectorDialog_t qt_meta_stringdata_SpiralVectorDialog = {
    {
QT_MOC_LITERAL(0, 0, 18), // "SpiralVectorDialog"
QT_MOC_LITERAL(1, 19, 10), // "NewVectors"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 7), // "endEdit"
QT_MOC_LITERAL(4, 39, 14), // "languageChange"
QT_MOC_LITERAL(5, 54, 13), // "changeVectors"
QT_MOC_LITERAL(6, 68, 9), // "setValues"
QT_MOC_LITERAL(7, 78, 5), // "start"
QT_MOC_LITERAL(8, 84, 5), // "sweep"
QT_MOC_LITERAL(9, 90, 6) // "factor"

    },
    "SpiralVectorDialog\0NewVectors\0\0endEdit\0"
    "languageChange\0changeVectors\0setValues\0"
    "start\0sweep\0factor"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SpiralVectorDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   39,    2, 0x06 /* Public */,
       3,    0,   46,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   47,    2, 0x0a /* Public */,
       5,    0,   48,    2, 0x0a /* Public */,
       6,    3,   49,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double,    2,    2,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double,    7,    8,    9,

       0        // eod
};

void SpiralVectorDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SpiralVectorDialog *_t = static_cast<SpiralVectorDialog *>(_o);
        switch (_id) {
        case 0: _t->NewVectors((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 1: _t->endEdit(); break;
        case 2: _t->languageChange(); break;
        case 3: _t->changeVectors(); break;
        case 4: _t->setValues((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (SpiralVectorDialog::*_t)(double , double , double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SpiralVectorDialog::NewVectors)) {
                *result = 0;
            }
        }
        {
            typedef void (SpiralVectorDialog::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SpiralVectorDialog::endEdit)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject SpiralVectorDialog::staticMetaObject = {
    { &ScrPaletteBase::staticMetaObject, qt_meta_stringdata_SpiralVectorDialog.data,
      qt_meta_data_SpiralVectorDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SpiralVectorDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SpiralVectorDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SpiralVectorDialog.stringdata))
        return static_cast<void*>(const_cast< SpiralVectorDialog*>(this));
    if (!strcmp(_clname, "Ui::SpiralVectorBase"))
        return static_cast< Ui::SpiralVectorBase*>(const_cast< SpiralVectorDialog*>(this));
    return ScrPaletteBase::qt_metacast(_clname);
}

int SpiralVectorDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ScrPaletteBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void SpiralVectorDialog::NewVectors(double _t1, double _t2, double _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SpiralVectorDialog::endEdit()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
