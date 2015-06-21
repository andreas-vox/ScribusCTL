/****************************************************************************
** Meta object code from reading C++ file 'charselect.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../scribus/ui/charselect.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'charselect.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CharSelect_t {
    QByteArrayData data[15];
    char stringdata[237];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CharSelect_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CharSelect_t qt_meta_stringdata_CharSelect = {
    {
QT_MOC_LITERAL(0, 0, 10), // "CharSelect"
QT_MOC_LITERAL(1, 11, 17), // "insertSpecialChar"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 21), // "insertUserSpecialChar"
QT_MOC_LITERAL(4, 52, 11), // "userNewChar"
QT_MOC_LITERAL(5, 64, 1), // "i"
QT_MOC_LITERAL(6, 66, 4), // "font"
QT_MOC_LITERAL(7, 71, 18), // "hideButton_toggled"
QT_MOC_LITERAL(8, 90, 22), // "slot_insertSpecialChar"
QT_MOC_LITERAL(9, 113, 23), // "slot_insertSpecialChars"
QT_MOC_LITERAL(10, 137, 5), // "chars"
QT_MOC_LITERAL(11, 143, 26), // "slot_insertUserSpecialChar"
QT_MOC_LITERAL(12, 170, 21), // "uniLoadButton_clicked"
QT_MOC_LITERAL(13, 192, 21), // "uniSaveButton_clicked"
QT_MOC_LITERAL(14, 214, 22) // "uniClearButton_clicked"

    },
    "CharSelect\0insertSpecialChar\0\0"
    "insertUserSpecialChar\0userNewChar\0i\0"
    "font\0hideButton_toggled\0slot_insertSpecialChar\0"
    "slot_insertSpecialChars\0chars\0"
    "slot_insertUserSpecialChar\0"
    "uniLoadButton_clicked\0uniSaveButton_clicked\0"
    "uniClearButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CharSelect[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x06 /* Public */,
       3,    2,   65,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    2,   70,    2, 0x08 /* Private */,
       7,    1,   75,    2, 0x08 /* Private */,
       8,    0,   78,    2, 0x08 /* Private */,
       9,    1,   79,    2, 0x08 /* Private */,
      11,    2,   82,    2, 0x08 /* Private */,
      12,    0,   87,    2, 0x08 /* Private */,
      13,    0,   88,    2, 0x08 /* Private */,
      14,    0,   89,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QChar, QMetaType::QString,    2,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::UInt, QMetaType::QString,    5,    6,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::QChar, QMetaType::QString,    2,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void CharSelect::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CharSelect *_t = static_cast<CharSelect *>(_o);
        switch (_id) {
        case 0: _t->insertSpecialChar(); break;
        case 1: _t->insertUserSpecialChar((*reinterpret_cast< QChar(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 2: _t->userNewChar((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 3: _t->hideButton_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->slot_insertSpecialChar(); break;
        case 5: _t->slot_insertSpecialChars((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->slot_insertUserSpecialChar((*reinterpret_cast< QChar(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 7: _t->uniLoadButton_clicked(); break;
        case 8: _t->uniSaveButton_clicked(); break;
        case 9: _t->uniClearButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (CharSelect::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CharSelect::insertSpecialChar)) {
                *result = 0;
            }
        }
        {
            typedef void (CharSelect::*_t)(QChar , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CharSelect::insertUserSpecialChar)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject CharSelect::staticMetaObject = {
    { &ScrPaletteBase::staticMetaObject, qt_meta_stringdata_CharSelect.data,
      qt_meta_data_CharSelect,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CharSelect::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CharSelect::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CharSelect.stringdata))
        return static_cast<void*>(const_cast< CharSelect*>(this));
    if (!strcmp(_clname, "Ui::CharSelect"))
        return static_cast< Ui::CharSelect*>(const_cast< CharSelect*>(this));
    return ScrPaletteBase::qt_metacast(_clname);
}

int CharSelect::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ScrPaletteBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void CharSelect::insertSpecialChar()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void CharSelect::insertUserSpecialChar(QChar _t1, QString _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
