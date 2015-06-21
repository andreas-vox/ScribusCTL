/****************************************************************************
** Meta object code from reading C++ file 'vruler.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../scribus/ui/vruler.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'vruler.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Vruler_t {
    QByteArrayData data[9];
    char stringdata[54];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Vruler_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Vruler_t qt_meta_stringdata_Vruler = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Vruler"
QT_MOC_LITERAL(1, 7, 4), // "Draw"
QT_MOC_LITERAL(2, 12, 0), // ""
QT_MOC_LITERAL(3, 13, 5), // "where"
QT_MOC_LITERAL(4, 19, 10), // "unitChange"
QT_MOC_LITERAL(5, 30, 5), // "shift"
QT_MOC_LITERAL(6, 36, 3), // "pos"
QT_MOC_LITERAL(7, 40, 8), // "shiftRel"
QT_MOC_LITERAL(8, 49, 4) // "dist"

    },
    "Vruler\0Draw\0\0where\0unitChange\0shift\0"
    "pos\0shiftRel\0dist"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Vruler[] = {

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
       1,    1,   34,    2, 0x0a /* Public */,
       4,    0,   37,    2, 0x0a /* Public */,
       5,    1,   38,    2, 0x0a /* Public */,
       7,    1,   41,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,    6,
    QMetaType::Void, QMetaType::Double,    8,

       0        // eod
};

void Vruler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Vruler *_t = static_cast<Vruler *>(_o);
        switch (_id) {
        case 0: _t->Draw((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->unitChange(); break;
        case 2: _t->shift((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->shiftRel((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject Vruler::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Vruler.data,
      qt_meta_data_Vruler,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Vruler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Vruler::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Vruler.stringdata))
        return static_cast<void*>(const_cast< Vruler*>(this));
    return QWidget::qt_metacast(_clname);
}

int Vruler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
