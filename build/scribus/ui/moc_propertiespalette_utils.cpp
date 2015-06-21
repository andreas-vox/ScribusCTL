/****************************************************************************
** Meta object code from reading C++ file 'propertiespalette_utils.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../scribus/ui/propertiespalette_utils.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'propertiespalette_utils.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_NameWidget_t {
    QByteArrayData data[3];
    char stringdata[19];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_NameWidget_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_NameWidget_t qt_meta_stringdata_NameWidget = {
    {
QT_MOC_LITERAL(0, 0, 10), // "NameWidget"
QT_MOC_LITERAL(1, 11, 6), // "Leaved"
QT_MOC_LITERAL(2, 18, 0) // ""

    },
    "NameWidget\0Leaved\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NameWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

       0        // eod
};

void NameWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        NameWidget *_t = static_cast<NameWidget *>(_o);
        switch (_id) {
        case 0: _t->Leaved(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (NameWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&NameWidget::Leaved)) {
                *result = 0;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject NameWidget::staticMetaObject = {
    { &QLineEdit::staticMetaObject, qt_meta_stringdata_NameWidget.data,
      qt_meta_data_NameWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *NameWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NameWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_NameWidget.stringdata))
        return static_cast<void*>(const_cast< NameWidget*>(this));
    return QLineEdit::qt_metacast(_clname);
}

int NameWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLineEdit::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void NameWidget::Leaved()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
struct qt_meta_stringdata_UserActionSniffer_t {
    QByteArrayData data[4];
    char stringdata[41];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UserActionSniffer_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UserActionSniffer_t qt_meta_stringdata_UserActionSniffer = {
    {
QT_MOC_LITERAL(0, 0, 17), // "UserActionSniffer"
QT_MOC_LITERAL(1, 18, 11), // "actionStart"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 9) // "actionEnd"

    },
    "UserActionSniffer\0actionStart\0\0actionEnd"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UserActionSniffer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x06 /* Public */,
       3,    0,   25,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void UserActionSniffer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        UserActionSniffer *_t = static_cast<UserActionSniffer *>(_o);
        switch (_id) {
        case 0: _t->actionStart(); break;
        case 1: _t->actionEnd(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (UserActionSniffer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UserActionSniffer::actionStart)) {
                *result = 0;
            }
        }
        {
            typedef void (UserActionSniffer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UserActionSniffer::actionEnd)) {
                *result = 1;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject UserActionSniffer::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UserActionSniffer.data,
      qt_meta_data_UserActionSniffer,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *UserActionSniffer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UserActionSniffer::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_UserActionSniffer.stringdata))
        return static_cast<void*>(const_cast< UserActionSniffer*>(this));
    return QObject::qt_metacast(_clname);
}

int UserActionSniffer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void UserActionSniffer::actionStart()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void UserActionSniffer::actionEnd()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
