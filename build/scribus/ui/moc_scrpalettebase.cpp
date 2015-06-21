/****************************************************************************
** Meta object code from reading C++ file 'scrpalettebase.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../scribus/ui/scrpalettebase.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'scrpalettebase.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ScrPaletteBase_t {
    QByteArrayData data[9];
    char stringdata[88];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ScrPaletteBase_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ScrPaletteBase_t qt_meta_stringdata_ScrPaletteBase = {
    {
QT_MOC_LITERAL(0, 0, 14), // "ScrPaletteBase"
QT_MOC_LITERAL(1, 15, 12), // "paletteShown"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 15), // "setPaletteShown"
QT_MOC_LITERAL(4, 45, 11), // "setFontSize"
QT_MOC_LITERAL(5, 57, 4), // "exec"
QT_MOC_LITERAL(6, 62, 8), // "QWidget*"
QT_MOC_LITERAL(7, 71, 9), // "newParent"
QT_MOC_LITERAL(8, 81, 6) // "reject"

    },
    "ScrPaletteBase\0paletteShown\0\0"
    "setPaletteShown\0setFontSize\0exec\0"
    "QWidget*\0newParent\0reject"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ScrPaletteBase[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   47,    2, 0x0a /* Public */,
       4,    0,   50,    2, 0x0a /* Public */,
       5,    0,   51,    2, 0x0a /* Public */,
       5,    1,   52,    2, 0x0a /* Public */,
       8,    0,   55,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Int,
    QMetaType::Int, 0x80000000 | 6,    7,
    QMetaType::Void,

       0        // eod
};

void ScrPaletteBase::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ScrPaletteBase *_t = static_cast<ScrPaletteBase *>(_o);
        switch (_id) {
        case 0: _t->paletteShown((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->setPaletteShown((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->setFontSize(); break;
        case 3: { int _r = _t->exec();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 4: { int _r = _t->exec((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 5: _t->reject(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWidget* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ScrPaletteBase::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ScrPaletteBase::paletteShown)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject ScrPaletteBase::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ScrPaletteBase.data,
      qt_meta_data_ScrPaletteBase,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ScrPaletteBase::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ScrPaletteBase::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ScrPaletteBase.stringdata))
        return static_cast<void*>(const_cast< ScrPaletteBase*>(this));
    return QDialog::qt_metacast(_clname);
}

int ScrPaletteBase::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
void ScrPaletteBase::paletteShown(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
