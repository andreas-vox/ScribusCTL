/****************************************************************************
** Meta object code from reading C++ file 'pathdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../scribus/plugins/tools/2geomtools/pathalongpath/pathdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pathdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_PathDialog_t {
    QByteArrayData data[10];
    char stringdata[92];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PathDialog_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PathDialog_t qt_meta_stringdata_PathDialog = {
    {
QT_MOC_LITERAL(0, 0, 10), // "PathDialog"
QT_MOC_LITERAL(1, 11, 12), // "updateValues"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 12), // "toggleRotate"
QT_MOC_LITERAL(4, 38, 10), // "newOffsetY"
QT_MOC_LITERAL(5, 49, 3), // "val"
QT_MOC_LITERAL(6, 53, 9), // "newOffset"
QT_MOC_LITERAL(7, 63, 6), // "newGap"
QT_MOC_LITERAL(8, 70, 7), // "newType"
QT_MOC_LITERAL(9, 78, 13) // "togglePreview"

    },
    "PathDialog\0updateValues\0\0toggleRotate\0"
    "newOffsetY\0val\0newOffset\0newGap\0newType\0"
    "togglePreview"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PathDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    5,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   60,    2, 0x08 /* Private */,
       4,    1,   63,    2, 0x08 /* Private */,
       6,    1,   66,    2, 0x08 /* Private */,
       7,    1,   69,    2, 0x08 /* Private */,
       8,    1,   72,    2, 0x08 /* Private */,
       9,    0,   75,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Int,    2,    2,    2,    2,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Double,    5,
    QMetaType::Void, QMetaType::Double,    5,
    QMetaType::Void, QMetaType::Double,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,

       0        // eod
};

void PathDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PathDialog *_t = static_cast<PathDialog *>(_o);
        switch (_id) {
        case 0: _t->updateValues((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5]))); break;
        case 1: _t->toggleRotate((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->newOffsetY((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->newOffset((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: _t->newGap((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 5: _t->newType((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->togglePreview(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (PathDialog::*_t)(int , double , double , double , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PathDialog::updateValues)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject PathDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_PathDialog.data,
      qt_meta_data_PathDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PathDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PathDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PathDialog.stringdata))
        return static_cast<void*>(const_cast< PathDialog*>(this));
    if (!strcmp(_clname, "Ui::PathDialogBase"))
        return static_cast< Ui::PathDialogBase*>(const_cast< PathDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int PathDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void PathDialog::updateValues(int _t1, double _t2, double _t3, double _t4, int _t5)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
