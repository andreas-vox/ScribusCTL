/****************************************************************************
** Meta object code from reading C++ file 'picsearchoptions.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../scribus/ui/picsearchoptions.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'picsearchoptions.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_PicSearchOptions_t {
    QByteArrayData data[9];
    char stringdata[126];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PicSearchOptions_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PicSearchOptions_t qt_meta_stringdata_PicSearchOptions = {
    {
QT_MOC_LITERAL(0, 0, 16), // "PicSearchOptions"
QT_MOC_LITERAL(1, 17, 19), // "slotChangeSearchDir"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 13), // "slotSearchPic"
QT_MOC_LITERAL(4, 52, 20), // "slotSearchPicAborted"
QT_MOC_LITERAL(5, 73, 13), // "userCancelled"
QT_MOC_LITERAL(6, 87, 21), // "slotSearchPicFinished"
QT_MOC_LITERAL(7, 109, 7), // "matches"
QT_MOC_LITERAL(8, 117, 8) // "fileName"

    },
    "PicSearchOptions\0slotChangeSearchDir\0"
    "\0slotSearchPic\0slotSearchPicAborted\0"
    "userCancelled\0slotSearchPicFinished\0"
    "matches\0fileName"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PicSearchOptions[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x08 /* Private */,
       3,    0,   35,    2, 0x08 /* Private */,
       4,    1,   36,    2, 0x08 /* Private */,
       6,    2,   39,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::QStringList, QMetaType::QString,    7,    8,

       0        // eod
};

void PicSearchOptions::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PicSearchOptions *_t = static_cast<PicSearchOptions *>(_o);
        switch (_id) {
        case 0: _t->slotChangeSearchDir(); break;
        case 1: _t->slotSearchPic(); break;
        case 2: _t->slotSearchPicAborted((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->slotSearchPicFinished((*reinterpret_cast< const QStringList(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject PicSearchOptions::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_PicSearchOptions.data,
      qt_meta_data_PicSearchOptions,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PicSearchOptions::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PicSearchOptions::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PicSearchOptions.stringdata))
        return static_cast<void*>(const_cast< PicSearchOptions*>(this));
    if (!strcmp(_clname, "Ui::PicSearchOptions"))
        return static_cast< Ui::PicSearchOptions*>(const_cast< PicSearchOptions*>(this));
    return QDialog::qt_metacast(_clname);
}

int PicSearchOptions::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
