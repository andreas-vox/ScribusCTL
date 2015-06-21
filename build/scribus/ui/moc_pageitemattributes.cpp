/****************************************************************************
** Meta object code from reading C++ file 'pageitemattributes.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../scribus/ui/pageitemattributes.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pageitemattributes.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_PageItemAttributes_t {
    QByteArrayData data[15];
    char stringdata[162];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PageItemAttributes_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PageItemAttributes_t qt_meta_stringdata_PageItemAttributes = {
    {
QT_MOC_LITERAL(0, 0, 18), // "PageItemAttributes"
QT_MOC_LITERAL(1, 19, 5), // "setup"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 14), // "ObjAttrVector*"
QT_MOC_LITERAL(4, 41, 13), // "pageItemAttrs"
QT_MOC_LITERAL(5, 55, 12), // "docItemAttrs"
QT_MOC_LITERAL(6, 68, 16), // "tableItemChanged"
QT_MOC_LITERAL(7, 85, 3), // "row"
QT_MOC_LITERAL(8, 89, 3), // "col"
QT_MOC_LITERAL(9, 93, 14), // "languageChange"
QT_MOC_LITERAL(10, 108, 8), // "addEntry"
QT_MOC_LITERAL(11, 117, 11), // "deleteEntry"
QT_MOC_LITERAL(12, 129, 12), // "clearEntries"
QT_MOC_LITERAL(13, 142, 9), // "copyEntry"
QT_MOC_LITERAL(14, 152, 9) // "okClicked"

    },
    "PageItemAttributes\0setup\0\0ObjAttrVector*\0"
    "pageItemAttrs\0docItemAttrs\0tableItemChanged\0"
    "row\0col\0languageChange\0addEntry\0"
    "deleteEntry\0clearEntries\0copyEntry\0"
    "okClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PageItemAttributes[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   54,    2, 0x0a /* Public */,
       6,    2,   59,    2, 0x0a /* Public */,
       9,    0,   64,    2, 0x09 /* Protected */,
      10,    0,   65,    2, 0x09 /* Protected */,
      11,    0,   66,    2, 0x09 /* Protected */,
      12,    0,   67,    2, 0x09 /* Protected */,
      13,    0,   68,    2, 0x09 /* Protected */,
      14,    0,   69,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,    4,    5,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    7,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void PageItemAttributes::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PageItemAttributes *_t = static_cast<PageItemAttributes *>(_o);
        switch (_id) {
        case 0: _t->setup((*reinterpret_cast< ObjAttrVector*(*)>(_a[1])),(*reinterpret_cast< ObjAttrVector*(*)>(_a[2]))); break;
        case 1: _t->tableItemChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->languageChange(); break;
        case 3: _t->addEntry(); break;
        case 4: _t->deleteEntry(); break;
        case 5: _t->clearEntries(); break;
        case 6: _t->copyEntry(); break;
        case 7: _t->okClicked(); break;
        default: ;
        }
    }
}

const QMetaObject PageItemAttributes::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_PageItemAttributes.data,
      qt_meta_data_PageItemAttributes,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PageItemAttributes::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PageItemAttributes::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PageItemAttributes.stringdata))
        return static_cast<void*>(const_cast< PageItemAttributes*>(this));
    if (!strcmp(_clname, "Ui::PageItemAttributes"))
        return static_cast< Ui::PageItemAttributes*>(const_cast< PageItemAttributes*>(this));
    return QDialog::qt_metacast(_clname);
}

int PageItemAttributes::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
