/****************************************************************************
** Meta object code from reading C++ file 'chartableview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../scribus/chartableview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'chartableview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CharTableView_t {
    QByteArrayData data[11];
    char stringdata[137];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CharTableView_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CharTableView_t qt_meta_stringdata_CharTableView = {
    {
QT_MOC_LITERAL(0, 0, 13), // "CharTableView"
QT_MOC_LITERAL(1, 14, 10), // "selectChar"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 7), // "delChar"
QT_MOC_LITERAL(4, 34, 21), // "modelSelectionChanged"
QT_MOC_LITERAL(5, 56, 20), // "QItemSelectionModel*"
QT_MOC_LITERAL(6, 77, 5), // "model"
QT_MOC_LITERAL(7, 83, 13), // "resizeLastRow"
QT_MOC_LITERAL(8, 97, 15), // "removeCharacter"
QT_MOC_LITERAL(9, 113, 17), // "viewDoubleClicked"
QT_MOC_LITERAL(10, 131, 5) // "index"

    },
    "CharTableView\0selectChar\0\0delChar\0"
    "modelSelectionChanged\0QItemSelectionModel*\0"
    "model\0resizeLastRow\0removeCharacter\0"
    "viewDoubleClicked\0index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CharTableView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   44,    2, 0x06 /* Public */,
       3,    0,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   50,    2, 0x0a /* Public */,
       7,    0,   53,    2, 0x0a /* Public */,
       8,    0,   54,    2, 0x08 /* Private */,
       9,    1,   55,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::UInt, QMetaType::QString,    2,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,   10,

       0        // eod
};

void CharTableView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CharTableView *_t = static_cast<CharTableView *>(_o);
        switch (_id) {
        case 0: _t->selectChar((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 1: _t->delChar(); break;
        case 2: _t->modelSelectionChanged((*reinterpret_cast< QItemSelectionModel*(*)>(_a[1]))); break;
        case 3: _t->resizeLastRow(); break;
        case 4: _t->removeCharacter(); break;
        case 5: _t->viewDoubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QItemSelectionModel* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (CharTableView::*_t)(uint , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CharTableView::selectChar)) {
                *result = 0;
            }
        }
        {
            typedef void (CharTableView::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CharTableView::delChar)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject CharTableView::staticMetaObject = {
    { &QTableView::staticMetaObject, qt_meta_stringdata_CharTableView.data,
      qt_meta_data_CharTableView,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CharTableView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CharTableView::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CharTableView.stringdata))
        return static_cast<void*>(const_cast< CharTableView*>(this));
    return QTableView::qt_metacast(_clname);
}

int CharTableView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTableView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void CharTableView::selectChar(uint _t1, QString _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CharTableView::delChar()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
