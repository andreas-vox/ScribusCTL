/****************************************************************************
** Meta object code from reading C++ file 'scplugin.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../scribus/scplugin.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'scplugin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ScPlugin_t {
    QByteArrayData data[1];
    char stringdata[9];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ScPlugin_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ScPlugin_t qt_meta_stringdata_ScPlugin = {
    {
QT_MOC_LITERAL(0, 0, 8) // "ScPlugin"

    },
    "ScPlugin"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ScPlugin[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void ScPlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject ScPlugin::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ScPlugin.data,
      qt_meta_data_ScPlugin,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ScPlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ScPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ScPlugin.stringdata))
        return static_cast<void*>(const_cast< ScPlugin*>(this));
    return QObject::qt_metacast(_clname);
}

int ScPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_ScActionPlugin_t {
    QByteArrayData data[13];
    char stringdata[117];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ScActionPlugin_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ScActionPlugin_t qt_meta_stringdata_ScActionPlugin = {
    {
QT_MOC_LITERAL(0, 0, 14), // "ScActionPlugin"
QT_MOC_LITERAL(1, 15, 13), // "cleanupPlugin"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 3), // "run"
QT_MOC_LITERAL(4, 34, 11), // "ScribusDoc*"
QT_MOC_LITERAL(5, 46, 3), // "doc"
QT_MOC_LITERAL(6, 50, 6), // "target"
QT_MOC_LITERAL(7, 57, 8), // "QWidget*"
QT_MOC_LITERAL(8, 66, 6), // "parent"
QT_MOC_LITERAL(9, 73, 10), // "QIODevice*"
QT_MOC_LITERAL(10, 84, 8), // "runAsync"
QT_MOC_LITERAL(11, 93, 13), // "DeferredTask*"
QT_MOC_LITERAL(12, 107, 9) // "runResult"

    },
    "ScActionPlugin\0cleanupPlugin\0\0run\0"
    "ScribusDoc*\0doc\0target\0QWidget*\0parent\0"
    "QIODevice*\0runAsync\0DeferredTask*\0"
    "runResult"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ScActionPlugin[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x0a /* Public */,
       3,    2,   65,    2, 0x0a /* Public */,
       3,    1,   70,    2, 0x2a /* Public | MethodCloned */,
       3,    3,   73,    2, 0x0a /* Public */,
       3,    2,   80,    2, 0x2a /* Public | MethodCloned */,
       3,    2,   85,    2, 0x0a /* Public */,
      10,    1,   90,    2, 0x0a /* Public */,
      10,    0,   93,    2, 0x2a /* Public | MethodCloned */,
      10,    1,   94,    2, 0x0a /* Public */,
      12,    0,   97,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Bool,
    QMetaType::Bool, 0x80000000 | 4, QMetaType::QString,    5,    6,
    QMetaType::Bool, 0x80000000 | 4,    5,
    QMetaType::Bool, 0x80000000 | 7, 0x80000000 | 4, QMetaType::QString,    8,    5,    6,
    QMetaType::Bool, 0x80000000 | 7, 0x80000000 | 4,    8,    5,
    QMetaType::Bool, 0x80000000 | 4, 0x80000000 | 9,    5,    6,
    0x80000000 | 11, QMetaType::QString,    6,
    0x80000000 | 11,
    0x80000000 | 11, 0x80000000 | 9,    6,
    QMetaType::Void,

       0        // eod
};

void ScActionPlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ScActionPlugin *_t = static_cast<ScActionPlugin *>(_o);
        switch (_id) {
        case 0: { bool _r = _t->cleanupPlugin();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 1: { bool _r = _t->run((*reinterpret_cast< ScribusDoc*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 2: { bool _r = _t->run((*reinterpret_cast< ScribusDoc*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 3: { bool _r = _t->run((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< ScribusDoc*(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: { bool _r = _t->run((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< ScribusDoc*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: { bool _r = _t->run((*reinterpret_cast< ScribusDoc*(*)>(_a[1])),(*reinterpret_cast< QIODevice*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: { DeferredTask* _r = _t->runAsync((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< DeferredTask**>(_a[0]) = _r; }  break;
        case 7: { DeferredTask* _r = _t->runAsync();
            if (_a[0]) *reinterpret_cast< DeferredTask**>(_a[0]) = _r; }  break;
        case 8: { DeferredTask* _r = _t->runAsync((*reinterpret_cast< QIODevice*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< DeferredTask**>(_a[0]) = _r; }  break;
        case 9: _t->runResult(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWidget* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWidget* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QIODevice* >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QIODevice* >(); break;
            }
            break;
        }
    }
}

const QMetaObject ScActionPlugin::staticMetaObject = {
    { &ScPlugin::staticMetaObject, qt_meta_stringdata_ScActionPlugin.data,
      qt_meta_data_ScActionPlugin,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ScActionPlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ScActionPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ScActionPlugin.stringdata))
        return static_cast<void*>(const_cast< ScActionPlugin*>(this));
    return ScPlugin::qt_metacast(_clname);
}

int ScActionPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ScPlugin::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}
struct qt_meta_stringdata_ScPersistentPlugin_t {
    QByteArrayData data[1];
    char stringdata[19];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ScPersistentPlugin_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ScPersistentPlugin_t qt_meta_stringdata_ScPersistentPlugin = {
    {
QT_MOC_LITERAL(0, 0, 18) // "ScPersistentPlugin"

    },
    "ScPersistentPlugin"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ScPersistentPlugin[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void ScPersistentPlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject ScPersistentPlugin::staticMetaObject = {
    { &ScPlugin::staticMetaObject, qt_meta_stringdata_ScPersistentPlugin.data,
      qt_meta_data_ScPersistentPlugin,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ScPersistentPlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ScPersistentPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ScPersistentPlugin.stringdata))
        return static_cast<void*>(const_cast< ScPersistentPlugin*>(this));
    return ScPlugin::qt_metacast(_clname);
}

int ScPersistentPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ScPlugin::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
