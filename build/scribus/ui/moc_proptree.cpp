/****************************************************************************
** Meta object code from reading C++ file 'proptree.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../scribus/ui/proptree.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'proptree.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_PropTreeItemDelegate_t {
    QByteArrayData data[3];
    char stringdata[38];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PropTreeItemDelegate_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PropTreeItemDelegate_t qt_meta_stringdata_PropTreeItemDelegate = {
    {
QT_MOC_LITERAL(0, 0, 20), // "PropTreeItemDelegate"
QT_MOC_LITERAL(1, 21, 15), // "valueHasChanged"
QT_MOC_LITERAL(2, 37, 0) // ""

    },
    "PropTreeItemDelegate\0valueHasChanged\0"
    ""
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PropTreeItemDelegate[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void PropTreeItemDelegate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PropTreeItemDelegate *_t = static_cast<PropTreeItemDelegate *>(_o);
        switch (_id) {
        case 0: _t->valueHasChanged(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject PropTreeItemDelegate::staticMetaObject = {
    { &QItemDelegate::staticMetaObject, qt_meta_stringdata_PropTreeItemDelegate.data,
      qt_meta_data_PropTreeItemDelegate,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PropTreeItemDelegate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PropTreeItemDelegate::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PropTreeItemDelegate.stringdata))
        return static_cast<void*>(const_cast< PropTreeItemDelegate*>(this));
    return QItemDelegate::qt_metacast(_clname);
}

int PropTreeItemDelegate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QItemDelegate::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_PropTreeItem_t {
    QByteArrayData data[5];
    char stringdata[52];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PropTreeItem_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PropTreeItem_t qt_meta_stringdata_PropTreeItem = {
    {
QT_MOC_LITERAL(0, 0, 12), // "PropTreeItem"
QT_MOC_LITERAL(1, 13, 12), // "valueChanged"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 12), // "editFinished"
QT_MOC_LITERAL(4, 40, 11) // "editStarted"

    },
    "PropTreeItem\0valueChanged\0\0editFinished\0"
    "editStarted"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PropTreeItem[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       1,    1,   47,    2, 0x06 /* Public */,
       1,    1,   50,    2, 0x06 /* Public */,
       1,    1,   53,    2, 0x06 /* Public */,
       3,    0,   56,    2, 0x06 /* Public */,
       4,    0,   57,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void PropTreeItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PropTreeItem *_t = static_cast<PropTreeItem *>(_o);
        switch (_id) {
        case 0: _t->valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: _t->valueChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->valueChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->editFinished(); break;
        case 5: _t->editStarted(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (PropTreeItem::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PropTreeItem::valueChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (PropTreeItem::*_t)(double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PropTreeItem::valueChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (PropTreeItem::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PropTreeItem::valueChanged)) {
                *result = 2;
            }
        }
        {
            typedef void (PropTreeItem::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PropTreeItem::valueChanged)) {
                *result = 3;
            }
        }
        {
            typedef void (PropTreeItem::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PropTreeItem::editFinished)) {
                *result = 4;
            }
        }
        {
            typedef void (PropTreeItem::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PropTreeItem::editStarted)) {
                *result = 5;
            }
        }
    }
}

const QMetaObject PropTreeItem::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PropTreeItem.data,
      qt_meta_data_PropTreeItem,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PropTreeItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PropTreeItem::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PropTreeItem.stringdata))
        return static_cast<void*>(const_cast< PropTreeItem*>(this));
    if (!strcmp(_clname, "QTreeWidgetItem"))
        return static_cast< QTreeWidgetItem*>(const_cast< PropTreeItem*>(this));
    return QObject::qt_metacast(_clname);
}

int PropTreeItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void PropTreeItem::valueChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PropTreeItem::valueChanged(double _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void PropTreeItem::valueChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void PropTreeItem::valueChanged(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void PropTreeItem::editFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}

// SIGNAL 5
void PropTreeItem::editStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 5, Q_NULLPTR);
}
struct qt_meta_stringdata_PropTreeWidget_t {
    QByteArrayData data[5];
    char stringdata[55];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PropTreeWidget_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PropTreeWidget_t qt_meta_stringdata_PropTreeWidget = {
    {
QT_MOC_LITERAL(0, 0, 14), // "PropTreeWidget"
QT_MOC_LITERAL(1, 15, 16), // "handleMousePress"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(4, 50, 4) // "item"

    },
    "PropTreeWidget\0handleMousePress\0\0"
    "QTreeWidgetItem*\0item"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PropTreeWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void PropTreeWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PropTreeWidget *_t = static_cast<PropTreeWidget *>(_o);
        switch (_id) {
        case 0: _t->handleMousePress((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject PropTreeWidget::staticMetaObject = {
    { &QTreeWidget::staticMetaObject, qt_meta_stringdata_PropTreeWidget.data,
      qt_meta_data_PropTreeWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PropTreeWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PropTreeWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PropTreeWidget.stringdata))
        return static_cast<void*>(const_cast< PropTreeWidget*>(this));
    return QTreeWidget::qt_metacast(_clname);
}

int PropTreeWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTreeWidget::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
