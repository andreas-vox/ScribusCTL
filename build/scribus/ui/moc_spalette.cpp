/****************************************************************************
** Meta object code from reading C++ file 'spalette.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../scribus/ui/spalette.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'spalette.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ParaStyleComboBox_t {
    QByteArrayData data[12];
    char stringdata[115];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ParaStyleComboBox_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ParaStyleComboBox_t qt_meta_stringdata_ParaStyleComboBox = {
    {
QT_MOC_LITERAL(0, 0, 17), // "ParaStyleComboBox"
QT_MOC_LITERAL(1, 18, 8), // "newStyle"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 9), // "editStyle"
QT_MOC_LITERAL(4, 38, 6), // "setDoc"
QT_MOC_LITERAL(5, 45, 11), // "ScribusDoc*"
QT_MOC_LITERAL(6, 57, 13), // "newCurrentDoc"
QT_MOC_LITERAL(7, 71, 9), // "setFormat"
QT_MOC_LITERAL(8, 81, 4), // "name"
QT_MOC_LITERAL(9, 86, 16), // "updateFormatList"
QT_MOC_LITERAL(10, 103, 9), // "selFormat"
QT_MOC_LITERAL(11, 113, 1) // "e"

    },
    "ParaStyleComboBox\0newStyle\0\0editStyle\0"
    "setDoc\0ScribusDoc*\0newCurrentDoc\0"
    "setFormat\0name\0updateFormatList\0"
    "selFormat\0e"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ParaStyleComboBox[] = {

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
       1,    1,   44,    2, 0x06 /* Public */,
       3,    0,   47,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   48,    2, 0x0a /* Public */,
       7,    1,   51,    2, 0x0a /* Public */,
       9,    0,   54,    2, 0x0a /* Public */,
      10,    1,   55,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   11,

       0        // eod
};

void ParaStyleComboBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ParaStyleComboBox *_t = static_cast<ParaStyleComboBox *>(_o);
        switch (_id) {
        case 0: _t->newStyle((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->editStyle(); break;
        case 2: _t->setDoc((*reinterpret_cast< ScribusDoc*(*)>(_a[1]))); break;
        case 3: _t->setFormat((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->updateFormatList(); break;
        case 5: _t->selFormat((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ParaStyleComboBox::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ParaStyleComboBox::newStyle)) {
                *result = 0;
            }
        }
        {
            typedef void (ParaStyleComboBox::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ParaStyleComboBox::editStyle)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject ParaStyleComboBox::staticMetaObject = {
    { &QComboBox::staticMetaObject, qt_meta_stringdata_ParaStyleComboBox.data,
      qt_meta_data_ParaStyleComboBox,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ParaStyleComboBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ParaStyleComboBox::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ParaStyleComboBox.stringdata))
        return static_cast<void*>(const_cast< ParaStyleComboBox*>(this));
    return QComboBox::qt_metacast(_clname);
}

int ParaStyleComboBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QComboBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void ParaStyleComboBox::newStyle(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ParaStyleComboBox::editStyle()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
struct qt_meta_stringdata_CharStyleComboBox_t {
    QByteArrayData data[12];
    char stringdata[119];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CharStyleComboBox_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CharStyleComboBox_t qt_meta_stringdata_CharStyleComboBox = {
    {
QT_MOC_LITERAL(0, 0, 17), // "CharStyleComboBox"
QT_MOC_LITERAL(1, 18, 8), // "newStyle"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 13), // "editCharStyle"
QT_MOC_LITERAL(4, 42, 6), // "setDoc"
QT_MOC_LITERAL(5, 49, 11), // "ScribusDoc*"
QT_MOC_LITERAL(6, 61, 13), // "newCurrentDoc"
QT_MOC_LITERAL(7, 75, 9), // "setFormat"
QT_MOC_LITERAL(8, 85, 4), // "name"
QT_MOC_LITERAL(9, 90, 16), // "updateFormatList"
QT_MOC_LITERAL(10, 107, 9), // "selFormat"
QT_MOC_LITERAL(11, 117, 1) // "e"

    },
    "CharStyleComboBox\0newStyle\0\0editCharStyle\0"
    "setDoc\0ScribusDoc*\0newCurrentDoc\0"
    "setFormat\0name\0updateFormatList\0"
    "selFormat\0e"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CharStyleComboBox[] = {

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
       1,    1,   44,    2, 0x06 /* Public */,
       3,    0,   47,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   48,    2, 0x0a /* Public */,
       7,    1,   51,    2, 0x0a /* Public */,
       9,    0,   54,    2, 0x0a /* Public */,
      10,    1,   55,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   11,

       0        // eod
};

void CharStyleComboBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CharStyleComboBox *_t = static_cast<CharStyleComboBox *>(_o);
        switch (_id) {
        case 0: _t->newStyle((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->editCharStyle(); break;
        case 2: _t->setDoc((*reinterpret_cast< ScribusDoc*(*)>(_a[1]))); break;
        case 3: _t->setFormat((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->updateFormatList(); break;
        case 5: _t->selFormat((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (CharStyleComboBox::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CharStyleComboBox::newStyle)) {
                *result = 0;
            }
        }
        {
            typedef void (CharStyleComboBox::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CharStyleComboBox::editCharStyle)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject CharStyleComboBox::staticMetaObject = {
    { &QComboBox::staticMetaObject, qt_meta_stringdata_CharStyleComboBox.data,
      qt_meta_data_CharStyleComboBox,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CharStyleComboBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CharStyleComboBox::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CharStyleComboBox.stringdata))
        return static_cast<void*>(const_cast< CharStyleComboBox*>(this));
    return QComboBox::qt_metacast(_clname);
}

int CharStyleComboBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QComboBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void CharStyleComboBox::newStyle(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CharStyleComboBox::editCharStyle()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
struct qt_meta_stringdata_CellStyleComboBox_t {
    QByteArrayData data[12];
    char stringdata[119];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CellStyleComboBox_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CellStyleComboBox_t qt_meta_stringdata_CellStyleComboBox = {
    {
QT_MOC_LITERAL(0, 0, 17), // "CellStyleComboBox"
QT_MOC_LITERAL(1, 18, 8), // "newStyle"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 13), // "editCharStyle"
QT_MOC_LITERAL(4, 42, 6), // "setDoc"
QT_MOC_LITERAL(5, 49, 11), // "ScribusDoc*"
QT_MOC_LITERAL(6, 61, 13), // "newCurrentDoc"
QT_MOC_LITERAL(7, 75, 9), // "setFormat"
QT_MOC_LITERAL(8, 85, 4), // "name"
QT_MOC_LITERAL(9, 90, 16), // "updateFormatList"
QT_MOC_LITERAL(10, 107, 9), // "selFormat"
QT_MOC_LITERAL(11, 117, 1) // "e"

    },
    "CellStyleComboBox\0newStyle\0\0editCharStyle\0"
    "setDoc\0ScribusDoc*\0newCurrentDoc\0"
    "setFormat\0name\0updateFormatList\0"
    "selFormat\0e"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CellStyleComboBox[] = {

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
       1,    1,   44,    2, 0x06 /* Public */,
       3,    0,   47,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   48,    2, 0x0a /* Public */,
       7,    1,   51,    2, 0x0a /* Public */,
       9,    0,   54,    2, 0x0a /* Public */,
      10,    1,   55,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   11,

       0        // eod
};

void CellStyleComboBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CellStyleComboBox *_t = static_cast<CellStyleComboBox *>(_o);
        switch (_id) {
        case 0: _t->newStyle((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->editCharStyle(); break;
        case 2: _t->setDoc((*reinterpret_cast< ScribusDoc*(*)>(_a[1]))); break;
        case 3: _t->setFormat((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->updateFormatList(); break;
        case 5: _t->selFormat((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (CellStyleComboBox::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CellStyleComboBox::newStyle)) {
                *result = 0;
            }
        }
        {
            typedef void (CellStyleComboBox::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CellStyleComboBox::editCharStyle)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject CellStyleComboBox::staticMetaObject = {
    { &QComboBox::staticMetaObject, qt_meta_stringdata_CellStyleComboBox.data,
      qt_meta_data_CellStyleComboBox,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CellStyleComboBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CellStyleComboBox::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CellStyleComboBox.stringdata))
        return static_cast<void*>(const_cast< CellStyleComboBox*>(this));
    return QComboBox::qt_metacast(_clname);
}

int CellStyleComboBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QComboBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void CellStyleComboBox::newStyle(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CellStyleComboBox::editCharStyle()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
struct qt_meta_stringdata_TableStyleComboBox_t {
    QByteArrayData data[12];
    char stringdata[120];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TableStyleComboBox_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TableStyleComboBox_t qt_meta_stringdata_TableStyleComboBox = {
    {
QT_MOC_LITERAL(0, 0, 18), // "TableStyleComboBox"
QT_MOC_LITERAL(1, 19, 8), // "newStyle"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 13), // "editCharStyle"
QT_MOC_LITERAL(4, 43, 6), // "setDoc"
QT_MOC_LITERAL(5, 50, 11), // "ScribusDoc*"
QT_MOC_LITERAL(6, 62, 13), // "newCurrentDoc"
QT_MOC_LITERAL(7, 76, 9), // "setFormat"
QT_MOC_LITERAL(8, 86, 4), // "name"
QT_MOC_LITERAL(9, 91, 16), // "updateFormatList"
QT_MOC_LITERAL(10, 108, 9), // "selFormat"
QT_MOC_LITERAL(11, 118, 1) // "e"

    },
    "TableStyleComboBox\0newStyle\0\0editCharStyle\0"
    "setDoc\0ScribusDoc*\0newCurrentDoc\0"
    "setFormat\0name\0updateFormatList\0"
    "selFormat\0e"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TableStyleComboBox[] = {

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
       1,    1,   44,    2, 0x06 /* Public */,
       3,    0,   47,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   48,    2, 0x0a /* Public */,
       7,    1,   51,    2, 0x0a /* Public */,
       9,    0,   54,    2, 0x0a /* Public */,
      10,    1,   55,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   11,

       0        // eod
};

void TableStyleComboBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TableStyleComboBox *_t = static_cast<TableStyleComboBox *>(_o);
        switch (_id) {
        case 0: _t->newStyle((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->editCharStyle(); break;
        case 2: _t->setDoc((*reinterpret_cast< ScribusDoc*(*)>(_a[1]))); break;
        case 3: _t->setFormat((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->updateFormatList(); break;
        case 5: _t->selFormat((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (TableStyleComboBox::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TableStyleComboBox::newStyle)) {
                *result = 0;
            }
        }
        {
            typedef void (TableStyleComboBox::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TableStyleComboBox::editCharStyle)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject TableStyleComboBox::staticMetaObject = {
    { &QComboBox::staticMetaObject, qt_meta_stringdata_TableStyleComboBox.data,
      qt_meta_data_TableStyleComboBox,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *TableStyleComboBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TableStyleComboBox::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_TableStyleComboBox.stringdata))
        return static_cast<void*>(const_cast< TableStyleComboBox*>(this));
    return QComboBox::qt_metacast(_clname);
}

int TableStyleComboBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QComboBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void TableStyleComboBox::newStyle(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void TableStyleComboBox::editCharStyle()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
