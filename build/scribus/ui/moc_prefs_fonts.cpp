/****************************************************************************
** Meta object code from reading C++ file 'prefs_fonts.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../scribus/ui/prefs_fonts.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'prefs_fonts.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Prefs_Fonts_t {
    QByteArrayData data[12];
    char stringdata[120];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Prefs_Fonts_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Prefs_Fonts_t qt_meta_stringdata_Prefs_Fonts = {
    {
QT_MOC_LITERAL(0, 0, 11), // "Prefs_Fonts"
QT_MOC_LITERAL(1, 12, 14), // "languageChange"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 10), // "ReplaceSel"
QT_MOC_LITERAL(4, 39, 14), // "updateFontList"
QT_MOC_LITERAL(5, 54, 8), // "DelEntry"
QT_MOC_LITERAL(6, 63, 10), // "SelectPath"
QT_MOC_LITERAL(7, 74, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(8, 91, 1), // "c"
QT_MOC_LITERAL(9, 93, 7), // "AddPath"
QT_MOC_LITERAL(10, 101, 10), // "ChangePath"
QT_MOC_LITERAL(11, 112, 7) // "DelPath"

    },
    "Prefs_Fonts\0languageChange\0\0ReplaceSel\0"
    "updateFontList\0DelEntry\0SelectPath\0"
    "QListWidgetItem*\0c\0AddPath\0ChangePath\0"
    "DelPath"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Prefs_Fonts[] = {

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
       3,    0,   55,    2, 0x0a /* Public */,
       4,    0,   56,    2, 0x0a /* Public */,
       5,    0,   57,    2, 0x0a /* Public */,
       6,    1,   58,    2, 0x0a /* Public */,
       9,    0,   61,    2, 0x0a /* Public */,
      10,    0,   62,    2, 0x0a /* Public */,
      11,    0,   63,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Prefs_Fonts::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Prefs_Fonts *_t = static_cast<Prefs_Fonts *>(_o);
        switch (_id) {
        case 0: _t->languageChange(); break;
        case 1: _t->ReplaceSel(); break;
        case 2: _t->updateFontList(); break;
        case 3: _t->DelEntry(); break;
        case 4: _t->SelectPath((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 5: _t->AddPath(); break;
        case 6: _t->ChangePath(); break;
        case 7: _t->DelPath(); break;
        default: ;
        }
    }
}

const QMetaObject Prefs_Fonts::staticMetaObject = {
    { &Prefs_Pane::staticMetaObject, qt_meta_stringdata_Prefs_Fonts.data,
      qt_meta_data_Prefs_Fonts,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Prefs_Fonts::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Prefs_Fonts::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Prefs_Fonts.stringdata))
        return static_cast<void*>(const_cast< Prefs_Fonts*>(this));
    if (!strcmp(_clname, "Ui::Prefs_Fonts"))
        return static_cast< Ui::Prefs_Fonts*>(const_cast< Prefs_Fonts*>(this));
    return Prefs_Pane::qt_metacast(_clname);
}

int Prefs_Fonts::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
