/****************************************************************************
** Meta object code from reading C++ file 'prefs_hyphenator.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../scribus/ui/prefs_hyphenator.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'prefs_hyphenator.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Prefs_Hyphenator_t {
    QByteArrayData data[11];
    char stringdata[189];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Prefs_Hyphenator_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Prefs_Hyphenator_t qt_meta_stringdata_Prefs_Hyphenator = {
    {
QT_MOC_LITERAL(0, 0, 16), // "Prefs_Hyphenator"
QT_MOC_LITERAL(1, 17, 14), // "languageChange"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 15), // "addToIgnoreList"
QT_MOC_LITERAL(4, 49, 19), // "editIgnoreListEntry"
QT_MOC_LITERAL(5, 69, 21), // "removeIgnoreListEntry"
QT_MOC_LITERAL(6, 91, 19), // "enableIgnoreButtons"
QT_MOC_LITERAL(7, 111, 15), // "addToExceptList"
QT_MOC_LITERAL(8, 127, 19), // "editExceptListEntry"
QT_MOC_LITERAL(9, 147, 21), // "removeExceptListEntry"
QT_MOC_LITERAL(10, 169, 19) // "enableExceptButtons"

    },
    "Prefs_Hyphenator\0languageChange\0\0"
    "addToIgnoreList\0editIgnoreListEntry\0"
    "removeIgnoreListEntry\0enableIgnoreButtons\0"
    "addToExceptList\0editExceptListEntry\0"
    "removeExceptListEntry\0enableExceptButtons"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Prefs_Hyphenator[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x0a /* Public */,
       3,    0,   60,    2, 0x09 /* Protected */,
       4,    0,   61,    2, 0x09 /* Protected */,
       5,    0,   62,    2, 0x09 /* Protected */,
       6,    0,   63,    2, 0x09 /* Protected */,
       7,    0,   64,    2, 0x09 /* Protected */,
       8,    0,   65,    2, 0x09 /* Protected */,
       9,    0,   66,    2, 0x09 /* Protected */,
      10,    0,   67,    2, 0x09 /* Protected */,

 // slots: parameters
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

void Prefs_Hyphenator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Prefs_Hyphenator *_t = static_cast<Prefs_Hyphenator *>(_o);
        switch (_id) {
        case 0: _t->languageChange(); break;
        case 1: _t->addToIgnoreList(); break;
        case 2: _t->editIgnoreListEntry(); break;
        case 3: _t->removeIgnoreListEntry(); break;
        case 4: _t->enableIgnoreButtons(); break;
        case 5: _t->addToExceptList(); break;
        case 6: _t->editExceptListEntry(); break;
        case 7: _t->removeExceptListEntry(); break;
        case 8: _t->enableExceptButtons(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject Prefs_Hyphenator::staticMetaObject = {
    { &Prefs_Pane::staticMetaObject, qt_meta_stringdata_Prefs_Hyphenator.data,
      qt_meta_data_Prefs_Hyphenator,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Prefs_Hyphenator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Prefs_Hyphenator::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Prefs_Hyphenator.stringdata))
        return static_cast<void*>(const_cast< Prefs_Hyphenator*>(this));
    if (!strcmp(_clname, "Ui::Prefs_Hyphenator"))
        return static_cast< Ui::Prefs_Hyphenator*>(const_cast< Prefs_Hyphenator*>(this));
    return Prefs_Pane::qt_metacast(_clname);
}

int Prefs_Hyphenator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Prefs_Pane::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
