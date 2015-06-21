/****************************************************************************
** Meta object code from reading C++ file 'symbolpalette.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../scribus/ui/symbolpalette.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'symbolpalette.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SymbolView_t {
    QByteArrayData data[5];
    char stringdata[58];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SymbolView_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SymbolView_t qt_meta_stringdata_SymbolView = {
    {
QT_MOC_LITERAL(0, 0, 10), // "SymbolView"
QT_MOC_LITERAL(1, 11, 13), // "objectDropped"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 17), // "HandleContextMenu"
QT_MOC_LITERAL(4, 44, 13) // "changeDisplay"

    },
    "SymbolView\0objectDropped\0\0HandleContextMenu\0"
    "changeDisplay"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SymbolView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   30,    2, 0x0a /* Public */,
       4,    0,   33,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QPoint,    2,
    QMetaType::Void,

       0        // eod
};

void SymbolView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SymbolView *_t = static_cast<SymbolView *>(_o);
        switch (_id) {
        case 0: _t->objectDropped(); break;
        case 1: _t->HandleContextMenu((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 2: _t->changeDisplay(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (SymbolView::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SymbolView::objectDropped)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject SymbolView::staticMetaObject = {
    { &QListWidget::staticMetaObject, qt_meta_stringdata_SymbolView.data,
      qt_meta_data_SymbolView,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SymbolView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SymbolView::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SymbolView.stringdata))
        return static_cast<void*>(const_cast< SymbolView*>(this));
    return QListWidget::qt_metacast(_clname);
}

int SymbolView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QListWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void SymbolView::objectDropped()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
struct qt_meta_stringdata_SymbolPalette_t {
    QByteArrayData data[13];
    char stringdata[149];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SymbolPalette_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SymbolPalette_t qt_meta_stringdata_SymbolPalette = {
    {
QT_MOC_LITERAL(0, 0, 13), // "SymbolPalette"
QT_MOC_LITERAL(1, 14, 9), // "startEdit"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 7), // "endEdit"
QT_MOC_LITERAL(4, 33, 13), // "objectDropped"
QT_MOC_LITERAL(5, 47, 17), // "handleDoubleClick"
QT_MOC_LITERAL(6, 65, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(7, 82, 4), // "item"
QT_MOC_LITERAL(8, 87, 19), // "handleUpdateRequest"
QT_MOC_LITERAL(9, 107, 14), // "languageChange"
QT_MOC_LITERAL(10, 122, 13), // "keyPressEvent"
QT_MOC_LITERAL(11, 136, 10), // "QKeyEvent*"
QT_MOC_LITERAL(12, 147, 1) // "e"

    },
    "SymbolPalette\0startEdit\0\0endEdit\0"
    "objectDropped\0handleDoubleClick\0"
    "QListWidgetItem*\0item\0handleUpdateRequest\0"
    "languageChange\0keyPressEvent\0QKeyEvent*\0"
    "e"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SymbolPalette[] = {

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
       4,    0,   53,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   54,    2, 0x0a /* Public */,
       8,    1,   57,    2, 0x0a /* Public */,
       9,    0,   60,    2, 0x0a /* Public */,
      10,    1,   61,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 11,   12,

       0        // eod
};

void SymbolPalette::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SymbolPalette *_t = static_cast<SymbolPalette *>(_o);
        switch (_id) {
        case 0: _t->startEdit((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->endEdit(); break;
        case 2: _t->objectDropped(); break;
        case 3: _t->handleDoubleClick((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 4: _t->handleUpdateRequest((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->languageChange(); break;
        case 6: _t->keyPressEvent((*reinterpret_cast< QKeyEvent*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (SymbolPalette::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SymbolPalette::startEdit)) {
                *result = 0;
            }
        }
        {
            typedef void (SymbolPalette::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SymbolPalette::endEdit)) {
                *result = 1;
            }
        }
        {
            typedef void (SymbolPalette::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SymbolPalette::objectDropped)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject SymbolPalette::staticMetaObject = {
    { &ScDockPalette::staticMetaObject, qt_meta_stringdata_SymbolPalette.data,
      qt_meta_data_SymbolPalette,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SymbolPalette::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SymbolPalette::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SymbolPalette.stringdata))
        return static_cast<void*>(const_cast< SymbolPalette*>(this));
    return ScDockPalette::qt_metacast(_clname);
}

int SymbolPalette::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ScDockPalette::qt_metacall(_c, _id, _a);
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
void SymbolPalette::startEdit(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SymbolPalette::endEdit()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void SymbolPalette::objectDropped()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
