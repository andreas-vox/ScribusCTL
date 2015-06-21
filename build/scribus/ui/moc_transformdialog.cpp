/****************************************************************************
** Meta object code from reading C++ file 'transformdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../scribus/ui/transformdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'transformdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_TransformDialog_t {
    QByteArrayData data[22];
    char stringdata[291];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TransformDialog_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TransformDialog_t qt_meta_stringdata_TransformDialog = {
    {
QT_MOC_LITERAL(0, 0, 15), // "TransformDialog"
QT_MOC_LITERAL(1, 16, 10), // "newScaling"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 14), // "newTranslation"
QT_MOC_LITERAL(4, 43, 11), // "newRotation"
QT_MOC_LITERAL(5, 55, 10), // "newSkewing"
QT_MOC_LITERAL(6, 66, 19), // "setCurrentTransform"
QT_MOC_LITERAL(7, 86, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(8, 103, 4), // "item"
QT_MOC_LITERAL(9, 108, 12), // "changeHScale"
QT_MOC_LITERAL(10, 121, 3), // "val"
QT_MOC_LITERAL(11, 125, 12), // "changeVScale"
QT_MOC_LITERAL(12, 138, 10), // "toggleLink"
QT_MOC_LITERAL(13, 149, 18), // "changeHTranslation"
QT_MOC_LITERAL(14, 168, 18), // "changeVTranslation"
QT_MOC_LITERAL(15, 187, 14), // "changeRotation"
QT_MOC_LITERAL(16, 202, 11), // "changeHSkew"
QT_MOC_LITERAL(17, 214, 11), // "changeVSkew"
QT_MOC_LITERAL(18, 226, 14), // "toggleLinkSkew"
QT_MOC_LITERAL(19, 241, 15), // "moveTransformUp"
QT_MOC_LITERAL(20, 257, 17), // "moveTransformDown"
QT_MOC_LITERAL(21, 275, 15) // "removeTransform"

    },
    "TransformDialog\0newScaling\0\0newTranslation\0"
    "newRotation\0newSkewing\0setCurrentTransform\0"
    "QListWidgetItem*\0item\0changeHScale\0"
    "val\0changeVScale\0toggleLink\0"
    "changeHTranslation\0changeVTranslation\0"
    "changeRotation\0changeHSkew\0changeVSkew\0"
    "toggleLinkSkew\0moveTransformUp\0"
    "moveTransformDown\0removeTransform"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TransformDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   99,    2, 0x08 /* Private */,
       3,    0,  100,    2, 0x08 /* Private */,
       4,    0,  101,    2, 0x08 /* Private */,
       5,    0,  102,    2, 0x08 /* Private */,
       6,    1,  103,    2, 0x08 /* Private */,
       9,    1,  106,    2, 0x08 /* Private */,
      11,    1,  109,    2, 0x08 /* Private */,
      12,    0,  112,    2, 0x08 /* Private */,
      13,    1,  113,    2, 0x08 /* Private */,
      14,    1,  116,    2, 0x08 /* Private */,
      15,    1,  119,    2, 0x08 /* Private */,
      16,    1,  122,    2, 0x08 /* Private */,
      17,    1,  125,    2, 0x08 /* Private */,
      18,    0,  128,    2, 0x08 /* Private */,
      19,    0,  129,    2, 0x08 /* Private */,
      20,    0,  130,    2, 0x08 /* Private */,
      21,    0,  131,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, QMetaType::Double,   10,
    QMetaType::Void, QMetaType::Double,   10,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,   10,
    QMetaType::Void, QMetaType::Double,   10,
    QMetaType::Void, QMetaType::Double,   10,
    QMetaType::Void, QMetaType::Double,   10,
    QMetaType::Void, QMetaType::Double,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void TransformDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TransformDialog *_t = static_cast<TransformDialog *>(_o);
        switch (_id) {
        case 0: _t->newScaling(); break;
        case 1: _t->newTranslation(); break;
        case 2: _t->newRotation(); break;
        case 3: _t->newSkewing(); break;
        case 4: _t->setCurrentTransform((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 5: _t->changeHScale((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 6: _t->changeVScale((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 7: _t->toggleLink(); break;
        case 8: _t->changeHTranslation((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 9: _t->changeVTranslation((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 10: _t->changeRotation((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 11: _t->changeHSkew((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 12: _t->changeVSkew((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 13: _t->toggleLinkSkew(); break;
        case 14: _t->moveTransformUp(); break;
        case 15: _t->moveTransformDown(); break;
        case 16: _t->removeTransform(); break;
        default: ;
        }
    }
}

const QMetaObject TransformDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_TransformDialog.data,
      qt_meta_data_TransformDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *TransformDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TransformDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_TransformDialog.stringdata))
        return static_cast<void*>(const_cast< TransformDialog*>(this));
    if (!strcmp(_clname, "Ui::TransformDialogBase"))
        return static_cast< Ui::TransformDialogBase*>(const_cast< TransformDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int TransformDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 17;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
