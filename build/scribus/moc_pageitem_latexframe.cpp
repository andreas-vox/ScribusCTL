/****************************************************************************
** Meta object code from reading C++ file 'pageitem_latexframe.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../scribus/pageitem_latexframe.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pageitem_latexframe.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_PageItem_LatexFrame_t {
    QByteArrayData data[21];
    char stringdata[261];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PageItem_LatexFrame_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PageItem_LatexFrame_t qt_meta_stringdata_PageItem_LatexFrame = {
    {
QT_MOC_LITERAL(0, 0, 19), // "PageItem_LatexFrame"
QT_MOC_LITERAL(1, 20, 17), // "formulaAutoUpdate"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 7), // "oldText"
QT_MOC_LITERAL(4, 47, 7), // "newText"
QT_MOC_LITERAL(5, 55, 13), // "latexFinished"
QT_MOC_LITERAL(6, 69, 12), // "stateChanged"
QT_MOC_LITERAL(7, 82, 22), // "QProcess::ProcessState"
QT_MOC_LITERAL(8, 105, 5), // "state"
QT_MOC_LITERAL(9, 111, 18), // "applicationChanged"
QT_MOC_LITERAL(10, 130, 11), // "updateImage"
QT_MOC_LITERAL(11, 142, 8), // "exitCode"
QT_MOC_LITERAL(12, 151, 20), // "QProcess::ExitStatus"
QT_MOC_LITERAL(13, 172, 10), // "exitStatus"
QT_MOC_LITERAL(14, 183, 10), // "latexError"
QT_MOC_LITERAL(15, 194, 22), // "QProcess::ProcessError"
QT_MOC_LITERAL(16, 217, 5), // "error"
QT_MOC_LITERAL(17, 223, 11), // "killProcess"
QT_MOC_LITERAL(18, 235, 6), // "setDpi"
QT_MOC_LITERAL(19, 242, 3), // "dpi"
QT_MOC_LITERAL(20, 246, 14) // "setUsePreamble"

    },
    "PageItem_LatexFrame\0formulaAutoUpdate\0"
    "\0oldText\0newText\0latexFinished\0"
    "stateChanged\0QProcess::ProcessState\0"
    "state\0applicationChanged\0updateImage\0"
    "exitCode\0QProcess::ExitStatus\0exitStatus\0"
    "latexError\0QProcess::ProcessError\0"
    "error\0killProcess\0setDpi\0dpi\0"
    "setUsePreamble"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PageItem_LatexFrame[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   59,    2, 0x06 /* Public */,
       5,    0,   64,    2, 0x06 /* Public */,
       6,    1,   65,    2, 0x06 /* Public */,
       9,    0,   68,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    2,   69,    2, 0x09 /* Protected */,
      14,    1,   74,    2, 0x09 /* Protected */,
      17,    0,   77,    2, 0x0a /* Public */,
      18,    1,   78,    2, 0x0a /* Public */,
      20,    1,   81,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    4,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, 0x80000000 | 12,   11,   13,
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   19,
    QMetaType::Void, QMetaType::Bool,    2,

       0        // eod
};

void PageItem_LatexFrame::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PageItem_LatexFrame *_t = static_cast<PageItem_LatexFrame *>(_o);
        switch (_id) {
        case 0: _t->formulaAutoUpdate((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 1: _t->latexFinished(); break;
        case 2: _t->stateChanged((*reinterpret_cast< QProcess::ProcessState(*)>(_a[1]))); break;
        case 3: _t->applicationChanged(); break;
        case 4: _t->updateImage((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QProcess::ExitStatus(*)>(_a[2]))); break;
        case 5: _t->latexError((*reinterpret_cast< QProcess::ProcessError(*)>(_a[1]))); break;
        case 6: _t->killProcess(); break;
        case 7: _t->setDpi((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->setUsePreamble((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (PageItem_LatexFrame::*_t)(QString , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PageItem_LatexFrame::formulaAutoUpdate)) {
                *result = 0;
            }
        }
        {
            typedef void (PageItem_LatexFrame::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PageItem_LatexFrame::latexFinished)) {
                *result = 1;
            }
        }
        {
            typedef void (PageItem_LatexFrame::*_t)(QProcess::ProcessState );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PageItem_LatexFrame::stateChanged)) {
                *result = 2;
            }
        }
        {
            typedef void (PageItem_LatexFrame::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PageItem_LatexFrame::applicationChanged)) {
                *result = 3;
            }
        }
    }
}

const QMetaObject PageItem_LatexFrame::staticMetaObject = {
    { &PageItem_ImageFrame::staticMetaObject, qt_meta_stringdata_PageItem_LatexFrame.data,
      qt_meta_data_PageItem_LatexFrame,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PageItem_LatexFrame::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PageItem_LatexFrame::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PageItem_LatexFrame.stringdata))
        return static_cast<void*>(const_cast< PageItem_LatexFrame*>(this));
    return PageItem_ImageFrame::qt_metacast(_clname);
}

int PageItem_LatexFrame::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PageItem_ImageFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void PageItem_LatexFrame::formulaAutoUpdate(QString _t1, QString _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PageItem_LatexFrame::latexFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void PageItem_LatexFrame::stateChanged(QProcess::ProcessState _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void PageItem_LatexFrame::applicationChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
