/****************************************************************************
** Meta object code from reading C++ file 'hyphenator.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../scribus/hyphenator.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'hyphenator.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Hyphenator_t {
    QByteArrayData data[14];
    char stringdata[126];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Hyphenator_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Hyphenator_t qt_meta_stringdata_Hyphenator = {
    {
QT_MOC_LITERAL(0, 0, 10), // "Hyphenator"
QT_MOC_LITERAL(1, 11, 15), // "slotNewSettings"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 7), // "Wordlen"
QT_MOC_LITERAL(4, 36, 5), // "Autom"
QT_MOC_LITERAL(5, 42, 6), // "ACheck"
QT_MOC_LITERAL(6, 49, 3), // "Num"
QT_MOC_LITERAL(7, 53, 17), // "slotHyphenateWord"
QT_MOC_LITERAL(8, 71, 9), // "PageItem*"
QT_MOC_LITERAL(9, 81, 2), // "it"
QT_MOC_LITERAL(10, 84, 4), // "text"
QT_MOC_LITERAL(11, 89, 6), // "firstC"
QT_MOC_LITERAL(12, 96, 13), // "slotHyphenate"
QT_MOC_LITERAL(13, 110, 15) // "slotDeHyphenate"

    },
    "Hyphenator\0slotNewSettings\0\0Wordlen\0"
    "Autom\0ACheck\0Num\0slotHyphenateWord\0"
    "PageItem*\0it\0text\0firstC\0slotHyphenate\0"
    "slotDeHyphenate"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Hyphenator[] = {

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
       1,    4,   34,    2, 0x0a /* Public */,
       7,    3,   43,    2, 0x0a /* Public */,
      12,    1,   50,    2, 0x0a /* Public */,
      13,    1,   53,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Bool, QMetaType::Bool, QMetaType::Int,    3,    4,    5,    6,
    QMetaType::Void, 0x80000000 | 8, QMetaType::QString, QMetaType::Int,    9,   10,   11,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 8,    9,

       0        // eod
};

void Hyphenator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Hyphenator *_t = static_cast<Hyphenator *>(_o);
        switch (_id) {
        case 0: _t->slotNewSettings((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 1: _t->slotHyphenateWord((*reinterpret_cast< PageItem*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 2: _t->slotHyphenate((*reinterpret_cast< PageItem*(*)>(_a[1]))); break;
        case 3: _t->slotDeHyphenate((*reinterpret_cast< PageItem*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject Hyphenator::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Hyphenator.data,
      qt_meta_data_Hyphenator,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Hyphenator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Hyphenator::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Hyphenator.stringdata))
        return static_cast<void*>(const_cast< Hyphenator*>(this));
    return QObject::qt_metacast(_clname);
}

int Hyphenator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_END_MOC_NAMESPACE
