/****************************************************************************
** Meta object code from reading C++ file 'prefs_documentsections.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../scribus/ui/prefs_documentsections.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'prefs_documentsections.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Prefs_DocumentSections_t {
    QByteArrayData data[6];
    char stringdata[77];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Prefs_DocumentSections_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Prefs_DocumentSections_t qt_meta_stringdata_Prefs_DocumentSections = {
    {
QT_MOC_LITERAL(0, 0, 22), // "Prefs_DocumentSections"
QT_MOC_LITERAL(1, 23, 14), // "languageChange"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 16), // "tableItemChanged"
QT_MOC_LITERAL(4, 56, 8), // "addEntry"
QT_MOC_LITERAL(5, 65, 11) // "deleteEntry"

    },
    "Prefs_DocumentSections\0languageChange\0"
    "\0tableItemChanged\0addEntry\0deleteEntry"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Prefs_DocumentSections[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x0a /* Public */,
       3,    2,   35,    2, 0x09 /* Protected */,
       4,    0,   40,    2, 0x09 /* Protected */,
       5,    0,   41,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Prefs_DocumentSections::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Prefs_DocumentSections *_t = static_cast<Prefs_DocumentSections *>(_o);
        switch (_id) {
        case 0: _t->languageChange(); break;
        case 1: _t->tableItemChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->addEntry(); break;
        case 3: _t->deleteEntry(); break;
        default: ;
        }
    }
}

const QMetaObject Prefs_DocumentSections::staticMetaObject = {
    { &Prefs_Pane::staticMetaObject, qt_meta_stringdata_Prefs_DocumentSections.data,
      qt_meta_data_Prefs_DocumentSections,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Prefs_DocumentSections::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Prefs_DocumentSections::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Prefs_DocumentSections.stringdata))
        return static_cast<void*>(const_cast< Prefs_DocumentSections*>(this));
    if (!strcmp(_clname, "Ui::Prefs_DocumentSections"))
        return static_cast< Ui::Prefs_DocumentSections*>(const_cast< Prefs_DocumentSections*>(this));
    return Prefs_Pane::qt_metacast(_clname);
}

int Prefs_DocumentSections::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Prefs_Pane::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
