/****************************************************************************
** Meta object code from reading C++ file 'tffilter.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../scribus/plugins/gettext/textfilter/tffilter.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tffilter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_tfFilter_t {
    QByteArrayData data[17];
    char stringdata[173];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_tfFilter_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_tfFilter_t qt_meta_stringdata_tfFilter = {
    {
QT_MOC_LITERAL(0, 0, 8), // "tfFilter"
QT_MOC_LITERAL(1, 9, 13), // "removeClicked"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 9), // "tfFilter*"
QT_MOC_LITERAL(4, 34, 3), // "tff"
QT_MOC_LITERAL(5, 38, 10), // "addClicked"
QT_MOC_LITERAL(6, 49, 13), // "enableToggled"
QT_MOC_LITERAL(7, 63, 2), // "on"
QT_MOC_LITERAL(8, 66, 8), // "addClick"
QT_MOC_LITERAL(9, 75, 11), // "removeClick"
QT_MOC_LITERAL(10, 87, 12), // "firstChanged"
QT_MOC_LITERAL(11, 100, 5), // "index"
QT_MOC_LITERAL(12, 106, 13), // "secondChanged"
QT_MOC_LITERAL(13, 120, 12), // "thirdChanged"
QT_MOC_LITERAL(14, 133, 13), // "fourthChanged"
QT_MOC_LITERAL(15, 147, 12), // "fifthChanged"
QT_MOC_LITERAL(16, 160, 12) // "sixthChanged"

    },
    "tfFilter\0removeClicked\0\0tfFilter*\0tff\0"
    "addClicked\0enableToggled\0on\0addClick\0"
    "removeClick\0firstChanged\0index\0"
    "secondChanged\0thirdChanged\0fourthChanged\0"
    "fifthChanged\0sixthChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_tfFilter[] = {

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
       1,    1,   69,    2, 0x06 /* Public */,
       5,    1,   72,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   75,    2, 0x08 /* Private */,
       8,    0,   78,    2, 0x08 /* Private */,
       9,    0,   79,    2, 0x08 /* Private */,
      10,    1,   80,    2, 0x08 /* Private */,
      12,    1,   83,    2, 0x08 /* Private */,
      13,    1,   86,    2, 0x08 /* Private */,
      14,    1,   89,    2, 0x08 /* Private */,
      15,    1,   92,    2, 0x08 /* Private */,
      16,    1,   95,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   11,

       0        // eod
};

void tfFilter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        tfFilter *_t = static_cast<tfFilter *>(_o);
        switch (_id) {
        case 0: _t->removeClicked((*reinterpret_cast< tfFilter*(*)>(_a[1]))); break;
        case 1: _t->addClicked((*reinterpret_cast< tfFilter*(*)>(_a[1]))); break;
        case 2: _t->enableToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->addClick(); break;
        case 4: _t->removeClick(); break;
        case 5: _t->firstChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->secondChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->thirdChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->fourthChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->fifthChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->sixthChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< tfFilter* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< tfFilter* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (tfFilter::*_t)(tfFilter * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&tfFilter::removeClicked)) {
                *result = 0;
            }
        }
        {
            typedef void (tfFilter::*_t)(tfFilter * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&tfFilter::addClicked)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject tfFilter::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_tfFilter.data,
      qt_meta_data_tfFilter,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *tfFilter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *tfFilter::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_tfFilter.stringdata))
        return static_cast<void*>(const_cast< tfFilter*>(this));
    return QWidget::qt_metacast(_clname);
}

int tfFilter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void tfFilter::removeClicked(tfFilter * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void tfFilter::addClicked(tfFilter * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
