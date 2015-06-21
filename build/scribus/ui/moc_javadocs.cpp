/****************************************************************************
** Meta object code from reading C++ file 'javadocs.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../scribus/ui/javadocs.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'javadocs.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_JavaDocs_t {
    QByteArrayData data[7];
    char stringdata[70];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_JavaDocs_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_JavaDocs_t qt_meta_stringdata_JavaDocs = {
    {
QT_MOC_LITERAL(0, 0, 8), // "JavaDocs"
QT_MOC_LITERAL(1, 9, 10), // "docChanged"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 7), // "slotAdd"
QT_MOC_LITERAL(4, 29, 8), // "slotEdit"
QT_MOC_LITERAL(5, 38, 10), // "slotDelete"
QT_MOC_LITERAL(6, 49, 20) // "slotSelectionChanged"

    },
    "JavaDocs\0docChanged\0\0slotAdd\0slotEdit\0"
    "slotDelete\0slotSelectionChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_JavaDocs[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   42,    2, 0x08 /* Private */,
       4,    0,   43,    2, 0x08 /* Private */,
       5,    0,   44,    2, 0x08 /* Private */,
       6,    0,   45,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void JavaDocs::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        JavaDocs *_t = static_cast<JavaDocs *>(_o);
        switch (_id) {
        case 0: _t->docChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->slotAdd(); break;
        case 2: _t->slotEdit(); break;
        case 3: _t->slotDelete(); break;
        case 4: _t->slotSelectionChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (JavaDocs::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&JavaDocs::docChanged)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject JavaDocs::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_JavaDocs.data,
      qt_meta_data_JavaDocs,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *JavaDocs::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *JavaDocs::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_JavaDocs.stringdata))
        return static_cast<void*>(const_cast< JavaDocs*>(this));
    return QDialog::qt_metacast(_clname);
}

int JavaDocs::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
void JavaDocs::docChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
