/****************************************************************************
** Meta object code from reading C++ file 'aboutplugins.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../scribus/ui/aboutplugins.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'aboutplugins.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_AboutPlugins_t {
    QByteArrayData data[6];
    char stringdata[63];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AboutPlugins_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AboutPlugins_t qt_meta_stringdata_AboutPlugins = {
    {
QT_MOC_LITERAL(0, 0, 12), // "AboutPlugins"
QT_MOC_LITERAL(1, 13, 13), // "displayPlugin"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(4, 45, 8), // "currItem"
QT_MOC_LITERAL(5, 54, 8) // "prevItem"

    },
    "AboutPlugins\0displayPlugin\0\0"
    "QListWidgetItem*\0currItem\0prevItem"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AboutPlugins[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,    4,    5,

       0        // eod
};

void AboutPlugins::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AboutPlugins *_t = static_cast<AboutPlugins *>(_o);
        switch (_id) {
        case 0: _t->displayPlugin((*reinterpret_cast< QListWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QListWidgetItem*(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject AboutPlugins::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_AboutPlugins.data,
      qt_meta_data_AboutPlugins,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *AboutPlugins::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AboutPlugins::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_AboutPlugins.stringdata))
        return static_cast<void*>(const_cast< AboutPlugins*>(this));
    if (!strcmp(_clname, "Ui::AboutPlugins"))
        return static_cast< Ui::AboutPlugins*>(const_cast< AboutPlugins*>(this));
    return QDialog::qt_metacast(_clname);
}

int AboutPlugins::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
