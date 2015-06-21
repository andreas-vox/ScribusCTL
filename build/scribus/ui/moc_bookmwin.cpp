/****************************************************************************
** Meta object code from reading C++ file 'bookmwin.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../scribus/ui/bookmwin.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'bookmwin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_BookMView_t {
    QByteArrayData data[14];
    char stringdata[135];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BookMView_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BookMView_t qt_meta_stringdata_BookMView = {
    {
QT_MOC_LITERAL(0, 0, 9), // "BookMView"
QT_MOC_LITERAL(1, 10, 9), // "MarkMoved"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 13), // "SelectElement"
QT_MOC_LITERAL(4, 35, 9), // "PageItem*"
QT_MOC_LITERAL(5, 45, 7), // "changed"
QT_MOC_LITERAL(6, 53, 11), // "AddPageItem"
QT_MOC_LITERAL(7, 65, 3), // "ite"
QT_MOC_LITERAL(8, 69, 10), // "ChangeText"
QT_MOC_LITERAL(9, 80, 8), // "currItem"
QT_MOC_LITERAL(10, 89, 11), // "setPageItem"
QT_MOC_LITERAL(11, 101, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(12, 118, 7), // "current"
QT_MOC_LITERAL(13, 126, 8) // "previous"

    },
    "BookMView\0MarkMoved\0\0SelectElement\0"
    "PageItem*\0changed\0AddPageItem\0ite\0"
    "ChangeText\0currItem\0setPageItem\0"
    "QTreeWidgetItem*\0current\0previous"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BookMView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    2,   45,    2, 0x06 /* Public */,
       5,    0,   50,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   51,    2, 0x0a /* Public */,
       8,    1,   54,    2, 0x0a /* Public */,
      10,    2,   57,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4, QMetaType::Bool,    2,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4,    7,
    QMetaType::Void, 0x80000000 | 4,    9,
    QMetaType::Void, 0x80000000 | 11, 0x80000000 | 11,   12,   13,

       0        // eod
};

void BookMView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        BookMView *_t = static_cast<BookMView *>(_o);
        switch (_id) {
        case 0: _t->MarkMoved(); break;
        case 1: _t->SelectElement((*reinterpret_cast< PageItem*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 2: _t->changed(); break;
        case 3: _t->AddPageItem((*reinterpret_cast< PageItem*(*)>(_a[1]))); break;
        case 4: _t->ChangeText((*reinterpret_cast< PageItem*(*)>(_a[1]))); break;
        case 5: _t->setPageItem((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QTreeWidgetItem*(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PageItem* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PageItem* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PageItem* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (BookMView::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BookMView::MarkMoved)) {
                *result = 0;
            }
        }
        {
            typedef void (BookMView::*_t)(PageItem * , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BookMView::SelectElement)) {
                *result = 1;
            }
        }
        {
            typedef void (BookMView::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BookMView::changed)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject BookMView::staticMetaObject = {
    { &QTreeWidget::staticMetaObject, qt_meta_stringdata_BookMView.data,
      qt_meta_data_BookMView,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *BookMView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BookMView::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_BookMView.stringdata))
        return static_cast<void*>(const_cast< BookMView*>(this));
    return QTreeWidget::qt_metacast(_clname);
}

int BookMView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTreeWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void BookMView::MarkMoved()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void BookMView::SelectElement(PageItem * _t1, bool _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void BookMView::changed()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
