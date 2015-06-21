/****************************************************************************
** Meta object code from reading C++ file 'chartablemodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../scribus/chartablemodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'chartablemodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CharTableModel_t {
    QByteArrayData data[9];
    char stringdata[93];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CharTableModel_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CharTableModel_t qt_meta_stringdata_CharTableModel = {
    {
QT_MOC_LITERAL(0, 0, 14), // "CharTableModel"
QT_MOC_LITERAL(1, 15, 16), // "selectionChanged"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 20), // "QItemSelectionModel*"
QT_MOC_LITERAL(4, 54, 5), // "model"
QT_MOC_LITERAL(5, 60, 11), // "rowAppended"
QT_MOC_LITERAL(6, 72, 13), // "appendUnicode"
QT_MOC_LITERAL(7, 86, 1), // "s"
QT_MOC_LITERAL(8, 88, 4) // "base"

    },
    "CharTableModel\0selectionChanged\0\0"
    "QItemSelectionModel*\0model\0rowAppended\0"
    "appendUnicode\0s\0base"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CharTableModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       5,    0,   37,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    2,   38,    2, 0x0a /* Public */,
       6,    1,   43,    2, 0x2a /* Public | MethodCloned */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::UInt,    7,    8,
    QMetaType::Void, QMetaType::QString,    7,

       0        // eod
};

void CharTableModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CharTableModel *_t = static_cast<CharTableModel *>(_o);
        switch (_id) {
        case 0: _t->selectionChanged((*reinterpret_cast< QItemSelectionModel*(*)>(_a[1]))); break;
        case 1: _t->rowAppended(); break;
        case 2: _t->appendUnicode((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        case 3: _t->appendUnicode((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (CharTableModel::*_t)(QItemSelectionModel * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CharTableModel::selectionChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (CharTableModel::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CharTableModel::rowAppended)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject CharTableModel::staticMetaObject = {
    { &QAbstractTableModel::staticMetaObject, qt_meta_stringdata_CharTableModel.data,
      qt_meta_data_CharTableModel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CharTableModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CharTableModel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CharTableModel.stringdata))
        return static_cast<void*>(const_cast< CharTableModel*>(this));
    return QAbstractTableModel::qt_metacast(_clname);
}

int CharTableModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractTableModel::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void CharTableModel::selectionChanged(QItemSelectionModel * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CharTableModel::rowAppended()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
