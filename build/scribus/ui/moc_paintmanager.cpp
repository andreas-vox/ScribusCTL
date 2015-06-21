/****************************************************************************
** Meta object code from reading C++ file 'paintmanager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../scribus/ui/paintmanager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'paintmanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_PaintManagerDialog_t {
    QByteArrayData data[19];
    char stringdata[245];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PaintManagerDialog_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PaintManagerDialog_t qt_meta_stringdata_PaintManagerDialog = {
    {
QT_MOC_LITERAL(0, 0, 18), // "PaintManagerDialog"
QT_MOC_LITERAL(1, 19, 11), // "leaveDialog"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 14), // "slotRightClick"
QT_MOC_LITERAL(4, 47, 1), // "p"
QT_MOC_LITERAL(5, 49, 12), // "selEditColor"
QT_MOC_LITERAL(6, 62, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(7, 79, 2), // "it"
QT_MOC_LITERAL(8, 82, 20), // "itemSelectionChanged"
QT_MOC_LITERAL(9, 103, 12), // "itemSelected"
QT_MOC_LITERAL(10, 116, 9), // "createNew"
QT_MOC_LITERAL(11, 126, 13), // "editColorItem"
QT_MOC_LITERAL(12, 140, 18), // "duplicateColorItem"
QT_MOC_LITERAL(13, 159, 15), // "removeColorItem"
QT_MOC_LITERAL(14, 175, 21), // "removeUnusedColorItem"
QT_MOC_LITERAL(15, 197, 16), // "importColorItems"
QT_MOC_LITERAL(16, 214, 12), // "loadDefaults"
QT_MOC_LITERAL(17, 227, 4), // "item"
QT_MOC_LITERAL(18, 232, 12) // "saveDefaults"

    },
    "PaintManagerDialog\0leaveDialog\0\0"
    "slotRightClick\0p\0selEditColor\0"
    "QTreeWidgetItem*\0it\0itemSelectionChanged\0"
    "itemSelected\0createNew\0editColorItem\0"
    "duplicateColorItem\0removeColorItem\0"
    "removeUnusedColorItem\0importColorItems\0"
    "loadDefaults\0item\0saveDefaults"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PaintManagerDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x08 /* Private */,
       3,    1,   80,    2, 0x08 /* Private */,
       5,    1,   83,    2, 0x08 /* Private */,
       8,    0,   86,    2, 0x08 /* Private */,
       9,    1,   87,    2, 0x08 /* Private */,
      10,    0,   90,    2, 0x08 /* Private */,
      11,    0,   91,    2, 0x08 /* Private */,
      12,    0,   92,    2, 0x08 /* Private */,
      13,    0,   93,    2, 0x08 /* Private */,
      14,    0,   94,    2, 0x08 /* Private */,
      15,    0,   95,    2, 0x08 /* Private */,
      16,    1,   96,    2, 0x08 /* Private */,
      18,    0,   99,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,   17,
    QMetaType::Void,

       0        // eod
};

void PaintManagerDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PaintManagerDialog *_t = static_cast<PaintManagerDialog *>(_o);
        switch (_id) {
        case 0: _t->leaveDialog(); break;
        case 1: _t->slotRightClick((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 2: _t->selEditColor((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 3: _t->itemSelectionChanged(); break;
        case 4: _t->itemSelected((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 5: _t->createNew(); break;
        case 6: _t->editColorItem(); break;
        case 7: _t->duplicateColorItem(); break;
        case 8: _t->removeColorItem(); break;
        case 9: _t->removeUnusedColorItem(); break;
        case 10: _t->importColorItems(); break;
        case 11: _t->loadDefaults((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 12: _t->saveDefaults(); break;
        default: ;
        }
    }
}

const QMetaObject PaintManagerDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_PaintManagerDialog.data,
      qt_meta_data_PaintManagerDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PaintManagerDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PaintManagerDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PaintManagerDialog.stringdata))
        return static_cast<void*>(const_cast< PaintManagerDialog*>(this));
    if (!strcmp(_clname, "Ui::PaintManagerBase"))
        return static_cast< Ui::PaintManagerBase*>(const_cast< PaintManagerDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int PaintManagerDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_END_MOC_NAMESPACE
