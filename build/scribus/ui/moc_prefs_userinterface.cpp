/****************************************************************************
** Meta object code from reading C++ file 'prefs_userinterface.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../scribus/ui/prefs_userinterface.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'prefs_userinterface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Prefs_UserInterface_t {
    QByteArrayData data[7];
    char stringdata[112];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Prefs_UserInterface_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Prefs_UserInterface_t qt_meta_stringdata_Prefs_UserInterface = {
    {
QT_MOC_LITERAL(0, 0, 19), // "Prefs_UserInterface"
QT_MOC_LITERAL(1, 20, 14), // "languageChange"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 18), // "setSelectedGUILang"
QT_MOC_LITERAL(4, 55, 7), // "newLang"
QT_MOC_LITERAL(5, 63, 21), // "changeStoryEditorFont"
QT_MOC_LITERAL(6, 85, 26) // "changeStoryEditorFontColor"

    },
    "Prefs_UserInterface\0languageChange\0\0"
    "setSelectedGUILang\0newLang\0"
    "changeStoryEditorFont\0changeStoryEditorFontColor"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Prefs_UserInterface[] = {

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
       3,    1,   35,    2, 0x08 /* Private */,
       5,    0,   38,    2, 0x08 /* Private */,
       6,    0,   39,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Prefs_UserInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Prefs_UserInterface *_t = static_cast<Prefs_UserInterface *>(_o);
        switch (_id) {
        case 0: _t->languageChange(); break;
        case 1: _t->setSelectedGUILang((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->changeStoryEditorFont(); break;
        case 3: _t->changeStoryEditorFontColor(); break;
        default: ;
        }
    }
}

const QMetaObject Prefs_UserInterface::staticMetaObject = {
    { &Prefs_Pane::staticMetaObject, qt_meta_stringdata_Prefs_UserInterface.data,
      qt_meta_data_Prefs_UserInterface,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Prefs_UserInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Prefs_UserInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Prefs_UserInterface.stringdata))
        return static_cast<void*>(const_cast< Prefs_UserInterface*>(this));
    if (!strcmp(_clname, "Ui::Prefs_UserInterface"))
        return static_cast< Ui::Prefs_UserInterface*>(const_cast< Prefs_UserInterface*>(this));
    return Prefs_Pane::qt_metacast(_clname);
}

int Prefs_UserInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
