/****************************************************************************
** Meta object code from reading C++ file 'effectsdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../scribus/ui/effectsdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'effectsdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_EffectsDialog_t {
    QByteArrayData data[19];
    char stringdata[230];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EffectsDialog_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EffectsDialog_t qt_meta_stringdata_EffectsDialog = {
    {
QT_MOC_LITERAL(0, 0, 13), // "EffectsDialog"
QT_MOC_LITERAL(1, 14, 7), // "leaveOK"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 14), // "updateSolarize"
QT_MOC_LITERAL(4, 38, 3), // "val"
QT_MOC_LITERAL(5, 42, 14), // "updateContrast"
QT_MOC_LITERAL(6, 57, 12), // "updateBright"
QT_MOC_LITERAL(7, 70, 13), // "createPreview"
QT_MOC_LITERAL(8, 84, 10), // "saveValues"
QT_MOC_LITERAL(9, 95, 5), // "final"
QT_MOC_LITERAL(10, 101, 13), // "moveToEffects"
QT_MOC_LITERAL(11, 115, 15), // "moveFromEffects"
QT_MOC_LITERAL(12, 131, 12), // "moveEffectUp"
QT_MOC_LITERAL(13, 144, 14), // "moveEffectDown"
QT_MOC_LITERAL(14, 159, 12), // "selectEffect"
QT_MOC_LITERAL(15, 172, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(16, 189, 1), // "c"
QT_MOC_LITERAL(17, 191, 17), // "selectAvailEffect"
QT_MOC_LITERAL(18, 209, 20) // "selectAvailEffectDbl"

    },
    "EffectsDialog\0leaveOK\0\0updateSolarize\0"
    "val\0updateContrast\0updateBright\0"
    "createPreview\0saveValues\0final\0"
    "moveToEffects\0moveFromEffects\0"
    "moveEffectUp\0moveEffectDown\0selectEffect\0"
    "QListWidgetItem*\0c\0selectAvailEffect\0"
    "selectAvailEffectDbl"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EffectsDialog[] = {

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
       3,    1,   80,    2, 0x0a /* Public */,
       5,    1,   83,    2, 0x0a /* Public */,
       6,    1,   86,    2, 0x0a /* Public */,
       7,    0,   89,    2, 0x0a /* Public */,
       8,    1,   90,    2, 0x0a /* Public */,
      10,    0,   93,    2, 0x0a /* Public */,
      11,    0,   94,    2, 0x0a /* Public */,
      12,    0,   95,    2, 0x0a /* Public */,
      13,    0,   96,    2, 0x0a /* Public */,
      14,    1,   97,    2, 0x0a /* Public */,
      17,    1,  100,    2, 0x0a /* Public */,
      18,    1,  103,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void, 0x80000000 | 15,   16,

       0        // eod
};

void EffectsDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        EffectsDialog *_t = static_cast<EffectsDialog *>(_o);
        switch (_id) {
        case 0: _t->leaveOK(); break;
        case 1: _t->updateSolarize((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->updateContrast((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->updateBright((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->createPreview(); break;
        case 5: _t->saveValues((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->moveToEffects(); break;
        case 7: _t->moveFromEffects(); break;
        case 8: _t->moveEffectUp(); break;
        case 9: _t->moveEffectDown(); break;
        case 10: _t->selectEffect((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 11: _t->selectAvailEffect((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 12: _t->selectAvailEffectDbl((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject EffectsDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_EffectsDialog.data,
      qt_meta_data_EffectsDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *EffectsDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EffectsDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_EffectsDialog.stringdata))
        return static_cast<void*>(const_cast< EffectsDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int EffectsDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
