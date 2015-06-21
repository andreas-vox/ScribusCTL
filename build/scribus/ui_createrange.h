/********************************************************************************
** Form generated from reading UI file 'createrange.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATERANGE_H
#define UI_CREATERANGE_H

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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>
#include <ui/scrspinbox.h>

QT_BEGIN_NAMESPACE

class Ui_CreateRange
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *hboxLayout;
    QLabel *pageCountLabel;
    QLabel *pageCountValueLabel;
    QSpacerItem *spacerItem;
    QSpacerItem *spacerItem1;
    QTabWidget *tabWidget;
    QWidget *tabBasic;
    QGridLayout *gridLayout1;
    QGroupBox *groupBox1;
    QGridLayout *gridLayout2;
    QPushButton *basicRangeDelButton;
    QSpacerItem *spacerItem2;
    QPushButton *basicRangeDownButton;
    QPushButton *basicRangeUpButton;
    QListWidget *basicRangeListBox;
    QGroupBox *basicAddARangeButtonGroup;
    QGridLayout *gridLayout3;
    QRadioButton *basicConsecutiveRadioButton;
    QRadioButton *basicEvenRadioButton;
    QLabel *basicConsecutiveFromLabel;
    ScrSpinBox *basicConsecutiveToSpinBox;
    ScrSpinBox *basicConsecutiveFromSpinBox;
    QSpacerItem *spacerItem3;
    QLabel *basicConsecutiveToLabel;
    QHBoxLayout *hboxLayout1;
    QSpacerItem *spacerItem4;
    QPushButton *basicRangeAddButton;
    QSpacerItem *spacerItem5;
    QRadioButton *basicOddRadioButton;
    QLineEdit *basicCommaSepLineEdit;
    QRadioButton *basicCommaSepRadioButton;
    QWidget *tabAdvanced;
    QGridLayout *gridLayout4;
    QSpacerItem *spacerItem6;
    QSpacerItem *spacerItem7;
    QLabel *advSampleOrderExampleLabel;
    QLabel *advSampleOrderLabel;
    QSpacerItem *spacerItem8;
    ScrSpinBox *advPageGroupSizeSpinBox;
    QLabel *advPageGroupSizeLabel;
    QHBoxLayout *hboxLayout2;
    QSpacerItem *spacerItem9;
    QPushButton *okButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *CreateRange)
    {
        if (CreateRange->objectName().isEmpty())
            CreateRange->setObjectName(QStringLiteral("CreateRange"));
        CreateRange->resize(562, 437);
        gridLayout = new QGridLayout(CreateRange);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(9, 9, 9, 9);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        pageCountLabel = new QLabel(CreateRange);
        pageCountLabel->setObjectName(QStringLiteral("pageCountLabel"));
        pageCountLabel->setWordWrap(false);

        hboxLayout->addWidget(pageCountLabel);

        pageCountValueLabel = new QLabel(CreateRange);
        pageCountValueLabel->setObjectName(QStringLiteral("pageCountValueLabel"));
        pageCountValueLabel->setWordWrap(false);

        hboxLayout->addWidget(pageCountValueLabel);

        spacerItem = new QSpacerItem(80, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        spacerItem1 = new QSpacerItem(72, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem1);


        gridLayout->addLayout(hboxLayout, 0, 0, 1, 1);

        tabWidget = new QTabWidget(CreateRange);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabBasic = new QWidget();
        tabBasic->setObjectName(QStringLiteral("tabBasic"));
        gridLayout1 = new QGridLayout(tabBasic);
        gridLayout1->setSpacing(6);
        gridLayout1->setContentsMargins(9, 9, 9, 9);
        gridLayout1->setObjectName(QStringLiteral("gridLayout1"));
        groupBox1 = new QGroupBox(tabBasic);
        groupBox1->setObjectName(QStringLiteral("groupBox1"));
        gridLayout2 = new QGridLayout(groupBox1);
        gridLayout2->setSpacing(6);
        gridLayout2->setContentsMargins(9, 9, 9, 9);
        gridLayout2->setObjectName(QStringLiteral("gridLayout2"));
        basicRangeDelButton = new QPushButton(groupBox1);
        basicRangeDelButton->setObjectName(QStringLiteral("basicRangeDelButton"));

        gridLayout2->addWidget(basicRangeDelButton, 2, 1, 1, 1);

        spacerItem2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout2->addItem(spacerItem2, 3, 1, 1, 1);

        basicRangeDownButton = new QPushButton(groupBox1);
        basicRangeDownButton->setObjectName(QStringLiteral("basicRangeDownButton"));

        gridLayout2->addWidget(basicRangeDownButton, 1, 1, 1, 1);

        basicRangeUpButton = new QPushButton(groupBox1);
        basicRangeUpButton->setObjectName(QStringLiteral("basicRangeUpButton"));

        gridLayout2->addWidget(basicRangeUpButton, 0, 1, 1, 1);

        basicRangeListBox = new QListWidget(groupBox1);
        basicRangeListBox->setObjectName(QStringLiteral("basicRangeListBox"));

        gridLayout2->addWidget(basicRangeListBox, 0, 0, 4, 1);


        gridLayout1->addWidget(groupBox1, 0, 1, 1, 1);

        basicAddARangeButtonGroup = new QGroupBox(tabBasic);
        basicAddARangeButtonGroup->setObjectName(QStringLiteral("basicAddARangeButtonGroup"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(basicAddARangeButtonGroup->sizePolicy().hasHeightForWidth());
        basicAddARangeButtonGroup->setSizePolicy(sizePolicy);
        gridLayout3 = new QGridLayout(basicAddARangeButtonGroup);
        gridLayout3->setSpacing(6);
        gridLayout3->setContentsMargins(9, 9, 9, 9);
        gridLayout3->setObjectName(QStringLiteral("gridLayout3"));
        basicConsecutiveRadioButton = new QRadioButton(basicAddARangeButtonGroup);
        basicConsecutiveRadioButton->setObjectName(QStringLiteral("basicConsecutiveRadioButton"));
        basicConsecutiveRadioButton->setChecked(true);

        gridLayout3->addWidget(basicConsecutiveRadioButton, 0, 0, 1, 5);

        basicEvenRadioButton = new QRadioButton(basicAddARangeButtonGroup);
        basicEvenRadioButton->setObjectName(QStringLiteral("basicEvenRadioButton"));

        gridLayout3->addWidget(basicEvenRadioButton, 4, 0, 1, 5);

        basicConsecutiveFromLabel = new QLabel(basicAddARangeButtonGroup);
        basicConsecutiveFromLabel->setObjectName(QStringLiteral("basicConsecutiveFromLabel"));
        basicConsecutiveFromLabel->setWordWrap(false);

        gridLayout3->addWidget(basicConsecutiveFromLabel, 1, 0, 1, 1);

        basicConsecutiveToSpinBox = new ScrSpinBox(basicAddARangeButtonGroup);
        basicConsecutiveToSpinBox->setObjectName(QStringLiteral("basicConsecutiveToSpinBox"));

        gridLayout3->addWidget(basicConsecutiveToSpinBox, 1, 3, 1, 1);

        basicConsecutiveFromSpinBox = new ScrSpinBox(basicAddARangeButtonGroup);
        basicConsecutiveFromSpinBox->setObjectName(QStringLiteral("basicConsecutiveFromSpinBox"));

        gridLayout3->addWidget(basicConsecutiveFromSpinBox, 1, 1, 1, 1);

        spacerItem3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout3->addItem(spacerItem3, 1, 4, 1, 1);

        basicConsecutiveToLabel = new QLabel(basicAddARangeButtonGroup);
        basicConsecutiveToLabel->setObjectName(QStringLiteral("basicConsecutiveToLabel"));
        basicConsecutiveToLabel->setWordWrap(false);

        gridLayout3->addWidget(basicConsecutiveToLabel, 1, 2, 1, 1);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(6);
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
        hboxLayout1->setObjectName(QStringLiteral("hboxLayout1"));
        spacerItem4 = new QSpacerItem(38, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem4);

        basicRangeAddButton = new QPushButton(basicAddARangeButtonGroup);
        basicRangeAddButton->setObjectName(QStringLiteral("basicRangeAddButton"));

        hboxLayout1->addWidget(basicRangeAddButton);

        spacerItem5 = new QSpacerItem(38, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem5);


        gridLayout3->addLayout(hboxLayout1, 6, 0, 1, 5);

        basicOddRadioButton = new QRadioButton(basicAddARangeButtonGroup);
        basicOddRadioButton->setObjectName(QStringLiteral("basicOddRadioButton"));

        gridLayout3->addWidget(basicOddRadioButton, 5, 0, 1, 5);

        basicCommaSepLineEdit = new QLineEdit(basicAddARangeButtonGroup);
        basicCommaSepLineEdit->setObjectName(QStringLiteral("basicCommaSepLineEdit"));

        gridLayout3->addWidget(basicCommaSepLineEdit, 3, 0, 1, 5);

        basicCommaSepRadioButton = new QRadioButton(basicAddARangeButtonGroup);
        basicCommaSepRadioButton->setObjectName(QStringLiteral("basicCommaSepRadioButton"));

        gridLayout3->addWidget(basicCommaSepRadioButton, 2, 0, 1, 5);


        gridLayout1->addWidget(basicAddARangeButtonGroup, 0, 0, 1, 1);

        tabWidget->addTab(tabBasic, QString());
        tabAdvanced = new QWidget();
        tabAdvanced->setObjectName(QStringLiteral("tabAdvanced"));
        gridLayout4 = new QGridLayout(tabAdvanced);
        gridLayout4->setSpacing(6);
        gridLayout4->setContentsMargins(9, 9, 9, 9);
        gridLayout4->setObjectName(QStringLiteral("gridLayout4"));
        spacerItem6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout4->addItem(spacerItem6, 2, 0, 1, 5);

        spacerItem7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout4->addItem(spacerItem7, 1, 4, 1, 1);

        advSampleOrderExampleLabel = new QLabel(tabAdvanced);
        advSampleOrderExampleLabel->setObjectName(QStringLiteral("advSampleOrderExampleLabel"));
        advSampleOrderExampleLabel->setWordWrap(false);

        gridLayout4->addWidget(advSampleOrderExampleLabel, 1, 2, 1, 2);

        advSampleOrderLabel = new QLabel(tabAdvanced);
        advSampleOrderLabel->setObjectName(QStringLiteral("advSampleOrderLabel"));
        advSampleOrderLabel->setWordWrap(false);

        gridLayout4->addWidget(advSampleOrderLabel, 1, 0, 1, 2);

        spacerItem8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout4->addItem(spacerItem8, 0, 3, 1, 2);

        advPageGroupSizeSpinBox = new ScrSpinBox(tabAdvanced);
        advPageGroupSizeSpinBox->setObjectName(QStringLiteral("advPageGroupSizeSpinBox"));

        gridLayout4->addWidget(advPageGroupSizeSpinBox, 0, 1, 1, 2);

        advPageGroupSizeLabel = new QLabel(tabAdvanced);
        advPageGroupSizeLabel->setObjectName(QStringLiteral("advPageGroupSizeLabel"));
        advPageGroupSizeLabel->setWordWrap(false);

        gridLayout4->addWidget(advPageGroupSizeLabel, 0, 0, 1, 1);

        tabWidget->addTab(tabAdvanced, QString());

        gridLayout->addWidget(tabWidget, 1, 0, 1, 1);

        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setSpacing(6);
        hboxLayout2->setContentsMargins(0, 0, 0, 0);
        hboxLayout2->setObjectName(QStringLiteral("hboxLayout2"));
        spacerItem9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout2->addItem(spacerItem9);

        okButton = new QPushButton(CreateRange);
        okButton->setObjectName(QStringLiteral("okButton"));

        hboxLayout2->addWidget(okButton);

        cancelButton = new QPushButton(CreateRange);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));

        hboxLayout2->addWidget(cancelButton);


        gridLayout->addLayout(hboxLayout2, 2, 0, 1, 1);


        retranslateUi(CreateRange);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(CreateRange);
    } // setupUi

    void retranslateUi(QDialog *CreateRange)
    {
        CreateRange->setWindowTitle(QApplication::translate("CreateRange", "Create Range", 0));
        pageCountLabel->setText(QApplication::translate("CreateRange", "Number of Pages in Document:", 0));
        pageCountValueLabel->setText(QApplication::translate("CreateRange", "Doc Page Range", 0));
        groupBox1->setTitle(QApplication::translate("CreateRange", "Range of Pages", 0));
        basicRangeDelButton->setText(QApplication::translate("CreateRange", "De&lete", 0));
        basicRangeDelButton->setShortcut(QApplication::translate("CreateRange", "Alt+L", 0));
        basicRangeDownButton->setText(QApplication::translate("CreateRange", "Move &Down", 0));
        basicRangeDownButton->setShortcut(QApplication::translate("CreateRange", "Alt+D", 0));
        basicRangeUpButton->setText(QApplication::translate("CreateRange", "Move &Up", 0));
        basicRangeUpButton->setShortcut(QApplication::translate("CreateRange", "Alt+U", 0));
        basicAddARangeButtonGroup->setTitle(QApplication::translate("CreateRange", "Add a Range of Pages", 0));
        basicConsecutiveRadioButton->setText(QApplication::translate("CreateRange", "Consecutive Pages", 0));
        basicEvenRadioButton->setText(QApplication::translate("CreateRange", "Even Pages", 0));
        basicConsecutiveFromLabel->setText(QApplication::translate("CreateRange", "From:", 0));
        basicConsecutiveToLabel->setText(QApplication::translate("CreateRange", "To:", 0));
        basicRangeAddButton->setText(QApplication::translate("CreateRange", "&Add To Range", 0));
        basicRangeAddButton->setShortcut(QApplication::translate("CreateRange", "Alt+A", 0));
        basicOddRadioButton->setText(QApplication::translate("CreateRange", "Odd Pages", 0));
        basicCommaSepRadioButton->setText(QApplication::translate("CreateRange", "Comma Separated List", 0));
        tabWidget->setTabText(tabWidget->indexOf(tabBasic), QApplication::translate("CreateRange", "Basic Range Selection", 0));
        advSampleOrderExampleLabel->setText(QApplication::translate("CreateRange", "Page Order", 0));
        advSampleOrderLabel->setText(QApplication::translate("CreateRange", "Sample Page Order:", 0));
        advPageGroupSizeLabel->setText(QApplication::translate("CreateRange", "Page Group Size:", 0));
        tabWidget->setTabText(tabWidget->indexOf(tabAdvanced), QApplication::translate("CreateRange", "Advanced Reordering", 0));
        okButton->setText(QApplication::translate("CreateRange", "&OK", 0));
        okButton->setShortcut(QApplication::translate("CreateRange", "Alt+O", 0));
        cancelButton->setText(QApplication::translate("CreateRange", "&Cancel", 0));
        cancelButton->setShortcut(QApplication::translate("CreateRange", "Alt+C", 0));
    } // retranslateUi

};

namespace Ui {
    class CreateRange: public Ui_CreateRange {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATERANGE_H
