/****************************************************************************
** Meta object code from reading C++ file 'annota.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../scribus/ui/annota.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'annota.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Annota_t {
    QByteArrayData data[12];
    char stringdata[71];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Annota_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Annota_t qt_meta_stringdata_Annota = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Annota"
QT_MOC_LITERAL(1, 7, 9), // "SetCoords"
QT_MOC_LITERAL(2, 17, 0), // ""
QT_MOC_LITERAL(3, 18, 1), // "x"
QT_MOC_LITERAL(4, 20, 1), // "y"
QT_MOC_LITERAL(5, 22, 7), // "SetPage"
QT_MOC_LITERAL(6, 30, 1), // "v"
QT_MOC_LITERAL(7, 32, 8), // "SetCross"
QT_MOC_LITERAL(8, 41, 9), // "SetValues"
QT_MOC_LITERAL(9, 51, 9), // "SetTarget"
QT_MOC_LITERAL(10, 61, 1), // "i"
QT_MOC_LITERAL(11, 63, 7) // "GetFile"

    },
    "Annota\0SetCoords\0\0x\0y\0SetPage\0v\0"
    "SetCross\0SetValues\0SetTarget\0i\0GetFile"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Annota[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   44,    2, 0x0a /* Public */,
       5,    1,   49,    2, 0x0a /* Public */,
       7,    0,   52,    2, 0x0a /* Public */,
       8,    0,   53,    2, 0x0a /* Public */,
       9,    1,   54,    2, 0x0a /* Public */,
      11,    0,   57,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Double, QMetaType::Double,    3,    4,
    QMetaType::Void, QMetaType::Double,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void,

       0        // eod
};

void Annota::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Annota *_t = static_cast<Annota *>(_o);
        switch (_id) {
        case 0: _t->SetCoords((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 1: _t->SetPage((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: _t->SetCross(); break;
        case 3: _t->SetValues(); break;
        case 4: _t->SetTarget((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->GetFile(); break;
        default: ;
        }
    }
}

const QMetaObject Annota::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Annota.data,
      qt_meta_data_Annota,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Annota::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Annota::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Annota.stringdata))
        return static_cast<void*>(const_cast< Annota*>(this));
    return QDialog::qt_metacast(_clname);
}

int Annota::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
