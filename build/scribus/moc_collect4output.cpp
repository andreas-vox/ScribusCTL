/****************************************************************************
** Meta object code from reading C++ file 'collect4output.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../scribus/collect4output.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'collect4output.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CollectForOutput_t {
    QByteArrayData data[6];
    char stringdata[84];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CollectForOutput_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CollectForOutput_t qt_meta_stringdata_CollectForOutput = {
    {
QT_MOC_LITERAL(0, 0, 16), // "CollectForOutput"
QT_MOC_LITERAL(1, 17, 14), // "fontsCollected"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 17), // "patternsCollected"
QT_MOC_LITERAL(4, 51, 17), // "profilesCollected"
QT_MOC_LITERAL(5, 69, 14) // "itemsCollected"

    },
    "CollectForOutput\0fontsCollected\0\0"
    "patternsCollected\0profilesCollected\0"
    "itemsCollected"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CollectForOutput[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       3,    1,   37,    2, 0x06 /* Public */,
       4,    1,   40,    2, 0x06 /* Public */,
       5,    1,   43,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,

       0        // eod
};

void CollectForOutput::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CollectForOutput *_t = static_cast<CollectForOutput *>(_o);
        switch (_id) {
        case 0: _t->fontsCollected((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->patternsCollected((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->profilesCollected((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->itemsCollected((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (CollectForOutput::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CollectForOutput::fontsCollected)) {
                *result = 0;
            }
        }
        {
            typedef void (CollectForOutput::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CollectForOutput::patternsCollected)) {
                *result = 1;
            }
        }
        {
            typedef void (CollectForOutput::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CollectForOutput::profilesCollected)) {
                *result = 2;
            }
        }
        {
            typedef void (CollectForOutput::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CollectForOutput::itemsCollected)) {
                *result = 3;
            }
        }
    }
}

const QMetaObject CollectForOutput::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_CollectForOutput.data,
      qt_meta_data_CollectForOutput,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CollectForOutput::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CollectForOutput::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CollectForOutput.stringdata))
        return static_cast<void*>(const_cast< CollectForOutput*>(this));
    return QObject::qt_metacast(_clname);
}

int CollectForOutput::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void CollectForOutput::fontsCollected(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CollectForOutput::patternsCollected(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void CollectForOutput::profilesCollected(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void CollectForOutput::itemsCollected(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
