/****************************************************************************
** Meta object code from reading C++ file 'collectforoutput_ui.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../scribus/ui/collectforoutput_ui.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'collectforoutput_ui.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CollectForOutput_UI_t {
    QByteArrayData data[6];
    char stringdata[87];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CollectForOutput_UI_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CollectForOutput_UI_t qt_meta_stringdata_CollectForOutput_UI = {
    {
QT_MOC_LITERAL(0, 0, 19), // "CollectForOutput_UI"
QT_MOC_LITERAL(1, 20, 14), // "collectedFonts"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 14), // "collectedItems"
QT_MOC_LITERAL(4, 51, 17), // "collectedPatterns"
QT_MOC_LITERAL(5, 69, 17) // "collectedProfiles"

    },
    "CollectForOutput_UI\0collectedFonts\0\0"
    "collectedItems\0collectedPatterns\0"
    "collectedProfiles"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CollectForOutput_UI[] = {

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
       1,    1,   34,    2, 0x09 /* Protected */,
       3,    1,   37,    2, 0x09 /* Protected */,
       4,    1,   40,    2, 0x09 /* Protected */,
       5,    1,   43,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,

       0        // eod
};

void CollectForOutput_UI::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CollectForOutput_UI *_t = static_cast<CollectForOutput_UI *>(_o);
        switch (_id) {
        case 0: _t->collectedFonts((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->collectedItems((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->collectedPatterns((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->collectedProfiles((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject CollectForOutput_UI::staticMetaObject = {
    { &CollectForOutput::staticMetaObject, qt_meta_stringdata_CollectForOutput_UI.data,
      qt_meta_data_CollectForOutput_UI,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CollectForOutput_UI::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CollectForOutput_UI::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CollectForOutput_UI.stringdata))
        return static_cast<void*>(const_cast< CollectForOutput_UI*>(this));
    return CollectForOutput::qt_metacast(_clname);
}

int CollectForOutput_UI::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CollectForOutput::qt_metacall(_c, _id, _a);
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
