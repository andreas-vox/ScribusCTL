/****************************************************************************
** Meta object code from reading C++ file 'arcvectordialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../scribus/ui/arcvectordialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'arcvectordialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ArcVectorDialog_t {
    QByteArrayData data[13];
    char stringdata[121];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ArcVectorDialog_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ArcVectorDialog_t qt_meta_stringdata_ArcVectorDialog = {
    {
QT_MOC_LITERAL(0, 0, 15), // "ArcVectorDialog"
QT_MOC_LITERAL(1, 16, 10), // "NewVectors"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 7), // "endEdit"
QT_MOC_LITERAL(4, 36, 14), // "languageChange"
QT_MOC_LITERAL(5, 51, 13), // "changeVectors"
QT_MOC_LITERAL(6, 65, 9), // "setValues"
QT_MOC_LITERAL(7, 75, 5), // "start"
QT_MOC_LITERAL(8, 81, 5), // "sweep"
QT_MOC_LITERAL(9, 87, 6), // "height"
QT_MOC_LITERAL(10, 94, 5), // "width"
QT_MOC_LITERAL(11, 100, 10), // "unitChange"
QT_MOC_LITERAL(12, 111, 9) // "unitIndex"

    },
    "ArcVectorDialog\0NewVectors\0\0endEdit\0"
    "languageChange\0changeVectors\0setValues\0"
    "start\0sweep\0height\0width\0unitChange\0"
    "unitIndex"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ArcVectorDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    4,   44,    2, 0x06 /* Public */,
       3,    0,   53,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   54,    2, 0x0a /* Public */,
       5,    0,   55,    2, 0x0a /* Public */,
       6,    4,   56,    2, 0x0a /* Public */,
      11,    1,   65,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double,    2,    2,    2,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double,    7,    8,    9,   10,
    QMetaType::Void, QMetaType::Int,   12,

       0        // eod
};

void ArcVectorDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ArcVectorDialog *_t = static_cast<ArcVectorDialog *>(_o);
        switch (_id) {
        case 0: _t->NewVectors((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4]))); break;
        case 1: _t->endEdit(); break;
        case 2: _t->languageChange(); break;
        case 3: _t->changeVectors(); break;
        case 4: _t->setValues((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4]))); break;
        case 5: _t->unitChange((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ArcVectorDialog::*_t)(double , double , double , double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ArcVectorDialog::NewVectors)) {
                *result = 0;
            }
        }
        {
            typedef void (ArcVectorDialog::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ArcVectorDialog::endEdit)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject ArcVectorDialog::staticMetaObject = {
    { &ScrPaletteBase::staticMetaObject, qt_meta_stringdata_ArcVectorDialog.data,
      qt_meta_data_ArcVectorDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ArcVectorDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ArcVectorDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ArcVectorDialog.stringdata))
        return static_cast<void*>(const_cast< ArcVectorDialog*>(this));
    if (!strcmp(_clname, "Ui::ArcVectorBase"))
        return static_cast< Ui::ArcVectorBase*>(const_cast< ArcVectorDialog*>(this));
    return ScrPaletteBase::qt_metacast(_clname);
}

int ArcVectorDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ScrPaletteBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void ArcVectorDialog::NewVectors(double _t1, double _t2, double _t3, double _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ArcVectorDialog::endEdit()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
