/****************************************************************************
** Meta object code from reading C++ file 'deferredtask.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../scribus/deferredtask.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'deferredtask.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_DeferredTask_t {
    QByteArrayData data[9];
    char stringdata[75];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DeferredTask_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DeferredTask_t qt_meta_stringdata_DeferredTask = {
    {
QT_MOC_LITERAL(0, 0, 12), // "DeferredTask"
QT_MOC_LITERAL(1, 13, 7), // "aborted"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 8), // "finished"
QT_MOC_LITERAL(4, 31, 8), // "progress"
QT_MOC_LITERAL(5, 40, 5), // "start"
QT_MOC_LITERAL(6, 46, 16), // "runUntilFinished"
QT_MOC_LITERAL(7, 63, 6), // "cancel"
QT_MOC_LITERAL(8, 70, 4) // "next"

    },
    "DeferredTask\0aborted\0\0finished\0progress\0"
    "start\0runUntilFinished\0cancel\0next"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DeferredTask[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,
       3,    0,   52,    2, 0x06 /* Public */,
       4,    1,   53,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   56,    2, 0x0a /* Public */,
       6,    0,   57,    2, 0x0a /* Public */,
       7,    0,   58,    2, 0x0a /* Public */,
       8,    0,   59,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void DeferredTask::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DeferredTask *_t = static_cast<DeferredTask *>(_o);
        switch (_id) {
        case 0: _t->aborted((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->finished(); break;
        case 2: _t->progress((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->start(); break;
        case 4: _t->runUntilFinished(); break;
        case 5: _t->cancel(); break;
        case 6: _t->next(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (DeferredTask::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DeferredTask::aborted)) {
                *result = 0;
            }
        }
        {
            typedef void (DeferredTask::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DeferredTask::finished)) {
                *result = 1;
            }
        }
        {
            typedef void (DeferredTask::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DeferredTask::progress)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject DeferredTask::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_DeferredTask.data,
      qt_meta_data_DeferredTask,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *DeferredTask::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DeferredTask::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_DeferredTask.stringdata))
        return static_cast<void*>(const_cast< DeferredTask*>(this));
    return QObject::qt_metacast(_clname);
}

int DeferredTask::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void DeferredTask::aborted(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DeferredTask::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void DeferredTask::progress(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
