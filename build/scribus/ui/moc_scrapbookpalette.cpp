/****************************************************************************
** Meta object code from reading C++ file 'scrapbookpalette.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../scribus/ui/scrapbookpalette.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'scrapbookpalette.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_BibView_t {
    QByteArrayData data[9];
    char stringdata[85];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BibView_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BibView_t qt_meta_stringdata_BibView = {
    {
QT_MOC_LITERAL(0, 0, 7), // "BibView"
QT_MOC_LITERAL(1, 8, 17), // "ToggleAllPalettes"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 10), // "objDropped"
QT_MOC_LITERAL(4, 38, 4), // "text"
QT_MOC_LITERAL(5, 43, 11), // "fileDropped"
QT_MOC_LITERAL(6, 55, 4), // "path"
QT_MOC_LITERAL(7, 60, 10), // "testResult"
QT_MOC_LITERAL(8, 71, 13) // "paletteClosed"

    },
    "BibView\0ToggleAllPalettes\0\0objDropped\0"
    "text\0fileDropped\0path\0testResult\0"
    "paletteClosed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BibView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,
       3,    1,   35,    2, 0x06 /* Public */,
       5,    2,   38,    2, 0x06 /* Public */,
       8,    0,   43,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    6,    7,
    QMetaType::Void,

       0        // eod
};

void BibView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        BibView *_t = static_cast<BibView *>(_o);
        switch (_id) {
        case 0: _t->ToggleAllPalettes(); break;
        case 1: _t->objDropped((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->fileDropped((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->paletteClosed(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (BibView::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BibView::ToggleAllPalettes)) {
                *result = 0;
            }
        }
        {
            typedef void (BibView::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BibView::objDropped)) {
                *result = 1;
            }
        }
        {
            typedef void (BibView::*_t)(QString , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BibView::fileDropped)) {
                *result = 2;
            }
        }
        {
            typedef void (BibView::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BibView::paletteClosed)) {
                *result = 3;
            }
        }
    }
}

const QMetaObject BibView::staticMetaObject = {
    { &QListWidget::staticMetaObject, qt_meta_stringdata_BibView.data,
      qt_meta_data_BibView,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *BibView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BibView::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_BibView.stringdata))
        return static_cast<void*>(const_cast< BibView*>(this));
    return QListWidget::qt_metacast(_clname);
}

int BibView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QListWidget::qt_metacall(_c, _id, _a);
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
void BibView::ToggleAllPalettes()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void BibView::objDropped(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void BibView::fileDropped(QString _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void BibView::paletteClosed()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}
struct qt_meta_stringdata_Biblio_t {
    QByteArrayData data[36];
    char stringdata[372];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Biblio_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Biblio_t qt_meta_stringdata_Biblio = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Biblio"
QT_MOC_LITERAL(1, 7, 17), // "updateRecentMenue"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 17), // "pasteToActualPage"
QT_MOC_LITERAL(4, 44, 20), // "scrapbookListChanged"
QT_MOC_LITERAL(5, 65, 14), // "languageChange"
QT_MOC_LITERAL(6, 80, 11), // "ObjFromFile"
QT_MOC_LITERAL(7, 92, 4), // "path"
QT_MOC_LITERAL(8, 97, 10), // "testResult"
QT_MOC_LITERAL(9, 108, 11), // "ObjFromMenu"
QT_MOC_LITERAL(10, 120, 4), // "text"
QT_MOC_LITERAL(11, 125, 15), // "ObjFromMainMenu"
QT_MOC_LITERAL(12, 141, 7), // "scrapID"
QT_MOC_LITERAL(13, 149, 10), // "closeOnDel"
QT_MOC_LITERAL(14, 160, 7), // "libName"
QT_MOC_LITERAL(15, 168, 9), // "reloadLib"
QT_MOC_LITERAL(16, 178, 8), // "fileName"
QT_MOC_LITERAL(17, 187, 17), // "handleDoubleClick"
QT_MOC_LITERAL(18, 205, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(19, 222, 3), // "ite"
QT_MOC_LITERAL(20, 226, 17), // "handlePasteToPage"
QT_MOC_LITERAL(21, 244, 11), // "HandleMouse"
QT_MOC_LITERAL(22, 256, 1), // "p"
QT_MOC_LITERAL(23, 258, 7), // "copyObj"
QT_MOC_LITERAL(24, 266, 2), // "id"
QT_MOC_LITERAL(25, 269, 7), // "moveObj"
QT_MOC_LITERAL(26, 277, 9), // "deleteObj"
QT_MOC_LITERAL(27, 287, 12), // "deleteAllObj"
QT_MOC_LITERAL(28, 300, 9), // "renameObj"
QT_MOC_LITERAL(29, 310, 6), // "NewLib"
QT_MOC_LITERAL(30, 317, 10), // "updateView"
QT_MOC_LITERAL(31, 328, 10), // "goOneDirUp"
QT_MOC_LITERAL(32, 339, 8), // "closeLib"
QT_MOC_LITERAL(33, 348, 10), // "libChanged"
QT_MOC_LITERAL(34, 359, 5), // "index"
QT_MOC_LITERAL(35, 365, 6) // "Import"

    },
    "Biblio\0updateRecentMenue\0\0pasteToActualPage\0"
    "scrapbookListChanged\0languageChange\0"
    "ObjFromFile\0path\0testResult\0ObjFromMenu\0"
    "text\0ObjFromMainMenu\0scrapID\0closeOnDel\0"
    "libName\0reloadLib\0fileName\0handleDoubleClick\0"
    "QListWidgetItem*\0ite\0handlePasteToPage\0"
    "HandleMouse\0p\0copyObj\0id\0moveObj\0"
    "deleteObj\0deleteAllObj\0renameObj\0"
    "NewLib\0updateView\0goOneDirUp\0closeLib\0"
    "libChanged\0index\0Import"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Biblio[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      23,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  129,    2, 0x06 /* Public */,
       3,    1,  130,    2, 0x06 /* Public */,
       4,    0,  133,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,  134,    2, 0x0a /* Public */,
       6,    2,  135,    2, 0x0a /* Public */,
       9,    1,  140,    2, 0x0a /* Public */,
      11,    2,  143,    2, 0x0a /* Public */,
      13,    1,  148,    2, 0x0a /* Public */,
      15,    1,  151,    2, 0x0a /* Public */,
      17,    1,  154,    2, 0x08 /* Private */,
      20,    0,  157,    2, 0x08 /* Private */,
      21,    1,  158,    2, 0x08 /* Private */,
      23,    1,  161,    2, 0x08 /* Private */,
      25,    1,  164,    2, 0x08 /* Private */,
      26,    0,  167,    2, 0x08 /* Private */,
      27,    0,  168,    2, 0x08 /* Private */,
      28,    0,  169,    2, 0x08 /* Private */,
      29,    0,  170,    2, 0x08 /* Private */,
      30,    0,  171,    2, 0x08 /* Private */,
      31,    0,  172,    2, 0x08 /* Private */,
      32,    0,  173,    2, 0x08 /* Private */,
      33,    1,  174,    2, 0x08 /* Private */,
      35,    0,  177,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    7,    8,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,   10,   12,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void, QMetaType::QString,   16,
    QMetaType::Void, 0x80000000 | 18,   19,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,   22,
    QMetaType::Bool, QMetaType::Int,   24,
    QMetaType::Void, QMetaType::Int,   24,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   34,
    QMetaType::Void,

       0        // eod
};

void Biblio::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Biblio *_t = static_cast<Biblio *>(_o);
        switch (_id) {
        case 0: _t->updateRecentMenue(); break;
        case 1: _t->pasteToActualPage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->scrapbookListChanged(); break;
        case 3: _t->languageChange(); break;
        case 4: _t->ObjFromFile((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: _t->ObjFromMenu((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->ObjFromMainMenu((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 7: _t->closeOnDel((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->reloadLib((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 9: _t->handleDoubleClick((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 10: _t->handlePasteToPage(); break;
        case 11: _t->HandleMouse((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 12: { bool _r = _t->copyObj((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 13: _t->moveObj((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->deleteObj(); break;
        case 15: _t->deleteAllObj(); break;
        case 16: _t->renameObj(); break;
        case 17: _t->NewLib(); break;
        case 18: _t->updateView(); break;
        case 19: _t->goOneDirUp(); break;
        case 20: _t->closeLib(); break;
        case 21: _t->libChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 22: _t->Import(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Biblio::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Biblio::updateRecentMenue)) {
                *result = 0;
            }
        }
        {
            typedef void (Biblio::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Biblio::pasteToActualPage)) {
                *result = 1;
            }
        }
        {
            typedef void (Biblio::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Biblio::scrapbookListChanged)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject Biblio::staticMetaObject = {
    { &ScDockPalette::staticMetaObject, qt_meta_stringdata_Biblio.data,
      qt_meta_data_Biblio,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Biblio::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Biblio::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Biblio.stringdata))
        return static_cast<void*>(const_cast< Biblio*>(this));
    return ScDockPalette::qt_metacast(_clname);
}

int Biblio::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ScDockPalette::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 23)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 23;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 23)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 23;
    }
    return _id;
}

// SIGNAL 0
void Biblio::updateRecentMenue()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void Biblio::pasteToActualPage(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Biblio::scrapbookListChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
