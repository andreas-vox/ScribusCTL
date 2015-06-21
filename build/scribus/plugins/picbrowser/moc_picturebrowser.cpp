/****************************************************************************
** Meta object code from reading C++ file 'picturebrowser.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../scribus/plugins/picbrowser/picturebrowser.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'picturebrowser.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_PictureBrowser_t {
    QByteArrayData data[64];
    char stringdata[1529];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PictureBrowser_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PictureBrowser_t qt_meta_stringdata_PictureBrowser = {
    {
QT_MOC_LITERAL(0, 0, 14), // "PictureBrowser"
QT_MOC_LITERAL(1, 15, 12), // "loadImageJob"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 10), // "selectPage"
QT_MOC_LITERAL(4, 40, 16), // "selectMasterPage"
QT_MOC_LITERAL(5, 57, 8), // "navigate"
QT_MOC_LITERAL(6, 66, 5), // "index"
QT_MOC_LITERAL(7, 72, 18), // "previewIconClicked"
QT_MOC_LITERAL(8, 91, 24), // "previewIconDoubleClicked"
QT_MOC_LITERAL(9, 116, 11), // "sortChanged"
QT_MOC_LITERAL(10, 128, 18), // "previewModeChanged"
QT_MOC_LITERAL(11, 147, 17), // "moreButtonClicked"
QT_MOC_LITERAL(12, 165, 26), // "resetSettingsButtonClicked"
QT_MOC_LITERAL(13, 192, 22), // "actionsGoButtonClicked"
QT_MOC_LITERAL(14, 215, 22), // "sortOrderButtonClicked"
QT_MOC_LITERAL(15, 238, 21), // "zoomPlusButtonClicked"
QT_MOC_LITERAL(16, 260, 22), // "zoomMinusButtonClicked"
QT_MOC_LITERAL(17, 283, 23), // "tabWidgetCurrentChanged"
QT_MOC_LITERAL(18, 307, 21), // "gotoPageButtonClicked"
QT_MOC_LITERAL(19, 329, 31), // "alwaysOnTopCheckboxStateChanged"
QT_MOC_LITERAL(20, 361, 32), // "saveSettingsCheckboxStateChanged"
QT_MOC_LITERAL(21, 394, 27), // "subdirsCheckboxStateChanged"
QT_MOC_LITERAL(22, 422, 9), // "dirChosen"
QT_MOC_LITERAL(23, 432, 14), // "documentChosen"
QT_MOC_LITERAL(24, 447, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(25, 464, 4), // "item"
QT_MOC_LITERAL(26, 469, 6), // "column"
QT_MOC_LITERAL(27, 476, 16), // "collectionChosen"
QT_MOC_LITERAL(28, 493, 27), // "collectionsWidgetItemEdited"
QT_MOC_LITERAL(29, 521, 24), // "findImagesThreadFinished"
QT_MOC_LITERAL(30, 546, 30), // "collectionReaderThreadFinished"
QT_MOC_LITERAL(31, 577, 34), // "collectionListReaderThreadFin..."
QT_MOC_LITERAL(32, 612, 38), // "collectionReaderThreadListFin..."
QT_MOC_LITERAL(33, 651, 33), // "collectionsDbWriterThreadFini..."
QT_MOC_LITERAL(34, 685, 34), // "collectionWriterThreadListFin..."
QT_MOC_LITERAL(35, 720, 36), // "insertPagesComboboxCheckstate..."
QT_MOC_LITERAL(36, 757, 3), // "row"
QT_MOC_LITERAL(37, 761, 24), // "insertImageButtonClicked"
QT_MOC_LITERAL(38, 786, 29), // "insertPositionComboboxChanged"
QT_MOC_LITERAL(39, 816, 25), // "insertSizeComboboxChanged"
QT_MOC_LITERAL(40, 842, 29), // "filterCriteriaComboboxChanged"
QT_MOC_LITERAL(41, 872, 27), // "filterTargetComboboxChanged"
QT_MOC_LITERAL(42, 900, 25), // "filterFilterButtonClicked"
QT_MOC_LITERAL(43, 926, 24), // "filterClearButtonClicked"
QT_MOC_LITERAL(44, 951, 31), // "filterAddCriterionButtonClicked"
QT_MOC_LITERAL(45, 983, 28), // "filterSearchDirButtonClicked"
QT_MOC_LITERAL(46, 1012, 35), // "collectionsNewCategoryButtonC..."
QT_MOC_LITERAL(47, 1048, 27), // "collectionsNewButtonClicked"
QT_MOC_LITERAL(48, 1076, 30), // "collectionsImportButtonClicked"
QT_MOC_LITERAL(49, 1107, 30), // "collectionsExportButtonClicked"
QT_MOC_LITERAL(50, 1138, 30), // "collectionsDeleteButtonClicked"
QT_MOC_LITERAL(51, 1169, 30), // "collectionsRenameButtonClicked"
QT_MOC_LITERAL(52, 1200, 33), // "collectionsAddImagesButtonCli..."
QT_MOC_LITERAL(53, 1234, 36), // "collectionsRemoveImagesButton..."
QT_MOC_LITERAL(54, 1271, 33), // "collectionsTagImagesButtonCli..."
QT_MOC_LITERAL(55, 1305, 35), // "collectionsAddImagesOkButtonC..."
QT_MOC_LITERAL(56, 1341, 39), // "collectionsAddImagesCancelBut..."
QT_MOC_LITERAL(57, 1381, 28), // "previewImageSelectionChanged"
QT_MOC_LITERAL(58, 1410, 14), // "QItemSelection"
QT_MOC_LITERAL(59, 1425, 8), // "selected"
QT_MOC_LITERAL(60, 1434, 10), // "deselected"
QT_MOC_LITERAL(61, 1445, 31), // "collectionsSetTagsButtonClicked"
QT_MOC_LITERAL(62, 1477, 33), // "collectionsAddNewTagButtonCli..."
QT_MOC_LITERAL(63, 1511, 17) // "jumpToImageFolder"

    },
    "PictureBrowser\0loadImageJob\0\0selectPage\0"
    "selectMasterPage\0navigate\0index\0"
    "previewIconClicked\0previewIconDoubleClicked\0"
    "sortChanged\0previewModeChanged\0"
    "moreButtonClicked\0resetSettingsButtonClicked\0"
    "actionsGoButtonClicked\0sortOrderButtonClicked\0"
    "zoomPlusButtonClicked\0zoomMinusButtonClicked\0"
    "tabWidgetCurrentChanged\0gotoPageButtonClicked\0"
    "alwaysOnTopCheckboxStateChanged\0"
    "saveSettingsCheckboxStateChanged\0"
    "subdirsCheckboxStateChanged\0dirChosen\0"
    "documentChosen\0QTreeWidgetItem*\0item\0"
    "column\0collectionChosen\0"
    "collectionsWidgetItemEdited\0"
    "findImagesThreadFinished\0"
    "collectionReaderThreadFinished\0"
    "collectionListReaderThreadFinished\0"
    "collectionReaderThreadListFinishedSave\0"
    "collectionsDbWriterThreadFinished\0"
    "collectionWriterThreadListFinished\0"
    "insertPagesComboboxCheckstateChanged\0"
    "row\0insertImageButtonClicked\0"
    "insertPositionComboboxChanged\0"
    "insertSizeComboboxChanged\0"
    "filterCriteriaComboboxChanged\0"
    "filterTargetComboboxChanged\0"
    "filterFilterButtonClicked\0"
    "filterClearButtonClicked\0"
    "filterAddCriterionButtonClicked\0"
    "filterSearchDirButtonClicked\0"
    "collectionsNewCategoryButtonClicked\0"
    "collectionsNewButtonClicked\0"
    "collectionsImportButtonClicked\0"
    "collectionsExportButtonClicked\0"
    "collectionsDeleteButtonClicked\0"
    "collectionsRenameButtonClicked\0"
    "collectionsAddImagesButtonClicked\0"
    "collectionsRemoveImagesButtonClicked\0"
    "collectionsTagImagesButtonClicked\0"
    "collectionsAddImagesOkButtonClicked\0"
    "collectionsAddImagesCancelButtonClicked\0"
    "previewImageSelectionChanged\0"
    "QItemSelection\0selected\0deselected\0"
    "collectionsSetTagsButtonClicked\0"
    "collectionsAddNewTagButtonClicked\0"
    "jumpToImageFolder"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PictureBrowser[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      54,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    4,  284,    2, 0x06 /* Public */,
       3,    1,  293,    2, 0x06 /* Public */,
       4,    1,  296,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,  299,    2, 0x08 /* Private */,
       7,    1,  302,    2, 0x08 /* Private */,
       8,    1,  305,    2, 0x08 /* Private */,
       9,    1,  308,    2, 0x08 /* Private */,
      10,    1,  311,    2, 0x08 /* Private */,
      11,    0,  314,    2, 0x08 /* Private */,
      12,    0,  315,    2, 0x08 /* Private */,
      13,    0,  316,    2, 0x08 /* Private */,
      14,    0,  317,    2, 0x08 /* Private */,
      15,    0,  318,    2, 0x08 /* Private */,
      16,    0,  319,    2, 0x08 /* Private */,
      17,    1,  320,    2, 0x08 /* Private */,
      18,    0,  323,    2, 0x08 /* Private */,
      19,    0,  324,    2, 0x08 /* Private */,
      20,    0,  325,    2, 0x08 /* Private */,
      21,    0,  326,    2, 0x08 /* Private */,
      22,    1,  327,    2, 0x08 /* Private */,
      23,    2,  330,    2, 0x08 /* Private */,
      27,    2,  335,    2, 0x08 /* Private */,
      28,    2,  340,    2, 0x08 /* Private */,
      29,    0,  345,    2, 0x08 /* Private */,
      30,    0,  346,    2, 0x08 /* Private */,
      31,    0,  347,    2, 0x08 /* Private */,
      32,    0,  348,    2, 0x08 /* Private */,
      33,    0,  349,    2, 0x08 /* Private */,
      34,    0,  350,    2, 0x08 /* Private */,
      35,    1,  351,    2, 0x08 /* Private */,
      37,    0,  354,    2, 0x08 /* Private */,
      38,    1,  355,    2, 0x08 /* Private */,
      39,    1,  358,    2, 0x08 /* Private */,
      40,    1,  361,    2, 0x08 /* Private */,
      41,    1,  364,    2, 0x08 /* Private */,
      42,    0,  367,    2, 0x08 /* Private */,
      43,    0,  368,    2, 0x08 /* Private */,
      44,    0,  369,    2, 0x08 /* Private */,
      45,    0,  370,    2, 0x08 /* Private */,
      46,    0,  371,    2, 0x08 /* Private */,
      47,    0,  372,    2, 0x08 /* Private */,
      48,    0,  373,    2, 0x08 /* Private */,
      49,    0,  374,    2, 0x08 /* Private */,
      50,    0,  375,    2, 0x08 /* Private */,
      51,    0,  376,    2, 0x08 /* Private */,
      52,    0,  377,    2, 0x08 /* Private */,
      53,    0,  378,    2, 0x08 /* Private */,
      54,    0,  379,    2, 0x08 /* Private */,
      55,    0,  380,    2, 0x08 /* Private */,
      56,    0,  381,    2, 0x08 /* Private */,
      57,    2,  382,    2, 0x08 /* Private */,
      61,    0,  387,    2, 0x08 /* Private */,
      62,    0,  388,    2, 0x08 /* Private */,
      63,    0,  389,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::Int, QMetaType::Int,    2,    2,    2,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::QModelIndex,    6,
    QMetaType::Void, QMetaType::QModelIndex,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,    6,
    QMetaType::Void, 0x80000000 | 24, QMetaType::Int,   25,   26,
    QMetaType::Void, 0x80000000 | 24, QMetaType::Int,   25,   26,
    QMetaType::Void, 0x80000000 | 24, QMetaType::Int,   25,   26,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   36,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,
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
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 58, 0x80000000 | 58,   59,   60,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void PictureBrowser::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PictureBrowser *_t = static_cast<PictureBrowser *>(_o);
        switch (_id) {
        case 0: _t->loadImageJob((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 1: _t->selectPage((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->selectMasterPage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->navigate((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->previewIconClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 5: _t->previewIconDoubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 6: _t->sortChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->previewModeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->moreButtonClicked(); break;
        case 9: _t->resetSettingsButtonClicked(); break;
        case 10: _t->actionsGoButtonClicked(); break;
        case 11: _t->sortOrderButtonClicked(); break;
        case 12: _t->zoomPlusButtonClicked(); break;
        case 13: _t->zoomMinusButtonClicked(); break;
        case 14: _t->tabWidgetCurrentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->gotoPageButtonClicked(); break;
        case 16: _t->alwaysOnTopCheckboxStateChanged(); break;
        case 17: _t->saveSettingsCheckboxStateChanged(); break;
        case 18: _t->subdirsCheckboxStateChanged(); break;
        case 19: _t->dirChosen((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 20: _t->documentChosen((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 21: _t->collectionChosen((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 22: _t->collectionsWidgetItemEdited((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 23: _t->findImagesThreadFinished(); break;
        case 24: _t->collectionReaderThreadFinished(); break;
        case 25: _t->collectionListReaderThreadFinished(); break;
        case 26: _t->collectionReaderThreadListFinishedSave(); break;
        case 27: _t->collectionsDbWriterThreadFinished(); break;
        case 28: _t->collectionWriterThreadListFinished(); break;
        case 29: _t->insertPagesComboboxCheckstateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 30: _t->insertImageButtonClicked(); break;
        case 31: _t->insertPositionComboboxChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 32: _t->insertSizeComboboxChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 33: _t->filterCriteriaComboboxChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 34: _t->filterTargetComboboxChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 35: _t->filterFilterButtonClicked(); break;
        case 36: _t->filterClearButtonClicked(); break;
        case 37: _t->filterAddCriterionButtonClicked(); break;
        case 38: _t->filterSearchDirButtonClicked(); break;
        case 39: _t->collectionsNewCategoryButtonClicked(); break;
        case 40: _t->collectionsNewButtonClicked(); break;
        case 41: _t->collectionsImportButtonClicked(); break;
        case 42: _t->collectionsExportButtonClicked(); break;
        case 43: _t->collectionsDeleteButtonClicked(); break;
        case 44: _t->collectionsRenameButtonClicked(); break;
        case 45: _t->collectionsAddImagesButtonClicked(); break;
        case 46: _t->collectionsRemoveImagesButtonClicked(); break;
        case 47: _t->collectionsTagImagesButtonClicked(); break;
        case 48: _t->collectionsAddImagesOkButtonClicked(); break;
        case 49: _t->collectionsAddImagesCancelButtonClicked(); break;
        case 50: _t->previewImageSelectionChanged((*reinterpret_cast< const QItemSelection(*)>(_a[1])),(*reinterpret_cast< const QItemSelection(*)>(_a[2]))); break;
        case 51: _t->collectionsSetTagsButtonClicked(); break;
        case 52: _t->collectionsAddNewTagButtonClicked(); break;
        case 53: _t->jumpToImageFolder(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (PictureBrowser::*_t)(int , QString , int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PictureBrowser::loadImageJob)) {
                *result = 0;
            }
        }
        {
            typedef void (PictureBrowser::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PictureBrowser::selectPage)) {
                *result = 1;
            }
        }
        {
            typedef void (PictureBrowser::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PictureBrowser::selectMasterPage)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject PictureBrowser::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_PictureBrowser.data,
      qt_meta_data_PictureBrowser,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PictureBrowser::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PictureBrowser::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PictureBrowser.stringdata))
        return static_cast<void*>(const_cast< PictureBrowser*>(this));
    if (!strcmp(_clname, "Ui::PictureBrowser"))
        return static_cast< Ui::PictureBrowser*>(const_cast< PictureBrowser*>(this));
    return QDialog::qt_metacast(_clname);
}

int PictureBrowser::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 54)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 54;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 54)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 54;
    }
    return _id;
}

// SIGNAL 0
void PictureBrowser::loadImageJob(int _t1, QString _t2, int _t3, int _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PictureBrowser::selectPage(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void PictureBrowser::selectMasterPage(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
