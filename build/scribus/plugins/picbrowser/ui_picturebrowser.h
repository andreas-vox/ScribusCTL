/********************************************************************************
** Form generated from reading UI file 'picturebrowser.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PICTUREBROWSER_H
#define UI_PICTUREBROWSER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "multicombobox.h"
#include "pictview.h"

QT_BEGIN_NAMESPACE

class Ui_PictureBrowser
{
public:
    QGridLayout *gridLayout;
    QSplitter *splitter_2;
    QWidget *widget_3;
    QGridLayout *gridLayout1;
    QSplitter *splitter;
    QWidget *widget;
    QVBoxLayout *verticalLayout_3;
    QComboBox *navigationBox;
    QStackedWidget *navigationStack;
    QWidget *folderpage;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *subdirsCheckbox;
    QTreeView *folderView;
    QWidget *collectionspage;
    QVBoxLayout *vboxLayout;
    QStackedWidget *collectionsStackedwidget;
    QWidget *page_5;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *collectionsNewCategoryButton;
    QPushButton *collectionsNewButton;
    QPushButton *collectionsDeleteButton;
    QPushButton *collectionsRenameButton;
    QSpacerItem *spacerItem;
    QPushButton *collectionsAddImagesButton;
    QPushButton *collectionsRemoveImagesButton;
    QPushButton *collectionsTagImagesButton;
    QSpacerItem *spacerItem1;
    QPushButton *collectionsImportButton;
    QPushButton *collectionsExportButton;
    QWidget *page_6;
    QHBoxLayout *hboxLayout;
    QLabel *label_8;
    QPushButton *collectionsAddImagesOkButton;
    QPushButton *collectionsAddImagesCancelButton;
    QTreeWidget *collectionsWidget;
    QWidget *documentpage;
    QVBoxLayout *vboxLayout1;
    QHBoxLayout *hboxLayout1;
    QPushButton *gotoPageButton;
    QSpacerItem *spacerItem2;
    QTreeWidget *documentWidget;
    QHBoxLayout *hboxLayout2;
    QPushButton *moreButton;
    QSpacerItem *spacerItem3;
    QCheckBox *alwaysOnTopCheckbox;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QComboBox *sortCombobox;
    QPushButton *sortOrderButton;
    QSpacerItem *spacerItem4;
    QPushButton *zoomPlusButton;
    QPushButton *zoomMinusButton;
    QSpacerItem *spacerItem5;
    QComboBox *previewModeCombobox;
    QSpacerItem *spacerItem6;
    QComboBox *actionsCombobox;
    QPushButton *actionsGoButton;
    PictView *imageViewArea;
    QHBoxLayout *hboxLayout3;
    QLabel *statusLabel;
    QSpacerItem *spacerItem7;
    QCheckBox *saveSettingsCheckbox;
    QPushButton *resetSettingsButton;
    QPushButton *closeButton;
    QTabWidget *tabWidget;
    QWidget *tab;
    QHBoxLayout *horizontalLayout_3;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout2;
    QLabel *informationFilenameLabel;
    QLabel *informationFilesizeLabel;
    QLabel *informationFiledateLabel;
    QLabel *label_11;
    QLabel *label_10;
    QLabel *label_22;
    QLabel *informationFilepathLabel;
    QPushButton *jumpToImageButton;
    QLabel *label_23;
    QSpacerItem *verticalSpacer_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout3;
    QLabel *informationEmbeddedLabel;
    QLabel *informationDpiLabel;
    QLabel *informationLayersLabel;
    QLabel *label_9;
    QLabel *informationHeightLabel;
    QLabel *label_15;
    QLabel *informationProfilenameLabel;
    QLabel *label_3;
    QLabel *informationFormatLabel;
    QLabel *informationWidthLabel;
    QLabel *informationColorspaceLabel;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_5;
    QLabel *label_14;
    QLabel *label_4;
    QSpacerItem *verticalSpacer;
    QWidget *tab_3;
    QGridLayout *gridLayout4;
    QVBoxLayout *vboxLayout2;
    QLabel *label_6;
    QListWidget *filterFiltersListwidget;
    QComboBox *filterTargetCombobox;
    QStackedWidget *filterTargetStackedWidget;
    QWidget *page_10;
    QWidget *page_8;
    QHBoxLayout *hboxLayout4;
    QLineEdit *filterSearchLineedit;
    QPushButton *filterSearchDirButton;
    QWidget *page_9;
    QHBoxLayout *hboxLayout5;
    multiCombobox *filterCollectionsCombobox;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout5;
    QPushButton *filterAddCriterionButton;
    QComboBox *filterCriteriaCombobox;
    QStackedWidget *filterStackedwidget;
    QWidget *page;
    QHBoxLayout *hboxLayout6;
    QComboBox *filterNameCombobox;
    QLineEdit *filterNameLineedit;
    QWidget *page_2;
    QHBoxLayout *hboxLayout7;
    QComboBox *filterDateCombobox;
    QDateTimeEdit *filterDateDatetimeedit;
    QWidget *page_3;
    QHBoxLayout *hboxLayout8;
    QComboBox *filterSizeCombobox;
    QSpinBox *filterSizeSpinbox;
    QWidget *page_4;
    QHBoxLayout *hboxLayout9;
    multiCombobox *filterTypeCombobox;
    QWidget *page_7;
    QHBoxLayout *hboxLayout10;
    multiCombobox *filterTagsCombobox;
    QLineEdit *filterTagLineedit;
    QPushButton *filterAddTagButton;
    QPushButton *filterFilterButton;
    QPushButton *filterClearButton;
    QWidget *tab_4;
    QGridLayout *gridLayout6;
    QGroupBox *groupBox_5;
    QGridLayout *gridLayout7;
    QLabel *label;
    multiCombobox *insertPagesCombobox;
    QLabel *label_2;
    multiCombobox *insertFramesCombobox;
    QGroupBox *groupBox_6;
    QGridLayout *gridLayout8;
    QComboBox *insertPositionCombobox;
    QLabel *insertPositionXLabel;
    QSpinBox *insertPositionXSpinbox;
    QLabel *insertPositionYLabel;
    QSpinBox *insertPositionYSpinbox;
    QGroupBox *groupBox_7;
    QGridLayout *gridLayout9;
    QComboBox *insertSizeCombobox;
    QLabel *insertWidthLabel;
    QSpinBox *insertWidthSpinbox;
    QLabel *insertHeightLabel;
    QSpinBox *insertHeightSpinbox;
    QVBoxLayout *vboxLayout3;
    QLabel *label_25;
    QLabel *label_26;
    QLabel *label_27;
    QPushButton *insertImageButton;
    QWidget *tab_5;
    QGridLayout *gridLayout10;
    QLabel *label_7;
    QSpacerItem *spacerItem8;
    QListWidget *collectionsSelectedImagesListwidget;
    QGroupBox *groupBox_9;
    QGridLayout *gridLayout11;
    multiCombobox *collectionsTagImagesCombobox;
    QLineEdit *collectionsAddNewTagLineedit;
    QPushButton *collectionsAddNewTagButton;
    QPushButton *collectionsSetTagsButton;

    void setupUi(QDialog *PictureBrowser)
    {
        if (PictureBrowser->objectName().isEmpty())
            PictureBrowser->setObjectName(QStringLiteral("PictureBrowser"));
        PictureBrowser->resize(967, 482);
        gridLayout = new QGridLayout(PictureBrowser);
        gridLayout->setSpacing(2);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(3, 3, 3, 3);
        splitter_2 = new QSplitter(PictureBrowser);
        splitter_2->setObjectName(QStringLiteral("splitter_2"));
        splitter_2->setOrientation(Qt::Vertical);
        widget_3 = new QWidget(splitter_2);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        gridLayout1 = new QGridLayout(widget_3);
        gridLayout1->setObjectName(QStringLiteral("gridLayout1"));
        gridLayout1->setContentsMargins(0, 0, 0, 0);
        splitter = new QSplitter(widget_3);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        widget = new QWidget(splitter);
        widget->setObjectName(QStringLiteral("widget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        verticalLayout_3 = new QVBoxLayout(widget);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        navigationBox = new QComboBox(widget);
        navigationBox->setObjectName(QStringLiteral("navigationBox"));

        verticalLayout_3->addWidget(navigationBox);

        navigationStack = new QStackedWidget(widget);
        navigationStack->setObjectName(QStringLiteral("navigationStack"));
        folderpage = new QWidget();
        folderpage->setObjectName(QStringLiteral("folderpage"));
        verticalLayout_2 = new QVBoxLayout(folderpage);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        subdirsCheckbox = new QCheckBox(folderpage);
        subdirsCheckbox->setObjectName(QStringLiteral("subdirsCheckbox"));

        verticalLayout_2->addWidget(subdirsCheckbox);

        folderView = new QTreeView(folderpage);
        folderView->setObjectName(QStringLiteral("folderView"));

        verticalLayout_2->addWidget(folderView);

        navigationStack->addWidget(folderpage);
        collectionspage = new QWidget();
        collectionspage->setObjectName(QStringLiteral("collectionspage"));
        vboxLayout = new QVBoxLayout(collectionspage);
        vboxLayout->setSpacing(3);
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        collectionsStackedwidget = new QStackedWidget(collectionspage);
        collectionsStackedwidget->setObjectName(QStringLiteral("collectionsStackedwidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(collectionsStackedwidget->sizePolicy().hasHeightForWidth());
        collectionsStackedwidget->setSizePolicy(sizePolicy1);
        collectionsStackedwidget->setMinimumSize(QSize(0, 0));
        page_5 = new QWidget();
        page_5->setObjectName(QStringLiteral("page_5"));
        horizontalLayout_2 = new QHBoxLayout(page_5);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        collectionsNewCategoryButton = new QPushButton(page_5);
        collectionsNewCategoryButton->setObjectName(QStringLiteral("collectionsNewCategoryButton"));
        collectionsNewCategoryButton->setMinimumSize(QSize(23, 23));
        collectionsNewCategoryButton->setMaximumSize(QSize(23, 23));

        horizontalLayout_2->addWidget(collectionsNewCategoryButton);

        collectionsNewButton = new QPushButton(page_5);
        collectionsNewButton->setObjectName(QStringLiteral("collectionsNewButton"));
        collectionsNewButton->setMinimumSize(QSize(23, 23));
        collectionsNewButton->setMaximumSize(QSize(23, 23));

        horizontalLayout_2->addWidget(collectionsNewButton);

        collectionsDeleteButton = new QPushButton(page_5);
        collectionsDeleteButton->setObjectName(QStringLiteral("collectionsDeleteButton"));
        collectionsDeleteButton->setMinimumSize(QSize(23, 23));
        collectionsDeleteButton->setMaximumSize(QSize(23, 23));

        horizontalLayout_2->addWidget(collectionsDeleteButton);

        collectionsRenameButton = new QPushButton(page_5);
        collectionsRenameButton->setObjectName(QStringLiteral("collectionsRenameButton"));
        collectionsRenameButton->setMinimumSize(QSize(23, 23));
        collectionsRenameButton->setMaximumSize(QSize(23, 23));

        horizontalLayout_2->addWidget(collectionsRenameButton);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(spacerItem);

        collectionsAddImagesButton = new QPushButton(page_5);
        collectionsAddImagesButton->setObjectName(QStringLiteral("collectionsAddImagesButton"));
        collectionsAddImagesButton->setMinimumSize(QSize(23, 23));
        collectionsAddImagesButton->setMaximumSize(QSize(23, 23));

        horizontalLayout_2->addWidget(collectionsAddImagesButton);

        collectionsRemoveImagesButton = new QPushButton(page_5);
        collectionsRemoveImagesButton->setObjectName(QStringLiteral("collectionsRemoveImagesButton"));
        collectionsRemoveImagesButton->setMinimumSize(QSize(23, 23));
        collectionsRemoveImagesButton->setMaximumSize(QSize(23, 23));

        horizontalLayout_2->addWidget(collectionsRemoveImagesButton);

        collectionsTagImagesButton = new QPushButton(page_5);
        collectionsTagImagesButton->setObjectName(QStringLiteral("collectionsTagImagesButton"));
        collectionsTagImagesButton->setMinimumSize(QSize(23, 23));
        collectionsTagImagesButton->setMaximumSize(QSize(23, 23));

        horizontalLayout_2->addWidget(collectionsTagImagesButton);

        spacerItem1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(spacerItem1);

        collectionsImportButton = new QPushButton(page_5);
        collectionsImportButton->setObjectName(QStringLiteral("collectionsImportButton"));
        collectionsImportButton->setMinimumSize(QSize(23, 23));
        collectionsImportButton->setMaximumSize(QSize(23, 23));

        horizontalLayout_2->addWidget(collectionsImportButton);

        collectionsExportButton = new QPushButton(page_5);
        collectionsExportButton->setObjectName(QStringLiteral("collectionsExportButton"));
        collectionsExportButton->setMinimumSize(QSize(23, 23));
        collectionsExportButton->setMaximumSize(QSize(23, 23));

        horizontalLayout_2->addWidget(collectionsExportButton);

        collectionsStackedwidget->addWidget(page_5);
        page_6 = new QWidget();
        page_6->setObjectName(QStringLiteral("page_6"));
        hboxLayout = new QHBoxLayout(page_6);
        hboxLayout->setSpacing(3);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(page_6);
        label_8->setObjectName(QStringLiteral("label_8"));

        hboxLayout->addWidget(label_8);

        collectionsAddImagesOkButton = new QPushButton(page_6);
        collectionsAddImagesOkButton->setObjectName(QStringLiteral("collectionsAddImagesOkButton"));
        collectionsAddImagesOkButton->setMinimumSize(QSize(23, 23));
        collectionsAddImagesOkButton->setMaximumSize(QSize(23, 23));

        hboxLayout->addWidget(collectionsAddImagesOkButton);

        collectionsAddImagesCancelButton = new QPushButton(page_6);
        collectionsAddImagesCancelButton->setObjectName(QStringLiteral("collectionsAddImagesCancelButton"));
        collectionsAddImagesCancelButton->setMinimumSize(QSize(23, 23));
        collectionsAddImagesCancelButton->setMaximumSize(QSize(23, 23));

        hboxLayout->addWidget(collectionsAddImagesCancelButton);

        collectionsStackedwidget->addWidget(page_6);

        vboxLayout->addWidget(collectionsStackedwidget);

        collectionsWidget = new QTreeWidget(collectionspage);
        collectionsWidget->setObjectName(QStringLiteral("collectionsWidget"));
        collectionsWidget->setColumnCount(0);

        vboxLayout->addWidget(collectionsWidget);

        navigationStack->addWidget(collectionspage);
        documentpage = new QWidget();
        documentpage->setObjectName(QStringLiteral("documentpage"));
        vboxLayout1 = new QVBoxLayout(documentpage);
        vboxLayout1->setSpacing(3);
        vboxLayout1->setObjectName(QStringLiteral("vboxLayout1"));
        vboxLayout1->setContentsMargins(0, 0, 0, 0);
        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setObjectName(QStringLiteral("hboxLayout1"));
        gotoPageButton = new QPushButton(documentpage);
        gotoPageButton->setObjectName(QStringLiteral("gotoPageButton"));
        sizePolicy1.setHeightForWidth(gotoPageButton->sizePolicy().hasHeightForWidth());
        gotoPageButton->setSizePolicy(sizePolicy1);
        gotoPageButton->setMinimumSize(QSize(0, 23));
        gotoPageButton->setMaximumSize(QSize(16777215, 23));

        hboxLayout1->addWidget(gotoPageButton);

        spacerItem2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem2);


        vboxLayout1->addLayout(hboxLayout1);

        documentWidget = new QTreeWidget(documentpage);
        documentWidget->setObjectName(QStringLiteral("documentWidget"));
        documentWidget->setColumnCount(0);

        vboxLayout1->addWidget(documentWidget);

        navigationStack->addWidget(documentpage);

        verticalLayout_3->addWidget(navigationStack);

        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setObjectName(QStringLiteral("hboxLayout2"));
        moreButton = new QPushButton(widget);
        moreButton->setObjectName(QStringLiteral("moreButton"));
        moreButton->setEnabled(true);
        moreButton->setIconSize(QSize(15, 15));

        hboxLayout2->addWidget(moreButton);

        spacerItem3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout2->addItem(spacerItem3);

        alwaysOnTopCheckbox = new QCheckBox(widget);
        alwaysOnTopCheckbox->setObjectName(QStringLiteral("alwaysOnTopCheckbox"));

        hboxLayout2->addWidget(alwaysOnTopCheckbox);


        verticalLayout_3->addLayout(hboxLayout2);

        splitter->addWidget(widget);
        widget_2 = new QWidget(splitter);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(3);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(widget_2->sizePolicy().hasHeightForWidth());
        widget_2->setSizePolicy(sizePolicy2);
        verticalLayout = new QVBoxLayout(widget_2);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        sortCombobox = new QComboBox(widget_2);
        sortCombobox->setObjectName(QStringLiteral("sortCombobox"));

        horizontalLayout->addWidget(sortCombobox);

        sortOrderButton = new QPushButton(widget_2);
        sortOrderButton->setObjectName(QStringLiteral("sortOrderButton"));
        sortOrderButton->setMinimumSize(QSize(23, 23));
        sortOrderButton->setMaximumSize(QSize(23, 23));
        sortOrderButton->setIconSize(QSize(15, 15));

        horizontalLayout->addWidget(sortOrderButton);

        spacerItem4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(spacerItem4);

        zoomPlusButton = new QPushButton(widget_2);
        zoomPlusButton->setObjectName(QStringLiteral("zoomPlusButton"));
        zoomPlusButton->setMinimumSize(QSize(23, 23));
        zoomPlusButton->setMaximumSize(QSize(23, 23));
        zoomPlusButton->setIconSize(QSize(20, 20));

        horizontalLayout->addWidget(zoomPlusButton);

        zoomMinusButton = new QPushButton(widget_2);
        zoomMinusButton->setObjectName(QStringLiteral("zoomMinusButton"));
        zoomMinusButton->setMinimumSize(QSize(23, 23));
        zoomMinusButton->setMaximumSize(QSize(23, 23));
        zoomMinusButton->setIconSize(QSize(20, 20));

        horizontalLayout->addWidget(zoomMinusButton);

        spacerItem5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(spacerItem5);

        previewModeCombobox = new QComboBox(widget_2);
        previewModeCombobox->setObjectName(QStringLiteral("previewModeCombobox"));

        horizontalLayout->addWidget(previewModeCombobox);

        spacerItem6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(spacerItem6);

        actionsCombobox = new QComboBox(widget_2);
        actionsCombobox->setObjectName(QStringLiteral("actionsCombobox"));

        horizontalLayout->addWidget(actionsCombobox);

        actionsGoButton = new QPushButton(widget_2);
        actionsGoButton->setObjectName(QStringLiteral("actionsGoButton"));
        actionsGoButton->setMinimumSize(QSize(23, 23));
        actionsGoButton->setMaximumSize(QSize(23, 23));
        actionsGoButton->setLayoutDirection(Qt::LeftToRight);
        actionsGoButton->setIconSize(QSize(20, 20));

        horizontalLayout->addWidget(actionsGoButton);


        verticalLayout->addLayout(horizontalLayout);

        imageViewArea = new PictView(widget_2);
        imageViewArea->setObjectName(QStringLiteral("imageViewArea"));
        imageViewArea->setDragEnabled(true);
        imageViewArea->setDragDropMode(QAbstractItemView::DragOnly);
        imageViewArea->setSelectionMode(QAbstractItemView::SingleSelection);

        verticalLayout->addWidget(imageViewArea);

        hboxLayout3 = new QHBoxLayout();
        hboxLayout3->setObjectName(QStringLiteral("hboxLayout3"));
        statusLabel = new QLabel(widget_2);
        statusLabel->setObjectName(QStringLiteral("statusLabel"));

        hboxLayout3->addWidget(statusLabel);

        spacerItem7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout3->addItem(spacerItem7);

        saveSettingsCheckbox = new QCheckBox(widget_2);
        saveSettingsCheckbox->setObjectName(QStringLiteral("saveSettingsCheckbox"));
        saveSettingsCheckbox->setChecked(false);
        saveSettingsCheckbox->setTristate(false);

        hboxLayout3->addWidget(saveSettingsCheckbox);

        resetSettingsButton = new QPushButton(widget_2);
        resetSettingsButton->setObjectName(QStringLiteral("resetSettingsButton"));

        hboxLayout3->addWidget(resetSettingsButton);

        closeButton = new QPushButton(widget_2);
        closeButton->setObjectName(QStringLiteral("closeButton"));

        hboxLayout3->addWidget(closeButton);


        verticalLayout->addLayout(hboxLayout3);

        splitter->addWidget(widget_2);

        gridLayout1->addWidget(splitter, 0, 0, 1, 1);

        splitter_2->addWidget(widget_3);
        tabWidget = new QTabWidget(splitter_2);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy3);
        tabWidget->setMinimumSize(QSize(866, 191));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        horizontalLayout_3 = new QHBoxLayout(tab);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        groupBox_2 = new QGroupBox(tab);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        sizePolicy1.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy1);
        gridLayout2 = new QGridLayout(groupBox_2);
        gridLayout2->setObjectName(QStringLiteral("gridLayout2"));
        informationFilenameLabel = new QLabel(groupBox_2);
        informationFilenameLabel->setObjectName(QStringLiteral("informationFilenameLabel"));

        gridLayout2->addWidget(informationFilenameLabel, 0, 1, 1, 1);

        informationFilesizeLabel = new QLabel(groupBox_2);
        informationFilesizeLabel->setObjectName(QStringLiteral("informationFilesizeLabel"));

        gridLayout2->addWidget(informationFilesizeLabel, 4, 1, 1, 1);

        informationFiledateLabel = new QLabel(groupBox_2);
        informationFiledateLabel->setObjectName(QStringLiteral("informationFiledateLabel"));

        gridLayout2->addWidget(informationFiledateLabel, 5, 1, 1, 1);

        label_11 = new QLabel(groupBox_2);
        label_11->setObjectName(QStringLiteral("label_11"));

        gridLayout2->addWidget(label_11, 2, 0, 1, 1);

        label_10 = new QLabel(groupBox_2);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout2->addWidget(label_10, 0, 0, 1, 1);

        label_22 = new QLabel(groupBox_2);
        label_22->setObjectName(QStringLiteral("label_22"));

        gridLayout2->addWidget(label_22, 4, 0, 1, 1);

        informationFilepathLabel = new QLabel(groupBox_2);
        informationFilepathLabel->setObjectName(QStringLiteral("informationFilepathLabel"));

        gridLayout2->addWidget(informationFilepathLabel, 2, 1, 1, 1);

        jumpToImageButton = new QPushButton(groupBox_2);
        jumpToImageButton->setObjectName(QStringLiteral("jumpToImageButton"));
        jumpToImageButton->setMinimumSize(QSize(23, 23));
        jumpToImageButton->setMaximumSize(QSize(23, 23));

        gridLayout2->addWidget(jumpToImageButton, 2, 2, 1, 1);

        label_23 = new QLabel(groupBox_2);
        label_23->setObjectName(QStringLiteral("label_23"));

        gridLayout2->addWidget(label_23, 5, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout2->addItem(verticalSpacer_2, 6, 0, 1, 1);


        horizontalLayout_3->addWidget(groupBox_2);

        groupBox = new QGroupBox(tab);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        sizePolicy1.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy1);
        groupBox->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        gridLayout3 = new QGridLayout(groupBox);
        gridLayout3->setObjectName(QStringLiteral("gridLayout3"));
        informationEmbeddedLabel = new QLabel(groupBox);
        informationEmbeddedLabel->setObjectName(QStringLiteral("informationEmbeddedLabel"));

        gridLayout3->addWidget(informationEmbeddedLabel, 3, 1, 1, 1);

        informationDpiLabel = new QLabel(groupBox);
        informationDpiLabel->setObjectName(QStringLiteral("informationDpiLabel"));

        gridLayout3->addWidget(informationDpiLabel, 2, 1, 1, 1);

        informationLayersLabel = new QLabel(groupBox);
        informationLayersLabel->setObjectName(QStringLiteral("informationLayersLabel"));

        gridLayout3->addWidget(informationLayersLabel, 2, 3, 1, 1);

        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout3->addWidget(label_9, 3, 0, 1, 1);

        informationHeightLabel = new QLabel(groupBox);
        informationHeightLabel->setObjectName(QStringLiteral("informationHeightLabel"));

        gridLayout3->addWidget(informationHeightLabel, 1, 3, 1, 1);

        label_15 = new QLabel(groupBox);
        label_15->setObjectName(QStringLiteral("label_15"));

        gridLayout3->addWidget(label_15, 3, 2, 1, 1);

        informationProfilenameLabel = new QLabel(groupBox);
        informationProfilenameLabel->setObjectName(QStringLiteral("informationProfilenameLabel"));

        gridLayout3->addWidget(informationProfilenameLabel, 3, 3, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout3->addWidget(label_3, 0, 2, 1, 1);

        informationFormatLabel = new QLabel(groupBox);
        informationFormatLabel->setObjectName(QStringLiteral("informationFormatLabel"));

        gridLayout3->addWidget(informationFormatLabel, 0, 1, 1, 1);

        informationWidthLabel = new QLabel(groupBox);
        informationWidthLabel->setObjectName(QStringLiteral("informationWidthLabel"));

        gridLayout3->addWidget(informationWidthLabel, 0, 3, 1, 1);

        informationColorspaceLabel = new QLabel(groupBox);
        informationColorspaceLabel->setObjectName(QStringLiteral("informationColorspaceLabel"));

        gridLayout3->addWidget(informationColorspaceLabel, 1, 1, 1, 1);

        label_12 = new QLabel(groupBox);
        label_12->setObjectName(QStringLiteral("label_12"));

        gridLayout3->addWidget(label_12, 0, 0, 1, 1);

        label_13 = new QLabel(groupBox);
        label_13->setObjectName(QStringLiteral("label_13"));

        gridLayout3->addWidget(label_13, 1, 0, 1, 1);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout3->addWidget(label_5, 2, 2, 1, 1);

        label_14 = new QLabel(groupBox);
        label_14->setObjectName(QStringLiteral("label_14"));

        gridLayout3->addWidget(label_14, 2, 0, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout3->addWidget(label_4, 1, 2, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout3->addItem(verticalSpacer, 4, 0, 1, 1);


        horizontalLayout_3->addWidget(groupBox);

        tabWidget->addTab(tab, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        gridLayout4 = new QGridLayout(tab_3);
        gridLayout4->setObjectName(QStringLiteral("gridLayout4"));
        vboxLayout2 = new QVBoxLayout();
        vboxLayout2->setObjectName(QStringLiteral("vboxLayout2"));
        label_6 = new QLabel(tab_3);
        label_6->setObjectName(QStringLiteral("label_6"));
        sizePolicy1.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy1);

        vboxLayout2->addWidget(label_6);

        filterFiltersListwidget = new QListWidget(tab_3);
        filterFiltersListwidget->setObjectName(QStringLiteral("filterFiltersListwidget"));

        vboxLayout2->addWidget(filterFiltersListwidget);


        gridLayout4->addLayout(vboxLayout2, 0, 0, 3, 1);

        filterTargetCombobox = new QComboBox(tab_3);
        filterTargetCombobox->setObjectName(QStringLiteral("filterTargetCombobox"));
        QSizePolicy sizePolicy4(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(filterTargetCombobox->sizePolicy().hasHeightForWidth());
        filterTargetCombobox->setSizePolicy(sizePolicy4);

        gridLayout4->addWidget(filterTargetCombobox, 0, 1, 1, 1);

        filterTargetStackedWidget = new QStackedWidget(tab_3);
        filterTargetStackedWidget->setObjectName(QStringLiteral("filterTargetStackedWidget"));
        sizePolicy1.setHeightForWidth(filterTargetStackedWidget->sizePolicy().hasHeightForWidth());
        filterTargetStackedWidget->setSizePolicy(sizePolicy1);
        page_10 = new QWidget();
        page_10->setObjectName(QStringLiteral("page_10"));
        filterTargetStackedWidget->addWidget(page_10);
        page_8 = new QWidget();
        page_8->setObjectName(QStringLiteral("page_8"));
        hboxLayout4 = new QHBoxLayout(page_8);
        hboxLayout4->setObjectName(QStringLiteral("hboxLayout4"));
        hboxLayout4->setContentsMargins(0, 0, 0, 0);
        filterSearchLineedit = new QLineEdit(page_8);
        filterSearchLineedit->setObjectName(QStringLiteral("filterSearchLineedit"));
        filterSearchLineedit->setEnabled(true);

        hboxLayout4->addWidget(filterSearchLineedit);

        filterSearchDirButton = new QPushButton(page_8);
        filterSearchDirButton->setObjectName(QStringLiteral("filterSearchDirButton"));
        filterSearchDirButton->setEnabled(true);
        sizePolicy4.setHeightForWidth(filterSearchDirButton->sizePolicy().hasHeightForWidth());
        filterSearchDirButton->setSizePolicy(sizePolicy4);

        hboxLayout4->addWidget(filterSearchDirButton);

        filterTargetStackedWidget->addWidget(page_8);
        page_9 = new QWidget();
        page_9->setObjectName(QStringLiteral("page_9"));
        hboxLayout5 = new QHBoxLayout(page_9);
        hboxLayout5->setObjectName(QStringLiteral("hboxLayout5"));
        hboxLayout5->setContentsMargins(0, 0, 0, 0);
        filterCollectionsCombobox = new multiCombobox(page_9);
        filterCollectionsCombobox->setObjectName(QStringLiteral("filterCollectionsCombobox"));
        filterCollectionsCombobox->setEnabled(true);

        hboxLayout5->addWidget(filterCollectionsCombobox);

        filterTargetStackedWidget->addWidget(page_9);

        gridLayout4->addWidget(filterTargetStackedWidget, 0, 2, 1, 1);

        groupBox_3 = new QGroupBox(tab_3);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        sizePolicy1.setHeightForWidth(groupBox_3->sizePolicy().hasHeightForWidth());
        groupBox_3->setSizePolicy(sizePolicy1);
        gridLayout5 = new QGridLayout(groupBox_3);
        gridLayout5->setObjectName(QStringLiteral("gridLayout5"));
        filterAddCriterionButton = new QPushButton(groupBox_3);
        filterAddCriterionButton->setObjectName(QStringLiteral("filterAddCriterionButton"));
        sizePolicy4.setHeightForWidth(filterAddCriterionButton->sizePolicy().hasHeightForWidth());
        filterAddCriterionButton->setSizePolicy(sizePolicy4);

        gridLayout5->addWidget(filterAddCriterionButton, 0, 0, 1, 1);

        filterCriteriaCombobox = new QComboBox(groupBox_3);
        filterCriteriaCombobox->setObjectName(QStringLiteral("filterCriteriaCombobox"));

        gridLayout5->addWidget(filterCriteriaCombobox, 0, 1, 1, 1);

        filterStackedwidget = new QStackedWidget(groupBox_3);
        filterStackedwidget->setObjectName(QStringLiteral("filterStackedwidget"));
        sizePolicy1.setHeightForWidth(filterStackedwidget->sizePolicy().hasHeightForWidth());
        filterStackedwidget->setSizePolicy(sizePolicy1);
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        hboxLayout6 = new QHBoxLayout(page);
        hboxLayout6->setObjectName(QStringLiteral("hboxLayout6"));
        hboxLayout6->setContentsMargins(0, 0, 0, 0);
        filterNameCombobox = new QComboBox(page);
        filterNameCombobox->setObjectName(QStringLiteral("filterNameCombobox"));

        hboxLayout6->addWidget(filterNameCombobox);

        filterNameLineedit = new QLineEdit(page);
        filterNameLineedit->setObjectName(QStringLiteral("filterNameLineedit"));

        hboxLayout6->addWidget(filterNameLineedit);

        filterStackedwidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        hboxLayout7 = new QHBoxLayout(page_2);
        hboxLayout7->setObjectName(QStringLiteral("hboxLayout7"));
        hboxLayout7->setContentsMargins(0, 0, 0, 0);
        filterDateCombobox = new QComboBox(page_2);
        filterDateCombobox->setObjectName(QStringLiteral("filterDateCombobox"));

        hboxLayout7->addWidget(filterDateCombobox);

        filterDateDatetimeedit = new QDateTimeEdit(page_2);
        filterDateDatetimeedit->setObjectName(QStringLiteral("filterDateDatetimeedit"));

        hboxLayout7->addWidget(filterDateDatetimeedit);

        filterStackedwidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        hboxLayout8 = new QHBoxLayout(page_3);
        hboxLayout8->setObjectName(QStringLiteral("hboxLayout8"));
        hboxLayout8->setContentsMargins(0, 0, 0, 0);
        filterSizeCombobox = new QComboBox(page_3);
        filterSizeCombobox->setObjectName(QStringLiteral("filterSizeCombobox"));

        hboxLayout8->addWidget(filterSizeCombobox);

        filterSizeSpinbox = new QSpinBox(page_3);
        filterSizeSpinbox->setObjectName(QStringLiteral("filterSizeSpinbox"));
        filterSizeSpinbox->setMinimum(1);
        filterSizeSpinbox->setMaximum(60000);
        filterSizeSpinbox->setValue(1000);

        hboxLayout8->addWidget(filterSizeSpinbox);

        filterStackedwidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        hboxLayout9 = new QHBoxLayout(page_4);
        hboxLayout9->setObjectName(QStringLiteral("hboxLayout9"));
        hboxLayout9->setContentsMargins(0, 0, 0, 0);
        filterTypeCombobox = new multiCombobox(page_4);
        filterTypeCombobox->setObjectName(QStringLiteral("filterTypeCombobox"));

        hboxLayout9->addWidget(filterTypeCombobox);

        filterStackedwidget->addWidget(page_4);
        page_7 = new QWidget();
        page_7->setObjectName(QStringLiteral("page_7"));
        hboxLayout10 = new QHBoxLayout(page_7);
        hboxLayout10->setObjectName(QStringLiteral("hboxLayout10"));
        filterTagsCombobox = new multiCombobox(page_7);
        filterTagsCombobox->setObjectName(QStringLiteral("filterTagsCombobox"));

        hboxLayout10->addWidget(filterTagsCombobox);

        filterTagLineedit = new QLineEdit(page_7);
        filterTagLineedit->setObjectName(QStringLiteral("filterTagLineedit"));

        hboxLayout10->addWidget(filterTagLineedit);

        filterAddTagButton = new QPushButton(page_7);
        filterAddTagButton->setObjectName(QStringLiteral("filterAddTagButton"));

        hboxLayout10->addWidget(filterAddTagButton);

        filterStackedwidget->addWidget(page_7);

        gridLayout5->addWidget(filterStackedwidget, 1, 0, 1, 2);


        gridLayout4->addWidget(groupBox_3, 1, 1, 2, 2);

        filterFilterButton = new QPushButton(tab_3);
        filterFilterButton->setObjectName(QStringLiteral("filterFilterButton"));
        sizePolicy4.setHeightForWidth(filterFilterButton->sizePolicy().hasHeightForWidth());
        filterFilterButton->setSizePolicy(sizePolicy4);

        gridLayout4->addWidget(filterFilterButton, 1, 3, 1, 1);

        filterClearButton = new QPushButton(tab_3);
        filterClearButton->setObjectName(QStringLiteral("filterClearButton"));
        sizePolicy4.setHeightForWidth(filterClearButton->sizePolicy().hasHeightForWidth());
        filterClearButton->setSizePolicy(sizePolicy4);

        gridLayout4->addWidget(filterClearButton, 2, 3, 1, 1);

        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        gridLayout6 = new QGridLayout(tab_4);
        gridLayout6->setObjectName(QStringLiteral("gridLayout6"));
        groupBox_5 = new QGroupBox(tab_4);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        sizePolicy3.setHeightForWidth(groupBox_5->sizePolicy().hasHeightForWidth());
        groupBox_5->setSizePolicy(sizePolicy3);
        gridLayout7 = new QGridLayout(groupBox_5);
        gridLayout7->setObjectName(QStringLiteral("gridLayout7"));
        label = new QLabel(groupBox_5);
        label->setObjectName(QStringLiteral("label"));
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);

        gridLayout7->addWidget(label, 0, 0, 1, 1);

        insertPagesCombobox = new multiCombobox(groupBox_5);
        insertPagesCombobox->setObjectName(QStringLiteral("insertPagesCombobox"));

        gridLayout7->addWidget(insertPagesCombobox, 1, 0, 1, 1);

        label_2 = new QLabel(groupBox_5);
        label_2->setObjectName(QStringLiteral("label_2"));
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);

        gridLayout7->addWidget(label_2, 2, 0, 1, 1);

        insertFramesCombobox = new multiCombobox(groupBox_5);
        insertFramesCombobox->setObjectName(QStringLiteral("insertFramesCombobox"));

        gridLayout7->addWidget(insertFramesCombobox, 3, 0, 1, 1);


        gridLayout6->addWidget(groupBox_5, 1, 0, 1, 1);

        groupBox_6 = new QGroupBox(tab_4);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        sizePolicy3.setHeightForWidth(groupBox_6->sizePolicy().hasHeightForWidth());
        groupBox_6->setSizePolicy(sizePolicy3);
        gridLayout8 = new QGridLayout(groupBox_6);
        gridLayout8->setObjectName(QStringLiteral("gridLayout8"));
        insertPositionCombobox = new QComboBox(groupBox_6);
        insertPositionCombobox->setObjectName(QStringLiteral("insertPositionCombobox"));

        gridLayout8->addWidget(insertPositionCombobox, 0, 0, 1, 4);

        insertPositionXLabel = new QLabel(groupBox_6);
        insertPositionXLabel->setObjectName(QStringLiteral("insertPositionXLabel"));
        insertPositionXLabel->setEnabled(false);

        gridLayout8->addWidget(insertPositionXLabel, 1, 0, 1, 1);

        insertPositionXSpinbox = new QSpinBox(groupBox_6);
        insertPositionXSpinbox->setObjectName(QStringLiteral("insertPositionXSpinbox"));
        insertPositionXSpinbox->setEnabled(false);
        insertPositionXSpinbox->setMaximum(9999);

        gridLayout8->addWidget(insertPositionXSpinbox, 1, 1, 1, 1);

        insertPositionYLabel = new QLabel(groupBox_6);
        insertPositionYLabel->setObjectName(QStringLiteral("insertPositionYLabel"));
        insertPositionYLabel->setEnabled(false);

        gridLayout8->addWidget(insertPositionYLabel, 1, 2, 1, 1);

        insertPositionYSpinbox = new QSpinBox(groupBox_6);
        insertPositionYSpinbox->setObjectName(QStringLiteral("insertPositionYSpinbox"));
        insertPositionYSpinbox->setEnabled(false);
        insertPositionYSpinbox->setMaximum(9999);

        gridLayout8->addWidget(insertPositionYSpinbox, 1, 3, 1, 1);


        gridLayout6->addWidget(groupBox_6, 1, 1, 1, 1);

        groupBox_7 = new QGroupBox(tab_4);
        groupBox_7->setObjectName(QStringLiteral("groupBox_7"));
        sizePolicy3.setHeightForWidth(groupBox_7->sizePolicy().hasHeightForWidth());
        groupBox_7->setSizePolicy(sizePolicy3);
        gridLayout9 = new QGridLayout(groupBox_7);
        gridLayout9->setObjectName(QStringLiteral("gridLayout9"));
        insertSizeCombobox = new QComboBox(groupBox_7);
        insertSizeCombobox->setObjectName(QStringLiteral("insertSizeCombobox"));

        gridLayout9->addWidget(insertSizeCombobox, 0, 0, 1, 5);

        insertWidthLabel = new QLabel(groupBox_7);
        insertWidthLabel->setObjectName(QStringLiteral("insertWidthLabel"));
        insertWidthLabel->setEnabled(false);

        gridLayout9->addWidget(insertWidthLabel, 2, 0, 1, 1);

        insertWidthSpinbox = new QSpinBox(groupBox_7);
        insertWidthSpinbox->setObjectName(QStringLiteral("insertWidthSpinbox"));
        insertWidthSpinbox->setEnabled(false);
        insertWidthSpinbox->setMaximum(60000);

        gridLayout9->addWidget(insertWidthSpinbox, 2, 1, 1, 1);

        insertHeightLabel = new QLabel(groupBox_7);
        insertHeightLabel->setObjectName(QStringLiteral("insertHeightLabel"));
        insertHeightLabel->setEnabled(false);

        gridLayout9->addWidget(insertHeightLabel, 2, 2, 1, 2);

        insertHeightSpinbox = new QSpinBox(groupBox_7);
        insertHeightSpinbox->setObjectName(QStringLiteral("insertHeightSpinbox"));
        insertHeightSpinbox->setEnabled(false);
        insertHeightSpinbox->setMaximum(60000);

        gridLayout9->addWidget(insertHeightSpinbox, 2, 4, 1, 1);


        gridLayout6->addWidget(groupBox_7, 1, 2, 1, 1);

        vboxLayout3 = new QVBoxLayout();
        vboxLayout3->setObjectName(QStringLiteral("vboxLayout3"));
        label_25 = new QLabel(tab_4);
        label_25->setObjectName(QStringLiteral("label_25"));
        QSizePolicy sizePolicy5(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(label_25->sizePolicy().hasHeightForWidth());
        label_25->setSizePolicy(sizePolicy5);
        label_25->setWordWrap(true);

        vboxLayout3->addWidget(label_25);

        label_26 = new QLabel(tab_4);
        label_26->setObjectName(QStringLiteral("label_26"));
        sizePolicy1.setHeightForWidth(label_26->sizePolicy().hasHeightForWidth());
        label_26->setSizePolicy(sizePolicy1);

        vboxLayout3->addWidget(label_26);

        label_27 = new QLabel(tab_4);
        label_27->setObjectName(QStringLiteral("label_27"));
        sizePolicy1.setHeightForWidth(label_27->sizePolicy().hasHeightForWidth());
        label_27->setSizePolicy(sizePolicy1);

        vboxLayout3->addWidget(label_27);

        insertImageButton = new QPushButton(tab_4);
        insertImageButton->setObjectName(QStringLiteral("insertImageButton"));
        sizePolicy4.setHeightForWidth(insertImageButton->sizePolicy().hasHeightForWidth());
        insertImageButton->setSizePolicy(sizePolicy4);

        vboxLayout3->addWidget(insertImageButton);


        gridLayout6->addLayout(vboxLayout3, 1, 3, 1, 1);

        tabWidget->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        gridLayout10 = new QGridLayout(tab_5);
        gridLayout10->setObjectName(QStringLiteral("gridLayout10"));
        label_7 = new QLabel(tab_5);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout10->addWidget(label_7, 0, 0, 1, 1);

        spacerItem8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout10->addItem(spacerItem8, 0, 2, 1, 1);

        collectionsSelectedImagesListwidget = new QListWidget(tab_5);
        collectionsSelectedImagesListwidget->setObjectName(QStringLiteral("collectionsSelectedImagesListwidget"));

        gridLayout10->addWidget(collectionsSelectedImagesListwidget, 1, 0, 1, 1);

        groupBox_9 = new QGroupBox(tab_5);
        groupBox_9->setObjectName(QStringLiteral("groupBox_9"));
        sizePolicy1.setHeightForWidth(groupBox_9->sizePolicy().hasHeightForWidth());
        groupBox_9->setSizePolicy(sizePolicy1);
        gridLayout11 = new QGridLayout(groupBox_9);
        gridLayout11->setObjectName(QStringLiteral("gridLayout11"));
        collectionsTagImagesCombobox = new multiCombobox(groupBox_9);
        collectionsTagImagesCombobox->setObjectName(QStringLiteral("collectionsTagImagesCombobox"));

        gridLayout11->addWidget(collectionsTagImagesCombobox, 0, 0, 1, 2);

        collectionsAddNewTagLineedit = new QLineEdit(groupBox_9);
        collectionsAddNewTagLineedit->setObjectName(QStringLiteral("collectionsAddNewTagLineedit"));

        gridLayout11->addWidget(collectionsAddNewTagLineedit, 1, 0, 1, 1);

        collectionsAddNewTagButton = new QPushButton(groupBox_9);
        collectionsAddNewTagButton->setObjectName(QStringLiteral("collectionsAddNewTagButton"));

        gridLayout11->addWidget(collectionsAddNewTagButton, 1, 1, 1, 1);

        collectionsSetTagsButton = new QPushButton(groupBox_9);
        collectionsSetTagsButton->setObjectName(QStringLiteral("collectionsSetTagsButton"));

        gridLayout11->addWidget(collectionsSetTagsButton, 2, 0, 1, 1);


        gridLayout10->addWidget(groupBox_9, 1, 1, 1, 1);

        tabWidget->addTab(tab_5, QString());
        splitter_2->addWidget(tabWidget);

        gridLayout->addWidget(splitter_2, 0, 0, 1, 1);

#ifndef QT_NO_SHORTCUT
        label->setBuddy(insertPagesCombobox);
        label_2->setBuddy(insertFramesCombobox);
#endif // QT_NO_SHORTCUT

        retranslateUi(PictureBrowser);

        navigationStack->setCurrentIndex(0);
        collectionsStackedwidget->setCurrentIndex(0);
        sortCombobox->setCurrentIndex(0);
        tabWidget->setCurrentIndex(0);
        filterTargetStackedWidget->setCurrentIndex(0);
        filterStackedwidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(PictureBrowser);
    } // setupUi

    void retranslateUi(QDialog *PictureBrowser)
    {
        PictureBrowser->setWindowTitle(QApplication::translate("PictureBrowser", "Picture Browser", 0));
        navigationBox->clear();
        navigationBox->insertItems(0, QStringList()
         << QApplication::translate("PictureBrowser", "Folder Browser", 0)
         << QApplication::translate("PictureBrowser", "Collection Browser", 0)
         << QApplication::translate("PictureBrowser", "Document Browser", 0)
        );
        subdirsCheckbox->setText(QApplication::translate("PictureBrowser", "Include Subdirectories", 0));
#ifndef QT_NO_TOOLTIP
        collectionsNewCategoryButton->setToolTip(QApplication::translate("PictureBrowser", "Create new category", 0));
#endif // QT_NO_TOOLTIP
        collectionsNewCategoryButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        collectionsNewButton->setToolTip(QApplication::translate("PictureBrowser", "New collection", 0));
#endif // QT_NO_TOOLTIP
        collectionsNewButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        collectionsDeleteButton->setToolTip(QApplication::translate("PictureBrowser", "Delete selected collection", 0));
#endif // QT_NO_TOOLTIP
        collectionsDeleteButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        collectionsRenameButton->setToolTip(QApplication::translate("PictureBrowser", "Edit selected collection", 0));
#endif // QT_NO_TOOLTIP
        collectionsRenameButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        collectionsAddImagesButton->setToolTip(QApplication::translate("PictureBrowser", "Add selected images to collection(s)", 0));
#endif // QT_NO_TOOLTIP
        collectionsAddImagesButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        collectionsRemoveImagesButton->setToolTip(QApplication::translate("PictureBrowser", "Remove selected images from current collection", 0));
#endif // QT_NO_TOOLTIP
        collectionsRemoveImagesButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        collectionsTagImagesButton->setToolTip(QApplication::translate("PictureBrowser", "Tag selected images", 0));
#endif // QT_NO_TOOLTIP
        collectionsTagImagesButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        collectionsImportButton->setToolTip(QApplication::translate("PictureBrowser", "Import collection/collectionset", 0));
#endif // QT_NO_TOOLTIP
        collectionsImportButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        collectionsExportButton->setToolTip(QApplication::translate("PictureBrowser", "Export collection/collectionset", 0));
#endif // QT_NO_TOOLTIP
        collectionsExportButton->setText(QString());
        label_8->setText(QApplication::translate("PictureBrowser", "add selected images to collections", 0));
        collectionsAddImagesOkButton->setText(QString());
        collectionsAddImagesCancelButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        gotoPageButton->setToolTip(QApplication::translate("PictureBrowser", "Move the document view to the selected page", 0));
#endif // QT_NO_TOOLTIP
        gotoPageButton->setText(QApplication::translate("PictureBrowser", "Go to Page", 0));
#ifndef QT_NO_TOOLTIP
        moreButton->setToolTip(QApplication::translate("PictureBrowser", "Show/Hide advanced tools", 0));
#endif // QT_NO_TOOLTIP
        moreButton->setText(QApplication::translate("PictureBrowser", "More", 0));
#ifndef QT_NO_TOOLTIP
        alwaysOnTopCheckbox->setToolTip(QApplication::translate("PictureBrowser", "Always keep Picture Browser on top of other windows", 0));
#endif // QT_NO_TOOLTIP
        alwaysOnTopCheckbox->setText(QApplication::translate("PictureBrowser", "Always on Top", 0));
        sortCombobox->clear();
        sortCombobox->insertItems(0, QStringList()
         << QApplication::translate("PictureBrowser", "Sort by Name", 0)
         << QApplication::translate("PictureBrowser", "Sort by Date", 0)
         << QApplication::translate("PictureBrowser", "Sort by Size", 0)
         << QApplication::translate("PictureBrowser", "Sort by Type", 0)
        );
#ifndef QT_NO_TOOLTIP
        sortOrderButton->setToolTip(QApplication::translate("PictureBrowser", "Change sort order", 0));
#endif // QT_NO_TOOLTIP
        sortOrderButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        zoomPlusButton->setToolTip(QApplication::translate("PictureBrowser", "Zoom in", 0));
#endif // QT_NO_TOOLTIP
        zoomPlusButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        zoomMinusButton->setToolTip(QApplication::translate("PictureBrowser", "Zoom out", 0));
#endif // QT_NO_TOOLTIP
        zoomMinusButton->setText(QString());
        previewModeCombobox->clear();
        previewModeCombobox->insertItems(0, QStringList()
         << QApplication::translate("PictureBrowser", "Preview Images Only", 0)
         << QApplication::translate("PictureBrowser", "Preview with Information", 0)
        );
#ifndef QT_NO_TOOLTIP
        previewModeCombobox->setToolTip(QApplication::translate("PictureBrowser", "Change preview settings", 0));
#endif // QT_NO_TOOLTIP
        actionsCombobox->clear();
        actionsCombobox->insertItems(0, QStringList()
         << QApplication::translate("PictureBrowser", "Quick Insert", 0)
         << QApplication::translate("PictureBrowser", "Custom Insert", 0)
         << QApplication::translate("PictureBrowser", "Add to Collection", 0)
        );
#ifndef QT_NO_TOOLTIP
        actionsGoButton->setToolTip(QApplication::translate("PictureBrowser", "Go", 0));
#endif // QT_NO_TOOLTIP
        actionsGoButton->setText(QString());
        statusLabel->setText(QApplication::translate("PictureBrowser", "0 Image(s) Displayed, 0 Image(s) Filtered", 0));
#ifndef QT_NO_TOOLTIP
        saveSettingsCheckbox->setToolTip(QApplication::translate("PictureBrowser", "Enable Picture Browser autosave settings", 0));
#endif // QT_NO_TOOLTIP
        saveSettingsCheckbox->setText(QApplication::translate("PictureBrowser", "Autosave Settings", 0));
#ifndef QT_NO_TOOLTIP
        resetSettingsButton->setToolTip(QApplication::translate("PictureBrowser", "Reset Picture Browser to default settings", 0));
#endif // QT_NO_TOOLTIP
        resetSettingsButton->setText(QApplication::translate("PictureBrowser", "Reset Settings", 0));
        closeButton->setText(QApplication::translate("PictureBrowser", "Close", 0));
        groupBox_2->setTitle(QApplication::translate("PictureBrowser", "File", 0));
        informationFilenameLabel->setText(QString());
        informationFilesizeLabel->setText(QString());
        informationFiledateLabel->setText(QString());
        label_11->setText(QApplication::translate("PictureBrowser", "Path:", 0));
        label_10->setText(QApplication::translate("PictureBrowser", "Name:", 0));
        label_22->setText(QApplication::translate("PictureBrowser", "Size:", 0));
        informationFilepathLabel->setText(QString());
        jumpToImageButton->setText(QApplication::translate("PictureBrowser", "Go", 0));
        label_23->setText(QApplication::translate("PictureBrowser", "Date:", 0));
        groupBox->setTitle(QApplication::translate("PictureBrowser", "Image", 0));
        informationEmbeddedLabel->setText(QString());
        informationDpiLabel->setText(QString());
        informationLayersLabel->setText(QString());
        label_9->setText(QApplication::translate("PictureBrowser", "Embedded Profile:", 0));
        informationHeightLabel->setText(QString());
        label_15->setText(QApplication::translate("PictureBrowser", "Profile Name:", 0));
        informationProfilenameLabel->setText(QString());
        label_3->setText(QApplication::translate("PictureBrowser", "Width:", 0));
        informationFormatLabel->setText(QString());
        informationWidthLabel->setText(QString());
        informationColorspaceLabel->setText(QString());
        label_12->setText(QApplication::translate("PictureBrowser", "Format:", 0));
        label_13->setText(QApplication::translate("PictureBrowser", "Colorspace:", 0));
        label_5->setText(QApplication::translate("PictureBrowser", "Layers:", 0));
        label_14->setText(QApplication::translate("PictureBrowser", "DPI:", 0));
        label_4->setText(QApplication::translate("PictureBrowser", "Height:", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("PictureBrowser", "Information", 0));
        label_6->setText(QApplication::translate("PictureBrowser", "Filters:", 0));
        filterTargetCombobox->clear();
        filterTargetCombobox->insertItems(0, QStringList()
         << QApplication::translate("PictureBrowser", "Filter Displayed Images", 0)
         << QApplication::translate("PictureBrowser", "Search Images", 0)
         << QApplication::translate("PictureBrowser", "Filter Collections", 0)
        );
#ifndef QT_NO_TOOLTIP
        filterSearchDirButton->setToolTip(QApplication::translate("PictureBrowser", "Select a directory", 0));
#endif // QT_NO_TOOLTIP
        filterSearchDirButton->setText(QApplication::translate("PictureBrowser", "...", 0));
        groupBox_3->setTitle(QApplication::translate("PictureBrowser", "Criteria", 0));
#ifndef QT_NO_TOOLTIP
        filterAddCriterionButton->setToolTip(QApplication::translate("PictureBrowser", "Add filter", 0));
#endif // QT_NO_TOOLTIP
        filterAddCriterionButton->setText(QApplication::translate("PictureBrowser", "<< Add", 0));
        filterCriteriaCombobox->clear();
        filterCriteriaCombobox->insertItems(0, QStringList()
         << QApplication::translate("PictureBrowser", "Name (Wildcards Allowed)", 0)
         << QApplication::translate("PictureBrowser", "Date", 0)
         << QApplication::translate("PictureBrowser", "Size", 0)
         << QApplication::translate("PictureBrowser", "Type", 0)
         << QApplication::translate("PictureBrowser", "Tag", 0)
        );
#ifndef QT_NO_TOOLTIP
        filterCriteriaCombobox->setToolTip(QApplication::translate("PictureBrowser", "Filter criteria", 0));
#endif // QT_NO_TOOLTIP
        filterNameCombobox->clear();
        filterNameCombobox->insertItems(0, QStringList()
         << QApplication::translate("PictureBrowser", "Contains", 0)
         << QApplication::translate("PictureBrowser", "Doesn't Contain", 0)
        );
#ifndef QT_NO_TOOLTIP
        filterNameCombobox->setToolTip(QApplication::translate("PictureBrowser", "Search criteria", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        filterNameLineedit->setToolTip(QApplication::translate("PictureBrowser", "Type name", 0));
#endif // QT_NO_TOOLTIP
        filterDateCombobox->clear();
        filterDateCombobox->insertItems(0, QStringList()
         << QApplication::translate("PictureBrowser", "Newer than", 0)
         << QApplication::translate("PictureBrowser", "Older than", 0)
        );
#ifndef QT_NO_TOOLTIP
        filterDateCombobox->setToolTip(QApplication::translate("PictureBrowser", "Search criteria", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        filterDateDatetimeedit->setToolTip(QApplication::translate("PictureBrowser", "Set date", 0));
#endif // QT_NO_TOOLTIP
        filterSizeCombobox->clear();
        filterSizeCombobox->insertItems(0, QStringList()
         << QApplication::translate("PictureBrowser", "Smaller than", 0)
         << QApplication::translate("PictureBrowser", "Bigger than", 0)
        );
#ifndef QT_NO_TOOLTIP
        filterSizeCombobox->setToolTip(QApplication::translate("PictureBrowser", "Search criteria", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        filterSizeSpinbox->setToolTip(QApplication::translate("PictureBrowser", "Set size", 0));
#endif // QT_NO_TOOLTIP
        filterSizeSpinbox->setSuffix(QApplication::translate("PictureBrowser", " KB", 0));
#ifndef QT_NO_TOOLTIP
        filterTypeCombobox->setToolTip(QApplication::translate("PictureBrowser", "Select file type(s)", 0));
#endif // QT_NO_TOOLTIP
        filterAddTagButton->setText(QApplication::translate("PictureBrowser", "add", 0));
        filterFilterButton->setText(QApplication::translate("PictureBrowser", "Apply Filters", 0));
        filterClearButton->setText(QApplication::translate("PictureBrowser", "Clear Filters", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("PictureBrowser", "Filter / Search", 0));
        groupBox_5->setTitle(QApplication::translate("PictureBrowser", "Image Placement", 0));
        label->setText(QApplication::translate("PictureBrowser", "Page(s):", 0));
#ifndef QT_NO_TOOLTIP
        insertPagesCombobox->setToolTip(QApplication::translate("PictureBrowser", "Select the page(s) where to insert the image(s)", 0));
#endif // QT_NO_TOOLTIP
        label_2->setText(QApplication::translate("PictureBrowser", "Image Frame(s):", 0));
#ifndef QT_NO_TOOLTIP
        insertFramesCombobox->setToolTip(QApplication::translate("PictureBrowser", "Select which frame(s) to use", 0));
#endif // QT_NO_TOOLTIP
        groupBox_6->setTitle(QApplication::translate("PictureBrowser", "Position of New Frame(s)", 0));
        insertPositionCombobox->clear();
        insertPositionCombobox->insertItems(0, QStringList()
         << QApplication::translate("PictureBrowser", "Top Left of Margins", 0)
         << QApplication::translate("PictureBrowser", "Top Left of Page", 0)
         << QApplication::translate("PictureBrowser", "Top Left of Bleed", 0)
         << QApplication::translate("PictureBrowser", "Custom Position", 0)
        );
#ifndef QT_NO_TOOLTIP
        insertPositionCombobox->setToolTip(QApplication::translate("PictureBrowser", "Set the position of the image frame(s) to insert", 0));
#endif // QT_NO_TOOLTIP
        insertPositionXLabel->setText(QApplication::translate("PictureBrowser", "X:", 0));
#ifndef QT_NO_TOOLTIP
        insertPositionXSpinbox->setToolTip(QApplication::translate("PictureBrowser", "Horizontal position", 0));
#endif // QT_NO_TOOLTIP
        insertPositionYLabel->setText(QApplication::translate("PictureBrowser", "Y:", 0));
#ifndef QT_NO_TOOLTIP
        insertPositionYSpinbox->setToolTip(QApplication::translate("PictureBrowser", "Vertical position", 0));
#endif // QT_NO_TOOLTIP
        groupBox_7->setTitle(QApplication::translate("PictureBrowser", "Size", 0));
        insertSizeCombobox->clear();
        insertSizeCombobox->insertItems(0, QStringList()
         << QApplication::translate("PictureBrowser", "Same as Page Margins", 0)
         << QApplication::translate("PictureBrowser", "Same as Page", 0)
         << QApplication::translate("PictureBrowser", "Same as Bleed", 0)
         << QApplication::translate("PictureBrowser", "Custom Size", 0)
        );
#ifndef QT_NO_TOOLTIP
        insertSizeCombobox->setToolTip(QApplication::translate("PictureBrowser", "Set the size of the image frame(s) to insert", 0));
#endif // QT_NO_TOOLTIP
        insertWidthLabel->setText(QApplication::translate("PictureBrowser", "Width:", 0));
#ifndef QT_NO_TOOLTIP
        insertWidthSpinbox->setToolTip(QApplication::translate("PictureBrowser", "Width", 0));
#endif // QT_NO_TOOLTIP
        insertHeightLabel->setText(QApplication::translate("PictureBrowser", "Height:", 0));
#ifndef QT_NO_TOOLTIP
        insertHeightSpinbox->setToolTip(QApplication::translate("PictureBrowser", "Height", 0));
#endif // QT_NO_TOOLTIP
        label_25->setText(QApplication::translate("PictureBrowser", "Insert Image into", 0));
        label_26->setText(QApplication::translate("PictureBrowser", "0 Page(s)", 0));
        label_27->setText(QApplication::translate("PictureBrowser", "0 Frame(s)", 0));
        insertImageButton->setText(QApplication::translate("PictureBrowser", "Insert", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("PictureBrowser", "Insert Image", 0));
        label_7->setText(QApplication::translate("PictureBrowser", "Selected Images:", 0));
        groupBox_9->setTitle(QApplication::translate("PictureBrowser", "Tag Selected Image(s)", 0));
#ifndef QT_NO_TOOLTIP
        collectionsAddNewTagLineedit->setToolTip(QApplication::translate("PictureBrowser", "Type Tag name", 0));
#endif // QT_NO_TOOLTIP
        collectionsAddNewTagButton->setText(QApplication::translate("PictureBrowser", "Add New Tag", 0));
        collectionsSetTagsButton->setText(QApplication::translate("PictureBrowser", "Set Tags", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("PictureBrowser", "Tag Image(s)", 0));
    } // retranslateUi

};

namespace Ui {
    class PictureBrowser: public Ui_PictureBrowser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PICTUREBROWSER_H
