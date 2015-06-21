/****************************************************************************
** Meta object code from reading C++ file 'pagepalette_widgets.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../scribus/ui/pagepalette_widgets.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pagepalette_widgets.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SeList_t {
    QByteArrayData data[5];
    char stringdata[51];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SeList_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SeList_t qt_meta_stringdata_SeList = {
    {
QT_MOC_LITERAL(0, 0, 6), // "SeList"
QT_MOC_LITERAL(1, 7, 16), // "thumbnailChanged"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 9), // "DelMaster"
QT_MOC_LITERAL(4, 35, 15) // "toggleThumbnail"

    },
    "SeList\0thumbnailChanged\0\0DelMaster\0"
    "toggleThumbnail"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SeList[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,
       3,    1,   30,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   33,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void SeList::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SeList *_t = static_cast<SeList *>(_o);
        switch (_id) {
        case 0: _t->thumbnailChanged(); break;
        case 1: _t->DelMaster((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->toggleThumbnail(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (SeList::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SeList::thumbnailChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (SeList::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SeList::DelMaster)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject SeList::staticMetaObject = {
    { &QListWidget::staticMetaObject, qt_meta_stringdata_SeList.data,
      qt_meta_data_SeList,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SeList::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SeList::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SeList.stringdata))
        return static_cast<void*>(const_cast< SeList*>(this));
    return QListWidget::qt_metacast(_clname);
}

int SeList::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QListWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void SeList::thumbnailChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void SeList::DelMaster(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
struct qt_meta_stringdata_SeView_t {
    QByteArrayData data[8];
    char stringdata[57];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SeView_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SeView_t qt_meta_stringdata_SeView = {
    {
QT_MOC_LITERAL(0, 0, 6), // "SeView"
QT_MOC_LITERAL(1, 7, 7), // "UseTemp"
QT_MOC_LITERAL(2, 15, 0), // ""
QT_MOC_LITERAL(3, 16, 7), // "NewPage"
QT_MOC_LITERAL(4, 24, 8), // "movePage"
QT_MOC_LITERAL(5, 33, 5), // "Click"
QT_MOC_LITERAL(6, 39, 7), // "DelPage"
QT_MOC_LITERAL(7, 47, 9) // "ToggleNam"

    },
    "SeView\0UseTemp\0\0NewPage\0movePage\0Click\0"
    "DelPage\0ToggleNam"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SeView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   44,    2, 0x06 /* Public */,
       3,    2,   49,    2, 0x06 /* Public */,
       4,    2,   54,    2, 0x06 /* Public */,
       5,    3,   59,    2, 0x06 /* Public */,
       6,    1,   66,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   69,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    2,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    2,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,    2,    2,    2,
    QMetaType::Void, QMetaType::Int,    2,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void SeView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SeView *_t = static_cast<SeView *>(_o);
        switch (_id) {
        case 0: _t->UseTemp((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->NewPage((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 2: _t->movePage((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->Click((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 4: _t->DelPage((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->ToggleNam(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (SeView::*_t)(QString , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SeView::UseTemp)) {
                *result = 0;
            }
        }
        {
            typedef void (SeView::*_t)(int , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SeView::NewPage)) {
                *result = 1;
            }
        }
        {
            typedef void (SeView::*_t)(int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SeView::movePage)) {
                *result = 2;
            }
        }
        {
            typedef void (SeView::*_t)(int , int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SeView::Click)) {
                *result = 3;
            }
        }
        {
            typedef void (SeView::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SeView::DelPage)) {
                *result = 4;
            }
        }
    }
}

const QMetaObject SeView::staticMetaObject = {
    { &QTableWidget::staticMetaObject, qt_meta_stringdata_SeView.data,
      qt_meta_data_SeView,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SeView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SeView::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SeView.stringdata))
        return static_cast<void*>(const_cast< SeView*>(this));
    return QTableWidget::qt_metacast(_clname);
}

int SeView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTableWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void SeView::UseTemp(QString _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SeView::NewPage(int _t1, QString _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void SeView::movePage(int _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void SeView::Click(int _t1, int _t2, int _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void SeView::DelPage(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
struct qt_meta_stringdata_TrashBin_t {
    QByteArrayData data[4];
    char stringdata[28];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TrashBin_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TrashBin_t qt_meta_stringdata_TrashBin = {
    {
QT_MOC_LITERAL(0, 0, 8), // "TrashBin"
QT_MOC_LITERAL(1, 9, 7), // "DelPage"
QT_MOC_LITERAL(2, 17, 0), // ""
QT_MOC_LITERAL(3, 18, 9) // "DelMaster"

    },
    "TrashBin\0DelPage\0\0DelMaster"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TrashBin[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,
       3,    1,   27,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::QString,    2,

       0        // eod
};

void TrashBin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TrashBin *_t = static_cast<TrashBin *>(_o);
        switch (_id) {
        case 0: _t->DelPage((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->DelMaster((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (TrashBin::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TrashBin::DelPage)) {
                *result = 0;
            }
        }
        {
            typedef void (TrashBin::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TrashBin::DelMaster)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject TrashBin::staticMetaObject = {
    { &QLabel::staticMetaObject, qt_meta_stringdata_TrashBin.data,
      qt_meta_data_TrashBin,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *TrashBin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TrashBin::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_TrashBin.stringdata))
        return static_cast<void*>(const_cast< TrashBin*>(this));
    return QLabel::qt_metacast(_clname);
}

int TrashBin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLabel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void TrashBin::DelPage(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void TrashBin::DelMaster(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
