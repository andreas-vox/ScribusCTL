/****************************************************************************
** Meta object code from reading C++ file 'layers.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../scribus/ui/layers.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'layers.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_LayerPalette_t {
    QByteArrayData data[29];
    char stringdata[334];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LayerPalette_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LayerPalette_t qt_meta_stringdata_LayerPalette = {
    {
QT_MOC_LITERAL(0, 0, 12), // "LayerPalette"
QT_MOC_LITERAL(1, 13, 12), // "LayerChanged"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 14), // "LayerActivated"
QT_MOC_LITERAL(4, 42, 8), // "addLayer"
QT_MOC_LITERAL(5, 51, 8), // "dupLayer"
QT_MOC_LITERAL(6, 60, 11), // "removeLayer"
QT_MOC_LITERAL(7, 72, 7), // "upLayer"
QT_MOC_LITERAL(8, 80, 9), // "downLayer"
QT_MOC_LITERAL(9, 90, 10), // "changeName"
QT_MOC_LITERAL(10, 101, 3), // "row"
QT_MOC_LITERAL(11, 105, 3), // "col"
QT_MOC_LITERAL(12, 109, 12), // "visibleLayer"
QT_MOC_LITERAL(13, 122, 10), // "printLayer"
QT_MOC_LITERAL(14, 133, 9), // "lockLayer"
QT_MOC_LITERAL(15, 143, 15), // "flowToggleLayer"
QT_MOC_LITERAL(16, 159, 18), // "outlineToggleLayer"
QT_MOC_LITERAL(17, 178, 17), // "selectToggleLayer"
QT_MOC_LITERAL(18, 196, 19), // "toggleAllfromHeader"
QT_MOC_LITERAL(19, 216, 5), // "index"
QT_MOC_LITERAL(20, 222, 9), // "markLayer"
QT_MOC_LITERAL(21, 232, 13), // "changeOpacity"
QT_MOC_LITERAL(22, 246, 15), // "changeBlendMode"
QT_MOC_LITERAL(23, 262, 5), // "blend"
QT_MOC_LITERAL(24, 268, 14), // "setActiveLayer"
QT_MOC_LITERAL(25, 283, 11), // "ClearInhalt"
QT_MOC_LITERAL(26, 295, 15), // "markActiveLayer"
QT_MOC_LITERAL(27, 311, 7), // "layerID"
QT_MOC_LITERAL(28, 319, 14) // "languageChange"

    },
    "LayerPalette\0LayerChanged\0\0LayerActivated\0"
    "addLayer\0dupLayer\0removeLayer\0upLayer\0"
    "downLayer\0changeName\0row\0col\0visibleLayer\0"
    "printLayer\0lockLayer\0flowToggleLayer\0"
    "outlineToggleLayer\0selectToggleLayer\0"
    "toggleAllfromHeader\0index\0markLayer\0"
    "changeOpacity\0changeBlendMode\0blend\0"
    "setActiveLayer\0ClearInhalt\0markActiveLayer\0"
    "layerID\0languageChange"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LayerPalette[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      23,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  129,    2, 0x06 /* Public */,
       3,    1,  130,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,  133,    2, 0x0a /* Public */,
       5,    0,  134,    2, 0x0a /* Public */,
       6,    0,  135,    2, 0x0a /* Public */,
       7,    0,  136,    2, 0x0a /* Public */,
       8,    0,  137,    2, 0x0a /* Public */,
       9,    2,  138,    2, 0x0a /* Public */,
      12,    0,  143,    2, 0x0a /* Public */,
      13,    0,  144,    2, 0x0a /* Public */,
      14,    0,  145,    2, 0x0a /* Public */,
      15,    0,  146,    2, 0x0a /* Public */,
      16,    0,  147,    2, 0x0a /* Public */,
      17,    0,  148,    2, 0x0a /* Public */,
      18,    1,  149,    2, 0x0a /* Public */,
      20,    0,  152,    2, 0x0a /* Public */,
      21,    0,  153,    2, 0x0a /* Public */,
      22,    1,  154,    2, 0x0a /* Public */,
      24,    2,  157,    2, 0x0a /* Public */,
      25,    0,  162,    2, 0x0a /* Public */,
      26,    1,  163,    2, 0x0a /* Public */,
      26,    0,  166,    2, 0x2a /* Public | MethodCloned */,
      28,    0,  167,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   10,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   19,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   23,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   10,   11,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   27,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void LayerPalette::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        LayerPalette *_t = static_cast<LayerPalette *>(_o);
        switch (_id) {
        case 0: _t->LayerChanged(); break;
        case 1: _t->LayerActivated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->addLayer(); break;
        case 3: _t->dupLayer(); break;
        case 4: _t->removeLayer(); break;
        case 5: _t->upLayer(); break;
        case 6: _t->downLayer(); break;
        case 7: _t->changeName((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 8: _t->visibleLayer(); break;
        case 9: _t->printLayer(); break;
        case 10: _t->lockLayer(); break;
        case 11: _t->flowToggleLayer(); break;
        case 12: _t->outlineToggleLayer(); break;
        case 13: _t->selectToggleLayer(); break;
        case 14: _t->toggleAllfromHeader((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->markLayer(); break;
        case 16: _t->changeOpacity(); break;
        case 17: _t->changeBlendMode((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 18: _t->setActiveLayer((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 19: _t->ClearInhalt(); break;
        case 20: _t->markActiveLayer((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 21: _t->markActiveLayer(); break;
        case 22: _t->languageChange(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (LayerPalette::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LayerPalette::LayerChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (LayerPalette::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LayerPalette::LayerActivated)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject LayerPalette::staticMetaObject = {
    { &ScDockPalette::staticMetaObject, qt_meta_stringdata_LayerPalette.data,
      qt_meta_data_LayerPalette,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *LayerPalette::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LayerPalette::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_LayerPalette.stringdata))
        return static_cast<void*>(const_cast< LayerPalette*>(this));
    return ScDockPalette::qt_metacast(_clname);
}

int LayerPalette::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ScDockPalette::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 23)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 23;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 23)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 23;
    }
    return _id;
}

// SIGNAL 0
void LayerPalette::LayerChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void LayerPalette::LayerActivated(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
