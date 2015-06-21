/****************************************************************************
** Meta object code from reading C++ file 'pagelayout.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../scribus/ui/pagelayout.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pagelayout.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_PageListWidget_t {
    QByteArrayData data[1];
    char stringdata[15];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PageListWidget_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PageListWidget_t qt_meta_stringdata_PageListWidget = {
    {
QT_MOC_LITERAL(0, 0, 14) // "PageListWidget"

    },
    "PageListWidget"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PageListWidget[] = {

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

void PageListWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject PageListWidget::staticMetaObject = {
    { &QListWidget::staticMetaObject, qt_meta_stringdata_PageListWidget.data,
      qt_meta_data_PageListWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PageListWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PageListWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PageListWidget.stringdata))
        return static_cast<void*>(const_cast< PageListWidget*>(this));
    return QListWidget::qt_metacast(_clname);
}

int PageListWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QListWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_PageLayouts_t {
    QByteArrayData data[8];
    char stringdata[94];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PageLayouts_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PageLayouts_t qt_meta_stringdata_PageLayouts = {
    {
QT_MOC_LITERAL(0, 0, 11), // "PageLayouts"
QT_MOC_LITERAL(1, 12, 14), // "selectedLayout"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 17), // "selectedFirstPage"
QT_MOC_LITERAL(4, 46, 12), // "itemSelected"
QT_MOC_LITERAL(5, 59, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(6, 76, 2), // "ic"
QT_MOC_LITERAL(7, 79, 14) // "languageChange"

    },
    "PageLayouts\0selectedLayout\0\0"
    "selectedFirstPage\0itemSelected\0"
    "QListWidgetItem*\0ic\0languageChange"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PageLayouts[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       3,    1,   42,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   45,    2, 0x0a /* Public */,
       4,    1,   48,    2, 0x0a /* Public */,
       7,    0,   51,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void,

       0        // eod
};

void PageLayouts::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PageLayouts *_t = static_cast<PageLayouts *>(_o);
        switch (_id) {
        case 0: _t->selectedLayout((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->selectedFirstPage((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->itemSelected((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 3: _t->itemSelected((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->languageChange(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (PageLayouts::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PageLayouts::selectedLayout)) {
                *result = 0;
            }
        }
        {
            typedef void (PageLayouts::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PageLayouts::selectedFirstPage)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject PageLayouts::staticMetaObject = {
    { &QGroupBox::staticMetaObject, qt_meta_stringdata_PageLayouts.data,
      qt_meta_data_PageLayouts,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PageLayouts::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PageLayouts::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PageLayouts.stringdata))
        return static_cast<void*>(const_cast< PageLayouts*>(this));
    return QGroupBox::qt_metacast(_clname);
}

int PageLayouts::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGroupBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void PageLayouts::selectedLayout(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PageLayouts::selectedFirstPage(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
