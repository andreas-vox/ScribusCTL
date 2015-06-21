/****************************************************************************
** Meta object code from reading C++ file 'transparencypalette.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../scribus/ui/transparencypalette.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'transparencypalette.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Tpalette_t {
    QByteArrayData data[59];
    char stringdata[605];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Tpalette_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Tpalette_t qt_meta_stringdata_Tpalette = {
    {
QT_MOC_LITERAL(0, 0, 8), // "Tpalette"
QT_MOC_LITERAL(1, 9, 8), // "NewTrans"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 9), // "NewTransS"
QT_MOC_LITERAL(4, 29, 8), // "NewBlend"
QT_MOC_LITERAL(5, 38, 9), // "NewBlendS"
QT_MOC_LITERAL(6, 48, 15), // "gradientChanged"
QT_MOC_LITERAL(7, 64, 12), // "editGradient"
QT_MOC_LITERAL(8, 77, 11), // "NewGradient"
QT_MOC_LITERAL(9, 89, 10), // "NewSpecial"
QT_MOC_LITERAL(10, 100, 10), // "NewPattern"
QT_MOC_LITERAL(11, 111, 15), // "NewPatternProps"
QT_MOC_LITERAL(12, 127, 19), // "handleUpdateRequest"
QT_MOC_LITERAL(13, 147, 22), // "editLineSelectorButton"
QT_MOC_LITERAL(14, 170, 22), // "editFillSelectorButton"
QT_MOC_LITERAL(15, 193, 8), // "slotGrad"
QT_MOC_LITERAL(16, 202, 2), // "nr"
QT_MOC_LITERAL(17, 205, 12), // "slotGradType"
QT_MOC_LITERAL(18, 218, 4), // "type"
QT_MOC_LITERAL(19, 223, 16), // "setNamedGradient"
QT_MOC_LITERAL(20, 240, 4), // "name"
QT_MOC_LITERAL(21, 245, 18), // "switchGradientMode"
QT_MOC_LITERAL(22, 264, 17), // "switchPatternMode"
QT_MOC_LITERAL(23, 282, 18), // "editGradientVector"
QT_MOC_LITERAL(24, 301, 16), // "setActiveGradDia"
QT_MOC_LITERAL(25, 318, 6), // "active"
QT_MOC_LITERAL(26, 325, 18), // "hideEditedPatterns"
QT_MOC_LITERAL(27, 344, 5), // "names"
QT_MOC_LITERAL(28, 350, 13), // "selectPattern"
QT_MOC_LITERAL(29, 364, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(30, 381, 1), // "c"
QT_MOC_LITERAL(31, 383, 13), // "setActPattern"
QT_MOC_LITERAL(32, 397, 7), // "pattern"
QT_MOC_LITERAL(33, 405, 6), // "scaleX"
QT_MOC_LITERAL(34, 412, 6), // "scaleY"
QT_MOC_LITERAL(35, 419, 7), // "offsetX"
QT_MOC_LITERAL(36, 427, 7), // "offsetY"
QT_MOC_LITERAL(37, 435, 8), // "rotation"
QT_MOC_LITERAL(38, 444, 5), // "skewX"
QT_MOC_LITERAL(39, 450, 5), // "skewY"
QT_MOC_LITERAL(40, 456, 7), // "mirrorX"
QT_MOC_LITERAL(41, 464, 7), // "mirrorY"
QT_MOC_LITERAL(42, 472, 18), // "changePatternProps"
QT_MOC_LITERAL(43, 491, 18), // "setSpecialGradient"
QT_MOC_LITERAL(44, 510, 2), // "x1"
QT_MOC_LITERAL(45, 513, 2), // "y1"
QT_MOC_LITERAL(46, 516, 2), // "x2"
QT_MOC_LITERAL(47, 519, 2), // "y2"
QT_MOC_LITERAL(48, 522, 2), // "fx"
QT_MOC_LITERAL(49, 525, 2), // "fy"
QT_MOC_LITERAL(50, 528, 2), // "sg"
QT_MOC_LITERAL(51, 531, 2), // "sk"
QT_MOC_LITERAL(52, 534, 11), // "setActTrans"
QT_MOC_LITERAL(53, 546, 11), // "setActBlend"
QT_MOC_LITERAL(54, 558, 10), // "slotTransS"
QT_MOC_LITERAL(55, 569, 3), // "val"
QT_MOC_LITERAL(56, 573, 10), // "slotTransF"
QT_MOC_LITERAL(57, 584, 10), // "unitChange"
QT_MOC_LITERAL(58, 595, 9) // "unitIndex"

    },
    "Tpalette\0NewTrans\0\0NewTransS\0NewBlend\0"
    "NewBlendS\0gradientChanged\0editGradient\0"
    "NewGradient\0NewSpecial\0NewPattern\0"
    "NewPatternProps\0handleUpdateRequest\0"
    "editLineSelectorButton\0editFillSelectorButton\0"
    "slotGrad\0nr\0slotGradType\0type\0"
    "setNamedGradient\0name\0switchGradientMode\0"
    "switchPatternMode\0editGradientVector\0"
    "setActiveGradDia\0active\0hideEditedPatterns\0"
    "names\0selectPattern\0QListWidgetItem*\0"
    "c\0setActPattern\0pattern\0scaleX\0scaleY\0"
    "offsetX\0offsetY\0rotation\0skewX\0skewY\0"
    "mirrorX\0mirrorY\0changePatternProps\0"
    "setSpecialGradient\0x1\0y1\0x2\0y2\0fx\0fy\0"
    "sg\0sk\0setActTrans\0setActBlend\0slotTransS\0"
    "val\0slotTransF\0unitChange\0unitIndex"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Tpalette[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      30,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  164,    2, 0x06 /* Public */,
       3,    1,  167,    2, 0x06 /* Public */,
       4,    1,  170,    2, 0x06 /* Public */,
       5,    1,  173,    2, 0x06 /* Public */,
       6,    0,  176,    2, 0x06 /* Public */,
       7,    0,  177,    2, 0x06 /* Public */,
       8,    1,  178,    2, 0x06 /* Public */,
       9,   10,  181,    2, 0x06 /* Public */,
      10,    1,  202,    2, 0x06 /* Public */,
      11,    9,  205,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      12,    1,  224,    2, 0x0a /* Public */,
      13,    0,  227,    2, 0x0a /* Public */,
      14,    0,  228,    2, 0x0a /* Public */,
      15,    1,  229,    2, 0x0a /* Public */,
      17,    1,  232,    2, 0x0a /* Public */,
      19,    1,  235,    2, 0x0a /* Public */,
      21,    0,  238,    2, 0x0a /* Public */,
      22,    0,  239,    2, 0x0a /* Public */,
      23,    0,  240,    2, 0x0a /* Public */,
      24,    1,  241,    2, 0x0a /* Public */,
      26,    1,  244,    2, 0x0a /* Public */,
      28,    1,  247,    2, 0x0a /* Public */,
      31,   10,  250,    2, 0x0a /* Public */,
      42,    0,  271,    2, 0x0a /* Public */,
      43,    8,  272,    2, 0x0a /* Public */,
      52,    2,  289,    2, 0x0a /* Public */,
      53,    2,  294,    2, 0x0a /* Public */,
      54,    1,  299,    2, 0x0a /* Public */,
      56,    1,  302,    2, 0x0a /* Public */,
      57,    3,  305,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double,    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Bool, QMetaType::Bool,    2,    2,    2,    2,    2,    2,    2,    2,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   16,
    QMetaType::Void, QMetaType::Int,   18,
    QMetaType::Void, QMetaType::QString,   20,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   25,
    QMetaType::Void, QMetaType::QStringList,   27,
    QMetaType::Void, 0x80000000 | 29,   30,
    QMetaType::Void, QMetaType::QString, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Bool, QMetaType::Bool,   32,   33,   34,   35,   36,   37,   38,   39,   40,   41,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double,   44,   45,   46,   47,   48,   49,   50,   51,
    QMetaType::Void, QMetaType::Double, QMetaType::Double,    2,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,
    QMetaType::Void, QMetaType::Double,   55,
    QMetaType::Void, QMetaType::Double,   55,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Int,    2,    2,   58,

       0        // eod
};

void Tpalette::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Tpalette *_t = static_cast<Tpalette *>(_o);
        switch (_id) {
        case 0: _t->NewTrans((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: _t->NewTransS((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: _t->NewBlend((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->NewBlendS((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->gradientChanged(); break;
        case 5: _t->editGradient(); break;
        case 6: _t->NewGradient((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->NewSpecial((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< double(*)>(_a[6])),(*reinterpret_cast< double(*)>(_a[7])),(*reinterpret_cast< double(*)>(_a[8])),(*reinterpret_cast< double(*)>(_a[9])),(*reinterpret_cast< double(*)>(_a[10]))); break;
        case 8: _t->NewPattern((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 9: _t->NewPatternProps((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< double(*)>(_a[6])),(*reinterpret_cast< double(*)>(_a[7])),(*reinterpret_cast< bool(*)>(_a[8])),(*reinterpret_cast< bool(*)>(_a[9]))); break;
        case 10: _t->handleUpdateRequest((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->editLineSelectorButton(); break;
        case 12: _t->editFillSelectorButton(); break;
        case 13: _t->slotGrad((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->slotGradType((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->setNamedGradient((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 16: _t->switchGradientMode(); break;
        case 17: _t->switchPatternMode(); break;
        case 18: _t->editGradientVector(); break;
        case 19: _t->setActiveGradDia((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 20: _t->hideEditedPatterns((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 21: _t->selectPattern((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 22: _t->setActPattern((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< double(*)>(_a[6])),(*reinterpret_cast< double(*)>(_a[7])),(*reinterpret_cast< double(*)>(_a[8])),(*reinterpret_cast< bool(*)>(_a[9])),(*reinterpret_cast< bool(*)>(_a[10]))); break;
        case 23: _t->changePatternProps(); break;
        case 24: _t->setSpecialGradient((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< double(*)>(_a[6])),(*reinterpret_cast< double(*)>(_a[7])),(*reinterpret_cast< double(*)>(_a[8]))); break;
        case 25: _t->setActTrans((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 26: _t->setActBlend((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 27: _t->slotTransS((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 28: _t->slotTransF((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 29: _t->unitChange((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Tpalette::*_t)(double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Tpalette::NewTrans)) {
                *result = 0;
            }
        }
        {
            typedef void (Tpalette::*_t)(double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Tpalette::NewTransS)) {
                *result = 1;
            }
        }
        {
            typedef void (Tpalette::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Tpalette::NewBlend)) {
                *result = 2;
            }
        }
        {
            typedef void (Tpalette::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Tpalette::NewBlendS)) {
                *result = 3;
            }
        }
        {
            typedef void (Tpalette::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Tpalette::gradientChanged)) {
                *result = 4;
            }
        }
        {
            typedef void (Tpalette::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Tpalette::editGradient)) {
                *result = 5;
            }
        }
        {
            typedef void (Tpalette::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Tpalette::NewGradient)) {
                *result = 6;
            }
        }
        {
            typedef void (Tpalette::*_t)(double , double , double , double , double , double , double , double , double , double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Tpalette::NewSpecial)) {
                *result = 7;
            }
        }
        {
            typedef void (Tpalette::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Tpalette::NewPattern)) {
                *result = 8;
            }
        }
        {
            typedef void (Tpalette::*_t)(double , double , double , double , double , double , double , bool , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Tpalette::NewPatternProps)) {
                *result = 9;
            }
        }
    }
}

const QMetaObject Tpalette::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Tpalette.data,
      qt_meta_data_Tpalette,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Tpalette::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Tpalette::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Tpalette.stringdata))
        return static_cast<void*>(const_cast< Tpalette*>(this));
    if (!strcmp(_clname, "Ui::transparencyPalette"))
        return static_cast< Ui::transparencyPalette*>(const_cast< Tpalette*>(this));
    return QWidget::qt_metacast(_clname);
}

int Tpalette::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 30)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 30;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 30)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 30;
    }
    return _id;
}

// SIGNAL 0
void Tpalette::NewTrans(double _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Tpalette::NewTransS(double _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Tpalette::NewBlend(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Tpalette::NewBlendS(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Tpalette::gradientChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}

// SIGNAL 5
void Tpalette::editGradient()
{
    QMetaObject::activate(this, &staticMetaObject, 5, Q_NULLPTR);
}

// SIGNAL 6
void Tpalette::NewGradient(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void Tpalette::NewSpecial(double _t1, double _t2, double _t3, double _t4, double _t5, double _t6, double _t7, double _t8, double _t9, double _t10)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)), const_cast<void*>(reinterpret_cast<const void*>(&_t7)), const_cast<void*>(reinterpret_cast<const void*>(&_t8)), const_cast<void*>(reinterpret_cast<const void*>(&_t9)), const_cast<void*>(reinterpret_cast<const void*>(&_t10)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void Tpalette::NewPattern(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void Tpalette::NewPatternProps(double _t1, double _t2, double _t3, double _t4, double _t5, double _t6, double _t7, bool _t8, bool _t9)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)), const_cast<void*>(reinterpret_cast<const void*>(&_t7)), const_cast<void*>(reinterpret_cast<const void*>(&_t8)), const_cast<void*>(reinterpret_cast<const void*>(&_t9)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}
QT_END_MOC_NAMESPACE
