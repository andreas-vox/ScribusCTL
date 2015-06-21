/****************************************************************************
** Meta object code from reading C++ file 'fontpreview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../scribus/plugins/fontpreview/fontpreview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fontpreview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_FontPreview_t {
    QByteArrayData data[12];
    char stringdata[191];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FontPreview_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FontPreview_t qt_meta_stringdata_FontPreview = {
    {
QT_MOC_LITERAL(0, 0, 11), // "FontPreview"
QT_MOC_LITERAL(1, 12, 14), // "languageChange"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 22), // "searchEdit_textChanged"
QT_MOC_LITERAL(4, 51, 1), // "s"
QT_MOC_LITERAL(5, 53, 23), // "fontList_currentChanged"
QT_MOC_LITERAL(6, 77, 21), // "displayButton_clicked"
QT_MOC_LITERAL(7, 99, 26), // "resetDisplayButton_clicked"
QT_MOC_LITERAL(8, 126, 21), // "sizeSpin_valueChanged"
QT_MOC_LITERAL(9, 148, 20), // "cancelButton_clicked"
QT_MOC_LITERAL(10, 169, 15), // "setExtendedView"
QT_MOC_LITERAL(11, 185, 5) // "state"

    },
    "FontPreview\0languageChange\0\0"
    "searchEdit_textChanged\0s\0"
    "fontList_currentChanged\0displayButton_clicked\0"
    "resetDisplayButton_clicked\0"
    "sizeSpin_valueChanged\0cancelButton_clicked\0"
    "setExtendedView\0state"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FontPreview[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x09 /* Protected */,
       3,    1,   55,    2, 0x09 /* Protected */,
       5,    2,   58,    2, 0x09 /* Protected */,
       6,    0,   63,    2, 0x09 /* Protected */,
       7,    0,   64,    2, 0x09 /* Protected */,
       8,    1,   65,    2, 0x09 /* Protected */,
       9,    0,   68,    2, 0x09 /* Protected */,
      10,    1,   69,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::QModelIndex,    2,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   11,

       0        // eod
};

void FontPreview::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FontPreview *_t = static_cast<FontPreview *>(_o);
        switch (_id) {
        case 0: _t->languageChange(); break;
        case 1: _t->searchEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->fontList_currentChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 3: _t->displayButton_clicked(); break;
        case 4: _t->resetDisplayButton_clicked(); break;
        case 5: _t->sizeSpin_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->cancelButton_clicked(); break;
        case 7: _t->setExtendedView((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject FontPreview::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_FontPreview.data,
      qt_meta_data_FontPreview,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *FontPreview::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FontPreview::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_FontPreview.stringdata))
        return static_cast<void*>(const_cast< FontPreview*>(this));
    if (!strcmp(_clname, "Ui::FontPreview"))
        return static_cast< Ui::FontPreview*>(const_cast< FontPreview*>(this));
    return QDialog::qt_metacast(_clname);
}

int FontPreview::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
