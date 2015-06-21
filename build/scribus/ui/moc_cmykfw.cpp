/****************************************************************************
** Meta object code from reading C++ file 'cmykfw.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../scribus/ui/cmykfw.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cmykfw.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CMYKChoose_t {
    QByteArrayData data[22];
    char stringdata[178];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CMYKChoose_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CMYKChoose_t qt_meta_stringdata_CMYKChoose = {
    {
QT_MOC_LITERAL(0, 0, 10), // "CMYKChoose"
QT_MOC_LITERAL(1, 11, 14), // "slotRightClick"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 13), // "setValSLiders"
QT_MOC_LITERAL(4, 41, 5), // "value"
QT_MOC_LITERAL(5, 47, 9), // "setValueS"
QT_MOC_LITERAL(6, 57, 3), // "val"
QT_MOC_LITERAL(7, 61, 8), // "toggleSL"
QT_MOC_LITERAL(8, 70, 9), // "selSwatch"
QT_MOC_LITERAL(9, 80, 7), // "setSpot"
QT_MOC_LITERAL(10, 88, 8), // "selModel"
QT_MOC_LITERAL(11, 97, 3), // "mod"
QT_MOC_LITERAL(12, 101, 8), // "setColor"
QT_MOC_LITERAL(13, 110, 9), // "setColor2"
QT_MOC_LITERAL(14, 120, 1), // "h"
QT_MOC_LITERAL(15, 122, 1), // "s"
QT_MOC_LITERAL(16, 124, 4), // "ende"
QT_MOC_LITERAL(17, 129, 13), // "selFromSwatch"
QT_MOC_LITERAL(18, 143, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(19, 160, 1), // "c"
QT_MOC_LITERAL(20, 162, 9), // "setValues"
QT_MOC_LITERAL(21, 172, 5) // "leave"

    },
    "CMYKChoose\0slotRightClick\0\0setValSLiders\0"
    "value\0setValueS\0val\0toggleSL\0selSwatch\0"
    "setSpot\0selModel\0mod\0setColor\0setColor2\0"
    "h\0s\0ende\0selFromSwatch\0QListWidgetItem*\0"
    "c\0setValues\0leave"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CMYKChoose[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x0a /* Public */,
       3,    1,   75,    2, 0x0a /* Public */,
       5,    1,   78,    2, 0x0a /* Public */,
       7,    0,   81,    2, 0x0a /* Public */,
       8,    0,   82,    2, 0x0a /* Public */,
       9,    0,   83,    2, 0x0a /* Public */,
      10,    1,   84,    2, 0x0a /* Public */,
      12,    0,   87,    2, 0x0a /* Public */,
      13,    3,   88,    2, 0x0a /* Public */,
      17,    1,   95,    2, 0x0a /* Public */,
      20,    0,   98,    2, 0x0a /* Public */,
      21,    0,   99,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,    4,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Bool,   14,   15,   16,
    QMetaType::Void, 0x80000000 | 18,   19,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void CMYKChoose::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CMYKChoose *_t = static_cast<CMYKChoose *>(_o);
        switch (_id) {
        case 0: _t->slotRightClick(); break;
        case 1: _t->setValSLiders((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: _t->setValueS((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->toggleSL(); break;
        case 4: _t->selSwatch(); break;
        case 5: _t->setSpot(); break;
        case 6: _t->selModel((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->setColor(); break;
        case 8: _t->setColor2((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 9: _t->selFromSwatch((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 10: _t->setValues(); break;
        case 11: _t->leave(); break;
        default: ;
        }
    }
}

const QMetaObject CMYKChoose::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_CMYKChoose.data,
      qt_meta_data_CMYKChoose,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CMYKChoose::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CMYKChoose::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CMYKChoose.stringdata))
        return static_cast<void*>(const_cast< CMYKChoose*>(this));
    return QDialog::qt_metacast(_clname);
}

int CMYKChoose::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
