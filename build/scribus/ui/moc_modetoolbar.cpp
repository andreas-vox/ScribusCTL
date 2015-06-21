/****************************************************************************
** Meta object code from reading C++ file 'modetoolbar.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../scribus/ui/modetoolbar.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'modetoolbar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ModeToolBar_t {
    QByteArrayData data[10];
    char stringdata[79];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ModeToolBar_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ModeToolBar_t qt_meta_stringdata_ModeToolBar = {
    {
QT_MOC_LITERAL(0, 0, 11), // "ModeToolBar"
QT_MOC_LITERAL(1, 12, 12), // "newCalValues"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 12), // "GetPolyProps"
QT_MOC_LITERAL(4, 39, 8), // "SelShape"
QT_MOC_LITERAL(5, 48, 1), // "s"
QT_MOC_LITERAL(6, 50, 1), // "c"
QT_MOC_LITERAL(7, 52, 6), // "qreal*"
QT_MOC_LITERAL(8, 59, 4), // "vals"
QT_MOC_LITERAL(9, 64, 14) // "languageChange"

    },
    "ModeToolBar\0newCalValues\0\0GetPolyProps\0"
    "SelShape\0s\0c\0qreal*\0vals\0languageChange"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ModeToolBar[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x0a /* Public */,
       3,    0,   35,    2, 0x0a /* Public */,
       4,    3,   36,    2, 0x0a /* Public */,
       9,    0,   43,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, 0x80000000 | 7,    5,    6,    8,
    QMetaType::Void,

       0        // eod
};

void ModeToolBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ModeToolBar *_t = static_cast<ModeToolBar *>(_o);
        switch (_id) {
        case 0: _t->newCalValues(); break;
        case 1: _t->GetPolyProps(); break;
        case 2: _t->SelShape((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< qreal*(*)>(_a[3]))); break;
        case 3: _t->languageChange(); break;
        default: ;
        }
    }
}

const QMetaObject ModeToolBar::staticMetaObject = {
    { &ScToolBar::staticMetaObject, qt_meta_stringdata_ModeToolBar.data,
      qt_meta_data_ModeToolBar,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ModeToolBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ModeToolBar::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ModeToolBar.stringdata))
        return static_cast<void*>(const_cast< ModeToolBar*>(this));
    return ScToolBar::qt_metacast(_clname);
}

int ModeToolBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ScToolBar::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
