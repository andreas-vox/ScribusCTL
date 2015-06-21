/****************************************************************************
** Meta object code from reading C++ file 'insertaframe.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../scribus/ui/insertaframe.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'insertaframe.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_InsertAFrame_t {
    QByteArrayData data[12];
    char stringdata[176];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_InsertAFrame_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_InsertAFrame_t qt_meta_stringdata_InsertAFrame = {
    {
QT_MOC_LITERAL(0, 0, 12), // "InsertAFrame"
QT_MOC_LITERAL(1, 13, 14), // "slotSelectType"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 2), // "id"
QT_MOC_LITERAL(4, 32, 23), // "slotSelectPagePlacement"
QT_MOC_LITERAL(5, 56, 25), // "slotCreatePageNumberRange"
QT_MOC_LITERAL(6, 82, 18), // "slotSelectPosition"
QT_MOC_LITERAL(7, 101, 14), // "slotSelectSize"
QT_MOC_LITERAL(8, 116, 23), // "slotLinkToExistingFrame"
QT_MOC_LITERAL(9, 140, 5), // "state"
QT_MOC_LITERAL(10, 146, 15), // "locateImageFile"
QT_MOC_LITERAL(11, 162, 13) // "locateDocFile"

    },
    "InsertAFrame\0slotSelectType\0\0id\0"
    "slotSelectPagePlacement\0"
    "slotCreatePageNumberRange\0slotSelectPosition\0"
    "slotSelectSize\0slotLinkToExistingFrame\0"
    "state\0locateImageFile\0locateDocFile"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_InsertAFrame[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x09 /* Protected */,
       4,    1,   57,    2, 0x09 /* Protected */,
       5,    0,   60,    2, 0x09 /* Protected */,
       6,    1,   61,    2, 0x09 /* Protected */,
       7,    1,   64,    2, 0x09 /* Protected */,
       8,    1,   67,    2, 0x09 /* Protected */,
      10,    0,   70,    2, 0x09 /* Protected */,
      11,    0,   71,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void InsertAFrame::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        InsertAFrame *_t = static_cast<InsertAFrame *>(_o);
        switch (_id) {
        case 0: _t->slotSelectType((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->slotSelectPagePlacement((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->slotCreatePageNumberRange(); break;
        case 3: _t->slotSelectPosition((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->slotSelectSize((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->slotLinkToExistingFrame((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->locateImageFile(); break;
        case 7: _t->locateDocFile(); break;
        default: ;
        }
    }
}

const QMetaObject InsertAFrame::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_InsertAFrame.data,
      qt_meta_data_InsertAFrame,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *InsertAFrame::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *InsertAFrame::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_InsertAFrame.stringdata))
        return static_cast<void*>(const_cast< InsertAFrame*>(this));
    if (!strcmp(_clname, "Ui::InsertAFrame"))
        return static_cast< Ui::InsertAFrame*>(const_cast< InsertAFrame*>(this));
    return QDialog::qt_metacast(_clname);
}

int InsertAFrame::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_END_MOC_NAMESPACE
