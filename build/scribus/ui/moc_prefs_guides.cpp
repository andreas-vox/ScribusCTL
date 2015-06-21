/****************************************************************************
** Meta object code from reading C++ file 'prefs_guides.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../scribus/ui/prefs_guides.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'prefs_guides.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Prefs_Guides_t {
    QByteArrayData data[16];
    char stringdata[204];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Prefs_Guides_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Prefs_Guides_t qt_meta_stringdata_Prefs_Guides = {
    {
QT_MOC_LITERAL(0, 0, 12), // "Prefs_Guides"
QT_MOC_LITERAL(1, 13, 14), // "languageChange"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 10), // "unitChange"
QT_MOC_LITERAL(4, 40, 16), // "changeMajorColor"
QT_MOC_LITERAL(5, 57, 16), // "changeMinorColor"
QT_MOC_LITERAL(6, 74, 19), // "changeBaselineColor"
QT_MOC_LITERAL(7, 94, 16), // "changeGuideColor"
QT_MOC_LITERAL(8, 111, 17), // "changeMarginColor"
QT_MOC_LITERAL(9, 129, 17), // "changeRenderStack"
QT_MOC_LITERAL(10, 147, 6), // "moveUp"
QT_MOC_LITERAL(11, 154, 8), // "moveDown"
QT_MOC_LITERAL(12, 163, 6), // "select"
QT_MOC_LITERAL(13, 170, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(14, 187, 4), // "item"
QT_MOC_LITERAL(15, 192, 11) // "gridClicked"

    },
    "Prefs_Guides\0languageChange\0\0unitChange\0"
    "changeMajorColor\0changeMinorColor\0"
    "changeBaselineColor\0changeGuideColor\0"
    "changeMarginColor\0changeRenderStack\0"
    "moveUp\0moveDown\0select\0QListWidgetItem*\0"
    "item\0gridClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Prefs_Guides[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x0a /* Public */,
       3,    1,   75,    2, 0x0a /* Public */,
       4,    0,   78,    2, 0x09 /* Protected */,
       5,    0,   79,    2, 0x09 /* Protected */,
       6,    0,   80,    2, 0x09 /* Protected */,
       7,    0,   81,    2, 0x09 /* Protected */,
       8,    0,   82,    2, 0x09 /* Protected */,
       9,    0,   83,    2, 0x09 /* Protected */,
      10,    0,   84,    2, 0x09 /* Protected */,
      11,    0,   85,    2, 0x09 /* Protected */,
      12,    1,   86,    2, 0x09 /* Protected */,
      15,    0,   89,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void,

       0        // eod
};

void Prefs_Guides::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Prefs_Guides *_t = static_cast<Prefs_Guides *>(_o);
        switch (_id) {
        case 0: _t->languageChange(); break;
        case 1: _t->unitChange((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->changeMajorColor(); break;
        case 3: _t->changeMinorColor(); break;
        case 4: _t->changeBaselineColor(); break;
        case 5: _t->changeGuideColor(); break;
        case 6: _t->changeMarginColor(); break;
        case 7: _t->changeRenderStack(); break;
        case 8: _t->moveUp(); break;
        case 9: _t->moveDown(); break;
        case 10: _t->select((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 11: _t->gridClicked(); break;
        default: ;
        }
    }
}

const QMetaObject Prefs_Guides::staticMetaObject = {
    { &Prefs_Pane::staticMetaObject, qt_meta_stringdata_Prefs_Guides.data,
      qt_meta_data_Prefs_Guides,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Prefs_Guides::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Prefs_Guides::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Prefs_Guides.stringdata))
        return static_cast<void*>(const_cast< Prefs_Guides*>(this));
    if (!strcmp(_clname, "Ui::Prefs_Guides"))
        return static_cast< Ui::Prefs_Guides*>(const_cast< Prefs_Guides*>(this));
    return Prefs_Pane::qt_metacast(_clname);
}

int Prefs_Guides::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Prefs_Pane::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
