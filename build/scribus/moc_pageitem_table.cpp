/****************************************************************************
** Meta object code from reading C++ file 'pageitem_table.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../scribus/pageitem_table.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pageitem_table.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_PageItem_Table_t {
    QByteArrayData data[17];
    char stringdata[192];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PageItem_Table_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PageItem_Table_t qt_meta_stringdata_PageItem_Table = {
    {
QT_MOC_LITERAL(0, 0, 14), // "PageItem_Table"
QT_MOC_LITERAL(1, 15, 7), // "changed"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 16), // "selectionChanged"
QT_MOC_LITERAL(4, 41, 18), // "handleStyleChanged"
QT_MOC_LITERAL(5, 60, 4), // "rows"
QT_MOC_LITERAL(6, 65, 7), // "columns"
QT_MOC_LITERAL(7, 73, 9), // "fillColor"
QT_MOC_LITERAL(8, 83, 10), // "leftBorder"
QT_MOC_LITERAL(9, 94, 11), // "TableBorder"
QT_MOC_LITERAL(10, 106, 11), // "rightBorder"
QT_MOC_LITERAL(11, 118, 9), // "topBorder"
QT_MOC_LITERAL(12, 128, 12), // "bottomBorder"
QT_MOC_LITERAL(13, 141, 5), // "style"
QT_MOC_LITERAL(14, 147, 14), // "ResizeStrategy"
QT_MOC_LITERAL(15, 162, 13), // "MoveFollowing"
QT_MOC_LITERAL(16, 176, 15) // "ResizeFollowing"

    },
    "PageItem_Table\0changed\0\0selectionChanged\0"
    "handleStyleChanged\0rows\0columns\0"
    "fillColor\0leftBorder\0TableBorder\0"
    "rightBorder\0topBorder\0bottomBorder\0"
    "style\0ResizeStrategy\0MoveFollowing\0"
    "ResizeFollowing"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PageItem_Table[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       8,   32, // properties
       1,   64, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,
       3,    0,   30,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   31,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

 // properties: name, type, flags
       5, QMetaType::Int, 0x00495001,
       6, QMetaType::Int, 0x00495001,
       7, QMetaType::QString, 0x00495107,
       8, 0x80000000 | 9, 0x0049510f,
      10, 0x80000000 | 9, 0x0049510f,
      11, 0x80000000 | 9, 0x0049510f,
      12, 0x80000000 | 9, 0x0049510f,
      13, QMetaType::QString, 0x00495107,

 // properties: notify_signal_id
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,

 // enums: name, flags, count, data
      14, 0x0,    2,   68,

 // enum data: key, value
      15, uint(PageItem_Table::MoveFollowing),
      16, uint(PageItem_Table::ResizeFollowing),

       0        // eod
};

void PageItem_Table::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PageItem_Table *_t = static_cast<PageItem_Table *>(_o);
        switch (_id) {
        case 0: _t->changed(); break;
        case 1: _t->selectionChanged(); break;
        case 2: _t->handleStyleChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (PageItem_Table::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PageItem_Table::changed)) {
                *result = 0;
            }
        }
        {
            typedef void (PageItem_Table::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PageItem_Table::selectionChanged)) {
                *result = 1;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject PageItem_Table::staticMetaObject = {
    { &PageItem::staticMetaObject, qt_meta_stringdata_PageItem_Table.data,
      qt_meta_data_PageItem_Table,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PageItem_Table::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PageItem_Table::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PageItem_Table.stringdata))
        return static_cast<void*>(const_cast< PageItem_Table*>(this));
    return PageItem::qt_metacast(_clname);
}

int PageItem_Table::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PageItem::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = rows(); break;
        case 1: *reinterpret_cast< int*>(_v) = columns(); break;
        case 2: *reinterpret_cast< QString*>(_v) = fillColor(); break;
        case 3: *reinterpret_cast< TableBorder*>(_v) = leftBorder(); break;
        case 4: *reinterpret_cast< TableBorder*>(_v) = rightBorder(); break;
        case 5: *reinterpret_cast< TableBorder*>(_v) = topBorder(); break;
        case 6: *reinterpret_cast< TableBorder*>(_v) = bottomBorder(); break;
        case 7: *reinterpret_cast< QString*>(_v) = style(); break;
        default: break;
        }
        _id -= 8;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 2: setFillColor(*reinterpret_cast< QString*>(_v)); break;
        case 3: setLeftBorder(*reinterpret_cast< TableBorder*>(_v)); break;
        case 4: setRightBorder(*reinterpret_cast< TableBorder*>(_v)); break;
        case 5: setTopBorder(*reinterpret_cast< TableBorder*>(_v)); break;
        case 6: setBottomBorder(*reinterpret_cast< TableBorder*>(_v)); break;
        case 7: setStyle(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
        _id -= 8;
    } else if (_c == QMetaObject::ResetProperty) {
        switch (_id) {
        case 2: unsetFillColor(); break;
        case 3: unsetLeftBorder(); break;
        case 4: unsetRightBorder(); break;
        case 5: unsetTopBorder(); break;
        case 6: unsetBottomBorder(); break;
        case 7: unsetStyle(); break;
        default: break;
        }
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 8;
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void PageItem_Table::changed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void PageItem_Table::selectionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
