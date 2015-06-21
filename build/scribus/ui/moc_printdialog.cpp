/****************************************************************************
** Meta object code from reading C++ file 'printdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../scribus/ui/printdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'printdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_PrintDialog_t {
    QByteArrayData data[21];
    char stringdata[191];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PrintDialog_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PrintDialog_t qt_meta_stringdata_PrintDialog = {
    {
QT_MOC_LITERAL(0, 0, 11), // "PrintDialog"
QT_MOC_LITERAL(1, 12, 9), // "doPreview"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 9), // "setMinMax"
QT_MOC_LITERAL(4, 33, 3), // "min"
QT_MOC_LITERAL(5, 37, 3), // "max"
QT_MOC_LITERAL(6, 41, 3), // "cur"
QT_MOC_LITERAL(7, 45, 11), // "doDocBleeds"
QT_MOC_LITERAL(8, 57, 21), // "createPageNumberRange"
QT_MOC_LITERAL(9, 79, 10), // "SetOptions"
QT_MOC_LITERAL(10, 90, 9), // "SelEngine"
QT_MOC_LITERAL(11, 100, 3), // "eng"
QT_MOC_LITERAL(12, 104, 10), // "SelPrinter"
QT_MOC_LITERAL(13, 115, 3), // "prn"
QT_MOC_LITERAL(14, 119, 8), // "SelRange"
QT_MOC_LITERAL(15, 128, 1), // "e"
QT_MOC_LITERAL(16, 130, 7), // "SelMode"
QT_MOC_LITERAL(17, 138, 7), // "SelFile"
QT_MOC_LITERAL(18, 146, 7), // "SelComm"
QT_MOC_LITERAL(19, 154, 15), // "okButtonClicked"
QT_MOC_LITERAL(20, 170, 20) // "previewButtonClicked"

    },
    "PrintDialog\0doPreview\0\0setMinMax\0min\0"
    "max\0cur\0doDocBleeds\0createPageNumberRange\0"
    "SetOptions\0SelEngine\0eng\0SelPrinter\0"
    "prn\0SelRange\0e\0SelMode\0SelFile\0SelComm\0"
    "okButtonClicked\0previewButtonClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PrintDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    3,   80,    2, 0x0a /* Public */,
       7,    0,   87,    2, 0x09 /* Protected */,
       8,    0,   88,    2, 0x09 /* Protected */,
       9,    0,   89,    2, 0x09 /* Protected */,
      10,    1,   90,    2, 0x09 /* Protected */,
      12,    1,   93,    2, 0x09 /* Protected */,
      14,    1,   96,    2, 0x09 /* Protected */,
      16,    1,   99,    2, 0x09 /* Protected */,
      17,    0,  102,    2, 0x09 /* Protected */,
      18,    0,  103,    2, 0x09 /* Protected */,
      19,    0,  104,    2, 0x09 /* Protected */,
      20,    0,  105,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,    4,    5,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void, QMetaType::Bool,   15,
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void PrintDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PrintDialog *_t = static_cast<PrintDialog *>(_o);
        switch (_id) {
        case 0: _t->doPreview(); break;
        case 1: _t->setMinMax((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 2: _t->doDocBleeds(); break;
        case 3: _t->createPageNumberRange(); break;
        case 4: _t->SetOptions(); break;
        case 5: _t->SelEngine((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->SelPrinter((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->SelRange((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->SelMode((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->SelFile(); break;
        case 10: _t->SelComm(); break;
        case 11: _t->okButtonClicked(); break;
        case 12: _t->previewButtonClicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (PrintDialog::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PrintDialog::doPreview)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject PrintDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_PrintDialog.data,
      qt_meta_data_PrintDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PrintDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PrintDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PrintDialog.stringdata))
        return static_cast<void*>(const_cast< PrintDialog*>(this));
    if (!strcmp(_clname, "Ui::PrintDialogBase"))
        return static_cast< Ui::PrintDialogBase*>(const_cast< PrintDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int PrintDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void PrintDialog::doPreview()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
