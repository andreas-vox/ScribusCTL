/****************************************************************************
** Meta object code from reading C++ file 'propertywidget_optmargins.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../scribus/ui/propertywidget_optmargins.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'propertywidget_optmargins.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_PropertyWidget_OptMargins_t {
    QByteArrayData data[20];
    char stringdata[269];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PropertyWidget_OptMargins_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PropertyWidget_OptMargins_t qt_meta_stringdata_PropertyWidget_OptMargins = {
    {
QT_MOC_LITERAL(0, 0, 25), // "PropertyWidget_OptMargins"
QT_MOC_LITERAL(1, 26, 13), // "setMainWindow"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 18), // "ScribusMainWindow*"
QT_MOC_LITERAL(4, 60, 2), // "mw"
QT_MOC_LITERAL(5, 63, 6), // "setDoc"
QT_MOC_LITERAL(6, 70, 11), // "ScribusDoc*"
QT_MOC_LITERAL(7, 82, 1), // "d"
QT_MOC_LITERAL(8, 84, 20), // "handleAppModeChanged"
QT_MOC_LITERAL(9, 105, 7), // "oldMode"
QT_MOC_LITERAL(10, 113, 4), // "mode"
QT_MOC_LITERAL(11, 118, 22), // "handleSelectionChanged"
QT_MOC_LITERAL(12, 141, 19), // "handleUpdateRequest"
QT_MOC_LITERAL(13, 161, 14), // "languageChange"
QT_MOC_LITERAL(14, 176, 10), // "unitChange"
QT_MOC_LITERAL(15, 187, 18), // "showOpticalMargins"
QT_MOC_LITERAL(16, 206, 14), // "ParagraphStyle"
QT_MOC_LITERAL(17, 221, 6), // "pStyle"
QT_MOC_LITERAL(18, 228, 20), // "handleOpticalMargins"
QT_MOC_LITERAL(19, 249, 19) // "resetOpticalMargins"

    },
    "PropertyWidget_OptMargins\0setMainWindow\0"
    "\0ScribusMainWindow*\0mw\0setDoc\0ScribusDoc*\0"
    "d\0handleAppModeChanged\0oldMode\0mode\0"
    "handleSelectionChanged\0handleUpdateRequest\0"
    "languageChange\0unitChange\0showOpticalMargins\0"
    "ParagraphStyle\0pStyle\0handleOpticalMargins\0"
    "resetOpticalMargins"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PropertyWidget_OptMargins[] = {

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
       1,    1,   64,    2, 0x0a /* Public */,
       5,    1,   67,    2, 0x0a /* Public */,
       8,    2,   70,    2, 0x0a /* Public */,
      11,    0,   75,    2, 0x0a /* Public */,
      12,    1,   76,    2, 0x0a /* Public */,
      13,    0,   79,    2, 0x0a /* Public */,
      14,    0,   80,    2, 0x0a /* Public */,
      15,    1,   81,    2, 0x0a /* Public */,
      18,    0,   84,    2, 0x08 /* Private */,
      19,    0,   85,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    9,   10,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 16,   17,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void PropertyWidget_OptMargins::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PropertyWidget_OptMargins *_t = static_cast<PropertyWidget_OptMargins *>(_o);
        switch (_id) {
        case 0: _t->setMainWindow((*reinterpret_cast< ScribusMainWindow*(*)>(_a[1]))); break;
        case 1: _t->setDoc((*reinterpret_cast< ScribusDoc*(*)>(_a[1]))); break;
        case 2: _t->handleAppModeChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->handleSelectionChanged(); break;
        case 4: _t->handleUpdateRequest((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->languageChange(); break;
        case 6: _t->unitChange(); break;
        case 7: _t->showOpticalMargins((*reinterpret_cast< const ParagraphStyle(*)>(_a[1]))); break;
        case 8: _t->handleOpticalMargins(); break;
        case 9: _t->resetOpticalMargins(); break;
        default: ;
        }
    }
}

const QMetaObject PropertyWidget_OptMargins::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_PropertyWidget_OptMargins.data,
      qt_meta_data_PropertyWidget_OptMargins,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PropertyWidget_OptMargins::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PropertyWidget_OptMargins::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PropertyWidget_OptMargins.stringdata))
        return static_cast<void*>(const_cast< PropertyWidget_OptMargins*>(this));
    if (!strcmp(_clname, "Ui::PropertyWidget_OptMarginsBase"))
        return static_cast< Ui::PropertyWidget_OptMarginsBase*>(const_cast< PropertyWidget_OptMargins*>(this));
    if (!strcmp(_clname, "PropertyWidgetBase"))
        return static_cast< PropertyWidgetBase*>(const_cast< PropertyWidget_OptMargins*>(this));
    return QFrame::qt_metacast(_clname);
}

int PropertyWidget_OptMargins::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
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
