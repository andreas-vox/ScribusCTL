/****************************************************************************
** Meta object code from reading C++ file 'scraction.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../scribus/scraction.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'scraction.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ScrAction_t {
    QByteArrayData data[11];
    char stringdata[141];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ScrAction_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ScrAction_t qt_meta_stringdata_ScrAction = {
    {
QT_MOC_LITERAL(0, 0, 9), // "ScrAction"
QT_MOC_LITERAL(1, 10, 13), // "triggeredData"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 11), // "ScribusDoc*"
QT_MOC_LITERAL(4, 37, 8), // "QWidget*"
QT_MOC_LITERAL(5, 46, 11), // "toggledData"
QT_MOC_LITERAL(6, 58, 24), // "triggeredUnicodeShortcut"
QT_MOC_LITERAL(7, 83, 6), // "toggle"
QT_MOC_LITERAL(8, 90, 24), // "triggeredToTriggeredData"
QT_MOC_LITERAL(9, 115, 20), // "toggledToToggledData"
QT_MOC_LITERAL(10, 136, 4) // "ison"

    },
    "ScrAction\0triggeredData\0\0ScribusDoc*\0"
    "QWidget*\0toggledData\0triggeredUnicodeShortcut\0"
    "toggle\0triggeredToTriggeredData\0"
    "toggledToToggledData\0ison"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ScrAction[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   79,    2, 0x06 /* Public */,
       1,    1,   82,    2, 0x06 /* Public */,
       1,    1,   85,    2, 0x06 /* Public */,
       1,    1,   88,    2, 0x06 /* Public */,
       1,    1,   91,    2, 0x06 /* Public */,
       1,    2,   94,    2, 0x06 /* Public */,
       5,    2,   99,    2, 0x06 /* Public */,
       5,    2,  104,    2, 0x06 /* Public */,
       5,    2,  109,    2, 0x06 /* Public */,
       6,    1,  114,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,  117,    2, 0x0a /* Public */,
       8,    0,  118,    2, 0x08 /* Private */,
       9,    1,  119,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QVariant,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 4, 0x80000000 | 3,    2,    2,
    QMetaType::Void, QMetaType::Bool, QMetaType::Int,    2,    2,
    QMetaType::Void, QMetaType::Bool, QMetaType::Double,    2,    2,
    QMetaType::Void, QMetaType::Bool, QMetaType::QString,    2,    2,
    QMetaType::Void, QMetaType::Int,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   10,

       0        // eod
};

void ScrAction::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ScrAction *_t = static_cast<ScrAction *>(_o);
        switch (_id) {
        case 0: _t->triggeredData((*reinterpret_cast< QVariant(*)>(_a[1]))); break;
        case 1: _t->triggeredData((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->triggeredData((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->triggeredData((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->triggeredData((*reinterpret_cast< ScribusDoc*(*)>(_a[1]))); break;
        case 5: _t->triggeredData((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< ScribusDoc*(*)>(_a[2]))); break;
        case 6: _t->toggledData((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 7: _t->toggledData((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 8: _t->toggledData((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 9: _t->triggeredUnicodeShortcut((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->toggle(); break;
        case 11: _t->triggeredToTriggeredData(); break;
        case 12: _t->toggledToToggledData((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWidget* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ScrAction::*_t)(QVariant );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ScrAction::triggeredData)) {
                *result = 0;
            }
        }
        {
            typedef void (ScrAction::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ScrAction::triggeredData)) {
                *result = 1;
            }
        }
        {
            typedef void (ScrAction::*_t)(double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ScrAction::triggeredData)) {
                *result = 2;
            }
        }
        {
            typedef void (ScrAction::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ScrAction::triggeredData)) {
                *result = 3;
            }
        }
        {
            typedef void (ScrAction::*_t)(ScribusDoc * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ScrAction::triggeredData)) {
                *result = 4;
            }
        }
        {
            typedef void (ScrAction::*_t)(QWidget * , ScribusDoc * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ScrAction::triggeredData)) {
                *result = 5;
            }
        }
        {
            typedef void (ScrAction::*_t)(bool , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ScrAction::toggledData)) {
                *result = 6;
            }
        }
        {
            typedef void (ScrAction::*_t)(bool , double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ScrAction::toggledData)) {
                *result = 7;
            }
        }
        {
            typedef void (ScrAction::*_t)(bool , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ScrAction::toggledData)) {
                *result = 8;
            }
        }
        {
            typedef void (ScrAction::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ScrAction::triggeredUnicodeShortcut)) {
                *result = 9;
            }
        }
    }
}

const QMetaObject ScrAction::staticMetaObject = {
    { &QAction::staticMetaObject, qt_meta_stringdata_ScrAction.data,
      qt_meta_data_ScrAction,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ScrAction::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ScrAction::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ScrAction.stringdata))
        return static_cast<void*>(const_cast< ScrAction*>(this));
    return QAction::qt_metacast(_clname);
}

int ScrAction::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAction::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void ScrAction::triggeredData(QVariant _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ScrAction::triggeredData(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ScrAction::triggeredData(double _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ScrAction::triggeredData(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void ScrAction::triggeredData(ScribusDoc * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void ScrAction::triggeredData(QWidget * _t1, ScribusDoc * _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void ScrAction::toggledData(bool _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void ScrAction::toggledData(bool _t1, double _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void ScrAction::toggledData(bool _t1, QString _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void ScrAction::triggeredUnicodeShortcut(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}
QT_END_MOC_NAMESPACE
