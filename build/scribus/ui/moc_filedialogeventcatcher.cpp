/****************************************************************************
** Meta object code from reading C++ file 'filedialogeventcatcher.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../scribus/ui/filedialogeventcatcher.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'filedialogeventcatcher.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_FileDialogEventCatcher_t {
    QByteArrayData data[9];
    char stringdata[116];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FileDialogEventCatcher_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FileDialogEventCatcher_t qt_meta_stringdata_FileDialogEventCatcher = {
    {
QT_MOC_LITERAL(0, 0, 22), // "FileDialogEventCatcher"
QT_MOC_LITERAL(1, 23, 13), // "escapePressed"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 12), // "dropLocation"
QT_MOC_LITERAL(4, 51, 2), // "dl"
QT_MOC_LITERAL(5, 54, 14), // "desktopPressed"
QT_MOC_LITERAL(6, 69, 11), // "homePressed"
QT_MOC_LITERAL(7, 81, 13), // "parentPressed"
QT_MOC_LITERAL(8, 95, 20) // "enterSelectedPressed"

    },
    "FileDialogEventCatcher\0escapePressed\0"
    "\0dropLocation\0dl\0desktopPressed\0"
    "homePressed\0parentPressed\0"
    "enterSelectedPressed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FileDialogEventCatcher[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    1,   45,    2, 0x06 /* Public */,
       5,    0,   48,    2, 0x06 /* Public */,
       6,    0,   49,    2, 0x06 /* Public */,
       7,    0,   50,    2, 0x06 /* Public */,
       8,    0,   51,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void FileDialogEventCatcher::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FileDialogEventCatcher *_t = static_cast<FileDialogEventCatcher *>(_o);
        switch (_id) {
        case 0: _t->escapePressed(); break;
        case 1: _t->dropLocation((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->desktopPressed(); break;
        case 3: _t->homePressed(); break;
        case 4: _t->parentPressed(); break;
        case 5: _t->enterSelectedPressed(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (FileDialogEventCatcher::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FileDialogEventCatcher::escapePressed)) {
                *result = 0;
            }
        }
        {
            typedef void (FileDialogEventCatcher::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FileDialogEventCatcher::dropLocation)) {
                *result = 1;
            }
        }
        {
            typedef void (FileDialogEventCatcher::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FileDialogEventCatcher::desktopPressed)) {
                *result = 2;
            }
        }
        {
            typedef void (FileDialogEventCatcher::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FileDialogEventCatcher::homePressed)) {
                *result = 3;
            }
        }
        {
            typedef void (FileDialogEventCatcher::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FileDialogEventCatcher::parentPressed)) {
                *result = 4;
            }
        }
        {
            typedef void (FileDialogEventCatcher::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FileDialogEventCatcher::enterSelectedPressed)) {
                *result = 5;
            }
        }
    }
}

const QMetaObject FileDialogEventCatcher::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_FileDialogEventCatcher.data,
      qt_meta_data_FileDialogEventCatcher,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *FileDialogEventCatcher::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FileDialogEventCatcher::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_FileDialogEventCatcher.stringdata))
        return static_cast<void*>(const_cast< FileDialogEventCatcher*>(this));
    return QObject::qt_metacast(_clname);
}

int FileDialogEventCatcher::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void FileDialogEventCatcher::escapePressed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void FileDialogEventCatcher::dropLocation(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void FileDialogEventCatcher::desktopPressed()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void FileDialogEventCatcher::homePressed()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void FileDialogEventCatcher::parentPressed()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}

// SIGNAL 5
void FileDialogEventCatcher::enterSelectedPressed()
{
    QMetaObject::activate(this, &staticMetaObject, 5, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
