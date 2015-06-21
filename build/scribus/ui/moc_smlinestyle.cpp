/****************************************************************************
** Meta object code from reading C++ file 'smlinestyle.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../scribus/ui/smlinestyle.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'smlinestyle.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SMLineStyle_t {
    QByteArrayData data[15];
    char stringdata[164];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SMLineStyle_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SMLineStyle_t qt_meta_stringdata_SMLineStyle = {
    {
QT_MOC_LITERAL(0, 0, 11), // "SMLineStyle"
QT_MOC_LITERAL(1, 12, 10), // "deleteDone"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 14), // "selectionDirty"
QT_MOC_LITERAL(4, 39, 22), // "slotCurrentLineChanged"
QT_MOC_LITERAL(5, 62, 1), // "i"
QT_MOC_LITERAL(6, 64, 13), // "slotLineStyle"
QT_MOC_LITERAL(7, 78, 10), // "slotSetEnd"
QT_MOC_LITERAL(8, 89, 11), // "slotSetJoin"
QT_MOC_LITERAL(9, 101, 9), // "slotColor"
QT_MOC_LITERAL(10, 111, 1), // "s"
QT_MOC_LITERAL(11, 113, 9), // "slotShade"
QT_MOC_LITERAL(12, 123, 13), // "slotLineWidth"
QT_MOC_LITERAL(13, 137, 11), // "slotAddLine"
QT_MOC_LITERAL(14, 149, 14) // "slotDeleteLine"

    },
    "SMLineStyle\0deleteDone\0\0selectionDirty\0"
    "slotCurrentLineChanged\0i\0slotLineStyle\0"
    "slotSetEnd\0slotSetJoin\0slotColor\0s\0"
    "slotShade\0slotLineWidth\0slotAddLine\0"
    "slotDeleteLine"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SMLineStyle[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x06 /* Public */,
       3,    0,   70,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   71,    2, 0x08 /* Private */,
       6,    1,   74,    2, 0x08 /* Private */,
       7,    1,   77,    2, 0x08 /* Private */,
       8,    1,   80,    2, 0x08 /* Private */,
       9,    1,   83,    2, 0x08 /* Private */,
      11,    1,   86,    2, 0x08 /* Private */,
      12,    0,   89,    2, 0x08 /* Private */,
      13,    0,   90,    2, 0x08 /* Private */,
      14,    0,   91,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void SMLineStyle::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SMLineStyle *_t = static_cast<SMLineStyle *>(_o);
        switch (_id) {
        case 0: _t->deleteDone(); break;
        case 1: _t->selectionDirty(); break;
        case 2: _t->slotCurrentLineChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->slotLineStyle((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->slotSetEnd((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->slotSetJoin((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->slotColor((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->slotShade((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->slotLineWidth(); break;
        case 9: _t->slotAddLine(); break;
        case 10: _t->slotDeleteLine(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (SMLineStyle::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SMLineStyle::deleteDone)) {
                *result = 0;
            }
        }
        {
            typedef void (SMLineStyle::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SMLineStyle::selectionDirty)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject SMLineStyle::staticMetaObject = {
    { &StyleItem::staticMetaObject, qt_meta_stringdata_SMLineStyle.data,
      qt_meta_data_SMLineStyle,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SMLineStyle::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SMLineStyle::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SMLineStyle.stringdata))
        return static_cast<void*>(const_cast< SMLineStyle*>(this));
    return StyleItem::qt_metacast(_clname);
}

int SMLineStyle::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = StyleItem::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void SMLineStyle::deleteDone()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void SMLineStyle::selectionDirty()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
