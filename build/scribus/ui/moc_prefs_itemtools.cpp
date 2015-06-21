/****************************************************************************
** Meta object code from reading C++ file 'prefs_itemtools.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../scribus/ui/prefs_itemtools.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'prefs_itemtools.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Prefs_ItemTools_t {
    QByteArrayData data[12];
    char stringdata[186];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Prefs_ItemTools_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Prefs_ItemTools_t qt_meta_stringdata_Prefs_ItemTools = {
    {
QT_MOC_LITERAL(0, 0, 15), // "Prefs_ItemTools"
QT_MOC_LITERAL(1, 16, 14), // "languageChange"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 10), // "unitChange"
QT_MOC_LITERAL(4, 43, 8), // "newIndex"
QT_MOC_LITERAL(5, 52, 17), // "enableFontPreview"
QT_MOC_LITERAL(6, 70, 13), // "enableSignals"
QT_MOC_LITERAL(7, 84, 2), // "on"
QT_MOC_LITERAL(8, 87, 17), // "updateFontPreview"
QT_MOC_LITERAL(9, 105, 24), // "toggleImagesScalingChain"
QT_MOC_LITERAL(10, 130, 28), // "imageHorizontalScalingChange"
QT_MOC_LITERAL(11, 159, 26) // "imageVerticalScalingChange"

    },
    "Prefs_ItemTools\0languageChange\0\0"
    "unitChange\0newIndex\0enableFontPreview\0"
    "enableSignals\0on\0updateFontPreview\0"
    "toggleImagesScalingChain\0"
    "imageHorizontalScalingChange\0"
    "imageVerticalScalingChange"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Prefs_ItemTools[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x0a /* Public */,
       3,    1,   55,    2, 0x0a /* Public */,
       5,    1,   58,    2, 0x0a /* Public */,
       6,    1,   61,    2, 0x09 /* Protected */,
       8,    0,   64,    2, 0x09 /* Protected */,
       9,    0,   65,    2, 0x09 /* Protected */,
      10,    0,   66,    2, 0x09 /* Protected */,
      11,    0,   67,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Prefs_ItemTools::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Prefs_ItemTools *_t = static_cast<Prefs_ItemTools *>(_o);
        switch (_id) {
        case 0: _t->languageChange(); break;
        case 1: _t->unitChange((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->enableFontPreview((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->enableSignals((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->updateFontPreview(); break;
        case 5: _t->toggleImagesScalingChain(); break;
        case 6: _t->imageHorizontalScalingChange(); break;
        case 7: _t->imageVerticalScalingChange(); break;
        default: ;
        }
    }
}

const QMetaObject Prefs_ItemTools::staticMetaObject = {
    { &Prefs_Pane::staticMetaObject, qt_meta_stringdata_Prefs_ItemTools.data,
      qt_meta_data_Prefs_ItemTools,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Prefs_ItemTools::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Prefs_ItemTools::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Prefs_ItemTools.stringdata))
        return static_cast<void*>(const_cast< Prefs_ItemTools*>(this));
    if (!strcmp(_clname, "Ui::Prefs_ItemTools"))
        return static_cast< Ui::Prefs_ItemTools*>(const_cast< Prefs_ItemTools*>(this));
    return Prefs_Pane::qt_metacast(_clname);
}

int Prefs_ItemTools::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Prefs_Pane::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
