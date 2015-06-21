/****************************************************************************
** Meta object code from reading C++ file 'pagepalette.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../scribus/ui/pagepalette.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pagepalette.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_PagePalette_t {
    QByteArrayData data[17];
    char stringdata[199];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PagePalette_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PagePalette_t qt_meta_stringdata_PagePalette = {
    {
QT_MOC_LITERAL(0, 0, 11), // "PagePalette"
QT_MOC_LITERAL(1, 12, 8), // "gotoPage"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 7), // "setView"
QT_MOC_LITERAL(4, 30, 12), // "ScribusView*"
QT_MOC_LITERAL(5, 43, 4), // "view"
QT_MOC_LITERAL(6, 48, 13), // "enablePalette"
QT_MOC_LITERAL(7, 62, 14), // "rebuildMasters"
QT_MOC_LITERAL(8, 77, 12), // "rebuildPages"
QT_MOC_LITERAL(9, 90, 7), // "Rebuild"
QT_MOC_LITERAL(10, 98, 8), // "markPage"
QT_MOC_LITERAL(11, 107, 2), // "nr"
QT_MOC_LITERAL(12, 110, 20), // "updateMasterPageList"
QT_MOC_LITERAL(13, 131, 14), // "languageChange"
QT_MOC_LITERAL(14, 146, 14), // "masterPageMode"
QT_MOC_LITERAL(15, 161, 19), // "startMasterPageMode"
QT_MOC_LITERAL(16, 181, 17) // "endMasterPageMode"

    },
    "PagePalette\0gotoPage\0\0setView\0"
    "ScribusView*\0view\0enablePalette\0"
    "rebuildMasters\0rebuildPages\0Rebuild\0"
    "markPage\0nr\0updateMasterPageList\0"
    "languageChange\0masterPageMode\0"
    "startMasterPageMode\0endMasterPageMode"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PagePalette[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   77,    2, 0x0a /* Public */,
       6,    1,   80,    2, 0x0a /* Public */,
       7,    0,   83,    2, 0x0a /* Public */,
       8,    0,   84,    2, 0x0a /* Public */,
       9,    0,   85,    2, 0x0a /* Public */,
      10,    1,   86,    2, 0x0a /* Public */,
      12,    0,   89,    2, 0x0a /* Public */,
      13,    0,   90,    2, 0x0a /* Public */,
      14,    0,   91,    2, 0x0a /* Public */,
      15,    1,   92,    2, 0x0a /* Public */,
      16,    0,   95,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UInt,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,

       0        // eod
};

void PagePalette::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PagePalette *_t = static_cast<PagePalette *>(_o);
        switch (_id) {
        case 0: _t->gotoPage((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->setView((*reinterpret_cast< ScribusView*(*)>(_a[1]))); break;
        case 2: _t->enablePalette((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 3: _t->rebuildMasters(); break;
        case 4: _t->rebuildPages(); break;
        case 5: _t->Rebuild(); break;
        case 6: _t->markPage((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 7: _t->updateMasterPageList(); break;
        case 8: _t->languageChange(); break;
        case 9: { bool _r = _t->masterPageMode();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 10: _t->startMasterPageMode((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 11: _t->endMasterPageMode(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (PagePalette::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PagePalette::gotoPage)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject PagePalette::staticMetaObject = {
    { &ScDockPalette::staticMetaObject, qt_meta_stringdata_PagePalette.data,
      qt_meta_data_PagePalette,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PagePalette::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PagePalette::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PagePalette.stringdata))
        return static_cast<void*>(const_cast< PagePalette*>(this));
    return ScDockPalette::qt_metacast(_clname);
}

int PagePalette::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ScDockPalette::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void PagePalette::gotoPage(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
