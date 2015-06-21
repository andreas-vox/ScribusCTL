/****************************************************************************
** Meta object code from reading C++ file 'storyeditor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../scribus/ui/storyeditor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'storyeditor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SEditor_t {
    QByteArrayData data[16];
    char stringdata[162];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SEditor_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SEditor_t qt_meta_stringdata_SEditor = {
    {
QT_MOC_LITERAL(0, 0, 7), // "SEditor"
QT_MOC_LITERAL(1, 8, 8), // "setProps"
QT_MOC_LITERAL(2, 17, 0), // ""
QT_MOC_LITERAL(3, 18, 9), // "SideBarUp"
QT_MOC_LITERAL(4, 28, 13), // "SideBarUpdate"
QT_MOC_LITERAL(5, 42, 10), // "PasteAvail"
QT_MOC_LITERAL(6, 53, 14), // "contentsMoving"
QT_MOC_LITERAL(7, 68, 20), // "handleContentsChange"
QT_MOC_LITERAL(8, 89, 8), // "position"
QT_MOC_LITERAL(9, 98, 12), // "charsRemoved"
QT_MOC_LITERAL(10, 111, 10), // "charsAdded"
QT_MOC_LITERAL(11, 122, 3), // "cut"
QT_MOC_LITERAL(12, 126, 4), // "copy"
QT_MOC_LITERAL(13, 131, 5), // "paste"
QT_MOC_LITERAL(14, 137, 10), // "ClipChange"
QT_MOC_LITERAL(15, 148, 13) // "SelClipChange"

    },
    "SEditor\0setProps\0\0SideBarUp\0SideBarUpdate\0"
    "PasteAvail\0contentsMoving\0"
    "handleContentsChange\0position\0"
    "charsRemoved\0charsAdded\0cut\0copy\0paste\0"
    "ClipChange\0SelClipChange"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SEditor[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   69,    2, 0x06 /* Public */,
       3,    1,   74,    2, 0x06 /* Public */,
       4,    0,   77,    2, 0x06 /* Public */,
       5,    0,   78,    2, 0x06 /* Public */,
       6,    2,   79,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    3,   84,    2, 0x09 /* Protected */,
      11,    0,   91,    2, 0x0a /* Public */,
      12,    0,   92,    2, 0x0a /* Public */,
      13,    0,   93,    2, 0x0a /* Public */,
      14,    0,   94,    2, 0x0a /* Public */,
      15,    0,   95,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,    8,    9,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void SEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SEditor *_t = static_cast<SEditor *>(_o);
        switch (_id) {
        case 0: _t->setProps((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->SideBarUp((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->SideBarUpdate(); break;
        case 3: _t->PasteAvail(); break;
        case 4: _t->contentsMoving((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: _t->handleContentsChange((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 6: _t->cut(); break;
        case 7: _t->copy(); break;
        case 8: _t->paste(); break;
        case 9: _t->ClipChange(); break;
        case 10: _t->SelClipChange(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (SEditor::*_t)(int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SEditor::setProps)) {
                *result = 0;
            }
        }
        {
            typedef void (SEditor::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SEditor::SideBarUp)) {
                *result = 1;
            }
        }
        {
            typedef void (SEditor::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SEditor::SideBarUpdate)) {
                *result = 2;
            }
        }
        {
            typedef void (SEditor::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SEditor::PasteAvail)) {
                *result = 3;
            }
        }
        {
            typedef void (SEditor::*_t)(int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SEditor::contentsMoving)) {
                *result = 4;
            }
        }
    }
}

const QMetaObject SEditor::staticMetaObject = {
    { &QTextEdit::staticMetaObject, qt_meta_stringdata_SEditor.data,
      qt_meta_data_SEditor,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SEditor.stringdata))
        return static_cast<void*>(const_cast< SEditor*>(this));
    return QTextEdit::qt_metacast(_clname);
}

int SEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTextEdit::qt_metacall(_c, _id, _a);
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
void SEditor::setProps(int _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SEditor::SideBarUp(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void SEditor::SideBarUpdate()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void SEditor::PasteAvail()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void SEditor::contentsMoving(int _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
struct qt_meta_stringdata_SideBar_t {
    QByteArrayData data[10];
    char stringdata[65];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SideBar_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SideBar_t qt_meta_stringdata_SideBar = {
    {
QT_MOC_LITERAL(0, 0, 7), // "SideBar"
QT_MOC_LITERAL(1, 8, 11), // "ChangeStyle"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 9), // "setPStyle"
QT_MOC_LITERAL(4, 31, 6), // "doMove"
QT_MOC_LITERAL(5, 38, 1), // "x"
QT_MOC_LITERAL(6, 40, 1), // "y"
QT_MOC_LITERAL(7, 42, 9), // "doRepaint"
QT_MOC_LITERAL(8, 52, 10), // "setRepaint"
QT_MOC_LITERAL(9, 63, 1) // "r"

    },
    "SideBar\0ChangeStyle\0\0setPStyle\0doMove\0"
    "x\0y\0doRepaint\0setRepaint\0r"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SideBar[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   44,    2, 0x0a /* Public */,
       4,    2,   47,    2, 0x0a /* Public */,
       7,    0,   52,    2, 0x0a /* Public */,
       8,    1,   53,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    2,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    5,    6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    9,

       0        // eod
};

void SideBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SideBar *_t = static_cast<SideBar *>(_o);
        switch (_id) {
        case 0: _t->ChangeStyle((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: _t->setPStyle((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->doMove((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->doRepaint(); break;
        case 4: _t->setRepaint((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (SideBar::*_t)(int , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SideBar::ChangeStyle)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject SideBar::staticMetaObject = {
    { &QLabel::staticMetaObject, qt_meta_stringdata_SideBar.data,
      qt_meta_data_SideBar,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SideBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SideBar::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SideBar.stringdata))
        return static_cast<void*>(const_cast< SideBar*>(this));
    return QLabel::qt_metacast(_clname);
}

int SideBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLabel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void SideBar::ChangeStyle(int _t1, const QString & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_SToolBColorF_t {
    QByteArrayData data[9];
    char stringdata[76];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SToolBColorF_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SToolBColorF_t qt_meta_stringdata_SToolBColorF = {
    {
QT_MOC_LITERAL(0, 0, 12), // "SToolBColorF"
QT_MOC_LITERAL(1, 13, 8), // "NewColor"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 8), // "SetColor"
QT_MOC_LITERAL(4, 32, 1), // "c"
QT_MOC_LITERAL(5, 34, 8), // "SetShade"
QT_MOC_LITERAL(6, 43, 1), // "s"
QT_MOC_LITERAL(7, 45, 15), // "newShadeHandler"
QT_MOC_LITERAL(8, 61, 14) // "languageChange"

    },
    "SToolBColorF\0NewColor\0\0SetColor\0c\0"
    "SetShade\0s\0newShadeHandler\0languageChange"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SToolBColorF[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   44,    2, 0x0a /* Public */,
       5,    1,   47,    2, 0x0a /* Public */,
       7,    0,   50,    2, 0x0a /* Public */,
       8,    0,   51,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Double,    6,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void SToolBColorF::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SToolBColorF *_t = static_cast<SToolBColorF *>(_o);
        switch (_id) {
        case 0: _t->NewColor((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->SetColor((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->SetShade((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->newShadeHandler(); break;
        case 4: _t->languageChange(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (SToolBColorF::*_t)(int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SToolBColorF::NewColor)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject SToolBColorF::staticMetaObject = {
    { &QToolBar::staticMetaObject, qt_meta_stringdata_SToolBColorF.data,
      qt_meta_data_SToolBColorF,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SToolBColorF::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SToolBColorF::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SToolBColorF.stringdata))
        return static_cast<void*>(const_cast< SToolBColorF*>(this));
    return QToolBar::qt_metacast(_clname);
}

int SToolBColorF::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QToolBar::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void SToolBColorF::NewColor(int _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_SToolBColorS_t {
    QByteArrayData data[9];
    char stringdata[76];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SToolBColorS_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SToolBColorS_t qt_meta_stringdata_SToolBColorS = {
    {
QT_MOC_LITERAL(0, 0, 12), // "SToolBColorS"
QT_MOC_LITERAL(1, 13, 8), // "NewColor"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 8), // "SetColor"
QT_MOC_LITERAL(4, 32, 1), // "c"
QT_MOC_LITERAL(5, 34, 8), // "SetShade"
QT_MOC_LITERAL(6, 43, 1), // "s"
QT_MOC_LITERAL(7, 45, 15), // "newShadeHandler"
QT_MOC_LITERAL(8, 61, 14) // "languageChange"

    },
    "SToolBColorS\0NewColor\0\0SetColor\0c\0"
    "SetShade\0s\0newShadeHandler\0languageChange"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SToolBColorS[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   44,    2, 0x0a /* Public */,
       5,    1,   47,    2, 0x0a /* Public */,
       7,    0,   50,    2, 0x0a /* Public */,
       8,    0,   51,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Double,    6,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void SToolBColorS::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SToolBColorS *_t = static_cast<SToolBColorS *>(_o);
        switch (_id) {
        case 0: _t->NewColor((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->SetColor((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->SetShade((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->newShadeHandler(); break;
        case 4: _t->languageChange(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (SToolBColorS::*_t)(int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SToolBColorS::NewColor)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject SToolBColorS::staticMetaObject = {
    { &QToolBar::staticMetaObject, qt_meta_stringdata_SToolBColorS.data,
      qt_meta_data_SToolBColorS,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SToolBColorS::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SToolBColorS::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SToolBColorS.stringdata))
        return static_cast<void*>(const_cast< SToolBColorS*>(this));
    return QToolBar::qt_metacast(_clname);
}

int SToolBColorS::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QToolBar::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void SToolBColorS::NewColor(int _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_SToolBStyle_t {
    QByteArrayData data[27];
    char stringdata[251];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SToolBStyle_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SToolBStyle_t qt_meta_stringdata_SToolBStyle = {
    {
QT_MOC_LITERAL(0, 0, 11), // "SToolBStyle"
QT_MOC_LITERAL(1, 12, 7), // "NewKern"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 9), // "NewShadow"
QT_MOC_LITERAL(4, 31, 10), // "newOutline"
QT_MOC_LITERAL(5, 42, 9), // "newStrike"
QT_MOC_LITERAL(6, 52, 12), // "newUnderline"
QT_MOC_LITERAL(7, 65, 8), // "newStyle"
QT_MOC_LITERAL(8, 74, 16), // "newStrikeHandler"
QT_MOC_LITERAL(9, 91, 19), // "newUnderlineHandler"
QT_MOC_LITERAL(10, 111, 17), // "newOutlineHandler"
QT_MOC_LITERAL(11, 129, 16), // "newShadowHandler"
QT_MOC_LITERAL(12, 146, 14), // "newKernHandler"
QT_MOC_LITERAL(13, 161, 9), // "SetShadow"
QT_MOC_LITERAL(14, 171, 1), // "x"
QT_MOC_LITERAL(15, 173, 1), // "y"
QT_MOC_LITERAL(16, 175, 9), // "setStrike"
QT_MOC_LITERAL(17, 185, 1), // "p"
QT_MOC_LITERAL(18, 187, 1), // "w"
QT_MOC_LITERAL(19, 189, 12), // "setUnderline"
QT_MOC_LITERAL(20, 202, 10), // "setOutline"
QT_MOC_LITERAL(21, 213, 1), // "o"
QT_MOC_LITERAL(22, 215, 8), // "SetStyle"
QT_MOC_LITERAL(23, 224, 1), // "s"
QT_MOC_LITERAL(24, 226, 7), // "SetKern"
QT_MOC_LITERAL(25, 234, 1), // "k"
QT_MOC_LITERAL(26, 236, 14) // "languageChange"

    },
    "SToolBStyle\0NewKern\0\0NewShadow\0"
    "newOutline\0newStrike\0newUnderline\0"
    "newStyle\0newStrikeHandler\0newUnderlineHandler\0"
    "newOutlineHandler\0newShadowHandler\0"
    "newKernHandler\0SetShadow\0x\0y\0setStrike\0"
    "p\0w\0setUnderline\0setOutline\0o\0SetStyle\0"
    "s\0SetKern\0k\0languageChange"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SToolBStyle[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  104,    2, 0x06 /* Public */,
       3,    2,  107,    2, 0x06 /* Public */,
       4,    1,  112,    2, 0x06 /* Public */,
       5,    2,  115,    2, 0x06 /* Public */,
       6,    2,  120,    2, 0x06 /* Public */,
       7,    1,  125,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,  128,    2, 0x0a /* Public */,
       9,    0,  129,    2, 0x0a /* Public */,
      10,    0,  130,    2, 0x0a /* Public */,
      11,    0,  131,    2, 0x0a /* Public */,
      12,    0,  132,    2, 0x0a /* Public */,
      13,    2,  133,    2, 0x0a /* Public */,
      16,    2,  138,    2, 0x0a /* Public */,
      19,    2,  143,    2, 0x0a /* Public */,
      20,    1,  148,    2, 0x0a /* Public */,
      22,    1,  151,    2, 0x0a /* Public */,
      24,    1,  154,    2, 0x0a /* Public */,
      26,    0,  157,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Double, QMetaType::Double,    2,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Double, QMetaType::Double,    2,    2,
    QMetaType::Void, QMetaType::Double, QMetaType::Double,    2,    2,
    QMetaType::Void, QMetaType::Int,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double, QMetaType::Double,   14,   15,
    QMetaType::Void, QMetaType::Double, QMetaType::Double,   17,   18,
    QMetaType::Void, QMetaType::Double, QMetaType::Double,   17,   18,
    QMetaType::Void, QMetaType::Double,   21,
    QMetaType::Void, QMetaType::Int,   23,
    QMetaType::Void, QMetaType::Double,   25,
    QMetaType::Void,

       0        // eod
};

void SToolBStyle::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SToolBStyle *_t = static_cast<SToolBStyle *>(_o);
        switch (_id) {
        case 0: _t->NewKern((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: _t->NewShadow((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 2: _t->newOutline((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->newStrike((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 4: _t->newUnderline((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 5: _t->newStyle((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->newStrikeHandler(); break;
        case 7: _t->newUnderlineHandler(); break;
        case 8: _t->newOutlineHandler(); break;
        case 9: _t->newShadowHandler(); break;
        case 10: _t->newKernHandler(); break;
        case 11: _t->SetShadow((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 12: _t->setStrike((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 13: _t->setUnderline((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 14: _t->setOutline((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 15: _t->SetStyle((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->SetKern((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 17: _t->languageChange(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (SToolBStyle::*_t)(double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SToolBStyle::NewKern)) {
                *result = 0;
            }
        }
        {
            typedef void (SToolBStyle::*_t)(double , double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SToolBStyle::NewShadow)) {
                *result = 1;
            }
        }
        {
            typedef void (SToolBStyle::*_t)(double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SToolBStyle::newOutline)) {
                *result = 2;
            }
        }
        {
            typedef void (SToolBStyle::*_t)(double , double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SToolBStyle::newStrike)) {
                *result = 3;
            }
        }
        {
            typedef void (SToolBStyle::*_t)(double , double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SToolBStyle::newUnderline)) {
                *result = 4;
            }
        }
        {
            typedef void (SToolBStyle::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SToolBStyle::newStyle)) {
                *result = 5;
            }
        }
    }
}

const QMetaObject SToolBStyle::staticMetaObject = {
    { &QToolBar::staticMetaObject, qt_meta_stringdata_SToolBStyle.data,
      qt_meta_data_SToolBStyle,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SToolBStyle::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SToolBStyle::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SToolBStyle.stringdata))
        return static_cast<void*>(const_cast< SToolBStyle*>(this));
    return QToolBar::qt_metacast(_clname);
}

int SToolBStyle::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QToolBar::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 18;
    }
    return _id;
}

// SIGNAL 0
void SToolBStyle::NewKern(double _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SToolBStyle::NewShadow(double _t1, double _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void SToolBStyle::newOutline(double _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void SToolBStyle::newStrike(double _t1, double _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void SToolBStyle::newUnderline(double _t1, double _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void SToolBStyle::newStyle(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
struct qt_meta_stringdata_SToolBAlign_t {
    QByteArrayData data[8];
    char stringdata[74];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SToolBAlign_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SToolBAlign_t qt_meta_stringdata_SToolBAlign = {
    {
QT_MOC_LITERAL(0, 0, 11), // "SToolBAlign"
QT_MOC_LITERAL(1, 12, 8), // "newAlign"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 12), // "newParaStyle"
QT_MOC_LITERAL(4, 35, 8), // "SetAlign"
QT_MOC_LITERAL(5, 44, 1), // "s"
QT_MOC_LITERAL(6, 46, 12), // "SetParaStyle"
QT_MOC_LITERAL(7, 59, 14) // "languageChange"

    },
    "SToolBAlign\0newAlign\0\0newParaStyle\0"
    "SetAlign\0s\0SetParaStyle\0languageChange"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SToolBAlign[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       3,    1,   42,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   45,    2, 0x0a /* Public */,
       6,    1,   48,    2, 0x0a /* Public */,
       7,    0,   51,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void,

       0        // eod
};

void SToolBAlign::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SToolBAlign *_t = static_cast<SToolBAlign *>(_o);
        switch (_id) {
        case 0: _t->newAlign((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->newParaStyle((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->SetAlign((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->SetParaStyle((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->languageChange(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (SToolBAlign::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SToolBAlign::newAlign)) {
                *result = 0;
            }
        }
        {
            typedef void (SToolBAlign::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SToolBAlign::newParaStyle)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject SToolBAlign::staticMetaObject = {
    { &QToolBar::staticMetaObject, qt_meta_stringdata_SToolBAlign.data,
      qt_meta_data_SToolBAlign,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SToolBAlign::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SToolBAlign::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SToolBAlign.stringdata))
        return static_cast<void*>(const_cast< SToolBAlign*>(this));
    return QToolBar::qt_metacast(_clname);
}

int SToolBAlign::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QToolBar::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void SToolBAlign::newAlign(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SToolBAlign::newParaStyle(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
struct qt_meta_stringdata_SToolBFont_t {
    QByteArrayData data[14];
    char stringdata[116];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SToolBFont_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SToolBFont_t qt_meta_stringdata_SToolBFont = {
    {
QT_MOC_LITERAL(0, 0, 10), // "SToolBFont"
QT_MOC_LITERAL(1, 11, 7), // "NewFont"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 7), // "NewSize"
QT_MOC_LITERAL(4, 28, 8), // "newScale"
QT_MOC_LITERAL(5, 37, 9), // "newScaleV"
QT_MOC_LITERAL(6, 47, 7), // "SetFont"
QT_MOC_LITERAL(7, 55, 1), // "f"
QT_MOC_LITERAL(8, 57, 7), // "SetSize"
QT_MOC_LITERAL(9, 65, 1), // "s"
QT_MOC_LITERAL(10, 67, 8), // "SetScale"
QT_MOC_LITERAL(11, 76, 9), // "SetScaleV"
QT_MOC_LITERAL(12, 86, 14), // "newSizeHandler"
QT_MOC_LITERAL(13, 101, 14) // "languageChange"

    },
    "SToolBFont\0NewFont\0\0NewSize\0newScale\0"
    "newScaleV\0SetFont\0f\0SetSize\0s\0SetScale\0"
    "SetScaleV\0newSizeHandler\0languageChange"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SToolBFont[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,
       3,    1,   67,    2, 0x06 /* Public */,
       4,    1,   70,    2, 0x06 /* Public */,
       5,    1,   73,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   76,    2, 0x0a /* Public */,
       8,    1,   79,    2, 0x0a /* Public */,
      10,    1,   82,    2, 0x0a /* Public */,
      11,    1,   85,    2, 0x0a /* Public */,
      12,    0,   88,    2, 0x0a /* Public */,
      13,    0,   89,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Double,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::Double,    9,
    QMetaType::Void, QMetaType::Double,    9,
    QMetaType::Void, QMetaType::Double,    9,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void SToolBFont::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SToolBFont *_t = static_cast<SToolBFont *>(_o);
        switch (_id) {
        case 0: _t->NewFont((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->NewSize((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: _t->newScale((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->newScaleV((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: _t->SetFont((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->SetSize((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 6: _t->SetScale((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 7: _t->SetScaleV((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 8: _t->newSizeHandler(); break;
        case 9: _t->languageChange(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (SToolBFont::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SToolBFont::NewFont)) {
                *result = 0;
            }
        }
        {
            typedef void (SToolBFont::*_t)(double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SToolBFont::NewSize)) {
                *result = 1;
            }
        }
        {
            typedef void (SToolBFont::*_t)(double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SToolBFont::newScale)) {
                *result = 2;
            }
        }
        {
            typedef void (SToolBFont::*_t)(double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SToolBFont::newScaleV)) {
                *result = 3;
            }
        }
    }
}

const QMetaObject SToolBFont::staticMetaObject = {
    { &QToolBar::staticMetaObject, qt_meta_stringdata_SToolBFont.data,
      qt_meta_data_SToolBFont,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SToolBFont::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SToolBFont::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SToolBFont.stringdata))
        return static_cast<void*>(const_cast< SToolBFont*>(this));
    return QToolBar::qt_metacast(_clname);
}

int SToolBFont::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QToolBar::qt_metacall(_c, _id, _a);
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
void SToolBFont::NewFont(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SToolBFont::NewSize(double _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void SToolBFont::newScale(double _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void SToolBFont::newScaleV(double _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
struct qt_meta_stringdata_StoryEditor_t {
    QByteArrayData data[67];
    char stringdata[667];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_StoryEditor_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_StoryEditor_t qt_meta_stringdata_StoryEditor = {
    {
QT_MOC_LITERAL(0, 0, 11), // "StoryEditor"
QT_MOC_LITERAL(1, 12, 10), // "DocChanged"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 6), // "EditSt"
QT_MOC_LITERAL(4, 31, 8), // "newStyle"
QT_MOC_LITERAL(5, 40, 8), // "newAlign"
QT_MOC_LITERAL(6, 49, 2), // "st"
QT_MOC_LITERAL(7, 52, 9), // "newTxFill"
QT_MOC_LITERAL(8, 62, 1), // "c"
QT_MOC_LITERAL(9, 64, 1), // "s"
QT_MOC_LITERAL(10, 66, 11), // "newTxStroke"
QT_MOC_LITERAL(11, 78, 9), // "newTxFont"
QT_MOC_LITERAL(12, 88, 1), // "f"
QT_MOC_LITERAL(13, 90, 9), // "newTxSize"
QT_MOC_LITERAL(14, 100, 10), // "newTxStyle"
QT_MOC_LITERAL(15, 111, 11), // "setBackPref"
QT_MOC_LITERAL(16, 123, 11), // "setFontPref"
QT_MOC_LITERAL(17, 135, 10), // "newTxScale"
QT_MOC_LITERAL(18, 146, 11), // "newTxScaleV"
QT_MOC_LITERAL(19, 158, 9), // "newTxKern"
QT_MOC_LITERAL(20, 168, 13), // "newShadowOffs"
QT_MOC_LITERAL(21, 182, 1), // "x"
QT_MOC_LITERAL(22, 184, 1), // "y"
QT_MOC_LITERAL(23, 186, 13), // "newTxtOutline"
QT_MOC_LITERAL(24, 200, 1), // "o"
QT_MOC_LITERAL(25, 202, 15), // "newTxtUnderline"
QT_MOC_LITERAL(26, 218, 1), // "p"
QT_MOC_LITERAL(27, 220, 1), // "w"
QT_MOC_LITERAL(28, 222, 12), // "newTxtStrike"
QT_MOC_LITERAL(29, 235, 11), // "updateProps"
QT_MOC_LITERAL(30, 247, 12), // "QTextCursor&"
QT_MOC_LITERAL(31, 260, 3), // "cur"
QT_MOC_LITERAL(32, 264, 2), // "ch"
QT_MOC_LITERAL(33, 267, 13), // "changeStyleSB"
QT_MOC_LITERAL(34, 281, 2), // "pa"
QT_MOC_LITERAL(35, 284, 11), // "changeStyle"
QT_MOC_LITERAL(36, 296, 12), // "updateStatus"
QT_MOC_LITERAL(37, 309, 8), // "Do_leave"
QT_MOC_LITERAL(38, 318, 9), // "Do_leave2"
QT_MOC_LITERAL(39, 328, 15), // "Do_saveDocument"
QT_MOC_LITERAL(40, 344, 6), // "Do_new"
QT_MOC_LITERAL(41, 351, 14), // "slotFileRevert"
QT_MOC_LITERAL(42, 366, 12), // "Do_selectAll"
QT_MOC_LITERAL(43, 379, 7), // "Do_copy"
QT_MOC_LITERAL(44, 387, 8), // "Do_paste"
QT_MOC_LITERAL(45, 396, 6), // "Do_cut"
QT_MOC_LITERAL(46, 403, 6), // "Do_del"
QT_MOC_LITERAL(47, 410, 8), // "Do_insSp"
QT_MOC_LITERAL(48, 419, 16), // "insertSampleText"
QT_MOC_LITERAL(49, 436, 11), // "Do_fontPrev"
QT_MOC_LITERAL(50, 448, 9), // "CopyAvail"
QT_MOC_LITERAL(51, 458, 1), // "u"
QT_MOC_LITERAL(52, 460, 10), // "PasteAvail"
QT_MOC_LITERAL(53, 471, 15), // "updateTextFrame"
QT_MOC_LITERAL(54, 487, 10), // "SearchText"
QT_MOC_LITERAL(55, 498, 12), // "modifiedText"
QT_MOC_LITERAL(56, 511, 12), // "LoadTextFile"
QT_MOC_LITERAL(57, 524, 12), // "SaveTextFile"
QT_MOC_LITERAL(58, 537, 8), // "setSmart"
QT_MOC_LITERAL(59, 546, 14), // "languageChange"
QT_MOC_LITERAL(60, 561, 21), // "specialActionKeyEvent"
QT_MOC_LITERAL(61, 583, 12), // "unicodevalue"
QT_MOC_LITERAL(62, 596, 22), // "slot_insertSpecialChar"
QT_MOC_LITERAL(63, 619, 26), // "slot_insertUserSpecialChar"
QT_MOC_LITERAL(64, 646, 11), // "doubleClick"
QT_MOC_LITERAL(65, 658, 4), // "para"
QT_MOC_LITERAL(66, 663, 3) // "pos"

    },
    "StoryEditor\0DocChanged\0\0EditSt\0newStyle\0"
    "newAlign\0st\0newTxFill\0c\0s\0newTxStroke\0"
    "newTxFont\0f\0newTxSize\0newTxStyle\0"
    "setBackPref\0setFontPref\0newTxScale\0"
    "newTxScaleV\0newTxKern\0newShadowOffs\0"
    "x\0y\0newTxtOutline\0o\0newTxtUnderline\0"
    "p\0w\0newTxtStrike\0updateProps\0QTextCursor&\0"
    "cur\0ch\0changeStyleSB\0pa\0changeStyle\0"
    "updateStatus\0Do_leave\0Do_leave2\0"
    "Do_saveDocument\0Do_new\0slotFileRevert\0"
    "Do_selectAll\0Do_copy\0Do_paste\0Do_cut\0"
    "Do_del\0Do_insSp\0insertSampleText\0"
    "Do_fontPrev\0CopyAvail\0u\0PasteAvail\0"
    "updateTextFrame\0SearchText\0modifiedText\0"
    "LoadTextFile\0SaveTextFile\0setSmart\0"
    "languageChange\0specialActionKeyEvent\0"
    "unicodevalue\0slot_insertSpecialChar\0"
    "slot_insertUserSpecialChar\0doubleClick\0"
    "para\0pos"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_StoryEditor[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      50,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  264,    2, 0x06 /* Public */,
       3,    0,  265,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,  266,    2, 0x0a /* Public */,
       5,    1,  269,    2, 0x0a /* Public */,
       7,    2,  272,    2, 0x0a /* Public */,
      10,    2,  277,    2, 0x0a /* Public */,
      11,    1,  282,    2, 0x0a /* Public */,
      13,    1,  285,    2, 0x0a /* Public */,
      14,    1,  288,    2, 0x0a /* Public */,
      15,    0,  291,    2, 0x09 /* Protected */,
      16,    0,  292,    2, 0x09 /* Protected */,
      17,    0,  293,    2, 0x09 /* Protected */,
      18,    0,  294,    2, 0x09 /* Protected */,
      19,    1,  295,    2, 0x09 /* Protected */,
      20,    2,  298,    2, 0x09 /* Protected */,
      23,    1,  303,    2, 0x09 /* Protected */,
      25,    2,  306,    2, 0x09 /* Protected */,
      28,    2,  311,    2, 0x09 /* Protected */,
      29,    0,  316,    2, 0x09 /* Protected */,
      29,    1,  317,    2, 0x09 /* Protected */,
      29,    2,  320,    2, 0x09 /* Protected */,
      33,    2,  325,    2, 0x09 /* Protected */,
      35,    0,  330,    2, 0x09 /* Protected */,
      36,    0,  331,    2, 0x09 /* Protected */,
      37,    0,  332,    2, 0x09 /* Protected */,
      38,    0,  333,    2, 0x09 /* Protected */,
      39,    0,  334,    2, 0x09 /* Protected */,
      40,    0,  335,    2, 0x09 /* Protected */,
      41,    0,  336,    2, 0x09 /* Protected */,
      42,    0,  337,    2, 0x09 /* Protected */,
      43,    0,  338,    2, 0x09 /* Protected */,
      44,    0,  339,    2, 0x09 /* Protected */,
      45,    0,  340,    2, 0x09 /* Protected */,
      46,    0,  341,    2, 0x09 /* Protected */,
      47,    0,  342,    2, 0x09 /* Protected */,
      48,    0,  343,    2, 0x09 /* Protected */,
      49,    0,  344,    2, 0x09 /* Protected */,
      50,    1,  345,    2, 0x09 /* Protected */,
      52,    0,  348,    2, 0x09 /* Protected */,
      53,    0,  349,    2, 0x09 /* Protected */,
      54,    0,  350,    2, 0x09 /* Protected */,
      55,    0,  351,    2, 0x09 /* Protected */,
      56,    0,  352,    2, 0x09 /* Protected */,
      57,    0,  353,    2, 0x09 /* Protected */,
      58,    1,  354,    2, 0x09 /* Protected */,
      59,    0,  357,    2, 0x09 /* Protected */,
      60,    1,  358,    2, 0x09 /* Protected */,
      62,    0,  361,    2, 0x09 /* Protected */,
      63,    2,  362,    2, 0x09 /* Protected */,
      64,    2,  367,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    8,    9,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    8,    9,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void, QMetaType::Double,    9,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,    9,
    QMetaType::Void, QMetaType::Double, QMetaType::Double,   21,   22,
    QMetaType::Void, QMetaType::Double,   24,
    QMetaType::Void, QMetaType::Double, QMetaType::Double,   26,   27,
    QMetaType::Void, QMetaType::Double, QMetaType::Double,   26,   27,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 30,   31,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   26,   32,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   34,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   51,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   61,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QChar, QMetaType::QString,    2,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   65,   66,

       0        // eod
};

void StoryEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        StoryEditor *_t = static_cast<StoryEditor *>(_o);
        switch (_id) {
        case 0: _t->DocChanged(); break;
        case 1: _t->EditSt(); break;
        case 2: _t->newStyle((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->newAlign((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->newTxFill((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: _t->newTxStroke((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 6: _t->newTxFont((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->newTxSize((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 8: _t->newTxStyle((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->setBackPref(); break;
        case 10: _t->setFontPref(); break;
        case 11: _t->newTxScale(); break;
        case 12: _t->newTxScaleV(); break;
        case 13: _t->newTxKern((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 14: _t->newShadowOffs((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 15: _t->newTxtOutline((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 16: _t->newTxtUnderline((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 17: _t->newTxtStrike((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 18: _t->updateProps(); break;
        case 19: _t->updateProps((*reinterpret_cast< QTextCursor(*)>(_a[1]))); break;
        case 20: _t->updateProps((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 21: _t->changeStyleSB((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 22: _t->changeStyle(); break;
        case 23: _t->updateStatus(); break;
        case 24: _t->Do_leave(); break;
        case 25: _t->Do_leave2(); break;
        case 26: _t->Do_saveDocument(); break;
        case 27: { bool _r = _t->Do_new();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 28: _t->slotFileRevert(); break;
        case 29: _t->Do_selectAll(); break;
        case 30: _t->Do_copy(); break;
        case 31: _t->Do_paste(); break;
        case 32: _t->Do_cut(); break;
        case 33: _t->Do_del(); break;
        case 34: _t->Do_insSp(); break;
        case 35: _t->insertSampleText(); break;
        case 36: _t->Do_fontPrev(); break;
        case 37: _t->CopyAvail((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 38: _t->PasteAvail(); break;
        case 39: _t->updateTextFrame(); break;
        case 40: _t->SearchText(); break;
        case 41: _t->modifiedText(); break;
        case 42: _t->LoadTextFile(); break;
        case 43: _t->SaveTextFile(); break;
        case 44: _t->setSmart((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 45: _t->languageChange(); break;
        case 46: _t->specialActionKeyEvent((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 47: _t->slot_insertSpecialChar(); break;
        case 48: _t->slot_insertUserSpecialChar((*reinterpret_cast< QChar(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 49: _t->doubleClick((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (StoryEditor::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&StoryEditor::DocChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (StoryEditor::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&StoryEditor::EditSt)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject StoryEditor::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_StoryEditor.data,
      qt_meta_data_StoryEditor,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *StoryEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StoryEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_StoryEditor.stringdata))
        return static_cast<void*>(const_cast< StoryEditor*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int StoryEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 50)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 50;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 50)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 50;
    }
    return _id;
}

// SIGNAL 0
void StoryEditor::DocChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void StoryEditor::EditSt()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
