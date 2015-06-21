/****************************************************************************
** Meta object code from reading C++ file 'propertywidget_pathtext.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../scribus/ui/propertywidget_pathtext.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'propertywidget_pathtext.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_PropertyWidget_PathText_t {
    QByteArrayData data[17];
    char stringdata[226];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PropertyWidget_PathText_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PropertyWidget_PathText_t qt_meta_stringdata_PropertyWidget_PathText = {
    {
QT_MOC_LITERAL(0, 0, 23), // "PropertyWidget_PathText"
QT_MOC_LITERAL(1, 24, 13), // "setMainWindow"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 18), // "ScribusMainWindow*"
QT_MOC_LITERAL(4, 58, 2), // "mw"
QT_MOC_LITERAL(5, 61, 6), // "setDoc"
QT_MOC_LITERAL(6, 68, 11), // "ScribusDoc*"
QT_MOC_LITERAL(7, 80, 1), // "d"
QT_MOC_LITERAL(8, 82, 22), // "handleSelectionChanged"
QT_MOC_LITERAL(9, 105, 19), // "handleUpdateRequest"
QT_MOC_LITERAL(10, 125, 14), // "languageChange"
QT_MOC_LITERAL(11, 140, 10), // "unitChange"
QT_MOC_LITERAL(12, 151, 14), // "handlePathType"
QT_MOC_LITERAL(13, 166, 14), // "handlePathFlip"
QT_MOC_LITERAL(14, 181, 14), // "handlePathLine"
QT_MOC_LITERAL(15, 196, 14), // "handlePathDist"
QT_MOC_LITERAL(16, 211, 14) // "handlePathOffs"

    },
    "PropertyWidget_PathText\0setMainWindow\0"
    "\0ScribusMainWindow*\0mw\0setDoc\0ScribusDoc*\0"
    "d\0handleSelectionChanged\0handleUpdateRequest\0"
    "languageChange\0unitChange\0handlePathType\0"
    "handlePathFlip\0handlePathLine\0"
    "handlePathDist\0handlePathOffs"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PropertyWidget_PathText[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x0a /* Public */,
       5,    1,   72,    2, 0x0a /* Public */,
       8,    0,   75,    2, 0x0a /* Public */,
       9,    1,   76,    2, 0x0a /* Public */,
      10,    0,   79,    2, 0x0a /* Public */,
      11,    0,   80,    2, 0x0a /* Public */,
      12,    0,   81,    2, 0x08 /* Private */,
      13,    0,   82,    2, 0x08 /* Private */,
      14,    0,   83,    2, 0x08 /* Private */,
      15,    0,   84,    2, 0x08 /* Private */,
      16,    0,   85,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void PropertyWidget_PathText::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PropertyWidget_PathText *_t = static_cast<PropertyWidget_PathText *>(_o);
        switch (_id) {
        case 0: _t->setMainWindow((*reinterpret_cast< ScribusMainWindow*(*)>(_a[1]))); break;
        case 1: _t->setDoc((*reinterpret_cast< ScribusDoc*(*)>(_a[1]))); break;
        case 2: _t->handleSelectionChanged(); break;
        case 3: _t->handleUpdateRequest((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->languageChange(); break;
        case 5: _t->unitChange(); break;
        case 6: _t->handlePathType(); break;
        case 7: _t->handlePathFlip(); break;
        case 8: _t->handlePathLine(); break;
        case 9: _t->handlePathDist(); break;
        case 10: _t->handlePathOffs(); break;
        default: ;
        }
    }
}

const QMetaObject PropertyWidget_PathText::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_PropertyWidget_PathText.data,
      qt_meta_data_PropertyWidget_PathText,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PropertyWidget_PathText::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PropertyWidget_PathText::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PropertyWidget_PathText.stringdata))
        return static_cast<void*>(const_cast< PropertyWidget_PathText*>(this));
    if (!strcmp(_clname, "Ui::PropertyWidget_PathTextBase"))
        return static_cast< Ui::PropertyWidget_PathTextBase*>(const_cast< PropertyWidget_PathText*>(this));
    if (!strcmp(_clname, "PropertyWidgetBase"))
        return static_cast< PropertyWidgetBase*>(const_cast< PropertyWidget_PathText*>(this));
    return QFrame::qt_metacast(_clname);
}

int PropertyWidget_PathText::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
