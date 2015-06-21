/****************************************************************************
** Meta object code from reading C++ file 'propertywidget_pareffect.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../scribus/ui/propertywidget_pareffect.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'propertywidget_pareffect.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_PropertyWidget_ParEffect_t {
    QByteArrayData data[31];
    char stringdata[448];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PropertyWidget_ParEffect_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PropertyWidget_ParEffect_t qt_meta_stringdata_PropertyWidget_ParEffect = {
    {
QT_MOC_LITERAL(0, 0, 24), // "PropertyWidget_ParEffect"
QT_MOC_LITERAL(1, 25, 13), // "setMainWindow"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 18), // "ScribusMainWindow*"
QT_MOC_LITERAL(4, 59, 2), // "mw"
QT_MOC_LITERAL(5, 62, 6), // "setDoc"
QT_MOC_LITERAL(6, 69, 11), // "ScribusDoc*"
QT_MOC_LITERAL(7, 81, 3), // "doc"
QT_MOC_LITERAL(8, 85, 20), // "handleAppModeChanged"
QT_MOC_LITERAL(9, 106, 7), // "oldMode"
QT_MOC_LITERAL(10, 114, 4), // "mode"
QT_MOC_LITERAL(11, 119, 22), // "handleSelectionChanged"
QT_MOC_LITERAL(12, 142, 19), // "handleUpdateRequest"
QT_MOC_LITERAL(13, 162, 14), // "languageChange"
QT_MOC_LITERAL(14, 177, 10), // "unitChange"
QT_MOC_LITERAL(15, 188, 18), // "handleParEffectUse"
QT_MOC_LITERAL(16, 207, 15), // "handleBulletStr"
QT_MOC_LITERAL(17, 223, 18), // "handleDropCapLines"
QT_MOC_LITERAL(18, 242, 13), // "handleNumName"
QT_MOC_LITERAL(19, 256, 15), // "handleNumFormat"
QT_MOC_LITERAL(20, 272, 14), // "handleNumLevel"
QT_MOC_LITERAL(21, 287, 15), // "handleNumPrefix"
QT_MOC_LITERAL(22, 303, 15), // "handleNumSuffix"
QT_MOC_LITERAL(23, 319, 14), // "handleNumStart"
QT_MOC_LITERAL(24, 334, 14), // "handlePEOffset"
QT_MOC_LITERAL(25, 349, 14), // "handlePEIndent"
QT_MOC_LITERAL(26, 364, 17), // "handlePECharStyle"
QT_MOC_LITERAL(27, 382, 32), // "on_bulletCharTableButton_toggled"
QT_MOC_LITERAL(28, 415, 7), // "checked"
QT_MOC_LITERAL(29, 423, 18), // "insertSpecialChars"
QT_MOC_LITERAL(30, 442, 5) // "chars"

    },
    "PropertyWidget_ParEffect\0setMainWindow\0"
    "\0ScribusMainWindow*\0mw\0setDoc\0ScribusDoc*\0"
    "doc\0handleAppModeChanged\0oldMode\0mode\0"
    "handleSelectionChanged\0handleUpdateRequest\0"
    "languageChange\0unitChange\0handleParEffectUse\0"
    "handleBulletStr\0handleDropCapLines\0"
    "handleNumName\0handleNumFormat\0"
    "handleNumLevel\0handleNumPrefix\0"
    "handleNumSuffix\0handleNumStart\0"
    "handlePEOffset\0handlePEIndent\0"
    "handlePECharStyle\0on_bulletCharTableButton_toggled\0"
    "checked\0insertSpecialChars\0chars"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PropertyWidget_ParEffect[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      21,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,  119,    2, 0x0a /* Public */,
       5,    1,  122,    2, 0x0a /* Public */,
       8,    2,  125,    2, 0x0a /* Public */,
      11,    0,  130,    2, 0x0a /* Public */,
      12,    1,  131,    2, 0x0a /* Public */,
      13,    0,  134,    2, 0x0a /* Public */,
      14,    0,  135,    2, 0x0a /* Public */,
      15,    0,  136,    2, 0x0a /* Public */,
      16,    1,  137,    2, 0x0a /* Public */,
      17,    1,  140,    2, 0x0a /* Public */,
      18,    1,  143,    2, 0x0a /* Public */,
      19,    1,  146,    2, 0x0a /* Public */,
      20,    1,  149,    2, 0x0a /* Public */,
      21,    1,  152,    2, 0x0a /* Public */,
      22,    1,  155,    2, 0x0a /* Public */,
      23,    1,  158,    2, 0x0a /* Public */,
      24,    1,  161,    2, 0x0a /* Public */,
      25,    1,  164,    2, 0x0a /* Public */,
      26,    1,  167,    2, 0x0a /* Public */,
      27,    1,  170,    2, 0x08 /* Private */,
      29,    1,  173,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    9,   10,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Bool,   28,
    QMetaType::Void, QMetaType::QString,   30,

       0        // eod
};

void PropertyWidget_ParEffect::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PropertyWidget_ParEffect *_t = static_cast<PropertyWidget_ParEffect *>(_o);
        switch (_id) {
        case 0: _t->setMainWindow((*reinterpret_cast< ScribusMainWindow*(*)>(_a[1]))); break;
        case 1: _t->setDoc((*reinterpret_cast< ScribusDoc*(*)>(_a[1]))); break;
        case 2: _t->handleAppModeChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->handleSelectionChanged(); break;
        case 4: _t->handleUpdateRequest((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->languageChange(); break;
        case 6: _t->unitChange(); break;
        case 7: _t->handleParEffectUse(); break;
        case 8: _t->handleBulletStr((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 9: _t->handleDropCapLines((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->handleNumName((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 11: _t->handleNumFormat((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->handleNumLevel((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->handleNumPrefix((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 14: _t->handleNumSuffix((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 15: _t->handleNumStart((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->handlePEOffset((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 17: _t->handlePEIndent((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 18: _t->handlePECharStyle((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 19: _t->on_bulletCharTableButton_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 20: _t->insertSpecialChars((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject PropertyWidget_ParEffect::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_PropertyWidget_ParEffect.data,
      qt_meta_data_PropertyWidget_ParEffect,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PropertyWidget_ParEffect::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PropertyWidget_ParEffect::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PropertyWidget_ParEffect.stringdata))
        return static_cast<void*>(const_cast< PropertyWidget_ParEffect*>(this));
    if (!strcmp(_clname, "PropertyWidgetBase"))
        return static_cast< PropertyWidgetBase*>(const_cast< PropertyWidget_ParEffect*>(this));
    return QFrame::qt_metacast(_clname);
}

int PropertyWidget_ParEffect::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 21)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 21)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 21;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
