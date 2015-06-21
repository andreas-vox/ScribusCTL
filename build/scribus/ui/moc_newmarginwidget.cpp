/****************************************************************************
** Meta object code from reading C++ file 'newmarginwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../scribus/ui/newmarginwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'newmarginwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_NewMarginWidget_t {
    QByteArrayData data[10];
    char stringdata[119];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_NewMarginWidget_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_NewMarginWidget_t qt_meta_stringdata_NewMarginWidget = {
    {
QT_MOC_LITERAL(0, 0, 15), // "NewMarginWidget"
QT_MOC_LITERAL(1, 16, 14), // "languageChange"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 6), // "setTop"
QT_MOC_LITERAL(4, 39, 9), // "setBottom"
QT_MOC_LITERAL(5, 49, 7), // "setLeft"
QT_MOC_LITERAL(6, 57, 8), // "setRight"
QT_MOC_LITERAL(7, 66, 15), // "slotLinkMargins"
QT_MOC_LITERAL(8, 82, 9), // "setPreset"
QT_MOC_LITERAL(9, 92, 26) // "setMarginsToPrinterMargins"

    },
    "NewMarginWidget\0languageChange\0\0setTop\0"
    "setBottom\0setLeft\0setRight\0slotLinkMargins\0"
    "setPreset\0setMarginsToPrinterMargins"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NewMarginWidget[] = {

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
       1,    0,   54,    2, 0x0a /* Public */,
       3,    0,   55,    2, 0x0a /* Public */,
       4,    0,   56,    2, 0x0a /* Public */,
       5,    0,   57,    2, 0x0a /* Public */,
       6,    0,   58,    2, 0x0a /* Public */,
       7,    0,   59,    2, 0x0a /* Public */,
       8,    0,   60,    2, 0x0a /* Public */,
       9,    0,   61,    2, 0x09 /* Protected */,

 // slots: parameters
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

void NewMarginWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        NewMarginWidget *_t = static_cast<NewMarginWidget *>(_o);
        switch (_id) {
        case 0: _t->languageChange(); break;
        case 1: _t->setTop(); break;
        case 2: _t->setBottom(); break;
        case 3: _t->setLeft(); break;
        case 4: _t->setRight(); break;
        case 5: _t->slotLinkMargins(); break;
        case 6: _t->setPreset(); break;
        case 7: _t->setMarginsToPrinterMargins(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject NewMarginWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_NewMarginWidget.data,
      qt_meta_data_NewMarginWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *NewMarginWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NewMarginWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_NewMarginWidget.stringdata))
        return static_cast<void*>(const_cast< NewMarginWidget*>(this));
    if (!strcmp(_clname, "Ui::NewMarginWidget"))
        return static_cast< Ui::NewMarginWidget*>(const_cast< NewMarginWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int NewMarginWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
