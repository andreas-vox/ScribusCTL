/****************************************************************************
** Meta object code from reading C++ file 'gradientpreview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../scribus/ui/gradientpreview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gradientpreview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_GradientPreview_t {
    QByteArrayData data[10];
    char stringdata[110];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GradientPreview_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GradientPreview_t qt_meta_stringdata_GradientPreview = {
    {
QT_MOC_LITERAL(0, 0, 15), // "GradientPreview"
QT_MOC_LITERAL(1, 16, 13), // "selectedColor"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 12), // "selectedStop"
QT_MOC_LITERAL(4, 44, 11), // "VColorStop*"
QT_MOC_LITERAL(5, 56, 9), // "currTrans"
QT_MOC_LITERAL(6, 66, 8), // "currStep"
QT_MOC_LITERAL(7, 75, 15), // "gradientChanged"
QT_MOC_LITERAL(8, 91, 7), // "addStop"
QT_MOC_LITERAL(9, 99, 10) // "removeStop"

    },
    "GradientPreview\0selectedColor\0\0"
    "selectedStop\0VColorStop*\0currTrans\0"
    "currStep\0gradientChanged\0addStop\0"
    "removeStop"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GradientPreview[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   49,    2, 0x06 /* Public */,
       3,    1,   54,    2, 0x06 /* Public */,
       5,    1,   57,    2, 0x06 /* Public */,
       6,    1,   60,    2, 0x06 /* Public */,
       7,    0,   63,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   64,    2, 0x08 /* Private */,
       9,    0,   65,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    2,    2,
    QMetaType::Void, 0x80000000 | 4,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void GradientPreview::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        GradientPreview *_t = static_cast<GradientPreview *>(_o);
        switch (_id) {
        case 0: _t->selectedColor((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->selectedStop((*reinterpret_cast< VColorStop*(*)>(_a[1]))); break;
        case 2: _t->currTrans((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->currStep((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: _t->gradientChanged(); break;
        case 5: _t->addStop(); break;
        case 6: _t->removeStop(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (GradientPreview::*_t)(QString , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GradientPreview::selectedColor)) {
                *result = 0;
            }
        }
        {
            typedef void (GradientPreview::*_t)(VColorStop * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GradientPreview::selectedStop)) {
                *result = 1;
            }
        }
        {
            typedef void (GradientPreview::*_t)(double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GradientPreview::currTrans)) {
                *result = 2;
            }
        }
        {
            typedef void (GradientPreview::*_t)(double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GradientPreview::currStep)) {
                *result = 3;
            }
        }
        {
            typedef void (GradientPreview::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GradientPreview::gradientChanged)) {
                *result = 4;
            }
        }
    }
}

const QMetaObject GradientPreview::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_GradientPreview.data,
      qt_meta_data_GradientPreview,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *GradientPreview::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GradientPreview::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_GradientPreview.stringdata))
        return static_cast<void*>(const_cast< GradientPreview*>(this));
    return QFrame::qt_metacast(_clname);
}

int GradientPreview::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void GradientPreview::selectedColor(QString _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void GradientPreview::selectedStop(VColorStop * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void GradientPreview::currTrans(double _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void GradientPreview::currStep(double _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void GradientPreview::gradientChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
