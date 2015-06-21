/****************************************************************************
** Meta object code from reading C++ file 'prefs_display.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../scribus/ui/prefs_display.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'prefs_display.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Prefs_Display_t {
    QByteArrayData data[18];
    char stringdata[296];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Prefs_Display_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Prefs_Display_t qt_meta_stringdata_Prefs_Display = {
    {
QT_MOC_LITERAL(0, 0, 13), // "Prefs_Display"
QT_MOC_LITERAL(1, 14, 14), // "languageChange"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 10), // "unitChange"
QT_MOC_LITERAL(4, 41, 9), // "unitIndex"
QT_MOC_LITERAL(5, 51, 9), // "drawRuler"
QT_MOC_LITERAL(6, 61, 15), // "restoreDisScale"
QT_MOC_LITERAL(7, 77, 11), // "setDisScale"
QT_MOC_LITERAL(8, 89, 16), // "changePaperColor"
QT_MOC_LITERAL(9, 106, 18), // "changeScratchColor"
QT_MOC_LITERAL(10, 125, 16), // "changeFrameColor"
QT_MOC_LITERAL(11, 142, 20), // "changeNormFrameColor"
QT_MOC_LITERAL(12, 163, 21), // "changeGroupFrameColor"
QT_MOC_LITERAL(13, 185, 21), // "changeChainFrameColor"
QT_MOC_LITERAL(14, 207, 20), // "changeLockFrameColor"
QT_MOC_LITERAL(15, 228, 21), // "changeAnnotFrameColor"
QT_MOC_LITERAL(16, 250, 21), // "changePageBorderColor"
QT_MOC_LITERAL(17, 272, 23) // "changeControlCharsColor"

    },
    "Prefs_Display\0languageChange\0\0unitChange\0"
    "unitIndex\0drawRuler\0restoreDisScale\0"
    "setDisScale\0changePaperColor\0"
    "changeScratchColor\0changeFrameColor\0"
    "changeNormFrameColor\0changeGroupFrameColor\0"
    "changeChainFrameColor\0changeLockFrameColor\0"
    "changeAnnotFrameColor\0changePageBorderColor\0"
    "changeControlCharsColor"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Prefs_Display[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   89,    2, 0x0a /* Public */,
       3,    1,   90,    2, 0x0a /* Public */,
       5,    0,   93,    2, 0x09 /* Protected */,
       6,    0,   94,    2, 0x09 /* Protected */,
       7,    0,   95,    2, 0x09 /* Protected */,
       8,    0,   96,    2, 0x09 /* Protected */,
       9,    0,   97,    2, 0x09 /* Protected */,
      10,    0,   98,    2, 0x09 /* Protected */,
      11,    0,   99,    2, 0x09 /* Protected */,
      12,    0,  100,    2, 0x09 /* Protected */,
      13,    0,  101,    2, 0x09 /* Protected */,
      14,    0,  102,    2, 0x09 /* Protected */,
      15,    0,  103,    2, 0x09 /* Protected */,
      16,    0,  104,    2, 0x09 /* Protected */,
      17,    0,  105,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Prefs_Display::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Prefs_Display *_t = static_cast<Prefs_Display *>(_o);
        switch (_id) {
        case 0: _t->languageChange(); break;
        case 1: _t->unitChange((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->drawRuler(); break;
        case 3: _t->restoreDisScale(); break;
        case 4: _t->setDisScale(); break;
        case 5: _t->changePaperColor(); break;
        case 6: _t->changeScratchColor(); break;
        case 7: _t->changeFrameColor(); break;
        case 8: _t->changeNormFrameColor(); break;
        case 9: _t->changeGroupFrameColor(); break;
        case 10: _t->changeChainFrameColor(); break;
        case 11: _t->changeLockFrameColor(); break;
        case 12: _t->changeAnnotFrameColor(); break;
        case 13: _t->changePageBorderColor(); break;
        case 14: _t->changeControlCharsColor(); break;
        default: ;
        }
    }
}

const QMetaObject Prefs_Display::staticMetaObject = {
    { &Prefs_Pane::staticMetaObject, qt_meta_stringdata_Prefs_Display.data,
      qt_meta_data_Prefs_Display,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Prefs_Display::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Prefs_Display::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Prefs_Display.stringdata))
        return static_cast<void*>(const_cast< Prefs_Display*>(this));
    if (!strcmp(_clname, "Ui::Prefs_Display"))
        return static_cast< Ui::Prefs_Display*>(const_cast< Prefs_Display*>(this));
    return Prefs_Pane::qt_metacast(_clname);
}

int Prefs_Display::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Prefs_Pane::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
