/****************************************************************************
** Meta object code from reading C++ file 'inlinepalette.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../scribus/ui/inlinepalette.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'inlinepalette.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_InlineView_t {
    QByteArrayData data[3];
    char stringdata[26];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_InlineView_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_InlineView_t qt_meta_stringdata_InlineView = {
    {
QT_MOC_LITERAL(0, 0, 10), // "InlineView"
QT_MOC_LITERAL(1, 11, 13), // "objectDropped"
QT_MOC_LITERAL(2, 25, 0) // ""

    },
    "InlineView\0objectDropped\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_InlineView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,

       0        // eod
};

void InlineView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        InlineView *_t = static_cast<InlineView *>(_o);
        switch (_id) {
        case 0: _t->objectDropped((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (InlineView::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&InlineView::objectDropped)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject InlineView::staticMetaObject = {
    { &QListWidget::staticMetaObject, qt_meta_stringdata_InlineView.data,
      qt_meta_data_InlineView,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *InlineView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *InlineView::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_InlineView.stringdata))
        return static_cast<void*>(const_cast< InlineView*>(this));
    return QListWidget::qt_metacast(_clname);
}

int InlineView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QListWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void InlineView::objectDropped(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_InlinePalette_t {
    QByteArrayData data[15];
    char stringdata[193];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_InlinePalette_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_InlinePalette_t qt_meta_stringdata_InlinePalette = {
    {
QT_MOC_LITERAL(0, 0, 13), // "InlinePalette"
QT_MOC_LITERAL(1, 14, 9), // "startEdit"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 7), // "endEdit"
QT_MOC_LITERAL(4, 33, 13), // "objectDropped"
QT_MOC_LITERAL(5, 47, 18), // "handleContextMenue"
QT_MOC_LITERAL(6, 66, 1), // "p"
QT_MOC_LITERAL(7, 68, 17), // "handlePasteToItem"
QT_MOC_LITERAL(8, 86, 14), // "handleEditItem"
QT_MOC_LITERAL(9, 101, 17), // "handleDoubleClick"
QT_MOC_LITERAL(10, 119, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(11, 136, 4), // "item"
QT_MOC_LITERAL(12, 141, 16), // "handleDeleteItem"
QT_MOC_LITERAL(13, 158, 19), // "handleUpdateRequest"
QT_MOC_LITERAL(14, 178, 14) // "languageChange"

    },
    "InlinePalette\0startEdit\0\0endEdit\0"
    "objectDropped\0handleContextMenue\0p\0"
    "handlePasteToItem\0handleEditItem\0"
    "handleDoubleClick\0QListWidgetItem*\0"
    "item\0handleDeleteItem\0handleUpdateRequest\0"
    "languageChange"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_InlinePalette[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,
       3,    0,   67,    2, 0x06 /* Public */,
       4,    1,   68,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   71,    2, 0x0a /* Public */,
       7,    0,   74,    2, 0x0a /* Public */,
       8,    0,   75,    2, 0x0a /* Public */,
       9,    1,   76,    2, 0x0a /* Public */,
      12,    0,   79,    2, 0x0a /* Public */,
      13,    1,   80,    2, 0x0a /* Public */,
      14,    0,   83,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QPoint,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,

       0        // eod
};

void InlinePalette::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        InlinePalette *_t = static_cast<InlinePalette *>(_o);
        switch (_id) {
        case 0: _t->startEdit((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->endEdit(); break;
        case 2: _t->objectDropped((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->handleContextMenue((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 4: _t->handlePasteToItem(); break;
        case 5: _t->handleEditItem(); break;
        case 6: _t->handleDoubleClick((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 7: _t->handleDeleteItem(); break;
        case 8: _t->handleUpdateRequest((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->languageChange(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (InlinePalette::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&InlinePalette::startEdit)) {
                *result = 0;
            }
        }
        {
            typedef void (InlinePalette::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&InlinePalette::endEdit)) {
                *result = 1;
            }
        }
        {
            typedef void (InlinePalette::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&InlinePalette::objectDropped)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject InlinePalette::staticMetaObject = {
    { &ScDockPalette::staticMetaObject, qt_meta_stringdata_InlinePalette.data,
      qt_meta_data_InlinePalette,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *InlinePalette::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *InlinePalette::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_InlinePalette.stringdata))
        return static_cast<void*>(const_cast< InlinePalette*>(this));
    return ScDockPalette::qt_metacast(_clname);
}

int InlinePalette::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ScDockPalette::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void InlinePalette::startEdit(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void InlinePalette::endEdit()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void InlinePalette::objectDropped(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
