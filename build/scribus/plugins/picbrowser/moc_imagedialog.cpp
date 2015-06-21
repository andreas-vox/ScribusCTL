/****************************************************************************
** Meta object code from reading C++ file 'imagedialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../scribus/plugins/picbrowser/imagedialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'imagedialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Imagedialog_t {
    QByteArrayData data[8];
    char stringdata[134];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Imagedialog_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Imagedialog_t qt_meta_stringdata_Imagedialog = {
    {
QT_MOC_LITERAL(0, 0, 11), // "Imagedialog"
QT_MOC_LITERAL(1, 12, 29), // "fitToWindowRadiobuttonToggled"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 7), // "toggled"
QT_MOC_LITERAL(4, 51, 22), // "zoomRadiobuttonToggled"
QT_MOC_LITERAL(5, 74, 23), // "zoomSpinboxValueChanged"
QT_MOC_LITERAL(6, 98, 5), // "value"
QT_MOC_LITERAL(7, 104, 29) // "showOriginalSizeButtonClicked"

    },
    "Imagedialog\0fitToWindowRadiobuttonToggled\0"
    "\0toggled\0zoomRadiobuttonToggled\0"
    "zoomSpinboxValueChanged\0value\0"
    "showOriginalSizeButtonClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Imagedialog[] = {

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
       1,    1,   34,    2, 0x08 /* Private */,
       4,    1,   37,    2, 0x08 /* Private */,
       5,    1,   40,    2, 0x08 /* Private */,
       7,    0,   43,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void,

       0        // eod
};

void Imagedialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Imagedialog *_t = static_cast<Imagedialog *>(_o);
        switch (_id) {
        case 0: _t->fitToWindowRadiobuttonToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->zoomRadiobuttonToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->zoomSpinboxValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->showOriginalSizeButtonClicked(); break;
        default: ;
        }
    }
}

const QMetaObject Imagedialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Imagedialog.data,
      qt_meta_data_Imagedialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Imagedialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Imagedialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Imagedialog.stringdata))
        return static_cast<void*>(const_cast< Imagedialog*>(this));
    if (!strcmp(_clname, "Ui::imagedialog"))
        return static_cast< Ui::imagedialog*>(const_cast< Imagedialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int Imagedialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
