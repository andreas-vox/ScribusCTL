/****************************************************************************
** Meta object code from reading C++ file 'useprintermarginsdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../scribus/ui/useprintermarginsdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'useprintermarginsdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_UsePrinterMarginsDialog_t {
    QByteArrayData data[4];
    char stringdata[60];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UsePrinterMarginsDialog_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UsePrinterMarginsDialog_t qt_meta_stringdata_UsePrinterMarginsDialog = {
    {
QT_MOC_LITERAL(0, 0, 23), // "UsePrinterMarginsDialog"
QT_MOC_LITERAL(1, 24, 22), // "getPrinterMarginValues"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 11) // "printerName"

    },
    "UsePrinterMarginsDialog\0getPrinterMarginValues\0"
    "\0printerName"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UsePrinterMarginsDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,

       0        // eod
};

void UsePrinterMarginsDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        UsePrinterMarginsDialog *_t = static_cast<UsePrinterMarginsDialog *>(_o);
        switch (_id) {
        case 0: _t->getPrinterMarginValues((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject UsePrinterMarginsDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_UsePrinterMarginsDialog.data,
      qt_meta_data_UsePrinterMarginsDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *UsePrinterMarginsDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UsePrinterMarginsDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_UsePrinterMarginsDialog.stringdata))
        return static_cast<void*>(const_cast< UsePrinterMarginsDialog*>(this));
    if (!strcmp(_clname, "Ui::UsePrinterMarginsDialog"))
        return static_cast< Ui::UsePrinterMarginsDialog*>(const_cast< UsePrinterMarginsDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int UsePrinterMarginsDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
