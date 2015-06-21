/****************************************************************************
** Meta object code from reading C++ file 'prefs_preflightverifier.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../scribus/ui/prefs_preflightverifier.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'prefs_preflightverifier.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Prefs_PreflightVerifier_t {
    QByteArrayData data[8];
    char stringdata[83];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Prefs_PreflightVerifier_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Prefs_PreflightVerifier_t qt_meta_stringdata_Prefs_PreflightVerifier = {
    {
QT_MOC_LITERAL(0, 0, 23), // "Prefs_PreflightVerifier"
QT_MOC_LITERAL(1, 24, 14), // "languageChange"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 10), // "putProfile"
QT_MOC_LITERAL(4, 51, 10), // "setProfile"
QT_MOC_LITERAL(5, 62, 4), // "name"
QT_MOC_LITERAL(6, 67, 7), // "addProf"
QT_MOC_LITERAL(7, 75, 7) // "delProf"

    },
    "Prefs_PreflightVerifier\0languageChange\0"
    "\0putProfile\0setProfile\0name\0addProf\0"
    "delProf"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Prefs_PreflightVerifier[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x0a /* Public */,
       3,    0,   40,    2, 0x09 /* Protected */,
       4,    1,   41,    2, 0x09 /* Protected */,
       6,    0,   44,    2, 0x09 /* Protected */,
       7,    0,   45,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Prefs_PreflightVerifier::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Prefs_PreflightVerifier *_t = static_cast<Prefs_PreflightVerifier *>(_o);
        switch (_id) {
        case 0: _t->languageChange(); break;
        case 1: _t->putProfile(); break;
        case 2: _t->setProfile((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->addProf(); break;
        case 4: _t->delProf(); break;
        default: ;
        }
    }
}

const QMetaObject Prefs_PreflightVerifier::staticMetaObject = {
    { &Prefs_Pane::staticMetaObject, qt_meta_stringdata_Prefs_PreflightVerifier.data,
      qt_meta_data_Prefs_PreflightVerifier,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Prefs_PreflightVerifier::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Prefs_PreflightVerifier::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Prefs_PreflightVerifier.stringdata))
        return static_cast<void*>(const_cast< Prefs_PreflightVerifier*>(this));
    if (!strcmp(_clname, "Ui::Prefs_PreflightVerifier"))
        return static_cast< Ui::Prefs_PreflightVerifier*>(const_cast< Prefs_PreflightVerifier*>(this));
    return Prefs_Pane::qt_metacast(_clname);
}

int Prefs_PreflightVerifier::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Prefs_Pane::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
