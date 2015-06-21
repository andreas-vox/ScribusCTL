/****************************************************************************
** Meta object code from reading C++ file 'filesearch.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../scribus/filesearch.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'filesearch.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_FileSearch_t {
    QByteArrayData data[11];
    char stringdata[98];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FileSearch_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FileSearch_t qt_meta_stringdata_FileSearch = {
    {
QT_MOC_LITERAL(0, 0, 10), // "FileSearch"
QT_MOC_LITERAL(1, 11, 14), // "searchComplete"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 5), // "paths"
QT_MOC_LITERAL(4, 33, 8), // "filename"
QT_MOC_LITERAL(5, 42, 5), // "start"
QT_MOC_LITERAL(6, 48, 13), // "matchingFiles"
QT_MOC_LITERAL(7, 62, 10), // "foundCount"
QT_MOC_LITERAL(8, 73, 8), // "fileName"
QT_MOC_LITERAL(9, 82, 10), // "currentDir"
QT_MOC_LITERAL(10, 93, 4) // "next"

    },
    "FileSearch\0searchComplete\0\0paths\0"
    "filename\0start\0matchingFiles\0foundCount\0"
    "fileName\0currentDir\0next"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FileSearch[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   54,    2, 0x0a /* Public */,
       6,    0,   55,    2, 0x0a /* Public */,
       7,    0,   56,    2, 0x0a /* Public */,
       8,    0,   57,    2, 0x0a /* Public */,
       9,    0,   58,    2, 0x0a /* Public */,
      10,    0,   59,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::QStringList, QMetaType::QString,    3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Int,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void FileSearch::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FileSearch *_t = static_cast<FileSearch *>(_o);
        switch (_id) {
        case 0: _t->searchComplete((*reinterpret_cast< const QStringList(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: _t->start(); break;
        case 2: _t->matchingFiles(); break;
        case 3: { int _r = _t->foundCount();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 4: _t->fileName(); break;
        case 5: _t->currentDir(); break;
        case 6: _t->next(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (FileSearch::*_t)(const QStringList & , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FileSearch::searchComplete)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject FileSearch::staticMetaObject = {
    { &DeferredTask::staticMetaObject, qt_meta_stringdata_FileSearch.data,
      qt_meta_data_FileSearch,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *FileSearch::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FileSearch::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_FileSearch.stringdata))
        return static_cast<void*>(const_cast< FileSearch*>(this));
    return DeferredTask::qt_metacast(_clname);
}

int FileSearch::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = DeferredTask::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void FileSearch::searchComplete(const QStringList & _t1, const QString & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
