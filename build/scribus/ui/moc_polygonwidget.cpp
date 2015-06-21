/****************************************************************************
** Meta object code from reading C++ file 'polygonwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../scribus/ui/polygonwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'polygonwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_PolygonWidget_t {
    QByteArrayData data[13];
    char stringdata[179];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PolygonWidget_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PolygonWidget_t qt_meta_stringdata_PolygonWidget = {
    {
QT_MOC_LITERAL(0, 0, 13), // "PolygonWidget"
QT_MOC_LITERAL(1, 14, 10), // "NewVectors"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 15), // "setFactorSlider"
QT_MOC_LITERAL(4, 42, 1), // "a"
QT_MOC_LITERAL(5, 44, 17), // "setRotationSlider"
QT_MOC_LITERAL(6, 62, 22), // "setInnerRotationSlider"
QT_MOC_LITERAL(7, 85, 18), // "setCurvatureSlider"
QT_MOC_LITERAL(8, 104, 23), // "setOuterCurvatureSlider"
QT_MOC_LITERAL(9, 128, 13), // "updatePreview"
QT_MOC_LITERAL(10, 142, 13), // "GetZeroFactor"
QT_MOC_LITERAL(11, 156, 12), // "GetMaxFactor"
QT_MOC_LITERAL(12, 169, 9) // "GetFactor"

    },
    "PolygonWidget\0NewVectors\0\0setFactorSlider\0"
    "a\0setRotationSlider\0setInnerRotationSlider\0"
    "setCurvatureSlider\0setOuterCurvatureSlider\0"
    "updatePreview\0GetZeroFactor\0GetMaxFactor\0"
    "GetFactor"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PolygonWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    7,   64,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   79,    2, 0x09 /* Protected */,
       5,    1,   82,    2, 0x09 /* Protected */,
       6,    1,   85,    2, 0x09 /* Protected */,
       7,    1,   88,    2, 0x09 /* Protected */,
       8,    1,   91,    2, 0x09 /* Protected */,
       9,    0,   94,    2, 0x09 /* Protected */,
      10,    0,   95,    2, 0x09 /* Protected */,
      11,    0,   96,    2, 0x09 /* Protected */,
      12,    0,   97,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Double, QMetaType::Bool, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double,    2,    2,    2,    2,    2,    2,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Double,    4,
    QMetaType::Void, QMetaType::Double,    4,
    QMetaType::Void, QMetaType::Double,    4,
    QMetaType::Void, QMetaType::Double,    4,
    QMetaType::Void, QMetaType::Double,    4,
    QMetaType::Void,
    QMetaType::Double,
    QMetaType::Double,
    QMetaType::Double,

       0        // eod
};

void PolygonWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PolygonWidget *_t = static_cast<PolygonWidget *>(_o);
        switch (_id) {
        case 0: _t->NewVectors((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< double(*)>(_a[6])),(*reinterpret_cast< double(*)>(_a[7]))); break;
        case 1: _t->setFactorSlider((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: _t->setRotationSlider((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->setInnerRotationSlider((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: _t->setCurvatureSlider((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 5: _t->setOuterCurvatureSlider((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 6: _t->updatePreview(); break;
        case 7: { double _r = _t->GetZeroFactor();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        case 8: { double _r = _t->GetMaxFactor();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        case 9: { double _r = _t->GetFactor();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (PolygonWidget::*_t)(int , double , bool , double , double , double , double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PolygonWidget::NewVectors)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject PolygonWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_PolygonWidget.data,
      qt_meta_data_PolygonWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PolygonWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PolygonWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PolygonWidget.stringdata))
        return static_cast<void*>(const_cast< PolygonWidget*>(this));
    if (!strcmp(_clname, "Ui::PolygonWidgetBase"))
        return static_cast< Ui::PolygonWidgetBase*>(const_cast< PolygonWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int PolygonWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void PolygonWidget::NewVectors(int _t1, double _t2, bool _t3, double _t4, double _t5, double _t6, double _t7)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)), const_cast<void*>(reinterpret_cast<const void*>(&_t7)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
