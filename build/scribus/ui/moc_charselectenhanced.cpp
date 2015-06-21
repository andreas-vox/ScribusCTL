/****************************************************************************
** Meta object code from reading C++ file 'charselectenhanced.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../scribus/ui/charselectenhanced.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'charselectenhanced.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CharSelectEnhanced_t {
    QByteArrayData data[14];
    char stringdata[133];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CharSelectEnhanced_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CharSelectEnhanced_t qt_meta_stringdata_CharSelectEnhanced = {
    {
QT_MOC_LITERAL(0, 0, 18), // "CharSelectEnhanced"
QT_MOC_LITERAL(1, 19, 18), // "insertSpecialChars"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 5), // "chars"
QT_MOC_LITERAL(4, 45, 7), // "newChar"
QT_MOC_LITERAL(5, 53, 1), // "i"
QT_MOC_LITERAL(6, 55, 7), // "delChar"
QT_MOC_LITERAL(7, 63, 7), // "newFont"
QT_MOC_LITERAL(8, 71, 4), // "font"
QT_MOC_LITERAL(9, 76, 12), // "newCharClass"
QT_MOC_LITERAL(10, 89, 1), // "c"
QT_MOC_LITERAL(11, 91, 7), // "delEdit"
QT_MOC_LITERAL(12, 99, 7), // "insChar"
QT_MOC_LITERAL(13, 107, 25) // "hexLineEdit_returnPressed"

    },
    "CharSelectEnhanced\0insertSpecialChars\0"
    "\0chars\0newChar\0i\0delChar\0newFont\0font\0"
    "newCharClass\0c\0delEdit\0insChar\0"
    "hexLineEdit_returnPressed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CharSelectEnhanced[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    2,   57,    2, 0x0a /* Public */,
       6,    0,   62,    2, 0x0a /* Public */,
       7,    1,   63,    2, 0x0a /* Public */,
       9,    1,   66,    2, 0x0a /* Public */,
      11,    0,   69,    2, 0x0a /* Public */,
      12,    0,   70,    2, 0x0a /* Public */,
      13,    0,   71,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::UInt, QMetaType::QString,    5,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void CharSelectEnhanced::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CharSelectEnhanced *_t = static_cast<CharSelectEnhanced *>(_o);
        switch (_id) {
        case 0: _t->insertSpecialChars((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->newChar((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 2: _t->delChar(); break;
        case 3: _t->newFont((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->newCharClass((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->delEdit(); break;
        case 6: _t->insChar(); break;
        case 7: _t->hexLineEdit_returnPressed(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (CharSelectEnhanced::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CharSelectEnhanced::insertSpecialChars)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject CharSelectEnhanced::staticMetaObject = {
    { &ScrPaletteBase::staticMetaObject, qt_meta_stringdata_CharSelectEnhanced.data,
      qt_meta_data_CharSelectEnhanced,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CharSelectEnhanced::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CharSelectEnhanced::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CharSelectEnhanced.stringdata))
        return static_cast<void*>(const_cast< CharSelectEnhanced*>(this));
    if (!strcmp(_clname, "Ui::CharSelectEnhanced"))
        return static_cast< Ui::CharSelectEnhanced*>(const_cast< CharSelectEnhanced*>(this));
    return ScrPaletteBase::qt_metacast(_clname);
}

int CharSelectEnhanced::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ScrPaletteBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void CharSelectEnhanced::insertSpecialChars(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
