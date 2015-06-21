/********************************************************************************
** Form generated from reading UI file 'multipleduplicate.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MULTIPLEDUPLICATE_H
#define UI_MULTIPLEDUPLICATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "ui/scrspinbox.h"

QT_BEGIN_NAMESPACE

class Ui_MultipleDuplicate
{
public:
    QVBoxLayout *vboxLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *vboxLayout1;
    QHBoxLayout *hboxLayout;
    QVBoxLayout *vboxLayout2;
    QHBoxLayout *hboxLayout1;
    QLabel *numberOfCopiesLabel;
    QSpinBox *numberOfCopiesSpinBox;
    QGroupBox *copiesCreateButtonGroup;
    QVBoxLayout *vboxLayout3;
    QRadioButton *createGapRadioButton;
    QRadioButton *shiftCreatedItemsRadioButton;
    QGridLayout *gridLayout;
    QLabel *horizShiftLabel;
    ScrSpinBox *rotationSpinBox;
    ScrSpinBox *vertShiftSpinBox;
    QLabel *rotationLabel;
    ScrSpinBox *horizShiftSpinBox;
    QLabel *vertShiftLabel;
    QSpacerItem *spacerItem;
    QSpacerItem *spacerItem1;
    QWidget *tab2;
    QVBoxLayout *vboxLayout4;
    QHBoxLayout *hboxLayout2;
    QGridLayout *gridLayout1;
    QLabel *vertRCLabel;
    QSpinBox *gridRowsSpinBox;
    ScrSpinBox *horizRCGapSpinBox;
    QLabel *horizRCLabel;
    QSpinBox *gridColsSpinBox;
    QLabel *numberOfRowsLabel;
    ScrSpinBox *vertRCGapSpinBox;
    QLabel *numberOfColumnsLabel;
    QSpacerItem *spacerItem2;
    QSpacerItem *spacerItem3;
    QHBoxLayout *hboxLayout3;
    QSpacerItem *spacerItem4;
    QPushButton *buttonOk;
    QPushButton *buttonCancel;

    void setupUi(QDialog *MultipleDuplicate)
    {
        if (MultipleDuplicate->objectName().isEmpty())
            MultipleDuplicate->setObjectName(QStringLiteral("MultipleDuplicate"));
        MultipleDuplicate->resize(306, 352);
        MultipleDuplicate->setSizeGripEnabled(true);
        vboxLayout = new QVBoxLayout(MultipleDuplicate);
        vboxLayout->setSpacing(6);
        vboxLayout->setContentsMargins(11, 11, 11, 11);
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        tabWidget = new QTabWidget(MultipleDuplicate);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy);
        tabWidget->setUsesScrollButtons(false);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        vboxLayout1 = new QVBoxLayout(tab);
        vboxLayout1->setSpacing(6);
        vboxLayout1->setContentsMargins(11, 11, 11, 11);
        vboxLayout1->setObjectName(QStringLiteral("vboxLayout1"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        vboxLayout2 = new QVBoxLayout();
        vboxLayout2->setSpacing(6);
        vboxLayout2->setObjectName(QStringLiteral("vboxLayout2"));
        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(5);
        hboxLayout1->setObjectName(QStringLiteral("hboxLayout1"));
        hboxLayout1->setContentsMargins(5, 5, 5, 5);
        numberOfCopiesLabel = new QLabel(tab);
        numberOfCopiesLabel->setObjectName(QStringLiteral("numberOfCopiesLabel"));
        numberOfCopiesLabel->setWordWrap(false);

        hboxLayout1->addWidget(numberOfCopiesLabel);

        numberOfCopiesSpinBox = new QSpinBox(tab);
        numberOfCopiesSpinBox->setObjectName(QStringLiteral("numberOfCopiesSpinBox"));
        numberOfCopiesSpinBox->setMinimum(1);
        numberOfCopiesSpinBox->setMaximum(999);

        hboxLayout1->addWidget(numberOfCopiesSpinBox);


        vboxLayout2->addLayout(hboxLayout1);

        copiesCreateButtonGroup = new QGroupBox(tab);
        copiesCreateButtonGroup->setObjectName(QStringLiteral("copiesCreateButtonGroup"));
        vboxLayout3 = new QVBoxLayout(copiesCreateButtonGroup);
        vboxLayout3->setSpacing(6);
        vboxLayout3->setContentsMargins(11, 11, 11, 11);
        vboxLayout3->setObjectName(QStringLiteral("vboxLayout3"));
        createGapRadioButton = new QRadioButton(copiesCreateButtonGroup);
        createGapRadioButton->setObjectName(QStringLiteral("createGapRadioButton"));

        vboxLayout3->addWidget(createGapRadioButton);

        shiftCreatedItemsRadioButton = new QRadioButton(copiesCreateButtonGroup);
        shiftCreatedItemsRadioButton->setObjectName(QStringLiteral("shiftCreatedItemsRadioButton"));

        vboxLayout3->addWidget(shiftCreatedItemsRadioButton);


        vboxLayout2->addWidget(copiesCreateButtonGroup);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(5);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(5, 5, 5, 5);
        horizShiftLabel = new QLabel(tab);
        horizShiftLabel->setObjectName(QStringLiteral("horizShiftLabel"));
        horizShiftLabel->setWordWrap(false);

        gridLayout->addWidget(horizShiftLabel, 0, 0, 1, 1);

        rotationSpinBox = new ScrSpinBox(tab);
        rotationSpinBox->setObjectName(QStringLiteral("rotationSpinBox"));
        rotationSpinBox->setMinimumSize(QSize(50, 24));

        gridLayout->addWidget(rotationSpinBox, 2, 1, 1, 1);

        vertShiftSpinBox = new ScrSpinBox(tab);
        vertShiftSpinBox->setObjectName(QStringLiteral("vertShiftSpinBox"));
        vertShiftSpinBox->setMinimumSize(QSize(50, 24));

        gridLayout->addWidget(vertShiftSpinBox, 1, 1, 1, 1);

        rotationLabel = new QLabel(tab);
        rotationLabel->setObjectName(QStringLiteral("rotationLabel"));
        rotationLabel->setWordWrap(false);

        gridLayout->addWidget(rotationLabel, 2, 0, 1, 1);

        horizShiftSpinBox = new ScrSpinBox(tab);
        horizShiftSpinBox->setObjectName(QStringLiteral("horizShiftSpinBox"));
        horizShiftSpinBox->setMinimumSize(QSize(50, 24));

        gridLayout->addWidget(horizShiftSpinBox, 0, 1, 1, 1);

        vertShiftLabel = new QLabel(tab);
        vertShiftLabel->setObjectName(QStringLiteral("vertShiftLabel"));
        vertShiftLabel->setWordWrap(false);

        gridLayout->addWidget(vertShiftLabel, 1, 0, 1, 1);


        vboxLayout2->addLayout(gridLayout);


        hboxLayout->addLayout(vboxLayout2);

        spacerItem = new QSpacerItem(10, 10, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);


        vboxLayout1->addLayout(hboxLayout);

        spacerItem1 = new QSpacerItem(5, 2, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout1->addItem(spacerItem1);

        tabWidget->addTab(tab, QString());
        tab2 = new QWidget();
        tab2->setObjectName(QStringLiteral("tab2"));
        vboxLayout4 = new QVBoxLayout(tab2);
        vboxLayout4->setSpacing(6);
        vboxLayout4->setContentsMargins(11, 11, 11, 11);
        vboxLayout4->setObjectName(QStringLiteral("vboxLayout4"));
        vboxLayout4->setContentsMargins(0, 0, 0, 0);
        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setSpacing(6);
        hboxLayout2->setObjectName(QStringLiteral("hboxLayout2"));
        gridLayout1 = new QGridLayout();
        gridLayout1->setSpacing(5);
        gridLayout1->setObjectName(QStringLiteral("gridLayout1"));
        gridLayout1->setContentsMargins(5, 5, 5, 5);
        vertRCLabel = new QLabel(tab2);
        vertRCLabel->setObjectName(QStringLiteral("vertRCLabel"));
        vertRCLabel->setWordWrap(false);

        gridLayout1->addWidget(vertRCLabel, 3, 0, 1, 1);

        gridRowsSpinBox = new QSpinBox(tab2);
        gridRowsSpinBox->setObjectName(QStringLiteral("gridRowsSpinBox"));
        gridRowsSpinBox->setMinimum(1);
        gridRowsSpinBox->setMaximum(999);

        gridLayout1->addWidget(gridRowsSpinBox, 0, 1, 1, 1);

        horizRCGapSpinBox = new ScrSpinBox(tab2);
        horizRCGapSpinBox->setObjectName(QStringLiteral("horizRCGapSpinBox"));
        horizRCGapSpinBox->setMinimumSize(QSize(50, 24));

        gridLayout1->addWidget(horizRCGapSpinBox, 2, 1, 1, 1);

        horizRCLabel = new QLabel(tab2);
        horizRCLabel->setObjectName(QStringLiteral("horizRCLabel"));
        horizRCLabel->setWordWrap(false);

        gridLayout1->addWidget(horizRCLabel, 2, 0, 1, 1);

        gridColsSpinBox = new QSpinBox(tab2);
        gridColsSpinBox->setObjectName(QStringLiteral("gridColsSpinBox"));
        gridColsSpinBox->setMinimum(1);
        gridColsSpinBox->setMaximum(999);

        gridLayout1->addWidget(gridColsSpinBox, 1, 1, 1, 1);

        numberOfRowsLabel = new QLabel(tab2);
        numberOfRowsLabel->setObjectName(QStringLiteral("numberOfRowsLabel"));
        numberOfRowsLabel->setWordWrap(false);

        gridLayout1->addWidget(numberOfRowsLabel, 0, 0, 1, 1);

        vertRCGapSpinBox = new ScrSpinBox(tab2);
        vertRCGapSpinBox->setObjectName(QStringLiteral("vertRCGapSpinBox"));
        vertRCGapSpinBox->setMinimumSize(QSize(50, 24));

        gridLayout1->addWidget(vertRCGapSpinBox, 3, 1, 1, 1);

        numberOfColumnsLabel = new QLabel(tab2);
        numberOfColumnsLabel->setObjectName(QStringLiteral("numberOfColumnsLabel"));
        numberOfColumnsLabel->setWordWrap(false);

        gridLayout1->addWidget(numberOfColumnsLabel, 1, 0, 1, 1);


        hboxLayout2->addLayout(gridLayout1);

        spacerItem2 = new QSpacerItem(5, 5, QSizePolicy::Minimum, QSizePolicy::Minimum);

        hboxLayout2->addItem(spacerItem2);


        vboxLayout4->addLayout(hboxLayout2);

        spacerItem3 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        vboxLayout4->addItem(spacerItem3);

        tabWidget->addTab(tab2, QString());

        vboxLayout->addWidget(tabWidget);

        hboxLayout3 = new QHBoxLayout();
        hboxLayout3->setSpacing(6);
        hboxLayout3->setObjectName(QStringLiteral("hboxLayout3"));
        spacerItem4 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout3->addItem(spacerItem4);

        buttonOk = new QPushButton(MultipleDuplicate);
        buttonOk->setObjectName(QStringLiteral("buttonOk"));
        buttonOk->setAutoDefault(true);
        buttonOk->setDefault(true);

        hboxLayout3->addWidget(buttonOk);

        buttonCancel = new QPushButton(MultipleDuplicate);
        buttonCancel->setObjectName(QStringLiteral("buttonCancel"));
        buttonCancel->setAutoDefault(true);

        hboxLayout3->addWidget(buttonCancel);


        vboxLayout->addLayout(hboxLayout3);

#ifndef QT_NO_SHORTCUT
        numberOfCopiesLabel->setBuddy(numberOfCopiesSpinBox);
        horizShiftLabel->setBuddy(horizShiftSpinBox);
        vertShiftLabel->setBuddy(vertShiftSpinBox);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(tabWidget, numberOfCopiesSpinBox);
        QWidget::setTabOrder(numberOfCopiesSpinBox, createGapRadioButton);
        QWidget::setTabOrder(createGapRadioButton, shiftCreatedItemsRadioButton);
        QWidget::setTabOrder(shiftCreatedItemsRadioButton, horizShiftSpinBox);
        QWidget::setTabOrder(horizShiftSpinBox, vertShiftSpinBox);
        QWidget::setTabOrder(vertShiftSpinBox, rotationSpinBox);
        QWidget::setTabOrder(rotationSpinBox, gridRowsSpinBox);
        QWidget::setTabOrder(gridRowsSpinBox, gridColsSpinBox);
        QWidget::setTabOrder(gridColsSpinBox, horizRCGapSpinBox);
        QWidget::setTabOrder(horizRCGapSpinBox, vertRCGapSpinBox);
        QWidget::setTabOrder(vertRCGapSpinBox, buttonOk);
        QWidget::setTabOrder(buttonOk, buttonCancel);

        retranslateUi(MultipleDuplicate);
        QObject::connect(buttonOk, SIGNAL(clicked()), MultipleDuplicate, SLOT(accept()));
        QObject::connect(buttonCancel, SIGNAL(clicked()), MultipleDuplicate, SLOT(reject()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MultipleDuplicate);
    } // setupUi

    void retranslateUi(QDialog *MultipleDuplicate)
    {
        MultipleDuplicate->setWindowTitle(QApplication::translate("MultipleDuplicate", "Multiple Duplicate", 0));
        numberOfCopiesLabel->setText(QApplication::translate("MultipleDuplicate", "&Number of Copies:", 0));
        copiesCreateButtonGroup->setTitle(QString());
        createGapRadioButton->setText(QApplication::translate("MultipleDuplicate", "Create &Gap Between Items Of", 0));
        createGapRadioButton->setShortcut(QApplication::translate("MultipleDuplicate", "Alt+G", 0));
        shiftCreatedItemsRadioButton->setText(QApplication::translate("MultipleDuplicate", "&Shift Created Items By", 0));
        shiftCreatedItemsRadioButton->setShortcut(QApplication::translate("MultipleDuplicate", "Alt+S", 0));
        horizShiftLabel->setText(QApplication::translate("MultipleDuplicate", "&Horizontal Shift:", 0));
        rotationLabel->setText(QApplication::translate("MultipleDuplicate", "Rotation:", 0));
        vertShiftLabel->setText(QApplication::translate("MultipleDuplicate", "&Vertical Shift:", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MultipleDuplicate", "&By Number of Copies", 0));
        vertRCLabel->setText(QApplication::translate("MultipleDuplicate", "Vertical Gap:", 0));
        horizRCLabel->setText(QApplication::translate("MultipleDuplicate", "Horizontal Gap:", 0));
        numberOfRowsLabel->setText(QApplication::translate("MultipleDuplicate", "Number of Rows:", 0));
        numberOfColumnsLabel->setText(QApplication::translate("MultipleDuplicate", "Number of Columns:", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab2), QApplication::translate("MultipleDuplicate", "By &Rows && Columns", 0));
        buttonOk->setText(QApplication::translate("MultipleDuplicate", "&OK", 0));
        buttonOk->setShortcut(QString());
        buttonCancel->setText(QApplication::translate("MultipleDuplicate", "&Cancel", 0));
        buttonCancel->setShortcut(QString());
    } // retranslateUi

};

namespace Ui {
    class MultipleDuplicate: public Ui_MultipleDuplicate {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MULTIPLEDUPLICATE_H
