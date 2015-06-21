/****************************************************************************
** Meta object code from reading C++ file 'weldedit.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../scribus/ui/weldedit.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'weldedit.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_WeldEditDialog_t {
    QByteArrayData data[6];
    char stringdata[67];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WeldEditDialog_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WeldEditDialog_t qt_meta_stringdata_WeldEditDialog = {
    {
QT_MOC_LITERAL(0, 0, 14), // "WeldEditDialog"
QT_MOC_LITERAL(1, 15, 12), // "modeMoveWeld"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 14), // "modeMoveObject"
QT_MOC_LITERAL(4, 44, 7), // "endEdit"
QT_MOC_LITERAL(5, 52, 14) // "languageChange"

    },
    "WeldEditDialog\0modeMoveWeld\0\0"
    "modeMoveObject\0endEdit\0languageChange"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WeldEditDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,
       3,    0,   35,    2, 0x06 /* Public */,
       4,    0,   36,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   37,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void WeldEditDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WeldEditDialog *_t = static_cast<WeldEditDialog *>(_o);
        switch (_id) {
        case 0: _t->modeMoveWeld(); break;
        case 1: _t->modeMoveObject(); break;
        case 2: _t->endEdit(); break;
        case 3: _t->languageChange(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (WeldEditDialog::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WeldEditDialog::modeMoveWeld)) {
                *result = 0;
            }
        }
        {
            typedef void (WeldEditDialog::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WeldEditDialog::modeMoveObject)) {
                *result = 1;
            }
        }
        {
            typedef void (WeldEditDialog::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WeldEditDialog::endEdit)) {
                *result = 2;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject WeldEditDialog::staticMetaObject = {
    { &ScrPaletteBase::staticMetaObject, qt_meta_stringdata_WeldEditDialog.data,
      qt_meta_data_WeldEditDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *WeldEditDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WeldEditDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_WeldEditDialog.stringdata))
        return static_cast<void*>(const_cast< WeldEditDialog*>(this));
    if (!strcmp(_clname, "Ui::weldEditBase"))
        return static_cast< Ui::weldEditBase*>(const_cast< WeldEditDialog*>(this));
    return ScrPaletteBase::qt_metacast(_clname);
}

int WeldEditDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ScrPaletteBase::qt_metacall(_c, _id, _a);
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
void WeldEditDialog::modeMoveWeld()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void WeldEditDialog::modeMoveObject()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void WeldEditDialog::endEdit()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
