/****************************************************************************
** Meta object code from reading C++ file 'margindialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../scribus/ui/margindialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'margindialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MarginDialog_t {
    QByteArrayData data[10];
    char stringdata[79];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MarginDialog_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MarginDialog_t qt_meta_stringdata_MarginDialog = {
    {
QT_MOC_LITERAL(0, 0, 12), // "MarginDialog"
QT_MOC_LITERAL(1, 13, 11), // "setPageSize"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 7), // "setSize"
QT_MOC_LITERAL(4, 34, 2), // "gr"
QT_MOC_LITERAL(5, 37, 8), // "setOrien"
QT_MOC_LITERAL(6, 46, 3), // "ori"
QT_MOC_LITERAL(7, 50, 12), // "setPageWidth"
QT_MOC_LITERAL(8, 63, 1), // "v"
QT_MOC_LITERAL(9, 65, 13) // "setPageHeight"

    },
    "MarginDialog\0setPageSize\0\0setSize\0gr\0"
    "setOrien\0ori\0setPageWidth\0v\0setPageHeight"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MarginDialog[] = {

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
       3,    1,   40,    2, 0x0a /* Public */,
       5,    1,   43,    2, 0x0a /* Public */,
       7,    1,   46,    2, 0x0a /* Public */,
       9,    1,   49,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Double,    8,
    QMetaType::Void, QMetaType::Double,    8,

       0        // eod
};

void MarginDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MarginDialog *_t = static_cast<MarginDialog *>(_o);
        switch (_id) {
        case 0: _t->setPageSize(); break;
        case 1: _t->setSize((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->setOrien((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->setPageWidth((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: _t->setPageHeight((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject MarginDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_MarginDialog.data,
      qt_meta_data_MarginDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MarginDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MarginDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MarginDialog.stringdata))
        return static_cast<void*>(const_cast< MarginDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int MarginDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
