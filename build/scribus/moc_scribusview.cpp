/****************************************************************************
** Meta object code from reading C++ file 'scribusview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../scribus/scribusview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'scribusview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ScribusView_t {
    QByteArrayData data[101];
    char stringdata[1044];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ScribusView_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ScribusView_t qt_meta_stringdata_ScribusView = {
    {
QT_MOC_LITERAL(0, 0, 11), // "ScribusView"
QT_MOC_LITERAL(1, 12, 8), // "changeUN"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 8), // "changeLA"
QT_MOC_LITERAL(4, 31, 7), // "HaveSel"
QT_MOC_LITERAL(5, 39, 10), // "DocChanged"
QT_MOC_LITERAL(6, 50, 8), // "ItemGeom"
QT_MOC_LITERAL(7, 59, 8), // "PolyOpen"
QT_MOC_LITERAL(8, 68, 7), // "PStatus"
QT_MOC_LITERAL(9, 76, 8), // "SetAngle"
QT_MOC_LITERAL(10, 85, 12), // "SetSizeValue"
QT_MOC_LITERAL(11, 98, 10), // "SetLineArt"
QT_MOC_LITERAL(12, 109, 12), // "Qt::PenStyle"
QT_MOC_LITERAL(13, 122, 15), // "Qt::PenCapStyle"
QT_MOC_LITERAL(14, 138, 16), // "Qt::PenJoinStyle"
QT_MOC_LITERAL(15, 155, 14), // "SetLocalValues"
QT_MOC_LITERAL(16, 170, 12), // "ItemTextAttr"
QT_MOC_LITERAL(17, 183, 12), // "ItemTextCols"
QT_MOC_LITERAL(18, 196, 13), // "SetDistValues"
QT_MOC_LITERAL(19, 210, 13), // "ItemCharStyle"
QT_MOC_LITERAL(20, 224, 9), // "CharStyle"
QT_MOC_LITERAL(21, 234, 13), // "ItemTextAlign"
QT_MOC_LITERAL(22, 248, 15), // "ItemTextEffects"
QT_MOC_LITERAL(23, 264, 10), // "HasTextSel"
QT_MOC_LITERAL(24, 275, 12), // "HasNoTextSel"
QT_MOC_LITERAL(25, 288, 5), // "MVals"
QT_MOC_LITERAL(26, 294, 12), // "PaintingDone"
QT_MOC_LITERAL(27, 307, 7), // "LoadPic"
QT_MOC_LITERAL(28, 315, 9), // "StatusPic"
QT_MOC_LITERAL(29, 325, 10), // "AppendText"
QT_MOC_LITERAL(30, 336, 7), // "DoGroup"
QT_MOC_LITERAL(31, 344, 7), // "CutItem"
QT_MOC_LITERAL(32, 352, 8), // "CopyItem"
QT_MOC_LITERAL(33, 361, 5), // "Amode"
QT_MOC_LITERAL(34, 367, 5), // "AddBM"
QT_MOC_LITERAL(35, 373, 9), // "PageItem*"
QT_MOC_LITERAL(36, 383, 5), // "DelBM"
QT_MOC_LITERAL(37, 389, 8), // "ChBMText"
QT_MOC_LITERAL(38, 398, 7), // "ToScrap"
QT_MOC_LITERAL(39, 406, 8), // "LoadElem"
QT_MOC_LITERAL(40, 415, 11), // "ScribusDoc*"
QT_MOC_LITERAL(41, 427, 12), // "ScribusView*"
QT_MOC_LITERAL(42, 440, 12), // "LevelChanged"
QT_MOC_LITERAL(43, 453, 9), // "HavePoint"
QT_MOC_LITERAL(44, 463, 6), // "ClipPo"
QT_MOC_LITERAL(45, 470, 10), // "PolyStatus"
QT_MOC_LITERAL(46, 481, 10), // "AnnotProps"
QT_MOC_LITERAL(47, 492, 11), // "EndNodeEdit"
QT_MOC_LITERAL(48, 504, 5), // "Hrule"
QT_MOC_LITERAL(49, 510, 5), // "Vrule"
QT_MOC_LITERAL(50, 516, 8), // "MousePos"
QT_MOC_LITERAL(51, 525, 8), // "callGimp"
QT_MOC_LITERAL(52, 534, 22), // "signalGuideInformation"
QT_MOC_LITERAL(53, 557, 14), // "languageChange"
QT_MOC_LITERAL(54, 572, 9), // "toggleCMS"
QT_MOC_LITERAL(55, 582, 5), // "cmsOn"
QT_MOC_LITERAL(56, 588, 19), // "switchPreviewVisual"
QT_MOC_LITERAL(57, 608, 3), // "vis"
QT_MOC_LITERAL(58, 612, 17), // "togglePreviewEdit"
QT_MOC_LITERAL(59, 630, 4), // "edit"
QT_MOC_LITERAL(60, 635, 13), // "togglePreview"
QT_MOC_LITERAL(61, 649, 9), // "inPreview"
QT_MOC_LITERAL(62, 659, 10), // "unitChange"
QT_MOC_LITERAL(63, 670, 14), // "setRulersShown"
QT_MOC_LITERAL(64, 685, 7), // "isShown"
QT_MOC_LITERAL(65, 693, 11), // "slotZoom100"
QT_MOC_LITERAL(66, 705, 10), // "slotZoomIn"
QT_MOC_LITERAL(67, 716, 2), // "mx"
QT_MOC_LITERAL(68, 719, 2), // "my"
QT_MOC_LITERAL(69, 722, 11), // "slotZoomOut"
QT_MOC_LITERAL(70, 734, 7), // "DrawNew"
QT_MOC_LITERAL(71, 742, 6), // "GotoPa"
QT_MOC_LITERAL(72, 749, 5), // "Seite"
QT_MOC_LITERAL(73, 755, 6), // "GotoLa"
QT_MOC_LITERAL(74, 762, 1), // "l"
QT_MOC_LITERAL(75, 764, 8), // "GotoPage"
QT_MOC_LITERAL(76, 773, 7), // "ChgUnit"
QT_MOC_LITERAL(77, 781, 3), // "art"
QT_MOC_LITERAL(78, 785, 6), // "SetCPo"
QT_MOC_LITERAL(79, 792, 1), // "x"
QT_MOC_LITERAL(80, 794, 1), // "y"
QT_MOC_LITERAL(81, 796, 7), // "SetCCPo"
QT_MOC_LITERAL(82, 804, 27), // "editExtendedImageProperties"
QT_MOC_LITERAL(83, 832, 15), // "RefreshGradient"
QT_MOC_LITERAL(84, 848, 8), // "currItem"
QT_MOC_LITERAL(85, 857, 2), // "dx"
QT_MOC_LITERAL(86, 860, 2), // "dy"
QT_MOC_LITERAL(87, 863, 10), // "ToPicFrame"
QT_MOC_LITERAL(88, 874, 11), // "ToPolyFrame"
QT_MOC_LITERAL(89, 886, 11), // "ToTextFrame"
QT_MOC_LITERAL(90, 898, 13), // "ToBezierFrame"
QT_MOC_LITERAL(91, 912, 10), // "ToPathText"
QT_MOC_LITERAL(92, 923, 12), // "FromPathText"
QT_MOC_LITERAL(93, 936, 11), // "Bezier2Poly"
QT_MOC_LITERAL(94, 948, 11), // "PasteToPage"
QT_MOC_LITERAL(95, 960, 10), // "TextToPath"
QT_MOC_LITERAL(96, 971, 7), // "setZoom"
QT_MOC_LITERAL(97, 979, 11), // "setRulerPos"
QT_MOC_LITERAL(98, 991, 17), // "setObjectUndoMode"
QT_MOC_LITERAL(99, 1009, 17), // "setGlobalUndoMode"
QT_MOC_LITERAL(100, 1027, 16) // "dragTimerTimeOut"

    },
    "ScribusView\0changeUN\0\0changeLA\0HaveSel\0"
    "DocChanged\0ItemGeom\0PolyOpen\0PStatus\0"
    "SetAngle\0SetSizeValue\0SetLineArt\0"
    "Qt::PenStyle\0Qt::PenCapStyle\0"
    "Qt::PenJoinStyle\0SetLocalValues\0"
    "ItemTextAttr\0ItemTextCols\0SetDistValues\0"
    "ItemCharStyle\0CharStyle\0ItemTextAlign\0"
    "ItemTextEffects\0HasTextSel\0HasNoTextSel\0"
    "MVals\0PaintingDone\0LoadPic\0StatusPic\0"
    "AppendText\0DoGroup\0CutItem\0CopyItem\0"
    "Amode\0AddBM\0PageItem*\0DelBM\0ChBMText\0"
    "ToScrap\0LoadElem\0ScribusDoc*\0ScribusView*\0"
    "LevelChanged\0HavePoint\0ClipPo\0PolyStatus\0"
    "AnnotProps\0EndNodeEdit\0Hrule\0Vrule\0"
    "MousePos\0callGimp\0signalGuideInformation\0"
    "languageChange\0toggleCMS\0cmsOn\0"
    "switchPreviewVisual\0vis\0togglePreviewEdit\0"
    "edit\0togglePreview\0inPreview\0unitChange\0"
    "setRulersShown\0isShown\0slotZoom100\0"
    "slotZoomIn\0mx\0my\0slotZoomOut\0DrawNew\0"
    "GotoPa\0Seite\0GotoLa\0l\0GotoPage\0ChgUnit\0"
    "art\0SetCPo\0x\0y\0SetCCPo\0"
    "editExtendedImageProperties\0RefreshGradient\0"
    "currItem\0dx\0dy\0ToPicFrame\0ToPolyFrame\0"
    "ToTextFrame\0ToBezierFrame\0ToPathText\0"
    "FromPathText\0Bezier2Poly\0PasteToPage\0"
    "TextToPath\0setZoom\0setRulerPos\0"
    "setObjectUndoMode\0setGlobalUndoMode\0"
    "dragTimerTimeOut"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ScribusView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      83,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      44,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  429,    2, 0x06 /* Public */,
       3,    1,  432,    2, 0x06 /* Public */,
       4,    0,  435,    2, 0x06 /* Public */,
       5,    0,  436,    2, 0x06 /* Public */,
       6,    0,  437,    2, 0x06 /* Public */,
       7,    0,  438,    2, 0x06 /* Public */,
       8,    2,  439,    2, 0x06 /* Public */,
       9,    1,  444,    2, 0x06 /* Public */,
      10,    1,  447,    2, 0x06 /* Public */,
      11,    3,  450,    2, 0x06 /* Public */,
      15,    4,  457,    2, 0x06 /* Public */,
      16,    1,  466,    2, 0x06 /* Public */,
      17,    2,  469,    2, 0x06 /* Public */,
      18,    4,  474,    2, 0x06 /* Public */,
      19,    1,  483,    2, 0x06 /* Public */,
      21,    1,  486,    2, 0x06 /* Public */,
      22,    1,  489,    2, 0x06 /* Public */,
      23,    0,  492,    2, 0x06 /* Public */,
      24,    0,  493,    2, 0x06 /* Public */,
      25,    7,  494,    2, 0x06 /* Public */,
      26,    0,  509,    2, 0x06 /* Public */,
      27,    0,  510,    2, 0x06 /* Public */,
      28,    0,  511,    2, 0x06 /* Public */,
      29,    0,  512,    2, 0x06 /* Public */,
      30,    0,  513,    2, 0x06 /* Public */,
      31,    0,  514,    2, 0x06 /* Public */,
      32,    0,  515,    2, 0x06 /* Public */,
      33,    1,  516,    2, 0x06 /* Public */,
      34,    1,  519,    2, 0x06 /* Public */,
      36,    1,  522,    2, 0x06 /* Public */,
      37,    1,  525,    2, 0x06 /* Public */,
      38,    1,  528,    2, 0x06 /* Public */,
      39,    7,  531,    2, 0x06 /* Public */,
      42,    1,  546,    2, 0x06 /* Public */,
      43,    2,  549,    2, 0x06 /* Public */,
      44,    2,  554,    2, 0x06 /* Public */,
      45,    2,  559,    2, 0x06 /* Public */,
      46,    0,  564,    2, 0x06 /* Public */,
      47,    0,  565,    2, 0x06 /* Public */,
      48,    1,  566,    2, 0x06 /* Public */,
      49,    1,  569,    2, 0x06 /* Public */,
      50,    2,  572,    2, 0x06 /* Public */,
      51,    0,  577,    2, 0x06 /* Public */,
      52,    2,  578,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      53,    0,  583,    2, 0x0a /* Public */,
      54,    1,  584,    2, 0x0a /* Public */,
      56,    1,  587,    2, 0x0a /* Public */,
      58,    1,  590,    2, 0x0a /* Public */,
      60,    1,  593,    2, 0x0a /* Public */,
      62,    0,  596,    2, 0x0a /* Public */,
      63,    1,  597,    2, 0x0a /* Public */,
      65,    0,  600,    2, 0x0a /* Public */,
      66,    2,  601,    2, 0x0a /* Public */,
      66,    1,  606,    2, 0x2a /* Public | MethodCloned */,
      66,    0,  609,    2, 0x2a /* Public | MethodCloned */,
      69,    2,  610,    2, 0x0a /* Public */,
      69,    1,  615,    2, 0x2a /* Public | MethodCloned */,
      69,    0,  618,    2, 0x2a /* Public | MethodCloned */,
      70,    0,  619,    2, 0x0a /* Public */,
      71,    1,  620,    2, 0x0a /* Public */,
      73,    1,  623,    2, 0x0a /* Public */,
      75,    1,  626,    2, 0x0a /* Public */,
      76,    1,  629,    2, 0x0a /* Public */,
      78,    2,  632,    2, 0x0a /* Public */,
      81,    2,  637,    2, 0x0a /* Public */,
      82,    0,  642,    2, 0x0a /* Public */,
      83,    3,  643,    2, 0x0a /* Public */,
      83,    2,  650,    2, 0x2a /* Public | MethodCloned */,
      83,    1,  655,    2, 0x2a /* Public | MethodCloned */,
      87,    0,  658,    2, 0x0a /* Public */,
      88,    0,  659,    2, 0x0a /* Public */,
      89,    0,  660,    2, 0x0a /* Public */,
      90,    0,  661,    2, 0x0a /* Public */,
      91,    0,  662,    2, 0x0a /* Public */,
      92,    0,  663,    2, 0x0a /* Public */,
      93,    0,  664,    2, 0x0a /* Public */,
      94,    0,  665,    2, 0x0a /* Public */,
      95,    0,  666,    2, 0x0a /* Public */,
      96,    0,  667,    2, 0x08 /* Private */,
      97,    2,  668,    2, 0x08 /* Private */,
      98,    0,  673,    2, 0x08 /* Private */,
      99,    0,  674,    2, 0x08 /* Private */,
     100,    0,  675,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::UInt,    2,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, 0x80000000 | 12, 0x80000000 | 13, 0x80000000 | 14,    2,    2,    2,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double,    2,    2,    2,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Double,    2,    2,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double,    2,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 20,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Int,    2,    2,    2,    2,    2,    2,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, 0x80000000 | 35,    2,
    QMetaType::Void, 0x80000000 | 35,    2,
    QMetaType::Void, 0x80000000 | 35,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::Double, QMetaType::Double, QMetaType::Bool, QMetaType::Bool, 0x80000000 | 40, 0x80000000 | 41,    2,    2,    2,    2,    2,    2,    2,
    QMetaType::Void, QMetaType::UInt,    2,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool,    2,    2,
    QMetaType::Void, QMetaType::Double, QMetaType::Double,    2,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::UInt,    2,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Double, QMetaType::Double,    2,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QReal,    2,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   55,
    QMetaType::Void, QMetaType::Int,   57,
    QMetaType::Void, QMetaType::Bool,   59,
    QMetaType::Void, QMetaType::Bool,   61,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   64,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   67,   68,
    QMetaType::Void, QMetaType::Int,   67,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   67,   68,
    QMetaType::Void, QMetaType::Int,   67,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   72,
    QMetaType::Void, QMetaType::Int,   74,
    QMetaType::Void, QMetaType::Int,   72,
    QMetaType::Void, QMetaType::Int,   77,
    QMetaType::Void, QMetaType::Double, QMetaType::Double,   79,   80,
    QMetaType::Void, QMetaType::Double, QMetaType::Double,   79,   80,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 35, QMetaType::Double, QMetaType::Double,   84,   85,   86,
    QMetaType::Void, 0x80000000 | 35, QMetaType::Double,   84,   85,
    QMetaType::Void, 0x80000000 | 35,   84,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   79,   80,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ScribusView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ScribusView *_t = static_cast<ScribusView *>(_o);
        switch (_id) {
        case 0: _t->changeUN((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->changeLA((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->HaveSel(); break;
        case 3: _t->DocChanged(); break;
        case 4: _t->ItemGeom(); break;
        case 5: _t->PolyOpen(); break;
        case 6: _t->PStatus((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        case 7: _t->SetAngle((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 8: _t->SetSizeValue((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 9: _t->SetLineArt((*reinterpret_cast< Qt::PenStyle(*)>(_a[1])),(*reinterpret_cast< Qt::PenCapStyle(*)>(_a[2])),(*reinterpret_cast< Qt::PenJoinStyle(*)>(_a[3]))); break;
        case 10: _t->SetLocalValues((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4]))); break;
        case 11: _t->ItemTextAttr((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 12: _t->ItemTextCols((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 13: _t->SetDistValues((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4]))); break;
        case 14: _t->ItemCharStyle((*reinterpret_cast< const CharStyle(*)>(_a[1]))); break;
        case 15: _t->ItemTextAlign((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->ItemTextEffects((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 17: _t->HasTextSel(); break;
        case 18: _t->HasNoTextSel(); break;
        case 19: _t->MVals((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< double(*)>(_a[6])),(*reinterpret_cast< int(*)>(_a[7]))); break;
        case 20: _t->PaintingDone(); break;
        case 21: _t->LoadPic(); break;
        case 22: _t->StatusPic(); break;
        case 23: _t->AppendText(); break;
        case 24: _t->DoGroup(); break;
        case 25: _t->CutItem(); break;
        case 26: _t->CopyItem(); break;
        case 27: _t->Amode((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 28: _t->AddBM((*reinterpret_cast< PageItem*(*)>(_a[1]))); break;
        case 29: _t->DelBM((*reinterpret_cast< PageItem*(*)>(_a[1]))); break;
        case 30: _t->ChBMText((*reinterpret_cast< PageItem*(*)>(_a[1]))); break;
        case 31: _t->ToScrap((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 32: _t->LoadElem((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5])),(*reinterpret_cast< ScribusDoc*(*)>(_a[6])),(*reinterpret_cast< ScribusView*(*)>(_a[7]))); break;
        case 33: _t->LevelChanged((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 34: _t->HavePoint((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 35: _t->ClipPo((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 36: _t->PolyStatus((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        case 37: _t->AnnotProps(); break;
        case 38: _t->EndNodeEdit(); break;
        case 39: _t->Hrule((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 40: _t->Vrule((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 41: _t->MousePos((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 42: _t->callGimp(); break;
        case 43: _t->signalGuideInformation((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 44: _t->languageChange(); break;
        case 45: _t->toggleCMS((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 46: _t->switchPreviewVisual((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 47: _t->togglePreviewEdit((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 48: _t->togglePreview((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 49: _t->unitChange(); break;
        case 50: _t->setRulersShown((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 51: _t->slotZoom100(); break;
        case 52: _t->slotZoomIn((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 53: _t->slotZoomIn((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 54: _t->slotZoomIn(); break;
        case 55: _t->slotZoomOut((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 56: _t->slotZoomOut((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 57: _t->slotZoomOut(); break;
        case 58: _t->DrawNew(); break;
        case 59: _t->GotoPa((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 60: _t->GotoLa((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 61: _t->GotoPage((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 62: _t->ChgUnit((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 63: _t->SetCPo((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 64: _t->SetCCPo((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 65: _t->editExtendedImageProperties(); break;
        case 66: _t->RefreshGradient((*reinterpret_cast< PageItem*(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 67: _t->RefreshGradient((*reinterpret_cast< PageItem*(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 68: _t->RefreshGradient((*reinterpret_cast< PageItem*(*)>(_a[1]))); break;
        case 69: _t->ToPicFrame(); break;
        case 70: _t->ToPolyFrame(); break;
        case 71: _t->ToTextFrame(); break;
        case 72: _t->ToBezierFrame(); break;
        case 73: _t->ToPathText(); break;
        case 74: _t->FromPathText(); break;
        case 75: _t->Bezier2Poly(); break;
        case 76: _t->PasteToPage(); break;
        case 77: _t->TextToPath(); break;
        case 78: _t->setZoom(); break;
        case 79: _t->setRulerPos((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 80: _t->setObjectUndoMode(); break;
        case 81: _t->setGlobalUndoMode(); break;
        case 82: _t->dragTimerTimeOut(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 28:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PageItem* >(); break;
            }
            break;
        case 29:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PageItem* >(); break;
            }
            break;
        case 30:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PageItem* >(); break;
            }
            break;
        case 32:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 5:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ScribusDoc* >(); break;
            case 6:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ScribusView* >(); break;
            }
            break;
        case 66:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PageItem* >(); break;
            }
            break;
        case 67:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PageItem* >(); break;
            }
            break;
        case 68:
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
            typedef void (ScribusView::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ScribusView::changeUN)) {
                *result = 0;
            }
        }
        {
            typedef void (ScribusView::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ScribusView::changeLA)) {
                *result = 1;
            }
        }
        {
            typedef void (ScribusView::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ScribusView::HaveSel)) {
                *result = 2;
            }
        }
        {
            typedef void (ScribusView::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ScribusView::DocChanged)) {
                *result = 3;
            }
        }
        {
            typedef void (ScribusView::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ScribusView::ItemGeom)) {
                *result = 4;
            }
        }
        {
            typedef void (ScribusView::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ScribusView::PolyOpen)) {
                *result = 5;
            }
        }
        {
            typedef void (ScribusView::*_t)(int , uint );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ScribusView::PStatus)) {
                *result = 6;
            }
        }
        {
            typedef void (ScribusView::*_t)(double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ScribusView::SetAngle)) {
                *result = 7;
            }
        }
        {
            typedef void (ScribusView::*_t)(double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ScribusView::SetSizeValue)) {
                *result = 8;
            }
        }
        {
            typedef void (ScribusView::*_t)(Qt::PenStyle , Qt::PenCapStyle , Qt::PenJoinStyle );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ScribusView::SetLineArt)) {
                *result = 9;
            }
        }
        {
            typedef void (ScribusView::*_t)(double , double , double , double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ScribusView::SetLocalValues)) {
                *result = 10;
            }
        }
        {
            typedef void (ScribusView::*_t)(double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ScribusView::ItemTextAttr)) {
                *result = 11;
            }
        }
        {
            typedef void (ScribusView::*_t)(int , double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ScribusView::ItemTextCols)) {
                *result = 12;
            }
        }
        {
            typedef void (ScribusView::*_t)(double , double , double , double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ScribusView::SetDistValues)) {
                *result = 13;
            }
        }
        {
            typedef void (ScribusView::*_t)(const CharStyle & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ScribusView::ItemCharStyle)) {
                *result = 14;
            }
        }
        {
            typedef void (ScribusView::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ScribusView::ItemTextAlign)) {
                *result = 15;
            }
        }
        {
            typedef void (ScribusView::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ScribusView::ItemTextEffects)) {
                *result = 16;
            }
        }
        {
            typedef void (ScribusView::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ScribusView::HasTextSel)) {
                *result = 17;
            }
        }
        {
            typedef void (ScribusView::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ScribusView::HasNoTextSel)) {
                *result = 18;
            }
        }
        {
            typedef void (ScribusView::*_t)(double , double , double , double , double , double , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ScribusView::MVals)) {
                *result = 19;
            }
        }
        {
            typedef void (ScribusView::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ScribusView::PaintingDone)) {
                *result = 20;
            }
        }
        {
            typedef void (ScribusView::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ScribusView::LoadPic)) {
                *result = 21;
            }
        }
        {
            typedef void (ScribusView::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ScribusView::StatusPic)) {
                *result = 22;
            }
        }
        {
            typedef void (ScribusView::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ScribusView::AppendText)) {
                *result = 23;
            }
        }
        {
            typedef void (ScribusView::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ScribusView::DoGroup)) {
                *result = 24;
            }
        }
        {
            typedef void (ScribusView::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ScribusView::CutItem)) {
                *result = 25;
            }
        }
        {
            typedef void (ScribusView::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ScribusView::CopyItem)) {
                *result = 26;
            }
        }
        {
            typedef void (ScribusView::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ScribusView::Amode)) {
                *result = 27;
            }
        }
        {
            typedef void (ScribusView::*_t)(PageItem * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ScribusView::AddBM)) {
                *result = 28;
            }
        }
        {
            typedef void (ScribusView::*_t)(PageItem * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ScribusView::DelBM)) {
                *result = 29;
            }
        }
        {
            typedef void (ScribusView::*_t)(PageItem * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ScribusView::ChBMText)) {
                *result = 30;
            }
        }
        {
            typedef void (ScribusView::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ScribusView::ToScrap)) {
                *result = 31;
            }
        }
        {
            typedef void (ScribusView::*_t)(QString , double , double , bool , bool , ScribusDoc * , ScribusView * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ScribusView::LoadElem)) {
                *result = 32;
            }
        }
        {
            typedef void (ScribusView::*_t)(uint );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ScribusView::LevelChanged)) {
                *result = 33;
            }
        }
        {
            typedef void (ScribusView::*_t)(bool , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ScribusView::HavePoint)) {
                *result = 34;
            }
        }
        {
            typedef void (ScribusView::*_t)(double , double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ScribusView::ClipPo)) {
                *result = 35;
            }
        }
        {
            typedef void (ScribusView::*_t)(int , uint );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ScribusView::PolyStatus)) {
                *result = 36;
            }
        }
        {
            typedef void (ScribusView::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ScribusView::AnnotProps)) {
                *result = 37;
            }
        }
        {
            typedef void (ScribusView::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ScribusView::EndNodeEdit)) {
                *result = 38;
            }
        }
        {
            typedef void (ScribusView::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ScribusView::Hrule)) {
                *result = 39;
            }
        }
        {
            typedef void (ScribusView::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ScribusView::Vrule)) {
                *result = 40;
            }
        }
        {
            typedef void (ScribusView::*_t)(double , double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ScribusView::MousePos)) {
                *result = 41;
            }
        }
        {
            typedef void (ScribusView::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ScribusView::callGimp)) {
                *result = 42;
            }
        }
        {
            typedef void (ScribusView::*_t)(int , qreal );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ScribusView::signalGuideInformation)) {
                *result = 43;
            }
        }
    }
}

const QMetaObject ScribusView::staticMetaObject = {
    { &QScrollArea::staticMetaObject, qt_meta_stringdata_ScribusView.data,
      qt_meta_data_ScribusView,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ScribusView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ScribusView::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ScribusView.stringdata))
        return static_cast<void*>(const_cast< ScribusView*>(this));
    if (!strcmp(_clname, "Observer<QRectF>"))
        return static_cast< Observer<QRectF>*>(const_cast< ScribusView*>(this));
    return QScrollArea::qt_metacast(_clname);
}

int ScribusView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QScrollArea::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 83)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 83;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 83)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 83;
    }
    return _id;
}

// SIGNAL 0
void ScribusView::changeUN(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ScribusView::changeLA(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ScribusView::HaveSel()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void ScribusView::DocChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void ScribusView::ItemGeom()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}

// SIGNAL 5
void ScribusView::PolyOpen()
{
    QMetaObject::activate(this, &staticMetaObject, 5, Q_NULLPTR);
}

// SIGNAL 6
void ScribusView::PStatus(int _t1, uint _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void ScribusView::SetAngle(double _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void ScribusView::SetSizeValue(double _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void ScribusView::SetLineArt(Qt::PenStyle _t1, Qt::PenCapStyle _t2, Qt::PenJoinStyle _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void ScribusView::SetLocalValues(double _t1, double _t2, double _t3, double _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void ScribusView::ItemTextAttr(double _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void ScribusView::ItemTextCols(int _t1, double _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void ScribusView::SetDistValues(double _t1, double _t2, double _t3, double _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void ScribusView::ItemCharStyle(const CharStyle & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void ScribusView::ItemTextAlign(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void ScribusView::ItemTextEffects(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void ScribusView::HasTextSel()
{
    QMetaObject::activate(this, &staticMetaObject, 17, Q_NULLPTR);
}

// SIGNAL 18
void ScribusView::HasNoTextSel()
{
    QMetaObject::activate(this, &staticMetaObject, 18, Q_NULLPTR);
}

// SIGNAL 19
void ScribusView::MVals(double _t1, double _t2, double _t3, double _t4, double _t5, double _t6, int _t7)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)), const_cast<void*>(reinterpret_cast<const void*>(&_t7)) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void ScribusView::PaintingDone()
{
    QMetaObject::activate(this, &staticMetaObject, 20, Q_NULLPTR);
}

// SIGNAL 21
void ScribusView::LoadPic()
{
    QMetaObject::activate(this, &staticMetaObject, 21, Q_NULLPTR);
}

// SIGNAL 22
void ScribusView::StatusPic()
{
    QMetaObject::activate(this, &staticMetaObject, 22, Q_NULLPTR);
}

// SIGNAL 23
void ScribusView::AppendText()
{
    QMetaObject::activate(this, &staticMetaObject, 23, Q_NULLPTR);
}

// SIGNAL 24
void ScribusView::DoGroup()
{
    QMetaObject::activate(this, &staticMetaObject, 24, Q_NULLPTR);
}

// SIGNAL 25
void ScribusView::CutItem()
{
    QMetaObject::activate(this, &staticMetaObject, 25, Q_NULLPTR);
}

// SIGNAL 26
void ScribusView::CopyItem()
{
    QMetaObject::activate(this, &staticMetaObject, 26, Q_NULLPTR);
}

// SIGNAL 27
void ScribusView::Amode(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 27, _a);
}

// SIGNAL 28
void ScribusView::AddBM(PageItem * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 28, _a);
}

// SIGNAL 29
void ScribusView::DelBM(PageItem * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 29, _a);
}

// SIGNAL 30
void ScribusView::ChBMText(PageItem * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 30, _a);
}

// SIGNAL 31
void ScribusView::ToScrap(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 31, _a);
}

// SIGNAL 32
void ScribusView::LoadElem(QString _t1, double _t2, double _t3, bool _t4, bool _t5, ScribusDoc * _t6, ScribusView * _t7)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)), const_cast<void*>(reinterpret_cast<const void*>(&_t7)) };
    QMetaObject::activate(this, &staticMetaObject, 32, _a);
}

// SIGNAL 33
void ScribusView::LevelChanged(uint _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 33, _a);
}

// SIGNAL 34
void ScribusView::HavePoint(bool _t1, bool _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 34, _a);
}

// SIGNAL 35
void ScribusView::ClipPo(double _t1, double _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 35, _a);
}

// SIGNAL 36
void ScribusView::PolyStatus(int _t1, uint _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 36, _a);
}

// SIGNAL 37
void ScribusView::AnnotProps()
{
    QMetaObject::activate(this, &staticMetaObject, 37, Q_NULLPTR);
}

// SIGNAL 38
void ScribusView::EndNodeEdit()
{
    QMetaObject::activate(this, &staticMetaObject, 38, Q_NULLPTR);
}

// SIGNAL 39
void ScribusView::Hrule(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 39, _a);
}

// SIGNAL 40
void ScribusView::Vrule(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 40, _a);
}

// SIGNAL 41
void ScribusView::MousePos(double _t1, double _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 41, _a);
}

// SIGNAL 42
void ScribusView::callGimp()
{
    QMetaObject::activate(this, &staticMetaObject, 42, Q_NULLPTR);
}

// SIGNAL 43
void ScribusView::signalGuideInformation(int _t1, qreal _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 43, _a);
}
QT_END_MOC_NAMESPACE
