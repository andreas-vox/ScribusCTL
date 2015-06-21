/****************************************************************************
** Meta object code from reading C++ file 'resourcemanager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../scribus/ui/resourcemanager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'resourcemanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ResourceManager_t {
    QByteArrayData data[9];
    char stringdata[143];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ResourceManager_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ResourceManager_t qt_meta_stringdata_ResourceManager = {
    {
QT_MOC_LITERAL(0, 0, 15), // "ResourceManager"
QT_MOC_LITERAL(1, 16, 14), // "languageChange"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 15), // "categoryChanged"
QT_MOC_LITERAL(4, 48, 19), // "updateDownloadLists"
QT_MOC_LITERAL(5, 68, 20), // "downloadListFinished"
QT_MOC_LITERAL(6, 89, 21), // "downloadFilesFinished"
QT_MOC_LITERAL(7, 111, 17), // "updateProgressBar"
QT_MOC_LITERAL(8, 129, 13) // "startDownload"

    },
    "ResourceManager\0languageChange\0\0"
    "categoryChanged\0updateDownloadLists\0"
    "downloadListFinished\0downloadFilesFinished\0"
    "updateProgressBar\0startDownload"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ResourceManager[] = {

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
       1,    0,   49,    2, 0x0a /* Public */,
       3,    0,   50,    2, 0x09 /* Protected */,
       4,    0,   51,    2, 0x09 /* Protected */,
       5,    0,   52,    2, 0x09 /* Protected */,
       6,    0,   53,    2, 0x09 /* Protected */,
       7,    0,   54,    2, 0x09 /* Protected */,
       8,    0,   55,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ResourceManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ResourceManager *_t = static_cast<ResourceManager *>(_o);
        switch (_id) {
        case 0: _t->languageChange(); break;
        case 1: _t->categoryChanged(); break;
        case 2: _t->updateDownloadLists(); break;
        case 3: _t->downloadListFinished(); break;
        case 4: _t->downloadFilesFinished(); break;
        case 5: _t->updateProgressBar(); break;
        case 6: _t->startDownload(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject ResourceManager::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ResourceManager.data,
      qt_meta_data_ResourceManager,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ResourceManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ResourceManager::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ResourceManager.stringdata))
        return static_cast<void*>(const_cast< ResourceManager*>(this));
    if (!strcmp(_clname, "Ui::ResourceManagerBase"))
        return static_cast< Ui::ResourceManagerBase*>(const_cast< ResourceManager*>(this));
    return QDialog::qt_metacast(_clname);
}

int ResourceManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
