/****************************************************************************
** Meta object code from reading C++ file 'prefs_documentitemattributes.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../scribus/ui/prefs_documentitemattributes.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'prefs_documentitemattributes.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Prefs_DocumentItemAttributes_t {
    QByteArrayData data[11];
    char stringdata[136];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Prefs_DocumentItemAttributes_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Prefs_DocumentItemAttributes_t qt_meta_stringdata_Prefs_DocumentItemAttributes = {
    {
QT_MOC_LITERAL(0, 0, 28), // "Prefs_DocumentItemAttributes"
QT_MOC_LITERAL(1, 29, 14), // "languageChange"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 21), // "getDocAttributesNames"
QT_MOC_LITERAL(4, 67, 16), // "tableItemChanged"
QT_MOC_LITERAL(5, 84, 3), // "row"
QT_MOC_LITERAL(6, 88, 3), // "col"
QT_MOC_LITERAL(7, 92, 8), // "addEntry"
QT_MOC_LITERAL(8, 101, 11), // "deleteEntry"
QT_MOC_LITERAL(9, 113, 12), // "clearEntries"
QT_MOC_LITERAL(10, 126, 9) // "copyEntry"

    },
    "Prefs_DocumentItemAttributes\0"
    "languageChange\0\0getDocAttributesNames\0"
    "tableItemChanged\0row\0col\0addEntry\0"
    "deleteEntry\0clearEntries\0copyEntry"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Prefs_DocumentItemAttributes[] = {

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
       3,    0,   50,    2, 0x0a /* Public */,
       4,    2,   51,    2, 0x09 /* Protected */,
       7,    0,   56,    2, 0x09 /* Protected */,
       8,    0,   57,    2, 0x09 /* Protected */,
       9,    0,   58,    2, 0x09 /* Protected */,
      10,    0,   59,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::QStringList,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    5,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Prefs_DocumentItemAttributes::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Prefs_DocumentItemAttributes *_t = static_cast<Prefs_DocumentItemAttributes *>(_o);
        switch (_id) {
        case 0: _t->languageChange(); break;
        case 1: { QStringList _r = _t->getDocAttributesNames();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 2: _t->tableItemChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->addEntry(); break;
        case 4: _t->deleteEntry(); break;
        case 5: _t->clearEntries(); break;
        case 6: _t->copyEntry(); break;
        default: ;
        }
    }
}

const QMetaObject Prefs_DocumentItemAttributes::staticMetaObject = {
    { &Prefs_Pane::staticMetaObject, qt_meta_stringdata_Prefs_DocumentItemAttributes.data,
      qt_meta_data_Prefs_DocumentItemAttributes,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Prefs_DocumentItemAttributes::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Prefs_DocumentItemAttributes::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Prefs_DocumentItemAttributes.stringdata))
        return static_cast<void*>(const_cast< Prefs_DocumentItemAttributes*>(this));
    if (!strcmp(_clname, "Ui::Prefs_DocumentItemAttributes"))
        return static_cast< Ui::Prefs_DocumentItemAttributes*>(const_cast< Prefs_DocumentItemAttributes*>(this));
    return Prefs_Pane::qt_metacast(_clname);
}

int Prefs_DocumentItemAttributes::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
