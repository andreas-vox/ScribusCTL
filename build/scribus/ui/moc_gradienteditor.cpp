/****************************************************************************
** Meta object code from reading C++ file 'gradienteditor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../scribus/ui/gradienteditor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gradienteditor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_GradientEditor_t {
    QByteArrayData data[17];
    char stringdata[174];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GradientEditor_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GradientEditor_t qt_meta_stringdata_GradientEditor = {
    {
QT_MOC_LITERAL(0, 0, 14), // "GradientEditor"
QT_MOC_LITERAL(1, 15, 15), // "gradientChanged"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 6), // "setPos"
QT_MOC_LITERAL(4, 39, 9), // "changePos"
QT_MOC_LITERAL(5, 49, 9), // "slotColor"
QT_MOC_LITERAL(6, 59, 4), // "name"
QT_MOC_LITERAL(7, 64, 5), // "shade"
QT_MOC_LITERAL(8, 70, 15), // "slotDisplayStop"
QT_MOC_LITERAL(9, 86, 11), // "VColorStop*"
QT_MOC_LITERAL(10, 98, 4), // "stop"
QT_MOC_LITERAL(11, 103, 12), // "setGradTrans"
QT_MOC_LITERAL(12, 116, 3), // "val"
QT_MOC_LITERAL(13, 120, 12), // "setStopColor"
QT_MOC_LITERAL(14, 133, 12), // "setStopTrans"
QT_MOC_LITERAL(15, 146, 12), // "setStopShade"
QT_MOC_LITERAL(16, 159, 14) // "languageChange"

    },
    "GradientEditor\0gradientChanged\0\0setPos\0"
    "changePos\0slotColor\0name\0shade\0"
    "slotDisplayStop\0VColorStop*\0stop\0"
    "setGradTrans\0val\0setStopColor\0"
    "setStopTrans\0setStopShade\0languageChange"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GradientEditor[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   65,    2, 0x0a /* Public */,
       4,    1,   68,    2, 0x0a /* Public */,
       5,    2,   71,    2, 0x0a /* Public */,
       8,    1,   76,    2, 0x0a /* Public */,
      11,    1,   79,    2, 0x0a /* Public */,
      13,    1,   82,    2, 0x0a /* Public */,
      14,    1,   85,    2, 0x0a /* Public */,
      15,    1,   88,    2, 0x0a /* Public */,
      16,    0,   91,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    6,    7,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, QMetaType::Double,   12,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Double,   12,
    QMetaType::Void, QMetaType::Double,   12,
    QMetaType::Void,

       0        // eod
};

void GradientEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        GradientEditor *_t = static_cast<GradientEditor *>(_o);
        switch (_id) {
        case 0: _t->gradientChanged(); break;
        case 1: _t->setPos((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: _t->changePos((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->slotColor((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->slotDisplayStop((*reinterpret_cast< VColorStop*(*)>(_a[1]))); break;
        case 5: _t->setGradTrans((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 6: _t->setStopColor((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->setStopTrans((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 8: _t->setStopShade((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 9: _t->languageChange(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (GradientEditor::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GradientEditor::gradientChanged)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject GradientEditor::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_GradientEditor.data,
      qt_meta_data_GradientEditor,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *GradientEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GradientEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_GradientEditor.stringdata))
        return static_cast<void*>(const_cast< GradientEditor*>(this));
    if (!strcmp(_clname, "Ui::GradientEditorBase"))
        return static_cast< Ui::GradientEditorBase*>(const_cast< GradientEditor*>(this));
    return QFrame::qt_metacast(_clname);
}

int GradientEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
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
void GradientEditor::gradientChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
