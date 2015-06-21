/****************************************************************************
** Meta object code from reading C++ file 'preview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../scribus/ui/preview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'preview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_PPreview_t {
    QByteArrayData data[13];
    char stringdata[133];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PPreview_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PPreview_t qt_meta_stringdata_PPreview = {
    {
QT_MOC_LITERAL(0, 0, 8), // "PPreview"
QT_MOC_LITERAL(1, 9, 7), // "doPrint"
QT_MOC_LITERAL(2, 17, 0), // ""
QT_MOC_LITERAL(3, 18, 7), // "ToSeite"
QT_MOC_LITERAL(4, 26, 3), // "num"
QT_MOC_LITERAL(5, 30, 9), // "redisplay"
QT_MOC_LITERAL(6, 40, 10), // "ToggleCMYK"
QT_MOC_LITERAL(7, 51, 17), // "ToggleCMYK_Colour"
QT_MOC_LITERAL(8, 69, 11), // "doSpotTable"
QT_MOC_LITERAL(9, 81, 3), // "row"
QT_MOC_LITERAL(10, 85, 19), // "toggleAllfromHeader"
QT_MOC_LITERAL(11, 105, 21), // "scaleBox_valueChanged"
QT_MOC_LITERAL(12, 127, 5) // "value"

    },
    "PPreview\0doPrint\0\0ToSeite\0num\0redisplay\0"
    "ToggleCMYK\0ToggleCMYK_Colour\0doSpotTable\0"
    "row\0toggleAllfromHeader\0scaleBox_valueChanged\0"
    "value"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PPreview[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   55,    2, 0x0a /* Public */,
       5,    0,   58,    2, 0x0a /* Public */,
       6,    0,   59,    2, 0x0a /* Public */,
       7,    0,   60,    2, 0x0a /* Public */,
       8,    1,   61,    2, 0x0a /* Public */,
      10,    0,   64,    2, 0x0a /* Public */,
      11,    1,   65,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   12,

       0        // eod
};

void PPreview::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PPreview *_t = static_cast<PPreview *>(_o);
        switch (_id) {
        case 0: _t->doPrint(); break;
        case 1: _t->ToSeite((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->redisplay(); break;
        case 3: _t->ToggleCMYK(); break;
        case 4: _t->ToggleCMYK_Colour(); break;
        case 5: _t->doSpotTable((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->toggleAllfromHeader(); break;
        case 7: _t->scaleBox_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (PPreview::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PPreview::doPrint)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject PPreview::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_PPreview.data,
      qt_meta_data_PPreview,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PPreview::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PPreview::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PPreview.stringdata))
        return static_cast<void*>(const_cast< PPreview*>(this));
    return QDialog::qt_metacast(_clname);
}

int PPreview::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void PPreview::doPrint()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
