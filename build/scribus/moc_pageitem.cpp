/****************************************************************************
** Meta object code from reading C++ file 'pageitem.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../scribus/pageitem.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pageitem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_PageItem_t {
    QByteArrayData data[62];
    char stringdata[706];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PageItem_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PageItem_t qt_meta_stringdata_PageItem = {
    {
QT_MOC_LITERAL(0, 0, 8), // "PageItem"
QT_MOC_LITERAL(1, 9, 6), // "myself"
QT_MOC_LITERAL(2, 16, 0), // ""
QT_MOC_LITERAL(3, 17, 9), // "PageItem*"
QT_MOC_LITERAL(4, 27, 9), // "frameType"
QT_MOC_LITERAL(5, 37, 9), // "textStyle"
QT_MOC_LITERAL(6, 47, 8), // "itemName"
QT_MOC_LITERAL(7, 56, 9), // "fillColor"
QT_MOC_LITERAL(8, 66, 9), // "lineColor"
QT_MOC_LITERAL(9, 76, 9), // "fillShade"
QT_MOC_LITERAL(10, 86, 9), // "lineShade"
QT_MOC_LITERAL(11, 96, 16), // "fillTransparency"
QT_MOC_LITERAL(12, 113, 16), // "lineTransparency"
QT_MOC_LITERAL(13, 130, 8), // "m_Locked"
QT_MOC_LITERAL(14, 139, 12), // "m_SizeLocked"
QT_MOC_LITERAL(15, 152, 13), // "m_SizeHLocked"
QT_MOC_LITERAL(16, 166, 13), // "m_SizeVLocked"
QT_MOC_LITERAL(17, 180, 17), // "m_ImageIsFlippedV"
QT_MOC_LITERAL(18, 198, 17), // "m_ImageIsFlippedH"
QT_MOC_LITERAL(19, 216, 9), // "lineWidth"
QT_MOC_LITERAL(20, 226, 15), // "customLineStyle"
QT_MOC_LITERAL(21, 242, 15), // "startArrowIndex"
QT_MOC_LITERAL(22, 258, 13), // "endArrowIndex"
QT_MOC_LITERAL(23, 272, 14), // "m_PrintEnabled"
QT_MOC_LITERAL(24, 287, 4), // "xPos"
QT_MOC_LITERAL(25, 292, 4), // "yPos"
QT_MOC_LITERAL(26, 297, 5), // "width"
QT_MOC_LITERAL(27, 303, 6), // "height"
QT_MOC_LITERAL(28, 310, 10), // "m_rotation"
QT_MOC_LITERAL(29, 321, 13), // "m_imageXScale"
QT_MOC_LITERAL(30, 335, 13), // "m_imageYScale"
QT_MOC_LITERAL(31, 349, 12), // "imageXOffset"
QT_MOC_LITERAL(32, 362, 12), // "imageYOffset"
QT_MOC_LITERAL(33, 375, 12), // "m_isReversed"
QT_MOC_LITERAL(34, 388, 21), // "m_roundedCorderRadius"
QT_MOC_LITERAL(35, 410, 19), // "textToFrameDistLeft"
QT_MOC_LITERAL(36, 430, 20), // "textToFrameDistRight"
QT_MOC_LITERAL(37, 451, 18), // "textToFrameDistTop"
QT_MOC_LITERAL(38, 470, 21), // "textToFrameDistBottom"
QT_MOC_LITERAL(39, 492, 6), // "ColGap"
QT_MOC_LITERAL(40, 499, 4), // "Cols"
QT_MOC_LITERAL(41, 504, 15), // "firstLineOffset"
QT_MOC_LITERAL(42, 520, 21), // "FirstLineOffsetPolicy"
QT_MOC_LITERAL(43, 542, 8), // "itemType"
QT_MOC_LITERAL(44, 551, 8), // "ItemType"
QT_MOC_LITERAL(45, 560, 9), // "ItemType1"
QT_MOC_LITERAL(46, 570, 10), // "ImageFrame"
QT_MOC_LITERAL(47, 581, 9), // "ItemType3"
QT_MOC_LITERAL(48, 591, 9), // "TextFrame"
QT_MOC_LITERAL(49, 601, 4), // "Line"
QT_MOC_LITERAL(50, 606, 7), // "Polygon"
QT_MOC_LITERAL(51, 614, 8), // "PolyLine"
QT_MOC_LITERAL(52, 623, 8), // "PathText"
QT_MOC_LITERAL(53, 632, 10), // "LatexFrame"
QT_MOC_LITERAL(54, 643, 8), // "OSGFrame"
QT_MOC_LITERAL(55, 652, 6), // "Symbol"
QT_MOC_LITERAL(56, 659, 5), // "Group"
QT_MOC_LITERAL(57, 665, 14), // "RegularPolygon"
QT_MOC_LITERAL(58, 680, 3), // "Arc"
QT_MOC_LITERAL(59, 684, 6), // "Spiral"
QT_MOC_LITERAL(60, 691, 5), // "Table"
QT_MOC_LITERAL(61, 697, 8) // "Multiple"

    },
    "PageItem\0myself\0\0PageItem*\0frameType\0"
    "textStyle\0itemName\0fillColor\0lineColor\0"
    "fillShade\0lineShade\0fillTransparency\0"
    "lineTransparency\0m_Locked\0m_SizeLocked\0"
    "m_SizeHLocked\0m_SizeVLocked\0"
    "m_ImageIsFlippedV\0m_ImageIsFlippedH\0"
    "lineWidth\0customLineStyle\0startArrowIndex\0"
    "endArrowIndex\0m_PrintEnabled\0xPos\0"
    "yPos\0width\0height\0m_rotation\0m_imageXScale\0"
    "m_imageYScale\0imageXOffset\0imageYOffset\0"
    "m_isReversed\0m_roundedCorderRadius\0"
    "textToFrameDistLeft\0textToFrameDistRight\0"
    "textToFrameDistTop\0textToFrameDistBottom\0"
    "ColGap\0Cols\0firstLineOffset\0"
    "FirstLineOffsetPolicy\0itemType\0ItemType\0"
    "ItemType1\0ImageFrame\0ItemType3\0TextFrame\0"
    "Line\0Polygon\0PolyLine\0PathText\0"
    "LatexFrame\0OSGFrame\0Symbol\0Group\0"
    "RegularPolygon\0Arc\0Spiral\0Table\0"
    "Multiple"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PageItem[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
      37,   38, // properties
       1,  149, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,
       4,    1,   32,    2, 0x06 /* Public */,
       5,    1,   35,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,

 // properties: name, type, flags
       6, QMetaType::QString, 0x00094103,
       7, QMetaType::QString, 0x00094103,
       8, QMetaType::QString, 0x00094103,
       9, QMetaType::Double, 0x00094103,
      10, QMetaType::Double, 0x00094103,
      11, QMetaType::Double, 0x00094103,
      12, QMetaType::Double, 0x00094103,
      13, QMetaType::Bool, 0x00094003,
      14, QMetaType::Bool, 0x00094003,
      15, QMetaType::Bool, 0x00094003,
      16, QMetaType::Bool, 0x00094003,
      17, QMetaType::Bool, 0x00094003,
      18, QMetaType::Bool, 0x00094003,
      19, QMetaType::Double, 0x00094103,
      20, QMetaType::QString, 0x00094103,
      21, QMetaType::Int, 0x00094103,
      22, QMetaType::Int, 0x00094103,
      23, QMetaType::Bool, 0x00094003,
      24, QMetaType::Double, 0x00094103,
      25, QMetaType::Double, 0x00094103,
      26, QMetaType::Double, 0x00094103,
      27, QMetaType::Double, 0x00094103,
      28, QMetaType::Double, 0x00094003,
      29, QMetaType::Double, 0x00094003,
      30, QMetaType::Double, 0x00094003,
      31, QMetaType::Double, 0x00094103,
      32, QMetaType::Double, 0x00094103,
      33, QMetaType::Bool, 0x00094003,
      34, QMetaType::Double, 0x00094003,
      35, QMetaType::Double, 0x00094103,
      36, QMetaType::Double, 0x00094103,
      37, QMetaType::Double, 0x00094103,
      38, QMetaType::Double, 0x00094103,
      39, QMetaType::Double, 0x00094003,
      40, QMetaType::Int, 0x00094003,
      41, 0x80000000 | 42, 0x0009410b,
      43, 0x80000000 | 44, 0x0009400b,

 // enums: name, flags, count, data
      44, 0x0,   17,  153,

 // enum data: key, value
      45, uint(PageItem::ItemType1),
      46, uint(PageItem::ImageFrame),
      47, uint(PageItem::ItemType3),
      48, uint(PageItem::TextFrame),
      49, uint(PageItem::Line),
      50, uint(PageItem::Polygon),
      51, uint(PageItem::PolyLine),
      52, uint(PageItem::PathText),
      53, uint(PageItem::LatexFrame),
      54, uint(PageItem::OSGFrame),
      55, uint(PageItem::Symbol),
      56, uint(PageItem::Group),
      57, uint(PageItem::RegularPolygon),
      58, uint(PageItem::Arc),
      59, uint(PageItem::Spiral),
      60, uint(PageItem::Table),
      61, uint(PageItem::Multiple),

       0        // eod
};

void PageItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PageItem *_t = static_cast<PageItem *>(_o);
        switch (_id) {
        case 0: _t->myself((*reinterpret_cast< PageItem*(*)>(_a[1]))); break;
        case 1: _t->frameType((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->textStyle((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PageItem* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (PageItem::*_t)(PageItem * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PageItem::myself)) {
                *result = 0;
            }
        }
        {
            typedef void (PageItem::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PageItem::frameType)) {
                *result = 1;
            }
        }
        {
            typedef void (PageItem::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PageItem::textStyle)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject PageItem::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PageItem.data,
      qt_meta_data_PageItem,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PageItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PageItem::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PageItem.stringdata))
        return static_cast<void*>(const_cast< PageItem*>(this));
    if (!strcmp(_clname, "UndoObject"))
        return static_cast< UndoObject*>(const_cast< PageItem*>(this));
    if (!strcmp(_clname, "SaxIO"))
        return static_cast< SaxIO*>(const_cast< PageItem*>(this));
    if (!strcmp(_clname, "SingleObservable<PageItem>"))
        return static_cast< SingleObservable<PageItem>*>(const_cast< PageItem*>(this));
    return QObject::qt_metacast(_clname);
}

int PageItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = itemName(); break;
        case 1: *reinterpret_cast< QString*>(_v) = fillColor(); break;
        case 2: *reinterpret_cast< QString*>(_v) = lineColor(); break;
        case 3: *reinterpret_cast< double*>(_v) = fillShade(); break;
        case 4: *reinterpret_cast< double*>(_v) = lineShade(); break;
        case 5: *reinterpret_cast< double*>(_v) = fillTransparency(); break;
        case 6: *reinterpret_cast< double*>(_v) = lineTransparency(); break;
        case 7: *reinterpret_cast< bool*>(_v) = locked(); break;
        case 8: *reinterpret_cast< bool*>(_v) = sizeLocked(); break;
        case 9: *reinterpret_cast< bool*>(_v) = sizeHLocked(); break;
        case 10: *reinterpret_cast< bool*>(_v) = sizeVLocked(); break;
        case 11: *reinterpret_cast< bool*>(_v) = imageFlippedV(); break;
        case 12: *reinterpret_cast< bool*>(_v) = imageFlippedH(); break;
        case 13: *reinterpret_cast< double*>(_v) = lineWidth(); break;
        case 14: *reinterpret_cast< QString*>(_v) = customLineStyle(); break;
        case 15: *reinterpret_cast< int*>(_v) = startArrowIndex(); break;
        case 16: *reinterpret_cast< int*>(_v) = endArrowIndex(); break;
        case 17: *reinterpret_cast< bool*>(_v) = printEnabled(); break;
        case 18: *reinterpret_cast< double*>(_v) = xPos(); break;
        case 19: *reinterpret_cast< double*>(_v) = yPos(); break;
        case 20: *reinterpret_cast< double*>(_v) = width(); break;
        case 21: *reinterpret_cast< double*>(_v) = height(); break;
        case 22: *reinterpret_cast< double*>(_v) = rotation(); break;
        case 23: *reinterpret_cast< double*>(_v) = imageXScale(); break;
        case 24: *reinterpret_cast< double*>(_v) = imageYScale(); break;
        case 25: *reinterpret_cast< double*>(_v) = imageXOffset(); break;
        case 26: *reinterpret_cast< double*>(_v) = imageYOffset(); break;
        case 27: *reinterpret_cast< bool*>(_v) = reversed(); break;
        case 28: *reinterpret_cast< double*>(_v) = cornerRadius(); break;
        case 29: *reinterpret_cast< double*>(_v) = textToFrameDistLeft(); break;
        case 30: *reinterpret_cast< double*>(_v) = textToFrameDistRight(); break;
        case 31: *reinterpret_cast< double*>(_v) = textToFrameDistTop(); break;
        case 32: *reinterpret_cast< double*>(_v) = textToFrameDistBottom(); break;
        case 33: *reinterpret_cast< double*>(_v) = columnGap(); break;
        case 34: *reinterpret_cast< int*>(_v) = columns(); break;
        case 35: *reinterpret_cast< FirstLineOffsetPolicy*>(_v) = firstLineOffset(); break;
        case 36: *reinterpret_cast< ItemType*>(_v) = itemType(); break;
        default: break;
        }
        _id -= 37;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setItemName(*reinterpret_cast< QString*>(_v)); break;
        case 1: setFillColor(*reinterpret_cast< QString*>(_v)); break;
        case 2: setLineColor(*reinterpret_cast< QString*>(_v)); break;
        case 3: setFillShade(*reinterpret_cast< double*>(_v)); break;
        case 4: setLineShade(*reinterpret_cast< double*>(_v)); break;
        case 5: setFillTransparency(*reinterpret_cast< double*>(_v)); break;
        case 6: setLineTransparency(*reinterpret_cast< double*>(_v)); break;
        case 7: setLocked(*reinterpret_cast< bool*>(_v)); break;
        case 8: setSizeLocked(*reinterpret_cast< bool*>(_v)); break;
        case 9: setSizeHLocked(*reinterpret_cast< bool*>(_v)); break;
        case 10: setSizeVLocked(*reinterpret_cast< bool*>(_v)); break;
        case 11: setImageFlippedV(*reinterpret_cast< bool*>(_v)); break;
        case 12: setImageFlippedH(*reinterpret_cast< bool*>(_v)); break;
        case 13: setLineWidth(*reinterpret_cast< double*>(_v)); break;
        case 14: setCustomLineStyle(*reinterpret_cast< QString*>(_v)); break;
        case 15: setStartArrowIndex(*reinterpret_cast< int*>(_v)); break;
        case 16: setEndArrowIndex(*reinterpret_cast< int*>(_v)); break;
        case 17: setPrintEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 18: setXPos(*reinterpret_cast< double*>(_v)); break;
        case 19: setYPos(*reinterpret_cast< double*>(_v)); break;
        case 20: setWidth(*reinterpret_cast< double*>(_v)); break;
        case 21: setHeight(*reinterpret_cast< double*>(_v)); break;
        case 22: setRotation(*reinterpret_cast< double*>(_v)); break;
        case 23: setImageXScale(*reinterpret_cast< double*>(_v)); break;
        case 24: setImageYScale(*reinterpret_cast< double*>(_v)); break;
        case 25: setImageXOffset(*reinterpret_cast< double*>(_v)); break;
        case 26: setImageYOffset(*reinterpret_cast< double*>(_v)); break;
        case 27: setReversed(*reinterpret_cast< bool*>(_v)); break;
        case 28: setCornerRadius(*reinterpret_cast< double*>(_v)); break;
        case 29: setTextToFrameDistLeft(*reinterpret_cast< double*>(_v)); break;
        case 30: setTextToFrameDistRight(*reinterpret_cast< double*>(_v)); break;
        case 31: setTextToFrameDistTop(*reinterpret_cast< double*>(_v)); break;
        case 32: setTextToFrameDistBottom(*reinterpret_cast< double*>(_v)); break;
        case 33: setColumnGap(*reinterpret_cast< double*>(_v)); break;
        case 34: setColumns(*reinterpret_cast< int*>(_v)); break;
        case 35: setFirstLineOffset(*reinterpret_cast< FirstLineOffsetPolicy*>(_v)); break;
        case 36: convertTo(*reinterpret_cast< ItemType*>(_v)); break;
        default: break;
        }
        _id -= 37;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 37;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 37;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 37;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 37;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 37;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 37;
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        if (_id < 37)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 37;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void PageItem::myself(PageItem * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PageItem::frameType(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void PageItem::textStyle(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
