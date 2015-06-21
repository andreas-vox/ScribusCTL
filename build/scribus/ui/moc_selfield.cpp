/****************************************************************************
** Meta object code from reading C++ file 'selfield.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../scribus/ui/selfield.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'selfield.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SelectFields_t {
    QByteArrayData data[9];
    char stringdata[82];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SelectFields_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SelectFields_t qt_meta_stringdata_SelectFields = {
    {
QT_MOC_LITERAL(0, 0, 12), // "SelectFields"
QT_MOC_LITERAL(1, 13, 9), // "SetRetVal"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 9), // "RemoveSel"
QT_MOC_LITERAL(4, 34, 8), // "PutToSel"
QT_MOC_LITERAL(5, 43, 9), // "SelAField"
QT_MOC_LITERAL(6, 53, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(7, 70, 1), // "c"
QT_MOC_LITERAL(8, 72, 9) // "SelEField"

    },
    "SelectFields\0SetRetVal\0\0RemoveSel\0"
    "PutToSel\0SelAField\0QListWidgetItem*\0"
    "c\0SelEField"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SelectFields[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x0a /* Public */,
       3,    0,   40,    2, 0x0a /* Public */,
       4,    0,   41,    2, 0x0a /* Public */,
       5,    1,   42,    2, 0x0a /* Public */,
       8,    1,   45,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 6,    7,

       0        // eod
};

void SelectFields::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SelectFields *_t = static_cast<SelectFields *>(_o);
        switch (_id) {
        case 0: _t->SetRetVal(); break;
        case 1: _t->RemoveSel(); break;
        case 2: _t->PutToSel(); break;
        case 3: _t->SelAField((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 4: _t->SelEField((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject SelectFields::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_SelectFields.data,
      qt_meta_data_SelectFields,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SelectFields::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SelectFields::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SelectFields.stringdata))
        return static_cast<void*>(const_cast< SelectFields*>(this));
    return QDialog::qt_metacast(_clname);
}

int SelectFields::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
