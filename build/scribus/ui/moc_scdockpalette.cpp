/****************************************************************************
** Meta object code from reading C++ file 'scdockpalette.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../scribus/ui/scdockpalette.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'scdockpalette.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ScDockPalette_t {
    QByteArrayData data[5];
    char stringdata[56];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ScDockPalette_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ScDockPalette_t qt_meta_stringdata_ScDockPalette = {
    {
QT_MOC_LITERAL(0, 0, 13), // "ScDockPalette"
QT_MOC_LITERAL(1, 14, 12), // "paletteShown"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 15), // "setPaletteShown"
QT_MOC_LITERAL(4, 44, 11) // "setFontSize"

    },
    "ScDockPalette\0paletteShown\0\0setPaletteShown\0"
    "setFontSize"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ScDockPalette[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   32,    2, 0x0a /* Public */,
       4,    0,   35,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,

       0        // eod
};

void ScDockPalette::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ScDockPalette *_t = static_cast<ScDockPalette *>(_o);
        switch (_id) {
        case 0: _t->paletteShown((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->setPaletteShown((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->setFontSize(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ScDockPalette::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ScDockPalette::paletteShown)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject ScDockPalette::staticMetaObject = {
    { &QDockWidget::staticMetaObject, qt_meta_stringdata_ScDockPalette.data,
      qt_meta_data_ScDockPalette,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ScDockPalette::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ScDockPalette::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ScDockPalette.stringdata))
        return static_cast<void*>(const_cast< ScDockPalette*>(this));
    return QDockWidget::qt_metacast(_clname);
}

int ScDockPalette::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDockWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void ScDockPalette::paletteShown(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
