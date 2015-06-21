/****************************************************************************
** Meta object code from reading C++ file 'lensdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../scribus/plugins/tools/lenseffects/lensdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'lensdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_LensDialog_t {
    QByteArrayData data[16];
    char stringdata[154];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LensDialog_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LensDialog_t qt_meta_stringdata_LensDialog = {
    {
QT_MOC_LITERAL(0, 0, 10), // "LensDialog"
QT_MOC_LITERAL(1, 11, 8), // "doZoomIn"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 9), // "doZoomOut"
QT_MOC_LITERAL(4, 31, 7), // "addLens"
QT_MOC_LITERAL(5, 39, 10), // "removeLens"
QT_MOC_LITERAL(6, 50, 10), // "changeLens"
QT_MOC_LITERAL(7, 61, 19), // "selectionHasChanged"
QT_MOC_LITERAL(8, 81, 11), // "setNewLensX"
QT_MOC_LITERAL(9, 93, 1), // "x"
QT_MOC_LITERAL(10, 95, 11), // "setNewLensY"
QT_MOC_LITERAL(11, 107, 1), // "y"
QT_MOC_LITERAL(12, 109, 16), // "setNewLensRadius"
QT_MOC_LITERAL(13, 126, 6), // "radius"
QT_MOC_LITERAL(14, 133, 18), // "setNewLensStrength"
QT_MOC_LITERAL(15, 152, 1) // "s"

    },
    "LensDialog\0doZoomIn\0\0doZoomOut\0addLens\0"
    "removeLens\0changeLens\0selectionHasChanged\0"
    "setNewLensX\0x\0setNewLensY\0y\0"
    "setNewLensRadius\0radius\0setNewLensStrength\0"
    "s"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LensDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x08 /* Private */,
       3,    0,   65,    2, 0x08 /* Private */,
       4,    0,   66,    2, 0x08 /* Private */,
       5,    0,   67,    2, 0x08 /* Private */,
       6,    0,   68,    2, 0x08 /* Private */,
       7,    0,   69,    2, 0x08 /* Private */,
       8,    1,   70,    2, 0x08 /* Private */,
      10,    1,   73,    2, 0x08 /* Private */,
      12,    1,   76,    2, 0x08 /* Private */,
      14,    1,   79,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,    9,
    QMetaType::Void, QMetaType::Double,   11,
    QMetaType::Void, QMetaType::Double,   13,
    QMetaType::Void, QMetaType::Double,   15,

       0        // eod
};

void LensDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        LensDialog *_t = static_cast<LensDialog *>(_o);
        switch (_id) {
        case 0: _t->doZoomIn(); break;
        case 1: _t->doZoomOut(); break;
        case 2: _t->addLens(); break;
        case 3: _t->removeLens(); break;
        case 4: _t->changeLens(); break;
        case 5: _t->selectionHasChanged(); break;
        case 6: _t->setNewLensX((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 7: _t->setNewLensY((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 8: _t->setNewLensRadius((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 9: _t->setNewLensStrength((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject LensDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_LensDialog.data,
      qt_meta_data_LensDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *LensDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LensDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_LensDialog.stringdata))
        return static_cast<void*>(const_cast< LensDialog*>(this));
    if (!strcmp(_clname, "Ui::LensDialogBase"))
        return static_cast< Ui::LensDialogBase*>(const_cast< LensDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int LensDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
