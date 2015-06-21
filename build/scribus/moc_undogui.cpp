/****************************************************************************
** Meta object code from reading C++ file 'undogui.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../scribus/undogui.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'undogui.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_UndoGui_t {
    QByteArrayData data[14];
    char stringdata[139];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UndoGui_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UndoGui_t qt_meta_stringdata_UndoGui = {
    {
QT_MOC_LITERAL(0, 0, 7), // "UndoGui"
QT_MOC_LITERAL(1, 8, 14), // "insertUndoItem"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 11), // "UndoObject*"
QT_MOC_LITERAL(4, 36, 6), // "target"
QT_MOC_LITERAL(5, 43, 10), // "UndoState*"
QT_MOC_LITERAL(6, 54, 5), // "state"
QT_MOC_LITERAL(7, 60, 14), // "insertRedoItem"
QT_MOC_LITERAL(8, 75, 10), // "updateUndo"
QT_MOC_LITERAL(9, 86, 5), // "steps"
QT_MOC_LITERAL(10, 92, 10), // "updateRedo"
QT_MOC_LITERAL(11, 103, 17), // "updateUndoActions"
QT_MOC_LITERAL(12, 121, 9), // "clearRedo"
QT_MOC_LITERAL(13, 131, 7) // "popBack"

    },
    "UndoGui\0insertUndoItem\0\0UndoObject*\0"
    "target\0UndoState*\0state\0insertRedoItem\0"
    "updateUndo\0steps\0updateRedo\0"
    "updateUndoActions\0clearRedo\0popBack"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UndoGui[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   49,    2, 0x0a /* Public */,
       7,    2,   54,    2, 0x0a /* Public */,
       8,    1,   59,    2, 0x0a /* Public */,
      10,    1,   62,    2, 0x0a /* Public */,
      11,    0,   65,    2, 0x0a /* Public */,
      12,    0,   66,    2, 0x0a /* Public */,
      13,    0,   67,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void UndoGui::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        UndoGui *_t = static_cast<UndoGui *>(_o);
        switch (_id) {
        case 0: _t->insertUndoItem((*reinterpret_cast< UndoObject*(*)>(_a[1])),(*reinterpret_cast< UndoState*(*)>(_a[2]))); break;
        case 1: _t->insertRedoItem((*reinterpret_cast< UndoObject*(*)>(_a[1])),(*reinterpret_cast< UndoState*(*)>(_a[2]))); break;
        case 2: _t->updateUndo((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->updateRedo((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->updateUndoActions(); break;
        case 5: _t->clearRedo(); break;
        case 6: _t->popBack(); break;
        default: ;
        }
    }
}

const QMetaObject UndoGui::staticMetaObject = {
    { &ScDockPalette::staticMetaObject, qt_meta_stringdata_UndoGui.data,
      qt_meta_data_UndoGui,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *UndoGui::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UndoGui::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_UndoGui.stringdata))
        return static_cast<void*>(const_cast< UndoGui*>(this));
    return ScDockPalette::qt_metacast(_clname);
}

int UndoGui::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ScDockPalette::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
struct qt_meta_stringdata_UndoWidget_t {
    QByteArrayData data[21];
    char stringdata[202];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UndoWidget_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UndoWidget_t qt_meta_stringdata_UndoWidget = {
    {
QT_MOC_LITERAL(0, 0, 10), // "UndoWidget"
QT_MOC_LITERAL(1, 11, 4), // "undo"
QT_MOC_LITERAL(2, 16, 0), // ""
QT_MOC_LITERAL(3, 17, 5), // "steps"
QT_MOC_LITERAL(4, 23, 4), // "redo"
QT_MOC_LITERAL(5, 28, 11), // "undoClicked"
QT_MOC_LITERAL(6, 40, 11), // "redoClicked"
QT_MOC_LITERAL(7, 52, 15), // "undoMenuClicked"
QT_MOC_LITERAL(8, 68, 8), // "QAction*"
QT_MOC_LITERAL(9, 77, 2), // "id"
QT_MOC_LITERAL(10, 80, 15), // "redoMenuClicked"
QT_MOC_LITERAL(11, 96, 14), // "insertUndoItem"
QT_MOC_LITERAL(12, 111, 11), // "UndoObject*"
QT_MOC_LITERAL(13, 123, 6), // "target"
QT_MOC_LITERAL(14, 130, 10), // "UndoState*"
QT_MOC_LITERAL(15, 141, 5), // "state"
QT_MOC_LITERAL(16, 147, 14), // "insertRedoItem"
QT_MOC_LITERAL(17, 162, 10), // "updateUndo"
QT_MOC_LITERAL(18, 173, 10), // "updateRedo"
QT_MOC_LITERAL(19, 184, 9), // "clearRedo"
QT_MOC_LITERAL(20, 194, 7) // "popBack"

    },
    "UndoWidget\0undo\0\0steps\0redo\0undoClicked\0"
    "redoClicked\0undoMenuClicked\0QAction*\0"
    "id\0redoMenuClicked\0insertUndoItem\0"
    "UndoObject*\0target\0UndoState*\0state\0"
    "insertRedoItem\0updateUndo\0updateRedo\0"
    "clearRedo\0popBack"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UndoWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x06 /* Public */,
       4,    1,   77,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   80,    2, 0x08 /* Private */,
       6,    0,   81,    2, 0x08 /* Private */,
       7,    1,   82,    2, 0x08 /* Private */,
      10,    1,   85,    2, 0x08 /* Private */,
      11,    2,   88,    2, 0x0a /* Public */,
      16,    2,   93,    2, 0x0a /* Public */,
      17,    1,   98,    2, 0x0a /* Public */,
      18,    1,  101,    2, 0x0a /* Public */,
      19,    0,  104,    2, 0x0a /* Public */,
      20,    0,  105,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 12, 0x80000000 | 14,   13,   15,
    QMetaType::Void, 0x80000000 | 12, 0x80000000 | 14,   13,   15,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void UndoWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        UndoWidget *_t = static_cast<UndoWidget *>(_o);
        switch (_id) {
        case 0: _t->undo((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->redo((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->undoClicked(); break;
        case 3: _t->redoClicked(); break;
        case 4: _t->undoMenuClicked((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 5: _t->redoMenuClicked((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 6: _t->insertUndoItem((*reinterpret_cast< UndoObject*(*)>(_a[1])),(*reinterpret_cast< UndoState*(*)>(_a[2]))); break;
        case 7: _t->insertRedoItem((*reinterpret_cast< UndoObject*(*)>(_a[1])),(*reinterpret_cast< UndoState*(*)>(_a[2]))); break;
        case 8: _t->updateUndo((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->updateRedo((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->clearRedo(); break;
        case 11: _t->popBack(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (UndoWidget::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UndoWidget::undo)) {
                *result = 0;
            }
        }
        {
            typedef void (UndoWidget::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UndoWidget::redo)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject UndoWidget::staticMetaObject = {
    { &UndoGui::staticMetaObject, qt_meta_stringdata_UndoWidget.data,
      qt_meta_data_UndoWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *UndoWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UndoWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_UndoWidget.stringdata))
        return static_cast<void*>(const_cast< UndoWidget*>(this));
    return UndoGui::qt_metacast(_clname);
}

int UndoWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UndoGui::qt_metacall(_c, _id, _a);
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
void UndoWidget::undo(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void UndoWidget::redo(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
struct qt_meta_stringdata_UndoPalette_t {
    QByteArrayData data[28];
    char stringdata[297];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UndoPalette_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UndoPalette_t qt_meta_stringdata_UndoPalette = {
    {
QT_MOC_LITERAL(0, 0, 11), // "UndoPalette"
QT_MOC_LITERAL(1, 12, 10), // "objectMode"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 9), // "isEnabled"
QT_MOC_LITERAL(4, 34, 4), // "undo"
QT_MOC_LITERAL(5, 39, 5), // "steps"
QT_MOC_LITERAL(6, 45, 4), // "redo"
QT_MOC_LITERAL(7, 50, 11), // "undoClicked"
QT_MOC_LITERAL(8, 62, 11), // "redoClicked"
QT_MOC_LITERAL(9, 74, 15), // "undoListClicked"
QT_MOC_LITERAL(10, 90, 1), // "i"
QT_MOC_LITERAL(11, 92, 11), // "showToolTip"
QT_MOC_LITERAL(12, 104, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(13, 121, 13), // "removeToolTip"
QT_MOC_LITERAL(14, 135, 21), // "objectCheckBoxClicked"
QT_MOC_LITERAL(15, 157, 2), // "on"
QT_MOC_LITERAL(16, 160, 14), // "languageChange"
QT_MOC_LITERAL(17, 175, 14), // "insertUndoItem"
QT_MOC_LITERAL(18, 190, 11), // "UndoObject*"
QT_MOC_LITERAL(19, 202, 6), // "target"
QT_MOC_LITERAL(20, 209, 10), // "UndoState*"
QT_MOC_LITERAL(21, 220, 5), // "state"
QT_MOC_LITERAL(22, 226, 14), // "insertRedoItem"
QT_MOC_LITERAL(23, 241, 10), // "updateUndo"
QT_MOC_LITERAL(24, 252, 10), // "updateRedo"
QT_MOC_LITERAL(25, 263, 9), // "clearRedo"
QT_MOC_LITERAL(26, 273, 7), // "popBack"
QT_MOC_LITERAL(27, 281, 15) // "updateFromPrefs"

    },
    "UndoPalette\0objectMode\0\0isEnabled\0"
    "undo\0steps\0redo\0undoClicked\0redoClicked\0"
    "undoListClicked\0i\0showToolTip\0"
    "QListWidgetItem*\0removeToolTip\0"
    "objectCheckBoxClicked\0on\0languageChange\0"
    "insertUndoItem\0UndoObject*\0target\0"
    "UndoState*\0state\0insertRedoItem\0"
    "updateUndo\0updateRedo\0clearRedo\0popBack\0"
    "updateFromPrefs"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UndoPalette[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   99,    2, 0x06 /* Public */,
       4,    1,  102,    2, 0x06 /* Public */,
       6,    1,  105,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,  108,    2, 0x08 /* Private */,
       8,    0,  109,    2, 0x08 /* Private */,
       9,    1,  110,    2, 0x08 /* Private */,
      11,    1,  113,    2, 0x08 /* Private */,
      13,    0,  116,    2, 0x08 /* Private */,
      14,    1,  117,    2, 0x08 /* Private */,
      16,    0,  120,    2, 0x0a /* Public */,
      17,    2,  121,    2, 0x0a /* Public */,
      22,    2,  126,    2, 0x0a /* Public */,
      23,    1,  131,    2, 0x0a /* Public */,
      24,    1,  134,    2, 0x0a /* Public */,
      25,    0,  137,    2, 0x0a /* Public */,
      26,    0,  138,    2, 0x0a /* Public */,
      27,    0,  139,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, 0x80000000 | 12,   10,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   15,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 18, 0x80000000 | 20,   19,   21,
    QMetaType::Void, 0x80000000 | 18, 0x80000000 | 20,   19,   21,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void UndoPalette::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        UndoPalette *_t = static_cast<UndoPalette *>(_o);
        switch (_id) {
        case 0: _t->objectMode((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->undo((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->redo((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->undoClicked(); break;
        case 4: _t->redoClicked(); break;
        case 5: _t->undoListClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->showToolTip((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 7: _t->removeToolTip(); break;
        case 8: _t->objectCheckBoxClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->languageChange(); break;
        case 10: _t->insertUndoItem((*reinterpret_cast< UndoObject*(*)>(_a[1])),(*reinterpret_cast< UndoState*(*)>(_a[2]))); break;
        case 11: _t->insertRedoItem((*reinterpret_cast< UndoObject*(*)>(_a[1])),(*reinterpret_cast< UndoState*(*)>(_a[2]))); break;
        case 12: _t->updateUndo((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->updateRedo((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->clearRedo(); break;
        case 15: _t->popBack(); break;
        case 16: _t->updateFromPrefs(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (UndoPalette::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UndoPalette::objectMode)) {
                *result = 0;
            }
        }
        {
            typedef void (UndoPalette::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UndoPalette::undo)) {
                *result = 1;
            }
        }
        {
            typedef void (UndoPalette::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UndoPalette::redo)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject UndoPalette::staticMetaObject = {
    { &UndoGui::staticMetaObject, qt_meta_stringdata_UndoPalette.data,
      qt_meta_data_UndoPalette,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *UndoPalette::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UndoPalette::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_UndoPalette.stringdata))
        return static_cast<void*>(const_cast< UndoPalette*>(this));
    return UndoGui::qt_metacast(_clname);
}

int UndoPalette::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UndoGui::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 17;
    }
    return _id;
}

// SIGNAL 0
void UndoPalette::objectMode(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void UndoPalette::undo(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void UndoPalette::redo(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
