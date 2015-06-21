/****************************************************************************
** Meta object code from reading C++ file 'createrange.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../scribus/ui/createrange.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'createrange.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CreateRange_t {
    QByteArrayData data[13];
    char stringdata[226];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CreateRange_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CreateRange_t qt_meta_stringdata_CreateRange = {
    {
QT_MOC_LITERAL(0, 0, 11), // "CreateRange"
QT_MOC_LITERAL(1, 12, 15), // "selectRangeType"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 15), // "basicAddToRange"
QT_MOC_LITERAL(4, 45, 17), // "basicDelFromRange"
QT_MOC_LITERAL(5, 63, 11), // "basicMoveUp"
QT_MOC_LITERAL(6, 75, 13), // "basicMoveDown"
QT_MOC_LITERAL(7, 89, 26), // "basicSelectRangeTypeConsec"
QT_MOC_LITERAL(8, 116, 25), // "basicSelectRangeTypeComma"
QT_MOC_LITERAL(9, 142, 24), // "basicSelectRangeTypeEven"
QT_MOC_LITERAL(10, 167, 23), // "basicSelectRangeTypeOdd"
QT_MOC_LITERAL(11, 191, 20), // "basicSelectRangeType"
QT_MOC_LITERAL(12, 212, 13) // "advSpinChange"

    },
    "CreateRange\0selectRangeType\0\0"
    "basicAddToRange\0basicDelFromRange\0"
    "basicMoveUp\0basicMoveDown\0"
    "basicSelectRangeTypeConsec\0"
    "basicSelectRangeTypeComma\0"
    "basicSelectRangeTypeEven\0"
    "basicSelectRangeTypeOdd\0basicSelectRangeType\0"
    "advSpinChange"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CreateRange[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x09 /* Protected */,
       3,    0,   72,    2, 0x09 /* Protected */,
       4,    0,   73,    2, 0x09 /* Protected */,
       5,    0,   74,    2, 0x09 /* Protected */,
       6,    0,   75,    2, 0x09 /* Protected */,
       7,    0,   76,    2, 0x09 /* Protected */,
       8,    0,   77,    2, 0x09 /* Protected */,
       9,    0,   78,    2, 0x09 /* Protected */,
      10,    0,   79,    2, 0x09 /* Protected */,
      11,    1,   80,    2, 0x09 /* Protected */,
      12,    0,   83,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,

       0        // eod
};

void CreateRange::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CreateRange *_t = static_cast<CreateRange *>(_o);
        switch (_id) {
        case 0: _t->selectRangeType((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->basicAddToRange(); break;
        case 2: _t->basicDelFromRange(); break;
        case 3: _t->basicMoveUp(); break;
        case 4: _t->basicMoveDown(); break;
        case 5: _t->basicSelectRangeTypeConsec(); break;
        case 6: _t->basicSelectRangeTypeComma(); break;
        case 7: _t->basicSelectRangeTypeEven(); break;
        case 8: _t->basicSelectRangeTypeOdd(); break;
        case 9: _t->basicSelectRangeType((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->advSpinChange(); break;
        default: ;
        }
    }
}

const QMetaObject CreateRange::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_CreateRange.data,
      qt_meta_data_CreateRange,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CreateRange::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CreateRange::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CreateRange.stringdata))
        return static_cast<void*>(const_cast< CreateRange*>(this));
    if (!strcmp(_clname, "Ui::CreateRange"))
        return static_cast< Ui::CreateRange*>(const_cast< CreateRange*>(this));
    return QDialog::qt_metacast(_clname);
}

int CreateRange::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
