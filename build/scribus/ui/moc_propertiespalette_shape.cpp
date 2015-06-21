/****************************************************************************
** Meta object code from reading C++ file 'propertiespalette_shape.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../scribus/ui/propertiespalette_shape.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'propertiespalette_shape.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_PropertiesPalette_Shape_t {
    QByteArrayData data[24];
    char stringdata[305];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PropertiesPalette_Shape_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PropertiesPalette_Shape_t qt_meta_stringdata_PropertiesPalette_Shape = {
    {
QT_MOC_LITERAL(0, 0, 23), // "PropertiesPalette_Shape"
QT_MOC_LITERAL(1, 24, 13), // "setMainWindow"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 18), // "ScribusMainWindow*"
QT_MOC_LITERAL(4, 58, 2), // "mw"
QT_MOC_LITERAL(5, 61, 6), // "setDoc"
QT_MOC_LITERAL(6, 68, 11), // "ScribusDoc*"
QT_MOC_LITERAL(7, 80, 1), // "d"
QT_MOC_LITERAL(8, 82, 14), // "setCurrentItem"
QT_MOC_LITERAL(9, 97, 9), // "PageItem*"
QT_MOC_LITERAL(10, 107, 1), // "i"
QT_MOC_LITERAL(11, 109, 8), // "unsetDoc"
QT_MOC_LITERAL(12, 118, 9), // "unsetItem"
QT_MOC_LITERAL(13, 128, 22), // "handleSelectionChanged"
QT_MOC_LITERAL(14, 151, 19), // "handleUpdateRequest"
QT_MOC_LITERAL(15, 171, 14), // "languageChange"
QT_MOC_LITERAL(16, 186, 10), // "unitChange"
QT_MOC_LITERAL(17, 197, 14), // "handleTextFlow"
QT_MOC_LITERAL(18, 212, 15), // "handleShapeEdit"
QT_MOC_LITERAL(19, 228, 20), // "handleShapeEditEnded"
QT_MOC_LITERAL(20, 249, 18), // "handleCornerRadius"
QT_MOC_LITERAL(21, 268, 14), // "handleFillRule"
QT_MOC_LITERAL(22, 283, 14), // "handleNewShape"
QT_MOC_LITERAL(23, 298, 6) // "qreal*"

    },
    "PropertiesPalette_Shape\0setMainWindow\0"
    "\0ScribusMainWindow*\0mw\0setDoc\0ScribusDoc*\0"
    "d\0setCurrentItem\0PageItem*\0i\0unsetDoc\0"
    "unsetItem\0handleSelectionChanged\0"
    "handleUpdateRequest\0languageChange\0"
    "unitChange\0handleTextFlow\0handleShapeEdit\0"
    "handleShapeEditEnded\0handleCornerRadius\0"
    "handleFillRule\0handleNewShape\0qreal*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PropertiesPalette_Shape[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   89,    2, 0x0a /* Public */,
       5,    1,   92,    2, 0x0a /* Public */,
       8,    1,   95,    2, 0x0a /* Public */,
      11,    0,   98,    2, 0x0a /* Public */,
      12,    0,   99,    2, 0x0a /* Public */,
      13,    0,  100,    2, 0x0a /* Public */,
      14,    1,  101,    2, 0x0a /* Public */,
      15,    0,  104,    2, 0x0a /* Public */,
      16,    0,  105,    2, 0x0a /* Public */,
      17,    0,  106,    2, 0x08 /* Private */,
      18,    0,  107,    2, 0x08 /* Private */,
      19,    0,  108,    2, 0x08 /* Private */,
      20,    0,  109,    2, 0x08 /* Private */,
      21,    0,  110,    2, 0x08 /* Private */,
      22,    3,  111,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, 0x80000000 | 23,    2,    2,    2,

       0        // eod
};

void PropertiesPalette_Shape::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PropertiesPalette_Shape *_t = static_cast<PropertiesPalette_Shape *>(_o);
        switch (_id) {
        case 0: _t->setMainWindow((*reinterpret_cast< ScribusMainWindow*(*)>(_a[1]))); break;
        case 1: _t->setDoc((*reinterpret_cast< ScribusDoc*(*)>(_a[1]))); break;
        case 2: _t->setCurrentItem((*reinterpret_cast< PageItem*(*)>(_a[1]))); break;
        case 3: _t->unsetDoc(); break;
        case 4: _t->unsetItem(); break;
        case 5: _t->handleSelectionChanged(); break;
        case 6: _t->handleUpdateRequest((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->languageChange(); break;
        case 8: _t->unitChange(); break;
        case 9: _t->handleTextFlow(); break;
        case 10: _t->handleShapeEdit(); break;
        case 11: _t->handleShapeEditEnded(); break;
        case 12: _t->handleCornerRadius(); break;
        case 13: _t->handleFillRule(); break;
        case 14: _t->handleNewShape((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< qreal*(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PageItem* >(); break;
            }
            break;
        }
    }
}

const QMetaObject PropertiesPalette_Shape::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_PropertiesPalette_Shape.data,
      qt_meta_data_PropertiesPalette_Shape,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PropertiesPalette_Shape::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PropertiesPalette_Shape::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PropertiesPalette_Shape.stringdata))
        return static_cast<void*>(const_cast< PropertiesPalette_Shape*>(this));
    if (!strcmp(_clname, "Ui::PropertiesPalette_ShapeBase"))
        return static_cast< Ui::PropertiesPalette_ShapeBase*>(const_cast< PropertiesPalette_Shape*>(this));
    return QWidget::qt_metacast(_clname);
}

int PropertiesPalette_Shape::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
