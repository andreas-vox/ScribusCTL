/****************************************************************************
** Meta object code from reading C++ file 'prefs_spelling.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../scribus/ui/prefs_spelling.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'prefs_spelling.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Prefs_Spelling_t {
    QByteArrayData data[9];
    char stringdata[155];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Prefs_Spelling_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Prefs_Spelling_t qt_meta_stringdata_Prefs_Spelling = {
    {
QT_MOC_LITERAL(0, 0, 14), // "Prefs_Spelling"
QT_MOC_LITERAL(1, 15, 14), // "languageChange"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 18), // "downloadSpellDicts"
QT_MOC_LITERAL(4, 50, 14), // "updateDictList"
QT_MOC_LITERAL(5, 65, 19), // "updateAvailDictList"
QT_MOC_LITERAL(6, 85, 24), // "downloadDictListFinished"
QT_MOC_LITERAL(7, 110, 26), // "downloadSpellDictsFinished"
QT_MOC_LITERAL(8, 137, 17) // "updateProgressBar"

    },
    "Prefs_Spelling\0languageChange\0\0"
    "downloadSpellDicts\0updateDictList\0"
    "updateAvailDictList\0downloadDictListFinished\0"
    "downloadSpellDictsFinished\0updateProgressBar"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Prefs_Spelling[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x0a /* Public */,
       3,    0,   50,    2, 0x09 /* Protected */,
       4,    0,   51,    2, 0x09 /* Protected */,
       5,    0,   52,    2, 0x09 /* Protected */,
       6,    0,   53,    2, 0x09 /* Protected */,
       7,    0,   54,    2, 0x09 /* Protected */,
       8,    0,   55,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Prefs_Spelling::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Prefs_Spelling *_t = static_cast<Prefs_Spelling *>(_o);
        switch (_id) {
        case 0: _t->languageChange(); break;
        case 1: _t->downloadSpellDicts(); break;
        case 2: _t->updateDictList(); break;
        case 3: _t->updateAvailDictList(); break;
        case 4: _t->downloadDictListFinished(); break;
        case 5: _t->downloadSpellDictsFinished(); break;
        case 6: _t->updateProgressBar(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject Prefs_Spelling::staticMetaObject = {
    { &Prefs_Pane::staticMetaObject, qt_meta_stringdata_Prefs_Spelling.data,
      qt_meta_data_Prefs_Spelling,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Prefs_Spelling::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Prefs_Spelling::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Prefs_Spelling.stringdata))
        return static_cast<void*>(const_cast< Prefs_Spelling*>(this));
    if (!strcmp(_clname, "Ui::Prefs_Spelling"))
        return static_cast< Ui::Prefs_Spelling*>(const_cast< Prefs_Spelling*>(this));
    return Prefs_Pane::qt_metacast(_clname);
}

int Prefs_Spelling::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Prefs_Pane::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
