/****************************************************************************
** Meta object code from reading C++ file 'pagepalette_masterpages.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../scribus/ui/pagepalette_masterpages.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pagepalette_masterpages.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_PagePalette_MasterPages_t {
    QByteArrayData data[15];
    char stringdata[195];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PagePalette_MasterPages_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PagePalette_MasterPages_t qt_meta_stringdata_PagePalette_MasterPages = {
    {
QT_MOC_LITERAL(0, 0, 23), // "PagePalette_MasterPages"
QT_MOC_LITERAL(1, 24, 10), // "removePage"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 8), // "finished"
QT_MOC_LITERAL(4, 45, 14), // "languageChange"
QT_MOC_LITERAL(5, 60, 11), // "styleChange"
QT_MOC_LITERAL(6, 72, 16), // "selectMasterPage"
QT_MOC_LITERAL(7, 89, 4), // "name"
QT_MOC_LITERAL(8, 94, 19), // "duplicateMasterPage"
QT_MOC_LITERAL(9, 114, 16), // "deleteMasterPage"
QT_MOC_LITERAL(10, 131, 13), // "newMasterPage"
QT_MOC_LITERAL(11, 145, 16), // "renameMasterPage"
QT_MOC_LITERAL(12, 162, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(13, 179, 4), // "item"
QT_MOC_LITERAL(14, 184, 10) // "importPage"

    },
    "PagePalette_MasterPages\0removePage\0\0"
    "finished\0languageChange\0styleChange\0"
    "selectMasterPage\0name\0duplicateMasterPage\0"
    "deleteMasterPage\0newMasterPage\0"
    "renameMasterPage\0QListWidgetItem*\0"
    "item\0importPage"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PagePalette_MasterPages[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x06 /* Public */,
       3,    0,   72,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   73,    2, 0x0a /* Public */,
       5,    0,   74,    2, 0x0a /* Public */,
       6,    1,   75,    2, 0x0a /* Public */,
       8,    0,   78,    2, 0x08 /* Private */,
       9,    0,   79,    2, 0x08 /* Private */,
      10,    0,   80,    2, 0x08 /* Private */,
      11,    1,   81,    2, 0x08 /* Private */,
      14,    0,   84,    2, 0x08 /* Private */,
       6,    1,   85,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 12,   13,

       0        // eod
};

void PagePalette_MasterPages::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PagePalette_MasterPages *_t = static_cast<PagePalette_MasterPages *>(_o);
        switch (_id) {
        case 0: _t->removePage((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->finished(); break;
        case 2: _t->languageChange(); break;
        case 3: _t->styleChange(); break;
        case 4: _t->selectMasterPage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->duplicateMasterPage(); break;
        case 6: _t->deleteMasterPage(); break;
        case 7: _t->newMasterPage(); break;
        case 8: _t->renameMasterPage((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 9: _t->importPage(); break;
        case 10: _t->selectMasterPage((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (PagePalette_MasterPages::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PagePalette_MasterPages::removePage)) {
                *result = 0;
            }
        }
        {
            typedef void (PagePalette_MasterPages::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PagePalette_MasterPages::finished)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject PagePalette_MasterPages::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_PagePalette_MasterPages.data,
      qt_meta_data_PagePalette_MasterPages,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PagePalette_MasterPages::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PagePalette_MasterPages::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PagePalette_MasterPages.stringdata))
        return static_cast<void*>(const_cast< PagePalette_MasterPages*>(this));
    if (!strcmp(_clname, "Ui::PagePalette_MasterPagesBase"))
        return static_cast< Ui::PagePalette_MasterPagesBase*>(const_cast< PagePalette_MasterPages*>(this));
    return QWidget::qt_metacast(_clname);
}

int PagePalette_MasterPages::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void PagePalette_MasterPages::removePage(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PagePalette_MasterPages::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
