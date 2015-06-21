/****************************************************************************
** Meta object code from reading C++ file 'replacecolors.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../scribus/ui/replacecolors.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'replacecolors.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_replaceColorsDialog_t {
    QByteArrayData data[7];
    char stringdata[80];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_replaceColorsDialog_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_replaceColorsDialog_t qt_meta_stringdata_replaceColorsDialog = {
    {
QT_MOC_LITERAL(0, 0, 19), // "replaceColorsDialog"
QT_MOC_LITERAL(1, 20, 8), // "addColor"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 14), // "selReplacement"
QT_MOC_LITERAL(4, 45, 3), // "sel"
QT_MOC_LITERAL(5, 49, 14), // "delReplacement"
QT_MOC_LITERAL(6, 64, 15) // "editReplacement"

    },
    "replaceColorsDialog\0addColor\0\0"
    "selReplacement\0sel\0delReplacement\0"
    "editReplacement"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_replaceColorsDialog[] = {

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
       1,    0,   34,    2, 0x08 /* Private */,
       3,    1,   35,    2, 0x08 /* Private */,
       5,    0,   38,    2, 0x08 /* Private */,
       6,    0,   39,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void replaceColorsDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        replaceColorsDialog *_t = static_cast<replaceColorsDialog *>(_o);
        switch (_id) {
        case 0: _t->addColor(); break;
        case 1: _t->selReplacement((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->delReplacement(); break;
        case 3: _t->editReplacement(); break;
        default: ;
        }
    }
}

const QMetaObject replaceColorsDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_replaceColorsDialog.data,
      qt_meta_data_replaceColorsDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *replaceColorsDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *replaceColorsDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_replaceColorsDialog.stringdata))
        return static_cast<void*>(const_cast< replaceColorsDialog*>(this));
    if (!strcmp(_clname, "Ui::replaceColorsDialog"))
        return static_cast< Ui::replaceColorsDialog*>(const_cast< replaceColorsDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int replaceColorsDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
