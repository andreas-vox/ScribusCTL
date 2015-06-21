/****************************************************************************
** Meta object code from reading C++ file 'nftwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../scribus/ui/nftwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'nftwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_nftwidget_t {
    QByteArrayData data[10];
    char stringdata[121];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_nftwidget_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_nftwidget_t qt_meta_stringdata_nftwidget = {
    {
QT_MOC_LITERAL(0, 0, 9), // "nftwidget"
QT_MOC_LITERAL(1, 10, 7), // "leaveOK"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 15), // "ButtonBoxEnable"
QT_MOC_LITERAL(4, 35, 7), // "setInfo"
QT_MOC_LITERAL(5, 43, 13), // "setThumbnails"
QT_MOC_LITERAL(6, 57, 26), // "getCurrentDocumentTemplate"
QT_MOC_LITERAL(7, 84, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(8, 101, 4), // "item"
QT_MOC_LITERAL(9, 106, 14) // "removeTemplate"

    },
    "nftwidget\0leaveOK\0\0ButtonBoxEnable\0"
    "setInfo\0setThumbnails\0getCurrentDocumentTemplate\0"
    "QListWidgetItem*\0item\0removeTemplate"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_nftwidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    1,   45,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   48,    2, 0x08 /* Private */,
       5,    0,   49,    2, 0x08 /* Private */,
       6,    1,   50,    2, 0x08 /* Private */,
       9,    0,   53,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void,

       0        // eod
};

void nftwidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        nftwidget *_t = static_cast<nftwidget *>(_o);
        switch (_id) {
        case 0: _t->leaveOK(); break;
        case 1: _t->ButtonBoxEnable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->setInfo(); break;
        case 3: _t->setThumbnails(); break;
        case 4: _t->getCurrentDocumentTemplate((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 5: _t->removeTemplate(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (nftwidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&nftwidget::leaveOK)) {
                *result = 0;
            }
        }
        {
            typedef void (nftwidget::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&nftwidget::ButtonBoxEnable)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject nftwidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_nftwidget.data,
      qt_meta_data_nftwidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *nftwidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *nftwidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_nftwidget.stringdata))
        return static_cast<void*>(const_cast< nftwidget*>(this));
    if (!strcmp(_clname, "Ui::nftwidget"))
        return static_cast< Ui::nftwidget*>(const_cast< nftwidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int nftwidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void nftwidget::leaveOK()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void nftwidget::ButtonBoxEnable(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
