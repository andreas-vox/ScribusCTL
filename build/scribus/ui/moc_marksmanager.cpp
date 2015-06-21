/****************************************************************************
** Meta object code from reading C++ file 'marksmanager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../scribus/ui/marksmanager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'marksmanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MarksManager_t {
    QByteArrayData data[14];
    char stringdata[219];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MarksManager_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MarksManager_t qt_meta_stringdata_MarksManager = {
    {
QT_MOC_LITERAL(0, 0, 12), // "MarksManager"
QT_MOC_LITERAL(1, 13, 6), // "setDoc"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 11), // "ScribusDoc*"
QT_MOC_LITERAL(4, 33, 3), // "doc"
QT_MOC_LITERAL(5, 37, 14), // "languageChange"
QT_MOC_LITERAL(6, 52, 19), // "handleUpdateRequest"
QT_MOC_LITERAL(7, 72, 11), // "updateFlags"
QT_MOC_LITERAL(8, 84, 23), // "on_UpdateButton_clicked"
QT_MOC_LITERAL(9, 108, 21), // "on_EditButton_clicked"
QT_MOC_LITERAL(10, 130, 23), // "on_DeleteButton_clicked"
QT_MOC_LITERAL(11, 154, 25), // "on_listView_doubleClicked"
QT_MOC_LITERAL(12, 180, 5), // "index"
QT_MOC_LITERAL(13, 186, 32) // "on_listView_itemSelectionChanged"

    },
    "MarksManager\0setDoc\0\0ScribusDoc*\0doc\0"
    "languageChange\0handleUpdateRequest\0"
    "updateFlags\0on_UpdateButton_clicked\0"
    "on_EditButton_clicked\0on_DeleteButton_clicked\0"
    "on_listView_doubleClicked\0index\0"
    "on_listView_itemSelectionChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MarksManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x0a /* Public */,
       5,    0,   57,    2, 0x0a /* Public */,
       6,    1,   58,    2, 0x0a /* Public */,
       8,    0,   61,    2, 0x08 /* Private */,
       9,    0,   62,    2, 0x08 /* Private */,
      10,    0,   63,    2, 0x08 /* Private */,
      11,    1,   64,    2, 0x08 /* Private */,
      13,    0,   67,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,   12,
    QMetaType::Void,

       0        // eod
};

void MarksManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MarksManager *_t = static_cast<MarksManager *>(_o);
        switch (_id) {
        case 0: _t->setDoc((*reinterpret_cast< ScribusDoc*(*)>(_a[1]))); break;
        case 1: _t->languageChange(); break;
        case 2: _t->handleUpdateRequest((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->on_UpdateButton_clicked(); break;
        case 4: _t->on_EditButton_clicked(); break;
        case 5: _t->on_DeleteButton_clicked(); break;
        case 6: _t->on_listView_doubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 7: _t->on_listView_itemSelectionChanged(); break;
        default: ;
        }
    }
}

const QMetaObject MarksManager::staticMetaObject = {
    { &ScrPaletteBase::staticMetaObject, qt_meta_stringdata_MarksManager.data,
      qt_meta_data_MarksManager,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MarksManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MarksManager::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MarksManager.stringdata))
        return static_cast<void*>(const_cast< MarksManager*>(this));
    if (!strcmp(_clname, "Ui::MarksManager"))
        return static_cast< Ui::MarksManager*>(const_cast< MarksManager*>(this));
    return ScrPaletteBase::qt_metacast(_clname);
}

int MarksManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_END_MOC_NAMESPACE
