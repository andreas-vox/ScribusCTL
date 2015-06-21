/****************************************************************************
** Meta object code from reading C++ file 'newfile.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../scribus/ui/newfile.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'newfile.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_PageLayoutsWidget_t {
    QByteArrayData data[1];
    char stringdata[18];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PageLayoutsWidget_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PageLayoutsWidget_t qt_meta_stringdata_PageLayoutsWidget = {
    {
QT_MOC_LITERAL(0, 0, 17) // "PageLayoutsWidget"

    },
    "PageLayoutsWidget"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PageLayoutsWidget[] = {

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

void PageLayoutsWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject PageLayoutsWidget::staticMetaObject = {
    { &QListWidget::staticMetaObject, qt_meta_stringdata_PageLayoutsWidget.data,
      qt_meta_data_PageLayoutsWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PageLayoutsWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PageLayoutsWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PageLayoutsWidget.stringdata))
        return static_cast<void*>(const_cast< PageLayoutsWidget*>(this));
    return QListWidget::qt_metacast(_clname);
}

int PageLayoutsWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QListWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_NewDoc_t {
    QByteArrayData data[30];
    char stringdata[334];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_NewDoc_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_NewDoc_t qt_meta_stringdata_NewDoc = {
    {
QT_MOC_LITERAL(0, 0, 6), // "NewDoc"
QT_MOC_LITERAL(1, 7, 9), // "setHeight"
QT_MOC_LITERAL(2, 17, 0), // ""
QT_MOC_LITERAL(3, 18, 1), // "v"
QT_MOC_LITERAL(4, 20, 8), // "setWidth"
QT_MOC_LITERAL(5, 29, 10), // "selectItem"
QT_MOC_LITERAL(6, 40, 2), // "nr"
QT_MOC_LITERAL(7, 43, 12), // "itemSelected"
QT_MOC_LITERAL(8, 56, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(9, 73, 2), // "ic"
QT_MOC_LITERAL(10, 76, 15), // "handleAutoFrame"
QT_MOC_LITERAL(11, 92, 11), // "setDistance"
QT_MOC_LITERAL(12, 104, 7), // "setUnit"
QT_MOC_LITERAL(13, 112, 1), // "u"
QT_MOC_LITERAL(14, 114, 6), // "ExitOK"
QT_MOC_LITERAL(15, 121, 14), // "setOrientation"
QT_MOC_LITERAL(16, 136, 3), // "ori"
QT_MOC_LITERAL(17, 140, 11), // "setPageSize"
QT_MOC_LITERAL(18, 152, 12), // "setDocLayout"
QT_MOC_LITERAL(19, 165, 6), // "layout"
QT_MOC_LITERAL(20, 172, 30), // "recentDocListBox_doubleClicked"
QT_MOC_LITERAL(21, 203, 8), // "openFile"
QT_MOC_LITERAL(22, 212, 12), // "adjustTitles"
QT_MOC_LITERAL(23, 225, 3), // "tab"
QT_MOC_LITERAL(24, 229, 15), // "locationDropped"
QT_MOC_LITERAL(25, 245, 7), // "fileUrl"
QT_MOC_LITERAL(26, 253, 19), // "gotoParentDirectory"
QT_MOC_LITERAL(27, 273, 21), // "gotoSelectedDirectory"
QT_MOC_LITERAL(28, 295, 20), // "gotoDesktopDirectory"
QT_MOC_LITERAL(29, 316, 17) // "gotoHomeDirectory"

    },
    "NewDoc\0setHeight\0\0v\0setWidth\0selectItem\0"
    "nr\0itemSelected\0QListWidgetItem*\0ic\0"
    "handleAutoFrame\0setDistance\0setUnit\0"
    "u\0ExitOK\0setOrientation\0ori\0setPageSize\0"
    "setDocLayout\0layout\0recentDocListBox_doubleClicked\0"
    "openFile\0adjustTitles\0tab\0locationDropped\0"
    "fileUrl\0gotoParentDirectory\0"
    "gotoSelectedDirectory\0gotoDesktopDirectory\0"
    "gotoHomeDirectory"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NewDoc[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,  109,    2, 0x0a /* Public */,
       4,    1,  112,    2, 0x0a /* Public */,
       5,    1,  115,    2, 0x0a /* Public */,
       7,    1,  118,    2, 0x0a /* Public */,
      10,    0,  121,    2, 0x0a /* Public */,
      11,    1,  122,    2, 0x0a /* Public */,
      12,    1,  125,    2, 0x0a /* Public */,
      14,    0,  128,    2, 0x0a /* Public */,
      15,    1,  129,    2, 0x0a /* Public */,
      17,    1,  132,    2, 0x0a /* Public */,
      18,    1,  135,    2, 0x0a /* Public */,
      20,    0,  138,    2, 0x0a /* Public */,
      21,    0,  139,    2, 0x0a /* Public */,
      22,    1,  140,    2, 0x0a /* Public */,
      24,    1,  143,    2, 0x0a /* Public */,
      26,    0,  146,    2, 0x0a /* Public */,
      27,    0,  147,    2, 0x0a /* Public */,
      28,    0,  148,    2, 0x0a /* Public */,
      29,    0,  149,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::UInt,    6,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   16,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Int,   19,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   23,
    QMetaType::Void, QMetaType::QString,   25,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void NewDoc::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        NewDoc *_t = static_cast<NewDoc *>(_o);
        switch (_id) {
        case 0: _t->setHeight((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: _t->setWidth((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: _t->selectItem((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 3: _t->itemSelected((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 4: _t->handleAutoFrame(); break;
        case 5: _t->setDistance((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 6: _t->setUnit((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->ExitOK(); break;
        case 8: _t->setOrientation((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->setPageSize((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->setDocLayout((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->recentDocListBox_doubleClicked(); break;
        case 12: _t->openFile(); break;
        case 13: _t->adjustTitles((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->locationDropped((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 15: _t->gotoParentDirectory(); break;
        case 16: _t->gotoSelectedDirectory(); break;
        case 17: _t->gotoDesktopDirectory(); break;
        case 18: _t->gotoHomeDirectory(); break;
        default: ;
        }
    }
}

const QMetaObject NewDoc::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_NewDoc.data,
      qt_meta_data_NewDoc,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *NewDoc::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NewDoc::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_NewDoc.stringdata))
        return static_cast<void*>(const_cast< NewDoc*>(this));
    return QDialog::qt_metacast(_clname);
}

int NewDoc::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 19)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 19;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
