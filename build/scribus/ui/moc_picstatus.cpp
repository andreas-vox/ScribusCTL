/****************************************************************************
** Meta object code from reading C++ file 'picstatus.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../scribus/ui/picstatus.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'picstatus.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_PicStatus_t {
    QByteArrayData data[22];
    char stringdata[260];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PicStatus_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PicStatus_t qt_meta_stringdata_PicStatus = {
    {
QT_MOC_LITERAL(0, 0, 9), // "PicStatus"
QT_MOC_LITERAL(1, 10, 10), // "selectPage"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 16), // "selectMasterPage"
QT_MOC_LITERAL(4, 39, 19), // "selectElementByItem"
QT_MOC_LITERAL(5, 59, 9), // "PageItem*"
QT_MOC_LITERAL(6, 69, 11), // "refreshItem"
QT_MOC_LITERAL(7, 81, 10), // "sortByName"
QT_MOC_LITERAL(8, 92, 10), // "sortByPage"
QT_MOC_LITERAL(9, 103, 14), // "slotRightClick"
QT_MOC_LITERAL(10, 118, 13), // "imageSelected"
QT_MOC_LITERAL(11, 132, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(12, 149, 3), // "ite"
QT_MOC_LITERAL(13, 153, 16), // "newImageSelected"
QT_MOC_LITERAL(14, 170, 8), // "PrintPic"
QT_MOC_LITERAL(15, 179, 10), // "visiblePic"
QT_MOC_LITERAL(16, 190, 7), // "GotoPic"
QT_MOC_LITERAL(17, 198, 9), // "SelectPic"
QT_MOC_LITERAL(18, 208, 9), // "SearchPic"
QT_MOC_LITERAL(19, 218, 14), // "doImageEffects"
QT_MOC_LITERAL(20, 233, 14), // "doImageExtProp"
QT_MOC_LITERAL(21, 248, 11) // "doEditImage"

    },
    "PicStatus\0selectPage\0\0selectMasterPage\0"
    "selectElementByItem\0PageItem*\0refreshItem\0"
    "sortByName\0sortByPage\0slotRightClick\0"
    "imageSelected\0QListWidgetItem*\0ite\0"
    "newImageSelected\0PrintPic\0visiblePic\0"
    "GotoPic\0SelectPic\0SearchPic\0doImageEffects\0"
    "doImageExtProp\0doEditImage"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PicStatus[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   99,    2, 0x06 /* Public */,
       3,    1,  102,    2, 0x06 /* Public */,
       4,    3,  105,    2, 0x06 /* Public */,
       6,    1,  112,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,  115,    2, 0x08 /* Private */,
       8,    0,  116,    2, 0x08 /* Private */,
       9,    0,  117,    2, 0x08 /* Private */,
      10,    1,  118,    2, 0x08 /* Private */,
      13,    0,  121,    2, 0x08 /* Private */,
      14,    0,  122,    2, 0x08 /* Private */,
      15,    0,  123,    2, 0x08 /* Private */,
      16,    0,  124,    2, 0x08 /* Private */,
      17,    0,  125,    2, 0x08 /* Private */,
      18,    0,  126,    2, 0x08 /* Private */,
      19,    0,  127,    2, 0x08 /* Private */,
      20,    0,  128,    2, 0x08 /* Private */,
      21,    0,  129,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, 0x80000000 | 5, QMetaType::Bool, QMetaType::Int,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 5,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void PicStatus::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PicStatus *_t = static_cast<PicStatus *>(_o);
        switch (_id) {
        case 0: _t->selectPage((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->selectMasterPage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->selectElementByItem((*reinterpret_cast< PageItem*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 3: _t->refreshItem((*reinterpret_cast< PageItem*(*)>(_a[1]))); break;
        case 4: _t->sortByName(); break;
        case 5: _t->sortByPage(); break;
        case 6: _t->slotRightClick(); break;
        case 7: _t->imageSelected((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 8: _t->newImageSelected(); break;
        case 9: _t->PrintPic(); break;
        case 10: _t->visiblePic(); break;
        case 11: _t->GotoPic(); break;
        case 12: _t->SelectPic(); break;
        case 13: _t->SearchPic(); break;
        case 14: _t->doImageEffects(); break;
        case 15: _t->doImageExtProp(); break;
        case 16: _t->doEditImage(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (PicStatus::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PicStatus::selectPage)) {
                *result = 0;
            }
        }
        {
            typedef void (PicStatus::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PicStatus::selectMasterPage)) {
                *result = 1;
            }
        }
        {
            typedef void (PicStatus::*_t)(PageItem * , bool , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PicStatus::selectElementByItem)) {
                *result = 2;
            }
        }
        {
            typedef void (PicStatus::*_t)(PageItem * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PicStatus::refreshItem)) {
                *result = 3;
            }
        }
    }
}

const QMetaObject PicStatus::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_PicStatus.data,
      qt_meta_data_PicStatus,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PicStatus::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PicStatus::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PicStatus.stringdata))
        return static_cast<void*>(const_cast< PicStatus*>(this));
    if (!strcmp(_clname, "Ui::PicStatus"))
        return static_cast< Ui::PicStatus*>(const_cast< PicStatus*>(this));
    return QDialog::qt_metacast(_clname);
}

int PicStatus::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 17;
    }
    return _id;
}

// SIGNAL 0
void PicStatus::selectPage(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PicStatus::selectMasterPage(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void PicStatus::selectElementByItem(PageItem * _t1, bool _t2, int _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void PicStatus::refreshItem(PageItem * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
