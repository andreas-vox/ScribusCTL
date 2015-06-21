/****************************************************************************
** Meta object code from reading C++ file 'rulermover.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../scribus/ui/rulermover.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'rulermover.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_RulerMover_t {
    QByteArrayData data[9];
    char stringdata[140];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RulerMover_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RulerMover_t qt_meta_stringdata_RulerMover = {
    {
QT_MOC_LITERAL(0, 0, 10), // "RulerMover"
QT_MOC_LITERAL(1, 11, 11), // "resetRulers"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 17), // "moveRulerTopRight"
QT_MOC_LITERAL(4, 42, 19), // "moveRulerBottomLeft"
QT_MOC_LITERAL(5, 62, 20), // "moveRulerBottomRight"
QT_MOC_LITERAL(6, 83, 15), // "moveRulerCenter"
QT_MOC_LITERAL(7, 99, 18), // "moveRulerTopCenter"
QT_MOC_LITERAL(8, 118, 21) // "moveRulerBottomCenter"

    },
    "RulerMover\0resetRulers\0\0moveRulerTopRight\0"
    "moveRulerBottomLeft\0moveRulerBottomRight\0"
    "moveRulerCenter\0moveRulerTopCenter\0"
    "moveRulerBottomCenter"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RulerMover[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x08 /* Private */,
       3,    0,   50,    2, 0x08 /* Private */,
       4,    0,   51,    2, 0x08 /* Private */,
       5,    0,   52,    2, 0x08 /* Private */,
       6,    0,   53,    2, 0x08 /* Private */,
       7,    0,   54,    2, 0x08 /* Private */,
       8,    0,   55,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void RulerMover::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        RulerMover *_t = static_cast<RulerMover *>(_o);
        switch (_id) {
        case 0: _t->resetRulers(); break;
        case 1: _t->moveRulerTopRight(); break;
        case 2: _t->moveRulerBottomLeft(); break;
        case 3: _t->moveRulerBottomRight(); break;
        case 4: _t->moveRulerCenter(); break;
        case 5: _t->moveRulerTopCenter(); break;
        case 6: _t->moveRulerBottomCenter(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject RulerMover::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_RulerMover.data,
      qt_meta_data_RulerMover,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *RulerMover::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RulerMover::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_RulerMover.stringdata))
        return static_cast<void*>(const_cast< RulerMover*>(this));
    return QWidget::qt_metacast(_clname);
}

int RulerMover::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
