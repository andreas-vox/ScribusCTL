/****************************************************************************
** Meta object code from reading C++ file 'autoformbuttongroup.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../scribus/ui/autoformbuttongroup.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'autoformbuttongroup.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_AutoformButtonGroup_t {
    QByteArrayData data[8];
    char stringdata[75];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AutoformButtonGroup_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AutoformButtonGroup_t qt_meta_stringdata_AutoformButtonGroup = {
    {
QT_MOC_LITERAL(0, 0, 19), // "AutoformButtonGroup"
QT_MOC_LITERAL(1, 20, 7), // "FormSel"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 6), // "qreal*"
QT_MOC_LITERAL(4, 36, 13), // "buttonClicked"
QT_MOC_LITERAL(5, 50, 7), // "selForm"
QT_MOC_LITERAL(6, 58, 1), // "a"
QT_MOC_LITERAL(7, 60, 14) // "languageChange"

    },
    "AutoformButtonGroup\0FormSel\0\0qreal*\0"
    "buttonClicked\0selForm\0a\0languageChange"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AutoformButtonGroup[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   34,    2, 0x06 /* Public */,
       4,    1,   41,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   44,    2, 0x0a /* Public */,
       7,    0,   47,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int, 0x80000000 | 3,    2,    2,    2,
    QMetaType::Void, QMetaType::Int,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void,

       0        // eod
};

void AutoformButtonGroup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AutoformButtonGroup *_t = static_cast<AutoformButtonGroup *>(_o);
        switch (_id) {
        case 0: _t->FormSel((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< qreal*(*)>(_a[3]))); break;
        case 1: _t->buttonClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->selForm((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->languageChange(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (AutoformButtonGroup::*_t)(int , int , qreal * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AutoformButtonGroup::FormSel)) {
                *result = 0;
            }
        }
        {
            typedef void (AutoformButtonGroup::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AutoformButtonGroup::buttonClicked)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject AutoformButtonGroup::staticMetaObject = {
    { &QMenu::staticMetaObject, qt_meta_stringdata_AutoformButtonGroup.data,
      qt_meta_data_AutoformButtonGroup,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *AutoformButtonGroup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AutoformButtonGroup::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_AutoformButtonGroup.stringdata))
        return static_cast<void*>(const_cast< AutoformButtonGroup*>(this));
    return QMenu::qt_metacast(_clname);
}

int AutoformButtonGroup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMenu::qt_metacall(_c, _id, _a);
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
void AutoformButtonGroup::FormSel(int _t1, int _t2, qreal * _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AutoformButtonGroup::buttonClicked(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
