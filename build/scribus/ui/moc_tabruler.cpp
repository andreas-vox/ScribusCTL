/****************************************************************************
** Meta object code from reading C++ file 'tabruler.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../scribus/ui/tabruler.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tabruler.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_RulerT_t {
    QByteArrayData data[21];
    char stringdata[237];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RulerT_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RulerT_t qt_meta_stringdata_RulerT = {
    {
QT_MOC_LITERAL(0, 0, 6), // "RulerT"
QT_MOC_LITERAL(1, 7, 8), // "tabMoved"
QT_MOC_LITERAL(2, 16, 0), // ""
QT_MOC_LITERAL(3, 17, 11), // "typeChanged"
QT_MOC_LITERAL(4, 29, 15), // "fillCharChanged"
QT_MOC_LITERAL(5, 45, 15), // "leftIndentMoved"
QT_MOC_LITERAL(6, 61, 14), // "firstLineMoved"
QT_MOC_LITERAL(7, 76, 6), // "noTabs"
QT_MOC_LITERAL(8, 83, 6), // "newTab"
QT_MOC_LITERAL(9, 90, 13), // "mouseReleased"
QT_MOC_LITERAL(10, 104, 11), // "tabSelected"
QT_MOC_LITERAL(11, 116, 14), // "resetOffsetInc"
QT_MOC_LITERAL(12, 131, 14), // "decreaseOffset"
QT_MOC_LITERAL(13, 146, 14), // "increaseOffset"
QT_MOC_LITERAL(14, 161, 9), // "changeTab"
QT_MOC_LITERAL(15, 171, 1), // "t"
QT_MOC_LITERAL(16, 173, 13), // "changeTabChar"
QT_MOC_LITERAL(17, 187, 7), // "moveTab"
QT_MOC_LITERAL(18, 195, 12), // "removeActTab"
QT_MOC_LITERAL(19, 208, 13), // "moveFirstLine"
QT_MOC_LITERAL(20, 222, 14) // "moveLeftIndent"

    },
    "RulerT\0tabMoved\0\0typeChanged\0"
    "fillCharChanged\0leftIndentMoved\0"
    "firstLineMoved\0noTabs\0newTab\0mouseReleased\0"
    "tabSelected\0resetOffsetInc\0decreaseOffset\0"
    "increaseOffset\0changeTab\0t\0changeTabChar\0"
    "moveTab\0removeActTab\0moveFirstLine\0"
    "moveLeftIndent"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RulerT[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  104,    2, 0x06 /* Public */,
       3,    1,  107,    2, 0x06 /* Public */,
       4,    1,  110,    2, 0x06 /* Public */,
       5,    1,  113,    2, 0x06 /* Public */,
       6,    1,  116,    2, 0x06 /* Public */,
       7,    0,  119,    2, 0x06 /* Public */,
       8,    0,  120,    2, 0x06 /* Public */,
       9,    0,  121,    2, 0x06 /* Public */,
      10,    0,  122,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    0,  123,    2, 0x0a /* Public */,
      12,    0,  124,    2, 0x0a /* Public */,
      13,    0,  125,    2, 0x0a /* Public */,
      14,    1,  126,    2, 0x0a /* Public */,
      16,    1,  129,    2, 0x0a /* Public */,
      17,    1,  132,    2, 0x0a /* Public */,
      18,    0,  135,    2, 0x0a /* Public */,
      19,    1,  136,    2, 0x0a /* Public */,
      20,    1,  139,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::QChar,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void, QMetaType::QChar,   15,
    QMetaType::Void, QMetaType::Double,   15,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,   15,
    QMetaType::Void, QMetaType::Double,   15,

       0        // eod
};

void RulerT::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        RulerT *_t = static_cast<RulerT *>(_o);
        switch (_id) {
        case 0: _t->tabMoved((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: _t->typeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->fillCharChanged((*reinterpret_cast< QChar(*)>(_a[1]))); break;
        case 3: _t->leftIndentMoved((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: _t->firstLineMoved((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 5: _t->noTabs(); break;
        case 6: _t->newTab(); break;
        case 7: _t->mouseReleased(); break;
        case 8: _t->tabSelected(); break;
        case 9: _t->resetOffsetInc(); break;
        case 10: _t->decreaseOffset(); break;
        case 11: _t->increaseOffset(); break;
        case 12: _t->changeTab((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->changeTabChar((*reinterpret_cast< QChar(*)>(_a[1]))); break;
        case 14: _t->moveTab((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 15: _t->removeActTab(); break;
        case 16: _t->moveFirstLine((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 17: _t->moveLeftIndent((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (RulerT::*_t)(double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RulerT::tabMoved)) {
                *result = 0;
            }
        }
        {
            typedef void (RulerT::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RulerT::typeChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (RulerT::*_t)(QChar );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RulerT::fillCharChanged)) {
                *result = 2;
            }
        }
        {
            typedef void (RulerT::*_t)(double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RulerT::leftIndentMoved)) {
                *result = 3;
            }
        }
        {
            typedef void (RulerT::*_t)(double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RulerT::firstLineMoved)) {
                *result = 4;
            }
        }
        {
            typedef void (RulerT::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RulerT::noTabs)) {
                *result = 5;
            }
        }
        {
            typedef void (RulerT::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RulerT::newTab)) {
                *result = 6;
            }
        }
        {
            typedef void (RulerT::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RulerT::mouseReleased)) {
                *result = 7;
            }
        }
        {
            typedef void (RulerT::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RulerT::tabSelected)) {
                *result = 8;
            }
        }
    }
}

const QMetaObject RulerT::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_RulerT.data,
      qt_meta_data_RulerT,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *RulerT::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RulerT::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_RulerT.stringdata))
        return static_cast<void*>(const_cast< RulerT*>(this));
    return QWidget::qt_metacast(_clname);
}

int RulerT::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 18;
    }
    return _id;
}

// SIGNAL 0
void RulerT::tabMoved(double _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void RulerT::typeChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void RulerT::fillCharChanged(QChar _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void RulerT::leftIndentMoved(double _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void RulerT::firstLineMoved(double _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void RulerT::noTabs()
{
    QMetaObject::activate(this, &staticMetaObject, 5, Q_NULLPTR);
}

// SIGNAL 6
void RulerT::newTab()
{
    QMetaObject::activate(this, &staticMetaObject, 6, Q_NULLPTR);
}

// SIGNAL 7
void RulerT::mouseReleased()
{
    QMetaObject::activate(this, &staticMetaObject, 7, Q_NULLPTR);
}

// SIGNAL 8
void RulerT::tabSelected()
{
    QMetaObject::activate(this, &staticMetaObject, 8, Q_NULLPTR);
}
struct qt_meta_stringdata_Tabruler_t {
    QByteArrayData data[30];
    char stringdata[370];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Tabruler_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Tabruler_t qt_meta_stringdata_Tabruler = {
    {
QT_MOC_LITERAL(0, 0, 8), // "Tabruler"
QT_MOC_LITERAL(1, 9, 15), // "tabrulerChanged"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 11), // "tabsChanged"
QT_MOC_LITERAL(4, 38, 17), // "leftIndentChanged"
QT_MOC_LITERAL(5, 56, 18), // "rightIndentChanged"
QT_MOC_LITERAL(6, 75, 16), // "firstLineChanged"
QT_MOC_LITERAL(7, 92, 13), // "mouseReleased"
QT_MOC_LITERAL(8, 106, 9), // "resetOFfL"
QT_MOC_LITERAL(9, 116, 9), // "resetOFfR"
QT_MOC_LITERAL(10, 126, 8), // "clearAll"
QT_MOC_LITERAL(11, 135, 8), // "clearOne"
QT_MOC_LITERAL(12, 144, 8), // "tabAdded"
QT_MOC_LITERAL(13, 153, 14), // "lastTabRemoved"
QT_MOC_LITERAL(14, 168, 10), // "setTabType"
QT_MOC_LITERAL(15, 179, 1), // "t"
QT_MOC_LITERAL(16, 181, 7), // "setType"
QT_MOC_LITERAL(17, 189, 10), // "setTabData"
QT_MOC_LITERAL(18, 200, 6), // "setTab"
QT_MOC_LITERAL(19, 207, 16), // "setFirstLineData"
QT_MOC_LITERAL(20, 224, 12), // "setFirstLine"
QT_MOC_LITERAL(21, 237, 17), // "setLeftIndentData"
QT_MOC_LITERAL(22, 255, 13), // "setLeftIndent"
QT_MOC_LITERAL(23, 269, 18), // "setRightIndentData"
QT_MOC_LITERAL(24, 288, 14), // "setRightIndent"
QT_MOC_LITERAL(25, 303, 14), // "setTabFillChar"
QT_MOC_LITERAL(26, 318, 11), // "setFillChar"
QT_MOC_LITERAL(27, 330, 17), // "setCustomFillChar"
QT_MOC_LITERAL(28, 348, 3), // "txt"
QT_MOC_LITERAL(29, 352, 17) // "slotMouseReleased"

    },
    "Tabruler\0tabrulerChanged\0\0tabsChanged\0"
    "leftIndentChanged\0rightIndentChanged\0"
    "firstLineChanged\0mouseReleased\0resetOFfL\0"
    "resetOFfR\0clearAll\0clearOne\0tabAdded\0"
    "lastTabRemoved\0setTabType\0t\0setType\0"
    "setTabData\0setTab\0setFirstLineData\0"
    "setFirstLine\0setLeftIndentData\0"
    "setLeftIndent\0setRightIndentData\0"
    "setRightIndent\0setTabFillChar\0setFillChar\0"
    "setCustomFillChar\0txt\0slotMouseReleased"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Tabruler[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      26,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  144,    2, 0x06 /* Public */,
       3,    0,  145,    2, 0x06 /* Public */,
       4,    1,  146,    2, 0x06 /* Public */,
       5,    1,  149,    2, 0x06 /* Public */,
       6,    1,  152,    2, 0x06 /* Public */,
       7,    0,  155,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,  156,    2, 0x0a /* Public */,
       9,    0,  157,    2, 0x0a /* Public */,
      10,    0,  158,    2, 0x0a /* Public */,
      11,    0,  159,    2, 0x0a /* Public */,
      12,    0,  160,    2, 0x0a /* Public */,
      13,    0,  161,    2, 0x0a /* Public */,
      14,    1,  162,    2, 0x0a /* Public */,
      16,    0,  165,    2, 0x0a /* Public */,
      17,    1,  166,    2, 0x0a /* Public */,
      18,    0,  169,    2, 0x0a /* Public */,
      19,    1,  170,    2, 0x0a /* Public */,
      20,    0,  173,    2, 0x0a /* Public */,
      21,    1,  174,    2, 0x0a /* Public */,
      22,    0,  177,    2, 0x0a /* Public */,
      23,    1,  178,    2, 0x0a /* Public */,
      24,    0,  181,    2, 0x0a /* Public */,
      25,    1,  182,    2, 0x0a /* Public */,
      26,    0,  185,    2, 0x0a /* Public */,
      27,    1,  186,    2, 0x0a /* Public */,
      29,    0,  189,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,   15,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,   15,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,   15,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,   15,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QChar,   15,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   28,
    QMetaType::Void,

       0        // eod
};

void Tabruler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Tabruler *_t = static_cast<Tabruler *>(_o);
        switch (_id) {
        case 0: _t->tabrulerChanged(); break;
        case 1: _t->tabsChanged(); break;
        case 2: _t->leftIndentChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->rightIndentChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: _t->firstLineChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 5: _t->mouseReleased(); break;
        case 6: _t->resetOFfL(); break;
        case 7: _t->resetOFfR(); break;
        case 8: _t->clearAll(); break;
        case 9: _t->clearOne(); break;
        case 10: _t->tabAdded(); break;
        case 11: _t->lastTabRemoved(); break;
        case 12: _t->setTabType((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->setType(); break;
        case 14: _t->setTabData((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 15: _t->setTab(); break;
        case 16: _t->setFirstLineData((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 17: _t->setFirstLine(); break;
        case 18: _t->setLeftIndentData((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 19: _t->setLeftIndent(); break;
        case 20: _t->setRightIndentData((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 21: _t->setRightIndent(); break;
        case 22: _t->setTabFillChar((*reinterpret_cast< QChar(*)>(_a[1]))); break;
        case 23: _t->setFillChar(); break;
        case 24: _t->setCustomFillChar((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 25: _t->slotMouseReleased(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Tabruler::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Tabruler::tabrulerChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (Tabruler::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Tabruler::tabsChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (Tabruler::*_t)(double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Tabruler::leftIndentChanged)) {
                *result = 2;
            }
        }
        {
            typedef void (Tabruler::*_t)(double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Tabruler::rightIndentChanged)) {
                *result = 3;
            }
        }
        {
            typedef void (Tabruler::*_t)(double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Tabruler::firstLineChanged)) {
                *result = 4;
            }
        }
        {
            typedef void (Tabruler::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Tabruler::mouseReleased)) {
                *result = 5;
            }
        }
    }
}

const QMetaObject Tabruler::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Tabruler.data,
      qt_meta_data_Tabruler,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Tabruler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Tabruler::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Tabruler.stringdata))
        return static_cast<void*>(const_cast< Tabruler*>(this));
    return QWidget::qt_metacast(_clname);
}

int Tabruler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 26)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 26;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 26)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 26;
    }
    return _id;
}

// SIGNAL 0
void Tabruler::tabrulerChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void Tabruler::tabsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void Tabruler::leftIndentChanged(double _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Tabruler::rightIndentChanged(double _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Tabruler::firstLineChanged(double _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Tabruler::mouseReleased()
{
    QMetaObject::activate(this, &staticMetaObject, 5, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
