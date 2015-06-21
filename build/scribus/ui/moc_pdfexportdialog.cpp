/****************************************************************************
** Meta object code from reading C++ file 'pdfexportdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../scribus/ui/pdfexportdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pdfexportdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_PDFExportDialog_t {
    QByteArrayData data[7];
    char stringdata[76];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PDFExportDialog_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PDFExportDialog_t qt_meta_stringdata_PDFExportDialog = {
    {
QT_MOC_LITERAL(0, 0, 15), // "PDFExportDialog"
QT_MOC_LITERAL(1, 16, 8), // "DoExport"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 10), // "ChangeFile"
QT_MOC_LITERAL(4, 37, 15), // "fileNameChanged"
QT_MOC_LITERAL(5, 53, 10), // "enableSave"
QT_MOC_LITERAL(6, 64, 11) // "disableSave"

    },
    "PDFExportDialog\0DoExport\0\0ChangeFile\0"
    "fileNameChanged\0enableSave\0disableSave"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PDFExportDialog[] = {

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
       1,    0,   39,    2, 0x09 /* Protected */,
       3,    0,   40,    2, 0x09 /* Protected */,
       4,    0,   41,    2, 0x09 /* Protected */,
       5,    0,   42,    2, 0x09 /* Protected */,
       6,    0,   43,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void PDFExportDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PDFExportDialog *_t = static_cast<PDFExportDialog *>(_o);
        switch (_id) {
        case 0: _t->DoExport(); break;
        case 1: _t->ChangeFile(); break;
        case 2: _t->fileNameChanged(); break;
        case 3: _t->enableSave(); break;
        case 4: _t->disableSave(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject PDFExportDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_PDFExportDialog.data,
      qt_meta_data_PDFExportDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PDFExportDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PDFExportDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PDFExportDialog.stringdata))
        return static_cast<void*>(const_cast< PDFExportDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int PDFExportDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
