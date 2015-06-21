/****************************************************************************
** Meta object code from reading C++ file 'picsearch.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../scribus/ui/picsearch.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'picsearch.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_PicSearch_t {
    QByteArrayData data[8];
    char stringdata[104];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PicSearch_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PicSearch_t qt_meta_stringdata_PicSearch = {
    {
QT_MOC_LITERAL(0, 0, 9), // "PicSearch"
QT_MOC_LITERAL(1, 10, 13), // "rowPicChanged"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 23), // "previewCheckBox_clicked"
QT_MOC_LITERAL(4, 49, 21), // "foundFilesBox_clicked"
QT_MOC_LITERAL(5, 71, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(6, 88, 1), // "c"
QT_MOC_LITERAL(7, 90, 13) // "createPreview"

    },
    "PicSearch\0rowPicChanged\0\0"
    "previewCheckBox_clicked\0foundFilesBox_clicked\0"
    "QListWidgetItem*\0c\0createPreview"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PicSearch[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   37,    2, 0x08 /* Private */,
       4,    1,   38,    2, 0x08 /* Private */,
       7,    0,   41,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::UInt,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,

       0        // eod
};

void PicSearch::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PicSearch *_t = static_cast<PicSearch *>(_o);
        switch (_id) {
        case 0: _t->rowPicChanged((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 1: _t->previewCheckBox_clicked(); break;
        case 2: _t->foundFilesBox_clicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 3: _t->createPreview(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (PicSearch::*_t)(unsigned int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PicSearch::rowPicChanged)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject PicSearch::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_PicSearch.data,
      qt_meta_data_PicSearch,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PicSearch::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PicSearch::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PicSearch.stringdata))
        return static_cast<void*>(const_cast< PicSearch*>(this));
    if (!strcmp(_clname, "Ui::PicSearch"))
        return static_cast< Ui::PicSearch*>(const_cast< PicSearch*>(this));
    return QDialog::qt_metacast(_clname);
}

int PicSearch::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void PicSearch::rowPicChanged(unsigned int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
