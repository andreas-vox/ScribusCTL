/****************************************************************************
** Meta object code from reading C++ file 'prefs_externaltools.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../scribus/ui/prefs_externaltools.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'prefs_externaltools.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Prefs_ExternalTools_t {
    QByteArrayData data[15];
    char stringdata[231];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Prefs_ExternalTools_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Prefs_ExternalTools_t qt_meta_stringdata_Prefs_ExternalTools = {
    {
QT_MOC_LITERAL(0, 0, 19), // "Prefs_ExternalTools"
QT_MOC_LITERAL(1, 20, 14), // "languageChange"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 20), // "changePostScriptTool"
QT_MOC_LITERAL(4, 57, 15), // "changeImageTool"
QT_MOC_LITERAL(5, 73, 16), // "changeWebBrowser"
QT_MOC_LITERAL(6, 90, 15), // "changePDFViewer"
QT_MOC_LITERAL(7, 106, 18), // "changeUniconvertor"
QT_MOC_LITERAL(8, 125, 17), // "changeLatexEditor"
QT_MOC_LITERAL(9, 143, 14), // "rescanForTools"
QT_MOC_LITERAL(10, 158, 15), // "upButtonPressed"
QT_MOC_LITERAL(11, 174, 17), // "downButtonPressed"
QT_MOC_LITERAL(12, 192, 9), // "addConfig"
QT_MOC_LITERAL(13, 202, 12), // "deleteConfig"
QT_MOC_LITERAL(14, 215, 15) // "changeLatexPath"

    },
    "Prefs_ExternalTools\0languageChange\0\0"
    "changePostScriptTool\0changeImageTool\0"
    "changeWebBrowser\0changePDFViewer\0"
    "changeUniconvertor\0changeLatexEditor\0"
    "rescanForTools\0upButtonPressed\0"
    "downButtonPressed\0addConfig\0deleteConfig\0"
    "changeLatexPath"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Prefs_ExternalTools[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x0a /* Public */,
       3,    0,   80,    2, 0x09 /* Protected */,
       4,    0,   81,    2, 0x09 /* Protected */,
       5,    0,   82,    2, 0x09 /* Protected */,
       6,    0,   83,    2, 0x09 /* Protected */,
       7,    0,   84,    2, 0x09 /* Protected */,
       8,    0,   85,    2, 0x09 /* Protected */,
       9,    0,   86,    2, 0x09 /* Protected */,
      10,    0,   87,    2, 0x09 /* Protected */,
      11,    0,   88,    2, 0x09 /* Protected */,
      12,    0,   89,    2, 0x09 /* Protected */,
      13,    0,   90,    2, 0x09 /* Protected */,
      14,    0,   91,    2, 0x09 /* Protected */,

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
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Prefs_ExternalTools::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Prefs_ExternalTools *_t = static_cast<Prefs_ExternalTools *>(_o);
        switch (_id) {
        case 0: _t->languageChange(); break;
        case 1: _t->changePostScriptTool(); break;
        case 2: _t->changeImageTool(); break;
        case 3: _t->changeWebBrowser(); break;
        case 4: _t->changePDFViewer(); break;
        case 5: _t->changeUniconvertor(); break;
        case 6: _t->changeLatexEditor(); break;
        case 7: _t->rescanForTools(); break;
        case 8: _t->upButtonPressed(); break;
        case 9: _t->downButtonPressed(); break;
        case 10: _t->addConfig(); break;
        case 11: _t->deleteConfig(); break;
        case 12: _t->changeLatexPath(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject Prefs_ExternalTools::staticMetaObject = {
    { &Prefs_Pane::staticMetaObject, qt_meta_stringdata_Prefs_ExternalTools.data,
      qt_meta_data_Prefs_ExternalTools,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Prefs_ExternalTools::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Prefs_ExternalTools::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Prefs_ExternalTools.stringdata))
        return static_cast<void*>(const_cast< Prefs_ExternalTools*>(this));
    if (!strcmp(_clname, "Ui::Prefs_ExternalTools"))
        return static_cast< Ui::Prefs_ExternalTools*>(const_cast< Prefs_ExternalTools*>(this));
    return Prefs_Pane::qt_metacast(_clname);
}

int Prefs_ExternalTools::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Prefs_Pane::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
