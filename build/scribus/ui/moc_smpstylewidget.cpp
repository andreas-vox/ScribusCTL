/****************************************************************************
** Meta object code from reading C++ file 'smpstylewidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../scribus/ui/smpstylewidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'smpstylewidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SMPStyleWidget_t {
    QByteArrayData data[16];
    char stringdata[279];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SMPStyleWidget_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SMPStyleWidget_t qt_meta_stringdata_SMPStyleWidget = {
    {
QT_MOC_LITERAL(0, 0, 14), // "SMPStyleWidget"
QT_MOC_LITERAL(1, 15, 20), // "useParentParaEffects"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 19), // "useParentOptMargins"
QT_MOC_LITERAL(4, 57, 26), // "slotLineSpacingModeChanged"
QT_MOC_LITERAL(5, 84, 11), // "slotDropCap"
QT_MOC_LITERAL(6, 96, 4), // "isOn"
QT_MOC_LITERAL(7, 101, 11), // "slotBullets"
QT_MOC_LITERAL(8, 113, 18), // "insertSpecialChars"
QT_MOC_LITERAL(9, 132, 13), // "slotNumbering"
QT_MOC_LITERAL(10, 146, 20), // "slotParentParEffects"
QT_MOC_LITERAL(11, 167, 25), // "slotDefaultOpticalMargins"
QT_MOC_LITERAL(12, 193, 24), // "slotParentOpticalMargins"
QT_MOC_LITERAL(13, 218, 32), // "on_bulletCharTableButton_toggled"
QT_MOC_LITERAL(14, 251, 7), // "checked"
QT_MOC_LITERAL(15, 259, 19) // "handleUpdateRequest"

    },
    "SMPStyleWidget\0useParentParaEffects\0"
    "\0useParentOptMargins\0slotLineSpacingModeChanged\0"
    "slotDropCap\0isOn\0slotBullets\0"
    "insertSpecialChars\0slotNumbering\0"
    "slotParentParEffects\0slotDefaultOpticalMargins\0"
    "slotParentOpticalMargins\0"
    "on_bulletCharTableButton_toggled\0"
    "checked\0handleUpdateRequest"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SMPStyleWidget[] = {

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
       1,    0,   74,    2, 0x06 /* Public */,
       3,    0,   75,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   76,    2, 0x08 /* Private */,
       5,    1,   79,    2, 0x08 /* Private */,
       7,    1,   82,    2, 0x08 /* Private */,
       8,    1,   85,    2, 0x08 /* Private */,
       9,    1,   88,    2, 0x08 /* Private */,
      10,    0,   91,    2, 0x08 /* Private */,
      11,    0,   92,    2, 0x08 /* Private */,
      12,    0,   93,    2, 0x08 /* Private */,
      13,    1,   94,    2, 0x08 /* Private */,
      15,    1,   97,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   14,
    QMetaType::Void, QMetaType::Int,    2,

       0        // eod
};

void SMPStyleWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SMPStyleWidget *_t = static_cast<SMPStyleWidget *>(_o);
        switch (_id) {
        case 0: _t->useParentParaEffects(); break;
        case 1: _t->useParentOptMargins(); break;
        case 2: _t->slotLineSpacingModeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->slotDropCap((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->slotBullets((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->insertSpecialChars((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->slotNumbering((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->slotParentParEffects(); break;
        case 8: _t->slotDefaultOpticalMargins(); break;
        case 9: _t->slotParentOpticalMargins(); break;
        case 10: _t->on_bulletCharTableButton_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->handleUpdateRequest((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (SMPStyleWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SMPStyleWidget::useParentParaEffects)) {
                *result = 0;
            }
        }
        {
            typedef void (SMPStyleWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SMPStyleWidget::useParentOptMargins)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject SMPStyleWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_SMPStyleWidget.data,
      qt_meta_data_SMPStyleWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SMPStyleWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SMPStyleWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SMPStyleWidget.stringdata))
        return static_cast<void*>(const_cast< SMPStyleWidget*>(this));
    if (!strcmp(_clname, "Ui::SMPStyleWidget"))
        return static_cast< Ui::SMPStyleWidget*>(const_cast< SMPStyleWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int SMPStyleWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void SMPStyleWidget::useParentParaEffects()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void SMPStyleWidget::useParentOptMargins()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
