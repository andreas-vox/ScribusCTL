/****************************************************************************
** Meta object code from reading C++ file 'unicodesearch.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../scribus/ui/unicodesearch.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'unicodesearch.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_UnicodeSearch_t {
    QByteArrayData data[8];
    char stringdata[91];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UnicodeSearch_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UnicodeSearch_t qt_meta_stringdata_UnicodeSearch = {
    {
QT_MOC_LITERAL(0, 0, 13), // "UnicodeSearch"
QT_MOC_LITERAL(1, 14, 15), // "setVisibleState"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 13), // "glyphSelected"
QT_MOC_LITERAL(4, 45, 3), // "hex"
QT_MOC_LITERAL(5, 49, 24), // "searchEdit_returnPressed"
QT_MOC_LITERAL(6, 74, 10), // "itemChosen"
QT_MOC_LITERAL(7, 85, 5) // "index"

    },
    "UnicodeSearch\0setVisibleState\0\0"
    "glyphSelected\0hex\0searchEdit_returnPressed\0"
    "itemChosen\0index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UnicodeSearch[] = {

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
       1,    1,   34,    2, 0x06 /* Public */,
       3,    1,   37,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   40,    2, 0x08 /* Private */,
       6,    1,   41,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::QString,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,    7,

       0        // eod
};

void UnicodeSearch::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        UnicodeSearch *_t = static_cast<UnicodeSearch *>(_o);
        switch (_id) {
        case 0: _t->setVisibleState((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->glyphSelected((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->searchEdit_returnPressed(); break;
        case 3: _t->itemChosen((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (UnicodeSearch::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UnicodeSearch::setVisibleState)) {
                *result = 0;
            }
        }
        {
            typedef void (UnicodeSearch::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UnicodeSearch::glyphSelected)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject UnicodeSearch::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_UnicodeSearch.data,
      qt_meta_data_UnicodeSearch,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *UnicodeSearch::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UnicodeSearch::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_UnicodeSearch.stringdata))
        return static_cast<void*>(const_cast< UnicodeSearch*>(this));
    if (!strcmp(_clname, "Ui::UnicodeSearch"))
        return static_cast< Ui::UnicodeSearch*>(const_cast< UnicodeSearch*>(this));
    return QDialog::qt_metacast(_clname);
}

int UnicodeSearch::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
void UnicodeSearch::setVisibleState(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void UnicodeSearch::glyphSelected(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
struct qt_meta_stringdata_UnicodeSearchModel_t {
    QByteArrayData data[1];
    char stringdata[19];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UnicodeSearchModel_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UnicodeSearchModel_t qt_meta_stringdata_UnicodeSearchModel = {
    {
QT_MOC_LITERAL(0, 0, 18) // "UnicodeSearchModel"

    },
    "UnicodeSearchModel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UnicodeSearchModel[] = {

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

void UnicodeSearchModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject UnicodeSearchModel::staticMetaObject = {
    { &QAbstractTableModel::staticMetaObject, qt_meta_stringdata_UnicodeSearchModel.data,
      qt_meta_data_UnicodeSearchModel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *UnicodeSearchModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UnicodeSearchModel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_UnicodeSearchModel.stringdata))
        return static_cast<void*>(const_cast< UnicodeSearchModel*>(this));
    return QAbstractTableModel::qt_metacast(_clname);
}

int UnicodeSearchModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractTableModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_UnicodeChooseButton_t {
    QByteArrayData data[7];
    char stringdata[81];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UnicodeChooseButton_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UnicodeChooseButton_t qt_meta_stringdata_UnicodeChooseButton = {
    {
QT_MOC_LITERAL(0, 0, 19), // "UnicodeChooseButton"
QT_MOC_LITERAL(1, 20, 13), // "chosenUnicode"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 14), // "languageChange"
QT_MOC_LITERAL(4, 50, 12), // "self_toggled"
QT_MOC_LITERAL(5, 63, 13), // "glyphSelected"
QT_MOC_LITERAL(6, 77, 3) // "hex"

    },
    "UnicodeChooseButton\0chosenUnicode\0\0"
    "languageChange\0self_toggled\0glyphSelected\0"
    "hex"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UnicodeChooseButton[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   37,    2, 0x0a /* Public */,
       4,    1,   38,    2, 0x08 /* Private */,
       5,    1,   41,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::QString,    6,

       0        // eod
};

void UnicodeChooseButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        UnicodeChooseButton *_t = static_cast<UnicodeChooseButton *>(_o);
        switch (_id) {
        case 0: _t->chosenUnicode((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->languageChange(); break;
        case 2: _t->self_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->glyphSelected((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (UnicodeChooseButton::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UnicodeChooseButton::chosenUnicode)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject UnicodeChooseButton::staticMetaObject = {
    { &QPushButton::staticMetaObject, qt_meta_stringdata_UnicodeChooseButton.data,
      qt_meta_data_UnicodeChooseButton,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *UnicodeChooseButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UnicodeChooseButton::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_UnicodeChooseButton.stringdata))
        return static_cast<void*>(const_cast< UnicodeChooseButton*>(this));
    return QPushButton::qt_metacast(_clname);
}

int UnicodeChooseButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPushButton::qt_metacall(_c, _id, _a);
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
void UnicodeChooseButton::chosenUnicode(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
