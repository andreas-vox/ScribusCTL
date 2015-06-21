/****************************************************************************
** Meta object code from reading C++ file 'upgradechecker.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../scribus/upgradechecker.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'upgradechecker.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_UpgradeChecker_t {
    QByteArrayData data[4];
    char stringdata[51];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UpgradeChecker_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UpgradeChecker_t qt_meta_stringdata_UpgradeChecker = {
    {
QT_MOC_LITERAL(0, 0, 14), // "UpgradeChecker"
QT_MOC_LITERAL(1, 15, 16), // "downloadFinished"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 17) // "downloadReadyRead"

    },
    "UpgradeChecker\0downloadFinished\0\0"
    "downloadReadyRead"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UpgradeChecker[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x08 /* Private */,
       3,    0,   25,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void UpgradeChecker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        UpgradeChecker *_t = static_cast<UpgradeChecker *>(_o);
        switch (_id) {
        case 0: _t->downloadFinished(); break;
        case 1: _t->downloadReadyRead(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject UpgradeChecker::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UpgradeChecker.data,
      qt_meta_data_UpgradeChecker,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *UpgradeChecker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UpgradeChecker::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_UpgradeChecker.stringdata))
        return static_cast<void*>(const_cast< UpgradeChecker*>(this));
    return QObject::qt_metacast(_clname);
}

int UpgradeChecker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_UpgradeCheckerGUI_t {
    QByteArrayData data[1];
    char stringdata[18];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UpgradeCheckerGUI_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UpgradeCheckerGUI_t qt_meta_stringdata_UpgradeCheckerGUI = {
    {
QT_MOC_LITERAL(0, 0, 17) // "UpgradeCheckerGUI"

    },
    "UpgradeCheckerGUI"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UpgradeCheckerGUI[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void UpgradeCheckerGUI::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject UpgradeCheckerGUI::staticMetaObject = {
    { &UpgradeChecker::staticMetaObject, qt_meta_stringdata_UpgradeCheckerGUI.data,
      qt_meta_data_UpgradeCheckerGUI,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *UpgradeCheckerGUI::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UpgradeCheckerGUI::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_UpgradeCheckerGUI.stringdata))
        return static_cast<void*>(const_cast< UpgradeCheckerGUI*>(this));
    return UpgradeChecker::qt_metacast(_clname);
}

int UpgradeCheckerGUI::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UpgradeChecker::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
