/****************************************************************************
** Meta object code from reading C++ file 'pathfinderdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../scribus/plugins/tools/pathfinder/pathfinderdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pathfinderdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_PathFinderDialog_t {
    QByteArrayData data[7];
    char stringdata[81];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PathFinderDialog_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PathFinderDialog_t qt_meta_stringdata_PathFinderDialog = {
    {
QT_MOC_LITERAL(0, 0, 16), // "PathFinderDialog"
QT_MOC_LITERAL(1, 17, 9), // "checkKeep"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 9), // "newOpMode"
QT_MOC_LITERAL(4, 38, 11), // "swapObjects"
QT_MOC_LITERAL(5, 50, 17), // "updateAllPreviews"
QT_MOC_LITERAL(6, 68, 12) // "updateResult"

    },
    "PathFinderDialog\0checkKeep\0\0newOpMode\0"
    "swapObjects\0updateAllPreviews\0"
    "updateResult"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PathFinderDialog[] = {

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
       1,    0,   39,    2, 0x08 /* Private */,
       3,    0,   40,    2, 0x08 /* Private */,
       4,    0,   41,    2, 0x08 /* Private */,
       5,    0,   42,    2, 0x08 /* Private */,
       6,    0,   43,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void PathFinderDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PathFinderDialog *_t = static_cast<PathFinderDialog *>(_o);
        switch (_id) {
        case 0: _t->checkKeep(); break;
        case 1: _t->newOpMode(); break;
        case 2: _t->swapObjects(); break;
        case 3: _t->updateAllPreviews(); break;
        case 4: _t->updateResult(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject PathFinderDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_PathFinderDialog.data,
      qt_meta_data_PathFinderDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PathFinderDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PathFinderDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PathFinderDialog.stringdata))
        return static_cast<void*>(const_cast< PathFinderDialog*>(this));
    if (!strcmp(_clname, "Ui::PathFinderBase"))
        return static_cast< Ui::PathFinderBase*>(const_cast< PathFinderDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int PathFinderDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
