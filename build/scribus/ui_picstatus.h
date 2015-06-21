/********************************************************************************
** Form generated from reading UI file 'picstatus.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PICSTATUS_H
#define UI_PICSTATUS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PicStatus
{
public:
    QVBoxLayout *vboxLayout;
    QListWidget *imageViewArea;
    QTabWidget *workTab;
    QWidget *tabInfo;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QFormLayout *formLayout_4;
    QLabel *textLabel1;
    QLabel *displayName;
    QLabel *textLabel3;
    QLabel *displayPath;
    QPushButton *searchButton;
    QHBoxLayout *horizontalLayout_2;
    QGroupBox *groupImage;
    QFormLayout *formLayout;
    QLabel *textLabel6;
    QLabel *displayFormat;
    QLabel *textLabel5_2;
    QLabel *displayColorspace;
    QLabel *textLabel1_2;
    QLabel *displayDPI;
    QGroupBox *groupSize;
    QFormLayout *formLayout_2;
    QLabel *textLabel9;
    QLabel *displaySizePixel;
    QLabel *textLabel10;
    QLabel *displayScale;
    QLabel *textLabel1_4;
    QLabel *displayPrintSize;
    QGroupBox *groupLayout;
    QHBoxLayout *horizontalLayout;
    QFormLayout *formLayout_3;
    QLabel *textLabel5;
    QLabel *displayPage;
    QLabel *textLabel1_3;
    QLabel *displayObjekt;
    QLabel *textLabel2;
    QLabel *displayEffDPI;
    QVBoxLayout *verticalLayout;
    QPushButton *goPageButton;
    QPushButton *selectButton;
    QWidget *tabTasks;
    QGridLayout *gridLayout;
    QCheckBox *isPrinting;
    QPushButton *buttonLayers;
    QPushButton *buttonEdit;
    QCheckBox *isVisibleCheck;
    QPushButton *effectsButton;
    QSpacerItem *spacerItem;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem1;
    QPushButton *closeButton;

    void setupUi(QDialog *PicStatus)
    {
        if (PicStatus->objectName().isEmpty())
            PicStatus->setObjectName(QStringLiteral("PicStatus"));
        PicStatus->setWindowModality(Qt::WindowModal);
        PicStatus->resize(764, 464);
        vboxLayout = new QVBoxLayout(PicStatus);
        vboxLayout->setSpacing(5);
        vboxLayout->setContentsMargins(10, 10, 10, 10);
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        imageViewArea = new QListWidget(PicStatus);
        imageViewArea->setObjectName(QStringLiteral("imageViewArea"));
        imageViewArea->setMinimumSize(QSize(0, 150));
        imageViewArea->setDragDropMode(QAbstractItemView::NoDragDrop);
        imageViewArea->setMovement(QListView::Static);
        imageViewArea->setFlow(QListView::LeftToRight);
        imageViewArea->setProperty("isWrapping", QVariant(true));
        imageViewArea->setResizeMode(QListView::Adjust);
        imageViewArea->setSpacing(5);
        imageViewArea->setViewMode(QListView::IconMode);
        imageViewArea->setWordWrap(true);

        vboxLayout->addWidget(imageViewArea);

        workTab = new QTabWidget(PicStatus);
        workTab->setObjectName(QStringLiteral("workTab"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(workTab->sizePolicy().hasHeightForWidth());
        workTab->setSizePolicy(sizePolicy);
        tabInfo = new QWidget();
        tabInfo->setObjectName(QStringLiteral("tabInfo"));
        verticalLayout_2 = new QVBoxLayout(tabInfo);
        verticalLayout_2->setSpacing(5);
        verticalLayout_2->setContentsMargins(10, 10, 10, 10);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(5);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        formLayout_4 = new QFormLayout();
        formLayout_4->setSpacing(5);
        formLayout_4->setObjectName(QStringLiteral("formLayout_4"));
        textLabel1 = new QLabel(tabInfo);
        textLabel1->setObjectName(QStringLiteral("textLabel1"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(textLabel1->sizePolicy().hasHeightForWidth());
        textLabel1->setSizePolicy(sizePolicy1);
        textLabel1->setMinimumSize(QSize(70, 0));
        textLabel1->setWordWrap(false);

        formLayout_4->setWidget(0, QFormLayout::LabelRole, textLabel1);

        displayName = new QLabel(tabInfo);
        displayName->setObjectName(QStringLiteral("displayName"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(displayName->sizePolicy().hasHeightForWidth());
        displayName->setSizePolicy(sizePolicy2);
        displayName->setMinimumSize(QSize(220, 0));
        displayName->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        displayName->setWordWrap(false);

        formLayout_4->setWidget(0, QFormLayout::FieldRole, displayName);

        textLabel3 = new QLabel(tabInfo);
        textLabel3->setObjectName(QStringLiteral("textLabel3"));
        sizePolicy1.setHeightForWidth(textLabel3->sizePolicy().hasHeightForWidth());
        textLabel3->setSizePolicy(sizePolicy1);
        textLabel3->setMinimumSize(QSize(70, 0));
        textLabel3->setWordWrap(false);

        formLayout_4->setWidget(1, QFormLayout::LabelRole, textLabel3);

        displayPath = new QLabel(tabInfo);
        displayPath->setObjectName(QStringLiteral("displayPath"));
        sizePolicy2.setHeightForWidth(displayPath->sizePolicy().hasHeightForWidth());
        displayPath->setSizePolicy(sizePolicy2);
        displayPath->setMinimumSize(QSize(220, 0));
        displayPath->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        displayPath->setWordWrap(false);

        formLayout_4->setWidget(1, QFormLayout::FieldRole, displayPath);


        horizontalLayout_3->addLayout(formLayout_4);

        searchButton = new QPushButton(tabInfo);
        searchButton->setObjectName(QStringLiteral("searchButton"));
        searchButton->setAutoDefault(false);
        searchButton->setFlat(false);

        horizontalLayout_3->addWidget(searchButton);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(5);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        groupImage = new QGroupBox(tabInfo);
        groupImage->setObjectName(QStringLiteral("groupImage"));
        formLayout = new QFormLayout(groupImage);
        formLayout->setSpacing(5);
        formLayout->setContentsMargins(10, 10, 10, 10);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        textLabel6 = new QLabel(groupImage);
        textLabel6->setObjectName(QStringLiteral("textLabel6"));
        textLabel6->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        textLabel6->setWordWrap(false);

        formLayout->setWidget(0, QFormLayout::LabelRole, textLabel6);

        displayFormat = new QLabel(groupImage);
        displayFormat->setObjectName(QStringLiteral("displayFormat"));
        displayFormat->setMinimumSize(QSize(70, 0));
        displayFormat->setWordWrap(false);

        formLayout->setWidget(0, QFormLayout::FieldRole, displayFormat);

        textLabel5_2 = new QLabel(groupImage);
        textLabel5_2->setObjectName(QStringLiteral("textLabel5_2"));
        textLabel5_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        textLabel5_2->setWordWrap(false);

        formLayout->setWidget(1, QFormLayout::LabelRole, textLabel5_2);

        displayColorspace = new QLabel(groupImage);
        displayColorspace->setObjectName(QStringLiteral("displayColorspace"));
        displayColorspace->setMinimumSize(QSize(70, 0));
        displayColorspace->setWordWrap(false);

        formLayout->setWidget(1, QFormLayout::FieldRole, displayColorspace);

        textLabel1_2 = new QLabel(groupImage);
        textLabel1_2->setObjectName(QStringLiteral("textLabel1_2"));
        textLabel1_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        textLabel1_2->setWordWrap(false);

        formLayout->setWidget(2, QFormLayout::LabelRole, textLabel1_2);

        displayDPI = new QLabel(groupImage);
        displayDPI->setObjectName(QStringLiteral("displayDPI"));
        displayDPI->setMinimumSize(QSize(70, 0));
        displayDPI->setWordWrap(false);

        formLayout->setWidget(2, QFormLayout::FieldRole, displayDPI);


        horizontalLayout_2->addWidget(groupImage);

        groupSize = new QGroupBox(tabInfo);
        groupSize->setObjectName(QStringLiteral("groupSize"));
        formLayout_2 = new QFormLayout(groupSize);
        formLayout_2->setSpacing(5);
        formLayout_2->setContentsMargins(10, 10, 10, 10);
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        textLabel9 = new QLabel(groupSize);
        textLabel9->setObjectName(QStringLiteral("textLabel9"));
        textLabel9->setWordWrap(false);

        formLayout_2->setWidget(0, QFormLayout::LabelRole, textLabel9);

        displaySizePixel = new QLabel(groupSize);
        displaySizePixel->setObjectName(QStringLiteral("displaySizePixel"));
        displaySizePixel->setMinimumSize(QSize(120, 0));
        displaySizePixel->setWordWrap(false);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, displaySizePixel);

        textLabel10 = new QLabel(groupSize);
        textLabel10->setObjectName(QStringLiteral("textLabel10"));
        textLabel10->setWordWrap(false);

        formLayout_2->setWidget(1, QFormLayout::LabelRole, textLabel10);

        displayScale = new QLabel(groupSize);
        displayScale->setObjectName(QStringLiteral("displayScale"));
        displayScale->setMinimumSize(QSize(120, 0));
        displayScale->setWordWrap(false);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, displayScale);

        textLabel1_4 = new QLabel(groupSize);
        textLabel1_4->setObjectName(QStringLiteral("textLabel1_4"));
        textLabel1_4->setWordWrap(false);

        formLayout_2->setWidget(2, QFormLayout::LabelRole, textLabel1_4);

        displayPrintSize = new QLabel(groupSize);
        displayPrintSize->setObjectName(QStringLiteral("displayPrintSize"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(displayPrintSize->sizePolicy().hasHeightForWidth());
        displayPrintSize->setSizePolicy(sizePolicy3);
        displayPrintSize->setMinimumSize(QSize(120, 0));
        displayPrintSize->setWordWrap(false);

        formLayout_2->setWidget(2, QFormLayout::FieldRole, displayPrintSize);


        horizontalLayout_2->addWidget(groupSize);

        groupLayout = new QGroupBox(tabInfo);
        groupLayout->setObjectName(QStringLiteral("groupLayout"));
        horizontalLayout = new QHBoxLayout(groupLayout);
        horizontalLayout->setSpacing(5);
        horizontalLayout->setContentsMargins(10, 10, 10, 10);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        formLayout_3 = new QFormLayout();
        formLayout_3->setSpacing(5);
        formLayout_3->setObjectName(QStringLiteral("formLayout_3"));
        textLabel5 = new QLabel(groupLayout);
        textLabel5->setObjectName(QStringLiteral("textLabel5"));
        textLabel5->setWordWrap(false);

        formLayout_3->setWidget(0, QFormLayout::LabelRole, textLabel5);

        displayPage = new QLabel(groupLayout);
        displayPage->setObjectName(QStringLiteral("displayPage"));
        displayPage->setMinimumSize(QSize(70, 0));
        displayPage->setWordWrap(false);

        formLayout_3->setWidget(0, QFormLayout::FieldRole, displayPage);

        textLabel1_3 = new QLabel(groupLayout);
        textLabel1_3->setObjectName(QStringLiteral("textLabel1_3"));
        textLabel1_3->setWordWrap(false);

        formLayout_3->setWidget(1, QFormLayout::LabelRole, textLabel1_3);

        displayObjekt = new QLabel(groupLayout);
        displayObjekt->setObjectName(QStringLiteral("displayObjekt"));
        displayObjekt->setMinimumSize(QSize(70, 0));
        displayObjekt->setWordWrap(false);

        formLayout_3->setWidget(1, QFormLayout::FieldRole, displayObjekt);

        textLabel2 = new QLabel(groupLayout);
        textLabel2->setObjectName(QStringLiteral("textLabel2"));
        textLabel2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        textLabel2->setWordWrap(false);

        formLayout_3->setWidget(2, QFormLayout::LabelRole, textLabel2);

        displayEffDPI = new QLabel(groupLayout);
        displayEffDPI->setObjectName(QStringLiteral("displayEffDPI"));
        displayEffDPI->setMinimumSize(QSize(70, 0));
        displayEffDPI->setWordWrap(false);

        formLayout_3->setWidget(2, QFormLayout::FieldRole, displayEffDPI);


        horizontalLayout->addLayout(formLayout_3);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(5);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        goPageButton = new QPushButton(groupLayout);
        goPageButton->setObjectName(QStringLiteral("goPageButton"));
        goPageButton->setAutoDefault(false);
        goPageButton->setFlat(false);

        verticalLayout->addWidget(goPageButton);

        selectButton = new QPushButton(groupLayout);
        selectButton->setObjectName(QStringLiteral("selectButton"));
        selectButton->setAutoDefault(false);
        selectButton->setFlat(false);

        verticalLayout->addWidget(selectButton);


        horizontalLayout->addLayout(verticalLayout);


        horizontalLayout_2->addWidget(groupLayout);


        verticalLayout_2->addLayout(horizontalLayout_2);

        workTab->addTab(tabInfo, QString());
        tabTasks = new QWidget();
        tabTasks->setObjectName(QStringLiteral("tabTasks"));
        gridLayout = new QGridLayout(tabTasks);
        gridLayout->setSpacing(5);
        gridLayout->setContentsMargins(10, 10, 10, 10);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        isPrinting = new QCheckBox(tabTasks);
        isPrinting->setObjectName(QStringLiteral("isPrinting"));

        gridLayout->addWidget(isPrinting, 0, 0, 1, 1);

        buttonLayers = new QPushButton(tabTasks);
        buttonLayers->setObjectName(QStringLiteral("buttonLayers"));

        gridLayout->addWidget(buttonLayers, 1, 1, 1, 1);

        buttonEdit = new QPushButton(tabTasks);
        buttonEdit->setObjectName(QStringLiteral("buttonEdit"));

        gridLayout->addWidget(buttonEdit, 0, 1, 1, 1);

        isVisibleCheck = new QCheckBox(tabTasks);
        isVisibleCheck->setObjectName(QStringLiteral("isVisibleCheck"));

        gridLayout->addWidget(isVisibleCheck, 1, 0, 1, 1);

        effectsButton = new QPushButton(tabTasks);
        effectsButton->setObjectName(QStringLiteral("effectsButton"));

        gridLayout->addWidget(effectsButton, 0, 2, 1, 1);

        spacerItem = new QSpacerItem(21, 90, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem, 2, 1, 1, 1);

        workTab->addTab(tabTasks, QString());

        vboxLayout->addWidget(workTab);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(5);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        spacerItem1 = new QSpacerItem(131, 21, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem1);

        closeButton = new QPushButton(PicStatus);
        closeButton->setObjectName(QStringLiteral("closeButton"));
        closeButton->setDefault(true);

        hboxLayout->addWidget(closeButton);


        vboxLayout->addLayout(hboxLayout);


        retranslateUi(PicStatus);

        workTab->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(PicStatus);
    } // setupUi

    void retranslateUi(QDialog *PicStatus)
    {
        PicStatus->setWindowTitle(QApplication::translate("PicStatus", "Manage Images", 0));
#ifndef QT_NO_TOOLTIP
        workTab->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        textLabel1->setText(QApplication::translate("PicStatus", "Name:", 0));
#ifndef QT_NO_TOOLTIP
        displayName->setToolTip(QApplication::translate("PicStatus", "Name of the image file", 0));
#endif // QT_NO_TOOLTIP
        displayName->setText(QString());
        textLabel3->setText(QApplication::translate("PicStatus", "Path:", 0));
#ifndef QT_NO_TOOLTIP
        displayPath->setToolTip(QApplication::translate("PicStatus", "Location where the image file is stored", 0));
#endif // QT_NO_TOOLTIP
        displayPath->setText(QString());
#ifndef QT_NO_TOOLTIP
        searchButton->setToolTip(QApplication::translate("PicStatus", "Search for a missing image", 0));
#endif // QT_NO_TOOLTIP
        searchButton->setText(QApplication::translate("PicStatus", "Search...", 0));
        groupImage->setTitle(QApplication::translate("PicStatus", "Image", 0));
        textLabel6->setText(QApplication::translate("PicStatus", "Format:", 0));
#ifndef QT_NO_TOOLTIP
        displayFormat->setToolTip(QApplication::translate("PicStatus", "Type of the image", 0));
#endif // QT_NO_TOOLTIP
        displayFormat->setText(QString());
#ifndef QT_NO_TOOLTIP
        textLabel5_2->setToolTip(QApplication::translate("PicStatus", "The colorspace of the image", 0));
#endif // QT_NO_TOOLTIP
        textLabel5_2->setText(QApplication::translate("PicStatus", "Colorspace:", 0));
#ifndef QT_NO_TOOLTIP
        displayColorspace->setToolTip(QApplication::translate("PicStatus", "Colorspace used within the image, eg RGB or CMYK", 0));
#endif // QT_NO_TOOLTIP
        displayColorspace->setText(QString());
        textLabel1_2->setText(QApplication::translate("PicStatus", "DPI:", 0));
#ifndef QT_NO_TOOLTIP
        displayDPI->setToolTip(QApplication::translate("PicStatus", "Native resolution of the image, in dots per inch", 0));
#endif // QT_NO_TOOLTIP
        displayDPI->setText(QString());
        groupSize->setTitle(QApplication::translate("PicStatus", "Size", 0));
        textLabel9->setText(QApplication::translate("PicStatus", "Pixels:", 0));
#ifndef QT_NO_TOOLTIP
        displaySizePixel->setToolTip(QApplication::translate("PicStatus", "Height and width of the image", 0));
#endif // QT_NO_TOOLTIP
        displaySizePixel->setText(QString());
        textLabel10->setText(QApplication::translate("PicStatus", "Scale:", 0));
#ifndef QT_NO_TOOLTIP
        displayScale->setToolTip(QApplication::translate("PicStatus", "Horizontal and vertical scaling applied to the image", 0));
#endif // QT_NO_TOOLTIP
        displayScale->setText(QString());
        textLabel1_4->setText(QApplication::translate("PicStatus", "Printed:", 0));
#ifndef QT_NO_TOOLTIP
        displayPrintSize->setToolTip(QApplication::translate("PicStatus", "Size of the image when printed", 0));
#endif // QT_NO_TOOLTIP
        displayPrintSize->setText(QString());
        groupLayout->setTitle(QApplication::translate("PicStatus", "Layout", 0));
        textLabel5->setText(QApplication::translate("PicStatus", "On Page:", 0));
#ifndef QT_NO_TOOLTIP
        displayPage->setToolTip(QApplication::translate("PicStatus", "Page that the image is displayed on", 0));
#endif // QT_NO_TOOLTIP
        displayPage->setText(QString());
        textLabel1_3->setText(QApplication::translate("PicStatus", "Page Item:", 0));
#ifndef QT_NO_TOOLTIP
        displayObjekt->setToolTip(QApplication::translate("PicStatus", "Name of the page item that contains the image", 0));
#endif // QT_NO_TOOLTIP
        displayObjekt->setText(QString());
        textLabel2->setText(QApplication::translate("PicStatus", "Effective DPI:", 0));
#ifndef QT_NO_TOOLTIP
        displayEffDPI->setToolTip(QApplication::translate("PicStatus", "Effective resolution of the image after scaling", 0));
#endif // QT_NO_TOOLTIP
        displayEffDPI->setText(QString());
#ifndef QT_NO_TOOLTIP
        goPageButton->setToolTip(QApplication::translate("PicStatus", "Move to the page that the image is on", 0));
#endif // QT_NO_TOOLTIP
        goPageButton->setText(QApplication::translate("PicStatus", "Go to", 0));
#ifndef QT_NO_TOOLTIP
        selectButton->setToolTip(QApplication::translate("PicStatus", "Move to the page that the item is on and select it", 0));
#endif // QT_NO_TOOLTIP
        selectButton->setText(QApplication::translate("PicStatus", "Select", 0));
        workTab->setTabText(workTab->indexOf(tabInfo), QApplication::translate("PicStatus", "Information", 0));
#ifndef QT_NO_TOOLTIP
        isPrinting->setToolTip(QApplication::translate("PicStatus", "Enable or disable exporting of the item", 0));
#endif // QT_NO_TOOLTIP
        isPrinting->setText(QApplication::translate("PicStatus", "Export/Print Image", 0));
#ifndef QT_NO_TOOLTIP
        buttonLayers->setToolTip(QApplication::translate("PicStatus", "Set format specific properties of certain image types, like clipping paths", 0));
#endif // QT_NO_TOOLTIP
        buttonLayers->setText(QApplication::translate("PicStatus", "Extended Image Properties...", 0));
        buttonLayers->setShortcut(QString());
#ifndef QT_NO_TOOLTIP
        buttonEdit->setToolTip(QApplication::translate("PicStatus", "Edit the image in the default editor", 0));
#endif // QT_NO_TOOLTIP
        buttonEdit->setText(QApplication::translate("PicStatus", "Edit Image...", 0));
#ifndef QT_NO_TOOLTIP
        isVisibleCheck->setToolTip(QApplication::translate("PicStatus", "Make the image visible or invisible", 0));
#endif // QT_NO_TOOLTIP
        isVisibleCheck->setText(QApplication::translate("PicStatus", "Image Visible", 0));
#ifndef QT_NO_TOOLTIP
        effectsButton->setToolTip(QApplication::translate("PicStatus", "Apply non destructive effects to the image in its frame", 0));
#endif // QT_NO_TOOLTIP
        effectsButton->setText(QApplication::translate("PicStatus", "Image Effects...", 0));
        workTab->setTabText(workTab->indexOf(tabTasks), QApplication::translate("PicStatus", "Image Tools", 0));
        closeButton->setText(QApplication::translate("PicStatus", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class PicStatus: public Ui_PicStatus {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PICSTATUS_H
