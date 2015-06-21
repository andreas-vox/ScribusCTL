/****************************************************************************
** Meta object code from reading C++ file 'smtablestyle.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../scribus/ui/smtablestyle.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'smtablestyle.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SMTableStyle_t {
    QByteArrayData data[7];
    char stringdata[82];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SMTableStyle_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SMTableStyle_t qt_meta_stringdata_SMTableStyle = {
    {
QT_MOC_LITERAL(0, 0, 12), // "SMTableStyle"
QT_MOC_LITERAL(1, 13, 14), // "selectionDirty"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 13), // "slotFillColor"
QT_MOC_LITERAL(4, 43, 13), // "slotFillShade"
QT_MOC_LITERAL(5, 57, 17), // "slotParentChanged"
QT_MOC_LITERAL(6, 75, 6) // "parent"

    },
    "SMTableStyle\0selectionDirty\0\0slotFillColor\0"
    "slotFillShade\0slotParentChanged\0parent"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SMTableStyle[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   35,    2, 0x08 /* Private */,
       4,    0,   36,    2, 0x08 /* Private */,
       5,    1,   37,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,

       0        // eod
};

void SMTableStyle::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SMTableStyle *_t = static_cast<SMTableStyle *>(_o);
        switch (_id) {
        case 0: _t->selectionDirty(); break;
        case 1: _t->slotFillColor(); break;
        case 2: _t->slotFillShade(); break;
        case 3: _t->slotParentChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (SMTableStyle::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SMTableStyle::selectionDirty)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject SMTableStyle::staticMetaObject = {
    { &StyleItem::staticMetaObject, qt_meta_stringdata_SMTableStyle.data,
      qt_meta_data_SMTableStyle,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SMTableStyle::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SMTableStyle::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SMTableStyle.stringdata))
        return static_cast<void*>(const_cast< SMTableStyle*>(this));
    return StyleItem::qt_metacast(_clname);
}

int SMTableStyle::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = StyleItem::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void SMTableStyle::selectionDirty()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
