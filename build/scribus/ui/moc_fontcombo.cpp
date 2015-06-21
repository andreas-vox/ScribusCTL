/****************************************************************************
** Meta object code from reading C++ file 'fontcombo.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../scribus/ui/fontcombo.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fontcombo.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_FontComboH_t {
    QByteArrayData data[9];
    char stringdata[89];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FontComboH_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FontComboH_t qt_meta_stringdata_FontComboH = {
    {
QT_MOC_LITERAL(0, 0, 10), // "FontComboH"
QT_MOC_LITERAL(1, 11, 12), // "fontSelected"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 14), // "setCurrentFont"
QT_MOC_LITERAL(4, 40, 1), // "f"
QT_MOC_LITERAL(5, 42, 14), // "languageChange"
QT_MOC_LITERAL(6, 57, 14), // "familySelected"
QT_MOC_LITERAL(7, 72, 2), // "id"
QT_MOC_LITERAL(8, 75, 13) // "styleSelected"

    },
    "FontComboH\0fontSelected\0\0setCurrentFont\0"
    "f\0languageChange\0familySelected\0id\0"
    "styleSelected"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FontComboH[] = {

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
       3,    1,   42,    2, 0x0a /* Public */,
       5,    0,   45,    2, 0x0a /* Public */,
       6,    1,   46,    2, 0x09 /* Protected */,
       8,    1,   49,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    7,

       0        // eod
};

void FontComboH::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FontComboH *_t = static_cast<FontComboH *>(_o);
        switch (_id) {
        case 0: _t->fontSelected((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->setCurrentFont((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->languageChange(); break;
        case 3: _t->familySelected((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->styleSelected((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (FontComboH::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FontComboH::fontSelected)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject FontComboH::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_FontComboH.data,
      qt_meta_data_FontComboH,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *FontComboH::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FontComboH::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_FontComboH.stringdata))
        return static_cast<void*>(const_cast< FontComboH*>(this));
    return QWidget::qt_metacast(_clname);
}

int FontComboH::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void FontComboH::fontSelected(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
