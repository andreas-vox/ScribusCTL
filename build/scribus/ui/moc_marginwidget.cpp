/****************************************************************************
** Meta object code from reading C++ file 'marginwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../scribus/ui/marginwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'marginwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MarginWidget_t {
    QByteArrayData data[11];
    char stringdata[129];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MarginWidget_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MarginWidget_t qt_meta_stringdata_MarginWidget = {
    {
QT_MOC_LITERAL(0, 0, 12), // "MarginWidget"
QT_MOC_LITERAL(1, 13, 6), // "setTop"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 9), // "setBottom"
QT_MOC_LITERAL(4, 31, 7), // "setLeft"
QT_MOC_LITERAL(5, 39, 8), // "setRight"
QT_MOC_LITERAL(6, 48, 9), // "setPreset"
QT_MOC_LITERAL(7, 58, 14), // "slotLinkBleeds"
QT_MOC_LITERAL(8, 73, 15), // "slotLinkMargins"
QT_MOC_LITERAL(9, 89, 12), // "changeBleeds"
QT_MOC_LITERAL(10, 102, 26) // "setMarginsToPrinterMargins"

    },
    "MarginWidget\0setTop\0\0setBottom\0setLeft\0"
    "setRight\0setPreset\0slotLinkBleeds\0"
    "slotLinkMargins\0changeBleeds\0"
    "setMarginsToPrinterMargins"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MarginWidget[] = {

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
       1,    0,   59,    2, 0x0a /* Public */,
       3,    0,   60,    2, 0x0a /* Public */,
       4,    0,   61,    2, 0x0a /* Public */,
       5,    0,   62,    2, 0x0a /* Public */,
       6,    0,   63,    2, 0x0a /* Public */,
       7,    0,   64,    2, 0x0a /* Public */,
       8,    0,   65,    2, 0x0a /* Public */,
       9,    0,   66,    2, 0x0a /* Public */,
      10,    0,   67,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MarginWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MarginWidget *_t = static_cast<MarginWidget *>(_o);
        switch (_id) {
        case 0: _t->setTop(); break;
        case 1: _t->setBottom(); break;
        case 2: _t->setLeft(); break;
        case 3: _t->setRight(); break;
        case 4: _t->setPreset(); break;
        case 5: _t->slotLinkBleeds(); break;
        case 6: _t->slotLinkMargins(); break;
        case 7: _t->changeBleeds(); break;
        case 8: _t->setMarginsToPrinterMargins(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject MarginWidget::staticMetaObject = {
    { &QTabWidget::staticMetaObject, qt_meta_stringdata_MarginWidget.data,
      qt_meta_data_MarginWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MarginWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MarginWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MarginWidget.stringdata))
        return static_cast<void*>(const_cast< MarginWidget*>(this));
    return QTabWidget::qt_metacast(_clname);
}

int MarginWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTabWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
