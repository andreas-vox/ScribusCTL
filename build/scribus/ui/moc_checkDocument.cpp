/****************************************************************************
** Meta object code from reading C++ file 'checkDocument.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../scribus/ui/checkDocument.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'checkDocument.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CheckDocument_t {
    QByteArrayData data[16];
    char stringdata[196];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CheckDocument_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CheckDocument_t qt_meta_stringdata_CheckDocument = {
    {
QT_MOC_LITERAL(0, 0, 13), // "CheckDocument"
QT_MOC_LITERAL(1, 14, 13), // "selectElement"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 9), // "PageItem*"
QT_MOC_LITERAL(4, 39, 19), // "selectElementByItem"
QT_MOC_LITERAL(5, 59, 10), // "selectPage"
QT_MOC_LITERAL(6, 70, 16), // "selectMasterPage"
QT_MOC_LITERAL(7, 87, 23), // "selectMasterPageElement"
QT_MOC_LITERAL(8, 111, 15), // "ignoreAllErrors"
QT_MOC_LITERAL(9, 127, 10), // "slotSelect"
QT_MOC_LITERAL(10, 138, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(11, 155, 3), // "ite"
QT_MOC_LITERAL(12, 159, 8), // "doReScan"
QT_MOC_LITERAL(13, 168, 7), // "newScan"
QT_MOC_LITERAL(14, 176, 4), // "name"
QT_MOC_LITERAL(15, 181, 14) // "languageChange"

    },
    "CheckDocument\0selectElement\0\0PageItem*\0"
    "selectElementByItem\0selectPage\0"
    "selectMasterPage\0selectMasterPageElement\0"
    "ignoreAllErrors\0slotSelect\0QTreeWidgetItem*\0"
    "ite\0doReScan\0newScan\0name\0languageChange"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CheckDocument[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   64,    2, 0x06 /* Public */,
       4,    2,   71,    2, 0x06 /* Public */,
       5,    1,   76,    2, 0x06 /* Public */,
       6,    1,   79,    2, 0x06 /* Public */,
       7,    2,   82,    2, 0x06 /* Public */,
       8,    0,   87,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    1,   88,    2, 0x0a /* Public */,
      12,    0,   91,    2, 0x0a /* Public */,
      13,    1,   92,    2, 0x0a /* Public */,
      15,    0,   95,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Bool, QMetaType::Int,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Bool,    2,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    2,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void,

       0        // eod
};

void CheckDocument::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CheckDocument *_t = static_cast<CheckDocument *>(_o);
        switch (_id) {
        case 0: _t->selectElement((*reinterpret_cast< PageItem*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 1: _t->selectElementByItem((*reinterpret_cast< PageItem*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 2: _t->selectPage((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->selectMasterPage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->selectMasterPageElement((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: _t->ignoreAllErrors(); break;
        case 6: _t->slotSelect((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 7: _t->doReScan(); break;
        case 8: _t->newScan((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->languageChange(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PageItem* >(); break;
            }
            break;
        case 1:
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
            typedef void (CheckDocument::*_t)(PageItem * , bool , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CheckDocument::selectElement)) {
                *result = 0;
            }
        }
        {
            typedef void (CheckDocument::*_t)(PageItem * , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CheckDocument::selectElementByItem)) {
                *result = 1;
            }
        }
        {
            typedef void (CheckDocument::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CheckDocument::selectPage)) {
                *result = 2;
            }
        }
        {
            typedef void (CheckDocument::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CheckDocument::selectMasterPage)) {
                *result = 3;
            }
        }
        {
            typedef void (CheckDocument::*_t)(QString , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CheckDocument::selectMasterPageElement)) {
                *result = 4;
            }
        }
        {
            typedef void (CheckDocument::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CheckDocument::ignoreAllErrors)) {
                *result = 5;
            }
        }
    }
}

const QMetaObject CheckDocument::staticMetaObject = {
    { &ScrPaletteBase::staticMetaObject, qt_meta_stringdata_CheckDocument.data,
      qt_meta_data_CheckDocument,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CheckDocument::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CheckDocument::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CheckDocument.stringdata))
        return static_cast<void*>(const_cast< CheckDocument*>(this));
    return ScrPaletteBase::qt_metacast(_clname);
}

int CheckDocument::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ScrPaletteBase::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void CheckDocument::selectElement(PageItem * _t1, bool _t2, int _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CheckDocument::selectElementByItem(PageItem * _t1, bool _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void CheckDocument::selectPage(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void CheckDocument::selectMasterPage(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void CheckDocument::selectMasterPageElement(QString _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void CheckDocument::ignoreAllErrors()
{
    QMetaObject::activate(this, &staticMetaObject, 5, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
