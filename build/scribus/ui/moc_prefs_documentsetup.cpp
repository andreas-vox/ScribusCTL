/****************************************************************************
** Meta object code from reading C++ file 'prefs_documentsetup.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../scribus/ui/prefs_documentsetup.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'prefs_documentsetup.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Prefs_DocumentSetup_t {
    QByteArrayData data[16];
    char stringdata[204];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Prefs_DocumentSetup_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Prefs_DocumentSetup_t qt_meta_stringdata_Prefs_DocumentSetup = {
    {
QT_MOC_LITERAL(0, 0, 19), // "Prefs_DocumentSetup"
QT_MOC_LITERAL(1, 20, 20), // "changeToOtherSection"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 16), // "prefsChangeUnits"
QT_MOC_LITERAL(4, 59, 4), // "unit"
QT_MOC_LITERAL(5, 64, 14), // "languageChange"
QT_MOC_LITERAL(6, 79, 17), // "pageLayoutChanged"
QT_MOC_LITERAL(7, 97, 12), // "setPageWidth"
QT_MOC_LITERAL(8, 110, 13), // "setPageHeight"
QT_MOC_LITERAL(9, 124, 18), // "setPageOrientation"
QT_MOC_LITERAL(10, 143, 7), // "setSize"
QT_MOC_LITERAL(11, 151, 2), // "gr"
QT_MOC_LITERAL(12, 154, 11), // "setPageSize"
QT_MOC_LITERAL(13, 166, 8), // "slotUndo"
QT_MOC_LITERAL(14, 175, 10), // "unitChange"
QT_MOC_LITERAL(15, 186, 17) // "emitSectionChange"

    },
    "Prefs_DocumentSetup\0changeToOtherSection\0"
    "\0prefsChangeUnits\0unit\0languageChange\0"
    "pageLayoutChanged\0setPageWidth\0"
    "setPageHeight\0setPageOrientation\0"
    "setSize\0gr\0setPageSize\0slotUndo\0"
    "unitChange\0emitSectionChange"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Prefs_DocumentSetup[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x06 /* Public */,
       3,    1,   77,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   80,    2, 0x0a /* Public */,
       6,    1,   81,    2, 0x0a /* Public */,
       7,    1,   84,    2, 0x09 /* Protected */,
       8,    1,   87,    2, 0x09 /* Protected */,
       9,    1,   90,    2, 0x09 /* Protected */,
      10,    1,   93,    2, 0x09 /* Protected */,
      12,    0,   96,    2, 0x09 /* Protected */,
      13,    1,   97,    2, 0x09 /* Protected */,
      14,    0,  100,    2, 0x09 /* Protected */,
      15,    0,  101,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Int,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Prefs_DocumentSetup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Prefs_DocumentSetup *_t = static_cast<Prefs_DocumentSetup *>(_o);
        switch (_id) {
        case 0: _t->changeToOtherSection((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->prefsChangeUnits((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->languageChange(); break;
        case 3: _t->pageLayoutChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->setPageWidth((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 5: _t->setPageHeight((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 6: _t->setPageOrientation((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->setSize((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->setPageSize(); break;
        case 9: _t->slotUndo((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->unitChange(); break;
        case 11: _t->emitSectionChange(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Prefs_DocumentSetup::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Prefs_DocumentSetup::changeToOtherSection)) {
                *result = 0;
            }
        }
        {
            typedef void (Prefs_DocumentSetup::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Prefs_DocumentSetup::prefsChangeUnits)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject Prefs_DocumentSetup::staticMetaObject = {
    { &Prefs_Pane::staticMetaObject, qt_meta_stringdata_Prefs_DocumentSetup.data,
      qt_meta_data_Prefs_DocumentSetup,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Prefs_DocumentSetup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Prefs_DocumentSetup::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Prefs_DocumentSetup.stringdata))
        return static_cast<void*>(const_cast< Prefs_DocumentSetup*>(this));
    if (!strcmp(_clname, "Ui::Prefs_DocumentSetup"))
        return static_cast< Ui::Prefs_DocumentSetup*>(const_cast< Prefs_DocumentSetup*>(this));
    return Prefs_Pane::qt_metacast(_clname);
}

int Prefs_DocumentSetup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void Prefs_DocumentSetup::changeToOtherSection(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Prefs_DocumentSetup::prefsChangeUnits(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
