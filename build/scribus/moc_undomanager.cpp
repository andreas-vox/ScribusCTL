/****************************************************************************
** Meta object code from reading C++ file 'undomanager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../scribus/undomanager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'undomanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_UndoManager_t {
    QByteArrayData data[25];
    char stringdata[250];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UndoManager_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UndoManager_t qt_meta_stringdata_UndoManager = {
    {
QT_MOC_LITERAL(0, 0, 11), // "UndoManager"
QT_MOC_LITERAL(1, 12, 9), // "newAction"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 11), // "UndoObject*"
QT_MOC_LITERAL(4, 35, 6), // "target"
QT_MOC_LITERAL(5, 42, 10), // "UndoState*"
QT_MOC_LITERAL(6, 53, 5), // "state"
QT_MOC_LITERAL(7, 59, 10), // "undoSignal"
QT_MOC_LITERAL(8, 70, 5), // "steps"
QT_MOC_LITERAL(9, 76, 10), // "redoSignal"
QT_MOC_LITERAL(10, 87, 9), // "clearRedo"
QT_MOC_LITERAL(11, 97, 7), // "popBack"
QT_MOC_LITERAL(12, 105, 13), // "undoRedoBegin"
QT_MOC_LITERAL(13, 119, 12), // "undoRedoDone"
QT_MOC_LITERAL(14, 132, 14), // "languageChange"
QT_MOC_LITERAL(15, 147, 6), // "action"
QT_MOC_LITERAL(16, 154, 8), // "QPixmap*"
QT_MOC_LITERAL(17, 163, 12), // "targetPixmap"
QT_MOC_LITERAL(18, 176, 10), // "targetName"
QT_MOC_LITERAL(19, 187, 4), // "undo"
QT_MOC_LITERAL(20, 192, 4), // "redo"
QT_MOC_LITERAL(21, 197, 10), // "showObject"
QT_MOC_LITERAL(22, 208, 3), // "uid"
QT_MOC_LITERAL(23, 212, 16), // "setHistoryLength"
QT_MOC_LITERAL(24, 229, 20) // "setAllHistoryLengths"

    },
    "UndoManager\0newAction\0\0UndoObject*\0"
    "target\0UndoState*\0state\0undoSignal\0"
    "steps\0redoSignal\0clearRedo\0popBack\0"
    "undoRedoBegin\0undoRedoDone\0languageChange\0"
    "action\0QPixmap*\0targetPixmap\0targetName\0"
    "undo\0redo\0showObject\0uid\0setHistoryLength\0"
    "setAllHistoryLengths"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UndoManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   99,    2, 0x06 /* Public */,
       7,    1,  104,    2, 0x06 /* Public */,
       9,    1,  107,    2, 0x06 /* Public */,
      10,    0,  110,    2, 0x06 /* Public */,
      11,    0,  111,    2, 0x06 /* Public */,
      12,    0,  112,    2, 0x06 /* Public */,
      13,    0,  113,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      14,    0,  114,    2, 0x0a /* Public */,
      15,    3,  115,    2, 0x0a /* Public */,
      15,    2,  122,    2, 0x2a /* Public | MethodCloned */,
      15,    4,  127,    2, 0x0a /* Public */,
      15,    3,  136,    2, 0x2a /* Public | MethodCloned */,
      19,    1,  143,    2, 0x0a /* Public */,
      20,    1,  146,    2, 0x0a /* Public */,
      21,    1,  149,    2, 0x0a /* Public */,
      23,    1,  152,    2, 0x0a /* Public */,
      24,    1,  155,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5, 0x80000000 | 16,    4,    6,   17,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5, QMetaType::QString, 0x80000000 | 16,    4,    6,   18,   17,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5, QMetaType::QString,    4,    6,   18,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Int,   22,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Int,    8,

       0        // eod
};

void UndoManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        UndoManager *_t = static_cast<UndoManager *>(_o);
        switch (_id) {
        case 0: _t->newAction((*reinterpret_cast< UndoObject*(*)>(_a[1])),(*reinterpret_cast< UndoState*(*)>(_a[2]))); break;
        case 1: _t->undoSignal((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->redoSignal((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->clearRedo(); break;
        case 4: _t->popBack(); break;
        case 5: _t->undoRedoBegin(); break;
        case 6: _t->undoRedoDone(); break;
        case 7: _t->languageChange(); break;
        case 8: _t->action((*reinterpret_cast< UndoObject*(*)>(_a[1])),(*reinterpret_cast< UndoState*(*)>(_a[2])),(*reinterpret_cast< QPixmap*(*)>(_a[3]))); break;
        case 9: _t->action((*reinterpret_cast< UndoObject*(*)>(_a[1])),(*reinterpret_cast< UndoState*(*)>(_a[2]))); break;
        case 10: _t->action((*reinterpret_cast< UndoObject*(*)>(_a[1])),(*reinterpret_cast< UndoState*(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< QPixmap*(*)>(_a[4]))); break;
        case 11: _t->action((*reinterpret_cast< UndoObject*(*)>(_a[1])),(*reinterpret_cast< UndoState*(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 12: _t->undo((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->redo((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->showObject((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->setHistoryLength((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->setAllHistoryLengths((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (UndoManager::*_t)(UndoObject * , UndoState * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UndoManager::newAction)) {
                *result = 0;
            }
        }
        {
            typedef void (UndoManager::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UndoManager::undoSignal)) {
                *result = 1;
            }
        }
        {
            typedef void (UndoManager::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UndoManager::redoSignal)) {
                *result = 2;
            }
        }
        {
            typedef void (UndoManager::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UndoManager::clearRedo)) {
                *result = 3;
            }
        }
        {
            typedef void (UndoManager::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UndoManager::popBack)) {
                *result = 4;
            }
        }
        {
            typedef void (UndoManager::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UndoManager::undoRedoBegin)) {
                *result = 5;
            }
        }
        {
            typedef void (UndoManager::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UndoManager::undoRedoDone)) {
                *result = 6;
            }
        }
    }
}

const QMetaObject UndoManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UndoManager.data,
      qt_meta_data_UndoManager,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *UndoManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UndoManager::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_UndoManager.stringdata))
        return static_cast<void*>(const_cast< UndoManager*>(this));
    return QObject::qt_metacast(_clname);
}

int UndoManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 17;
    }
    return _id;
}

// SIGNAL 0
void UndoManager::newAction(UndoObject * _t1, UndoState * _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void UndoManager::undoSignal(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void UndoManager::redoSignal(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void UndoManager::clearRedo()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void UndoManager::popBack()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}

// SIGNAL 5
void UndoManager::undoRedoBegin()
{
    QMetaObject::activate(this, &staticMetaObject, 5, Q_NULLPTR);
}

// SIGNAL 6
void UndoManager::undoRedoDone()
{
    QMetaObject::activate(this, &staticMetaObject, 6, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
