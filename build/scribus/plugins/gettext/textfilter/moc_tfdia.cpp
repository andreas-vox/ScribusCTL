/****************************************************************************
** Meta object code from reading C++ file 'tfdia.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../scribus/plugins/gettext/textfilter/tfdia.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tfdia.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_tfDia_t {
    QByteArrayData data[18];
    char stringdata[169];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_tfDia_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_tfDia_t qt_meta_stringdata_tfDia = {
    {
QT_MOC_LITERAL(0, 0, 5), // "tfDia"
QT_MOC_LITERAL(1, 6, 15), // "saveTextChanged"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 4), // "text"
QT_MOC_LITERAL(4, 28, 15), // "createFilterRow"
QT_MOC_LITERAL(5, 44, 9), // "tfFilter*"
QT_MOC_LITERAL(6, 54, 5), // "after"
QT_MOC_LITERAL(7, 60, 9), // "removeRow"
QT_MOC_LITERAL(8, 70, 3), // "tff"
QT_MOC_LITERAL(9, 74, 12), // "clearClicked"
QT_MOC_LITERAL(10, 87, 9), // "okClicked"
QT_MOC_LITERAL(11, 97, 13), // "cancelClicked"
QT_MOC_LITERAL(12, 111, 13), // "deleteClicked"
QT_MOC_LITERAL(13, 125, 10), // "loadFilter"
QT_MOC_LITERAL(14, 136, 4), // "name"
QT_MOC_LITERAL(15, 141, 11), // "resizeEvent"
QT_MOC_LITERAL(16, 153, 13), // "QResizeEvent*"
QT_MOC_LITERAL(17, 167, 1) // "e"

    },
    "tfDia\0saveTextChanged\0\0text\0createFilterRow\0"
    "tfFilter*\0after\0removeRow\0tff\0"
    "clearClicked\0okClicked\0cancelClicked\0"
    "deleteClicked\0loadFilter\0name\0resizeEvent\0"
    "QResizeEvent*\0e"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_tfDia[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x08 /* Private */,
       4,    1,   62,    2, 0x08 /* Private */,
       7,    1,   65,    2, 0x08 /* Private */,
       9,    0,   68,    2, 0x08 /* Private */,
      10,    0,   69,    2, 0x08 /* Private */,
      11,    0,   70,    2, 0x08 /* Private */,
      12,    0,   71,    2, 0x08 /* Private */,
      13,    1,   72,    2, 0x08 /* Private */,
      15,    1,   75,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void, 0x80000000 | 16,   17,

       0        // eod
};

void tfDia::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        tfDia *_t = static_cast<tfDia *>(_o);
        switch (_id) {
        case 0: _t->saveTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->createFilterRow((*reinterpret_cast< tfFilter*(*)>(_a[1]))); break;
        case 2: _t->removeRow((*reinterpret_cast< tfFilter*(*)>(_a[1]))); break;
        case 3: _t->clearClicked(); break;
        case 4: _t->okClicked(); break;
        case 5: _t->cancelClicked(); break;
        case 6: _t->deleteClicked(); break;
        case 7: _t->loadFilter((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->resizeEvent((*reinterpret_cast< QResizeEvent*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< tfFilter* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< tfFilter* >(); break;
            }
            break;
        }
    }
}

const QMetaObject tfDia::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_tfDia.data,
      qt_meta_data_tfDia,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *tfDia::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *tfDia::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_tfDia.stringdata))
        return static_cast<void*>(const_cast< tfDia*>(this));
    return QDialog::qt_metacast(_clname);
}

int tfDia::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
