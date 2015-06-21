/****************************************************************************
** Meta object code from reading C++ file 'prefs_tableofcontents.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../scribus/ui/prefs_tableofcontents.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'prefs_tableofcontents.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Prefs_TableOfContents_t {
    QByteArrayData data[24];
    char stringdata[379];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Prefs_TableOfContents_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Prefs_TableOfContents_t qt_meta_stringdata_Prefs_TableOfContents = {
    {
QT_MOC_LITERAL(0, 0, 21), // "Prefs_TableOfContents"
QT_MOC_LITERAL(1, 22, 14), // "languageChange"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 20), // "generatePageItemList"
QT_MOC_LITERAL(4, 59, 14), // "setupItemAttrs"
QT_MOC_LITERAL(5, 74, 8), // "newNames"
QT_MOC_LITERAL(6, 83, 9), // "selectToC"
QT_MOC_LITERAL(7, 93, 14), // "numberSelected"
QT_MOC_LITERAL(8, 108, 6), // "addToC"
QT_MOC_LITERAL(9, 115, 16), // "updateToCListBox"
QT_MOC_LITERAL(10, 132, 28), // "updateParagraphStyleComboBox"
QT_MOC_LITERAL(11, 161, 9), // "deleteToC"
QT_MOC_LITERAL(12, 171, 21), // "itemAttributeSelected"
QT_MOC_LITERAL(13, 193, 17), // "itemAttributeName"
QT_MOC_LITERAL(14, 211, 17), // "itemFrameSelected"
QT_MOC_LITERAL(15, 229, 9), // "frameName"
QT_MOC_LITERAL(16, 239, 28), // "itemPageNumberPlacedSelected"
QT_MOC_LITERAL(17, 268, 12), // "pageLocation"
QT_MOC_LITERAL(18, 281, 26), // "itemParagraphStyleSelected"
QT_MOC_LITERAL(19, 308, 9), // "itemStyle"
QT_MOC_LITERAL(20, 318, 10), // "setToCName"
QT_MOC_LITERAL(21, 329, 7), // "newName"
QT_MOC_LITERAL(22, 337, 25), // "nonPrintingFramesSelected"
QT_MOC_LITERAL(23, 363, 15) // "showNonPrinting"

    },
    "Prefs_TableOfContents\0languageChange\0"
    "\0generatePageItemList\0setupItemAttrs\0"
    "newNames\0selectToC\0numberSelected\0"
    "addToC\0updateToCListBox\0"
    "updateParagraphStyleComboBox\0deleteToC\0"
    "itemAttributeSelected\0itemAttributeName\0"
    "itemFrameSelected\0frameName\0"
    "itemPageNumberPlacedSelected\0pageLocation\0"
    "itemParagraphStyleSelected\0itemStyle\0"
    "setToCName\0newName\0nonPrintingFramesSelected\0"
    "showNonPrinting"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Prefs_TableOfContents[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x0a /* Public */,
       3,    0,   85,    2, 0x0a /* Public */,
       4,    1,   86,    2, 0x0a /* Public */,
       6,    1,   89,    2, 0x0a /* Public */,
       8,    0,   92,    2, 0x0a /* Public */,
       9,    0,   93,    2, 0x0a /* Public */,
      10,    0,   94,    2, 0x0a /* Public */,
      11,    0,   95,    2, 0x0a /* Public */,
      12,    1,   96,    2, 0x0a /* Public */,
      14,    1,   99,    2, 0x0a /* Public */,
      16,    1,  102,    2, 0x0a /* Public */,
      18,    1,  105,    2, 0x0a /* Public */,
      20,    1,  108,    2, 0x0a /* Public */,
      22,    1,  111,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QStringList,    5,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void, QMetaType::QString,   15,
    QMetaType::Void, QMetaType::QString,   17,
    QMetaType::Void, QMetaType::QString,   19,
    QMetaType::Void, QMetaType::QString,   21,
    QMetaType::Void, QMetaType::Bool,   23,

       0        // eod
};

void Prefs_TableOfContents::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Prefs_TableOfContents *_t = static_cast<Prefs_TableOfContents *>(_o);
        switch (_id) {
        case 0: _t->languageChange(); break;
        case 1: _t->generatePageItemList(); break;
        case 2: _t->setupItemAttrs((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 3: _t->selectToC((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->addToC(); break;
        case 5: _t->updateToCListBox(); break;
        case 6: _t->updateParagraphStyleComboBox(); break;
        case 7: _t->deleteToC(); break;
        case 8: _t->itemAttributeSelected((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->itemFrameSelected((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->itemPageNumberPlacedSelected((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 11: _t->itemParagraphStyleSelected((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 12: _t->setToCName((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 13: _t->nonPrintingFramesSelected((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject Prefs_TableOfContents::staticMetaObject = {
    { &Prefs_Pane::staticMetaObject, qt_meta_stringdata_Prefs_TableOfContents.data,
      qt_meta_data_Prefs_TableOfContents,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Prefs_TableOfContents::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Prefs_TableOfContents::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Prefs_TableOfContents.stringdata))
        return static_cast<void*>(const_cast< Prefs_TableOfContents*>(this));
    if (!strcmp(_clname, "Ui::Prefs_TableOfContents"))
        return static_cast< Ui::Prefs_TableOfContents*>(const_cast< Prefs_TableOfContents*>(this));
    return Prefs_Pane::qt_metacast(_clname);
}

int Prefs_TableOfContents::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Prefs_Pane::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
