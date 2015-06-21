/****************************************************************************
** Meta object code from reading C++ file 'prefs_keyboardshortcuts.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../scribus/ui/prefs_keyboardshortcuts.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'prefs_keyboardshortcuts.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Prefs_KeyboardShortcuts_t {
    QByteArrayData data[16];
    char stringdata[199];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Prefs_KeyboardShortcuts_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Prefs_KeyboardShortcuts_t qt_meta_stringdata_Prefs_KeyboardShortcuts = {
    {
QT_MOC_LITERAL(0, 0, 23), // "Prefs_KeyboardShortcuts"
QT_MOC_LITERAL(1, 24, 14), // "languageChange"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 10), // "setKeyText"
QT_MOC_LITERAL(4, 51, 7), // "dispKey"
QT_MOC_LITERAL(5, 59, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(6, 76, 7), // "current"
QT_MOC_LITERAL(7, 84, 8), // "previous"
QT_MOC_LITERAL(8, 93, 8), // "setNoKey"
QT_MOC_LITERAL(9, 102, 14), // "loadKeySetFile"
QT_MOC_LITERAL(10, 117, 16), // "importKeySetFile"
QT_MOC_LITERAL(11, 134, 16), // "exportKeySetFile"
QT_MOC_LITERAL(12, 151, 11), // "resetKeySet"
QT_MOC_LITERAL(13, 163, 17), // "clearSearchString"
QT_MOC_LITERAL(14, 181, 11), // "applySearch"
QT_MOC_LITERAL(15, 193, 5) // "newss"

    },
    "Prefs_KeyboardShortcuts\0languageChange\0"
    "\0setKeyText\0dispKey\0QTreeWidgetItem*\0"
    "current\0previous\0setNoKey\0loadKeySetFile\0"
    "importKeySetFile\0exportKeySetFile\0"
    "resetKeySet\0clearSearchString\0applySearch\0"
    "newss"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Prefs_KeyboardShortcuts[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x0a /* Public */,
       3,    0,   70,    2, 0x09 /* Protected */,
       4,    2,   71,    2, 0x09 /* Protected */,
       4,    1,   76,    2, 0x29 /* Protected | MethodCloned */,
       8,    0,   79,    2, 0x09 /* Protected */,
       9,    0,   80,    2, 0x09 /* Protected */,
      10,    0,   81,    2, 0x09 /* Protected */,
      11,    0,   82,    2, 0x09 /* Protected */,
      12,    0,   83,    2, 0x09 /* Protected */,
      13,    0,   84,    2, 0x09 /* Protected */,
      14,    1,   85,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5, 0x80000000 | 5,    6,    7,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   15,

       0        // eod
};

void Prefs_KeyboardShortcuts::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Prefs_KeyboardShortcuts *_t = static_cast<Prefs_KeyboardShortcuts *>(_o);
        switch (_id) {
        case 0: _t->languageChange(); break;
        case 1: _t->setKeyText(); break;
        case 2: _t->dispKey((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QTreeWidgetItem*(*)>(_a[2]))); break;
        case 3: _t->dispKey((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 4: _t->setNoKey(); break;
        case 5: _t->loadKeySetFile(); break;
        case 6: _t->importKeySetFile(); break;
        case 7: _t->exportKeySetFile(); break;
        case 8: _t->resetKeySet(); break;
        case 9: _t->clearSearchString(); break;
        case 10: _t->applySearch((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject Prefs_KeyboardShortcuts::staticMetaObject = {
    { &Prefs_Pane::staticMetaObject, qt_meta_stringdata_Prefs_KeyboardShortcuts.data,
      qt_meta_data_Prefs_KeyboardShortcuts,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Prefs_KeyboardShortcuts::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Prefs_KeyboardShortcuts::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Prefs_KeyboardShortcuts.stringdata))
        return static_cast<void*>(const_cast< Prefs_KeyboardShortcuts*>(this));
    if (!strcmp(_clname, "Ui::Prefs_KeyboardShortcuts"))
        return static_cast< Ui::Prefs_KeyboardShortcuts*>(const_cast< Prefs_KeyboardShortcuts*>(this));
    return Prefs_Pane::qt_metacast(_clname);
}

int Prefs_KeyboardShortcuts::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Prefs_Pane::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
