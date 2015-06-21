/********************************************************************************
** Form generated from reading UI file 'prefs_documentsetupbase.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PREFS_DOCUMENTSETUPBASE_H
#define UI_PREFS_DOCUMENTSETUPBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <ui/newmarginwidget.h>
#include <ui/scrspinbox.h>

QT_BEGIN_NAMESPACE

class Ui_Prefs_DocumentSetup
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *titleLabel;
    QFrame *line;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_2;
    QFrame *line_2;
    QFormLayout *formLayout;
    QLabel *pageSizeLabel;
    QHBoxLayout *horizontalLayout_3;
    QComboBox *pageSizeComboBox;
    QToolButton *pageSizeLinkToolButton;
    QLabel *pageOrientatioLabel;
    QComboBox *pageOrientationComboBox;
    QLabel *pageUnitsLabel;
    QComboBox *pageUnitsComboBox;
    QLabel *pageWidthLabel;
    ScrSpinBox *pageWidthSpinBox;
    QLabel *pageHeightLabel;
    ScrSpinBox *pageHeightSpinBox;
    QCheckBox *applySizesToAllPagesCheckBox;
    QCheckBox *applySizesToAllMasterPagesCheckBox;
    QSpacerItem *verticalSpacer_5;
    QWidget *tab_4;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_7;
    QFrame *line_3;
    QFormLayout *formLayout_2;
    QLabel *layoutFirstPageIsLabel;
    QComboBox *layoutFirstPageIsComboBox;
    QRadioButton *fourFoldRadioButton;
    QRadioButton *threeFoldRadioButton;
    QRadioButton *doublePageRadioButton;
    QRadioButton *singlePageRadioButton;
    QSpacerItem *verticalSpacer_8;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_3;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_8;
    QFrame *line_5;
    QHBoxLayout *horizontalLayout_6;
    NewMarginWidget *marginsWidget;
    QSpacerItem *horizontalSpacer_6;
    QCheckBox *applyMarginsToAllPagesCheckBox;
    QCheckBox *applyMarginsToAllMasterPagesCheckBox;
    QSpacerItem *verticalSpacer_3;
    QLabel *label_10;
    QFrame *line_4;
    QHBoxLayout *horizontalLayout_7;
    NewMarginWidget *bleedsWidget;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *verticalSpacer_4;
    QWidget *tab_3;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *saveCompressedCheckBox;
    QSpacerItem *verticalSpacer_6;
    QLabel *label_4;
    QFrame *line_6;
    QCheckBox *autosaveCheckBox;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpinBox *autosaveIntervalSpinBox;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_7;
    QLabel *label_5;
    QFrame *line_7;
    QCheckBox *undoCheckBox;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QSpinBox *undoLengthSpinBox;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer_2;
    QButtonGroup *pageLayoutButtonGroup;

    void setupUi(QWidget *Prefs_DocumentSetup)
    {
        if (Prefs_DocumentSetup->objectName().isEmpty())
            Prefs_DocumentSetup->setObjectName(QStringLiteral("Prefs_DocumentSetup"));
        Prefs_DocumentSetup->resize(498, 650);
        verticalLayout = new QVBoxLayout(Prefs_DocumentSetup);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        titleLabel = new QLabel(Prefs_DocumentSetup);
        titleLabel->setObjectName(QStringLiteral("titleLabel"));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        titleLabel->setFont(font);

        verticalLayout->addWidget(titleLabel);

        line = new QFrame(Prefs_DocumentSetup);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        tabWidget = new QTabWidget(Prefs_DocumentSetup);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        verticalLayout_4 = new QVBoxLayout(tab);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label_2 = new QLabel(tab);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font1;
        font1.setPointSize(13);
        font1.setBold(true);
        font1.setWeight(75);
        label_2->setFont(font1);

        verticalLayout_4->addWidget(label_2);

        line_2 = new QFrame(tab);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_4->addWidget(line_2);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        pageSizeLabel = new QLabel(tab);
        pageSizeLabel->setObjectName(QStringLiteral("pageSizeLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, pageSizeLabel);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        pageSizeComboBox = new QComboBox(tab);
        pageSizeComboBox->setObjectName(QStringLiteral("pageSizeComboBox"));

        horizontalLayout_3->addWidget(pageSizeComboBox);

        pageSizeLinkToolButton = new QToolButton(tab);
        pageSizeLinkToolButton->setObjectName(QStringLiteral("pageSizeLinkToolButton"));
        pageSizeLinkToolButton->setArrowType(Qt::NoArrow);

        horizontalLayout_3->addWidget(pageSizeLinkToolButton);


        formLayout->setLayout(0, QFormLayout::FieldRole, horizontalLayout_3);

        pageOrientatioLabel = new QLabel(tab);
        pageOrientatioLabel->setObjectName(QStringLiteral("pageOrientatioLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, pageOrientatioLabel);

        pageOrientationComboBox = new QComboBox(tab);
        pageOrientationComboBox->setObjectName(QStringLiteral("pageOrientationComboBox"));

        formLayout->setWidget(1, QFormLayout::FieldRole, pageOrientationComboBox);

        pageUnitsLabel = new QLabel(tab);
        pageUnitsLabel->setObjectName(QStringLiteral("pageUnitsLabel"));

        formLayout->setWidget(2, QFormLayout::LabelRole, pageUnitsLabel);

        pageUnitsComboBox = new QComboBox(tab);
        pageUnitsComboBox->setObjectName(QStringLiteral("pageUnitsComboBox"));

        formLayout->setWidget(2, QFormLayout::FieldRole, pageUnitsComboBox);

        pageWidthLabel = new QLabel(tab);
        pageWidthLabel->setObjectName(QStringLiteral("pageWidthLabel"));

        formLayout->setWidget(3, QFormLayout::LabelRole, pageWidthLabel);

        pageWidthSpinBox = new ScrSpinBox(tab);
        pageWidthSpinBox->setObjectName(QStringLiteral("pageWidthSpinBox"));

        formLayout->setWidget(3, QFormLayout::FieldRole, pageWidthSpinBox);

        pageHeightLabel = new QLabel(tab);
        pageHeightLabel->setObjectName(QStringLiteral("pageHeightLabel"));

        formLayout->setWidget(4, QFormLayout::LabelRole, pageHeightLabel);

        pageHeightSpinBox = new ScrSpinBox(tab);
        pageHeightSpinBox->setObjectName(QStringLiteral("pageHeightSpinBox"));

        formLayout->setWidget(4, QFormLayout::FieldRole, pageHeightSpinBox);


        verticalLayout_4->addLayout(formLayout);

        applySizesToAllPagesCheckBox = new QCheckBox(tab);
        applySizesToAllPagesCheckBox->setObjectName(QStringLiteral("applySizesToAllPagesCheckBox"));

        verticalLayout_4->addWidget(applySizesToAllPagesCheckBox);

        applySizesToAllMasterPagesCheckBox = new QCheckBox(tab);
        applySizesToAllMasterPagesCheckBox->setObjectName(QStringLiteral("applySizesToAllMasterPagesCheckBox"));

        verticalLayout_4->addWidget(applySizesToAllMasterPagesCheckBox);

        verticalSpacer_5 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_5);

        tabWidget->addTab(tab, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        verticalLayout_6 = new QVBoxLayout(tab_4);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        label_7 = new QLabel(tab_4);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setFont(font1);

        verticalLayout_6->addWidget(label_7);

        line_3 = new QFrame(tab_4);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        verticalLayout_6->addWidget(line_3);

        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        layoutFirstPageIsLabel = new QLabel(tab_4);
        layoutFirstPageIsLabel->setObjectName(QStringLiteral("layoutFirstPageIsLabel"));

        formLayout_2->setWidget(4, QFormLayout::LabelRole, layoutFirstPageIsLabel);

        layoutFirstPageIsComboBox = new QComboBox(tab_4);
        layoutFirstPageIsComboBox->setObjectName(QStringLiteral("layoutFirstPageIsComboBox"));
        layoutFirstPageIsComboBox->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        formLayout_2->setWidget(4, QFormLayout::FieldRole, layoutFirstPageIsComboBox);

        fourFoldRadioButton = new QRadioButton(tab_4);
        pageLayoutButtonGroup = new QButtonGroup(Prefs_DocumentSetup);
        pageLayoutButtonGroup->setObjectName(QStringLiteral("pageLayoutButtonGroup"));
        pageLayoutButtonGroup->addButton(fourFoldRadioButton);
        fourFoldRadioButton->setObjectName(QStringLiteral("fourFoldRadioButton"));

        formLayout_2->setWidget(3, QFormLayout::FieldRole, fourFoldRadioButton);

        threeFoldRadioButton = new QRadioButton(tab_4);
        pageLayoutButtonGroup->addButton(threeFoldRadioButton);
        threeFoldRadioButton->setObjectName(QStringLiteral("threeFoldRadioButton"));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, threeFoldRadioButton);

        doublePageRadioButton = new QRadioButton(tab_4);
        pageLayoutButtonGroup->addButton(doublePageRadioButton);
        doublePageRadioButton->setObjectName(QStringLiteral("doublePageRadioButton"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, doublePageRadioButton);

        singlePageRadioButton = new QRadioButton(tab_4);
        pageLayoutButtonGroup->addButton(singlePageRadioButton);
        singlePageRadioButton->setObjectName(QStringLiteral("singlePageRadioButton"));
        singlePageRadioButton->setChecked(true);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, singlePageRadioButton);


        verticalLayout_6->addLayout(formLayout_2);

        verticalSpacer_8 = new QSpacerItem(20, 353, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_8);

        tabWidget->addTab(tab_4, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        verticalLayout_3 = new QVBoxLayout(tab_2);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        scrollArea = new QScrollArea(tab_2);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setFrameShadow(QFrame::Plain);
        scrollArea->setLineWidth(0);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 252, 206));
        verticalLayout_5 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        label_8 = new QLabel(scrollAreaWidgetContents);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setFont(font1);

        verticalLayout_5->addWidget(label_8);

        line_5 = new QFrame(scrollAreaWidgetContents);
        line_5->setObjectName(QStringLiteral("line_5"));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);

        verticalLayout_5->addWidget(line_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setContentsMargins(5, 5, 5, 5);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        marginsWidget = new NewMarginWidget(scrollAreaWidgetContents);
        marginsWidget->setObjectName(QStringLiteral("marginsWidget"));

        horizontalLayout_6->addWidget(marginsWidget);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_6);


        verticalLayout_5->addLayout(horizontalLayout_6);

        applyMarginsToAllPagesCheckBox = new QCheckBox(scrollAreaWidgetContents);
        applyMarginsToAllPagesCheckBox->setObjectName(QStringLiteral("applyMarginsToAllPagesCheckBox"));

        verticalLayout_5->addWidget(applyMarginsToAllPagesCheckBox);

        applyMarginsToAllMasterPagesCheckBox = new QCheckBox(scrollAreaWidgetContents);
        applyMarginsToAllMasterPagesCheckBox->setObjectName(QStringLiteral("applyMarginsToAllMasterPagesCheckBox"));

        verticalLayout_5->addWidget(applyMarginsToAllMasterPagesCheckBox);

        verticalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_5->addItem(verticalSpacer_3);

        label_10 = new QLabel(scrollAreaWidgetContents);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setFont(font1);

        verticalLayout_5->addWidget(label_10);

        line_4 = new QFrame(scrollAreaWidgetContents);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        verticalLayout_5->addWidget(line_4);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setContentsMargins(5, 5, 5, 5);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        bleedsWidget = new NewMarginWidget(scrollAreaWidgetContents);
        bleedsWidget->setObjectName(QStringLiteral("bleedsWidget"));

        horizontalLayout_7->addWidget(bleedsWidget);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_7);


        verticalLayout_5->addLayout(horizontalLayout_7);

        verticalSpacer_4 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_4);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_3->addWidget(scrollArea);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        verticalLayout_2 = new QVBoxLayout(tab_3);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        saveCompressedCheckBox = new QCheckBox(tab_3);
        saveCompressedCheckBox->setObjectName(QStringLiteral("saveCompressedCheckBox"));

        verticalLayout_2->addWidget(saveCompressedCheckBox);

        verticalSpacer_6 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_6);

        label_4 = new QLabel(tab_3);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font1);

        verticalLayout_2->addWidget(label_4);

        line_6 = new QFrame(tab_3);
        line_6->setObjectName(QStringLiteral("line_6"));
        line_6->setFrameShape(QFrame::HLine);
        line_6->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line_6);

        autosaveCheckBox = new QCheckBox(tab_3);
        autosaveCheckBox->setObjectName(QStringLiteral("autosaveCheckBox"));

        verticalLayout_2->addWidget(autosaveCheckBox);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(tab_3);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        autosaveIntervalSpinBox = new QSpinBox(tab_3);
        autosaveIntervalSpinBox->setObjectName(QStringLiteral("autosaveIntervalSpinBox"));

        horizontalLayout->addWidget(autosaveIntervalSpinBox);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout);

        verticalSpacer_7 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Maximum);

        verticalLayout_2->addItem(verticalSpacer_7);

        label_5 = new QLabel(tab_3);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font1);

        verticalLayout_2->addWidget(label_5);

        line_7 = new QFrame(tab_3);
        line_7->setObjectName(QStringLiteral("line_7"));
        line_7->setFrameShape(QFrame::HLine);
        line_7->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line_7);

        undoCheckBox = new QCheckBox(tab_3);
        undoCheckBox->setObjectName(QStringLiteral("undoCheckBox"));

        verticalLayout_2->addWidget(undoCheckBox);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_3 = new QLabel(tab_3);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_2->addWidget(label_3);

        undoLengthSpinBox = new QSpinBox(tab_3);
        undoLengthSpinBox->setObjectName(QStringLiteral("undoLengthSpinBox"));

        horizontalLayout_2->addWidget(undoLengthSpinBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout_2);

        verticalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        tabWidget->addTab(tab_3, QString());

        verticalLayout->addWidget(tabWidget);

#ifndef QT_NO_SHORTCUT
        pageSizeLabel->setBuddy(pageSizeComboBox);
        pageOrientatioLabel->setBuddy(pageOrientationComboBox);
        pageUnitsLabel->setBuddy(pageUnitsComboBox);
        pageWidthLabel->setBuddy(pageWidthSpinBox);
        pageHeightLabel->setBuddy(pageHeightSpinBox);
        layoutFirstPageIsLabel->setBuddy(layoutFirstPageIsComboBox);
#endif // QT_NO_SHORTCUT

        retranslateUi(Prefs_DocumentSetup);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Prefs_DocumentSetup);
    } // setupUi

    void retranslateUi(QWidget *Prefs_DocumentSetup)
    {
        Prefs_DocumentSetup->setWindowTitle(QApplication::translate("Prefs_DocumentSetup", "Form", 0));
        titleLabel->setText(QApplication::translate("Prefs_DocumentSetup", "Document Setup", 0));
        label_2->setText(QApplication::translate("Prefs_DocumentSetup", "Page Size", 0));
        pageSizeLabel->setText(QApplication::translate("Prefs_DocumentSetup", "Size:", 0));
        pageSizeLinkToolButton->setText(QApplication::translate("Prefs_DocumentSetup", "...", 0));
        pageOrientatioLabel->setText(QApplication::translate("Prefs_DocumentSetup", "Orientation:", 0));
        pageUnitsLabel->setText(QApplication::translate("Prefs_DocumentSetup", "Units:", 0));
        pageWidthLabel->setText(QApplication::translate("Prefs_DocumentSetup", "Width:", 0));
        pageHeightLabel->setText(QApplication::translate("Prefs_DocumentSetup", "Height:", 0));
        applySizesToAllPagesCheckBox->setText(QApplication::translate("Prefs_DocumentSetup", "Apply changes to all pages", 0));
        applySizesToAllMasterPagesCheckBox->setText(QApplication::translate("Prefs_DocumentSetup", "Apply changes to all master pages", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("Prefs_DocumentSetup", "Size", 0));
        label_7->setText(QApplication::translate("Prefs_DocumentSetup", "Page Layout", 0));
        layoutFirstPageIsLabel->setText(QApplication::translate("Prefs_DocumentSetup", "First Page is:", 0));
        fourFoldRadioButton->setText(QApplication::translate("Prefs_DocumentSetup", "4-Fold", 0));
        threeFoldRadioButton->setText(QApplication::translate("Prefs_DocumentSetup", "3-Fold", 0));
        doublePageRadioButton->setText(QApplication::translate("Prefs_DocumentSetup", "Double Page", 0));
        singlePageRadioButton->setText(QApplication::translate("Prefs_DocumentSetup", "Single Page", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("Prefs_DocumentSetup", "Layout", 0));
        label_8->setText(QApplication::translate("Prefs_DocumentSetup", "Margins", 0));
        applyMarginsToAllPagesCheckBox->setText(QApplication::translate("Prefs_DocumentSetup", "Apply changes to all pages", 0));
        applyMarginsToAllMasterPagesCheckBox->setText(QApplication::translate("Prefs_DocumentSetup", "Apply changes to all master pages", 0));
        label_10->setText(QApplication::translate("Prefs_DocumentSetup", "Bleeds", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("Prefs_DocumentSetup", "Margins && Bleeds", 0));
        saveCompressedCheckBox->setText(QApplication::translate("Prefs_DocumentSetup", "Save in Compressed Format", 0));
        label_4->setText(QApplication::translate("Prefs_DocumentSetup", "Autosave", 0));
        autosaveCheckBox->setText(QApplication::translate("Prefs_DocumentSetup", "Enable Automatic Saving of Documents", 0));
        label->setText(QApplication::translate("Prefs_DocumentSetup", "Interval:", 0));
        autosaveIntervalSpinBox->setSuffix(QApplication::translate("Prefs_DocumentSetup", " min", 0));
        label_5->setText(QApplication::translate("Prefs_DocumentSetup", "Undo / Redo", 0));
        undoCheckBox->setText(QApplication::translate("Prefs_DocumentSetup", "Enable Undo/Redo System", 0));
        label_3->setText(QApplication::translate("Prefs_DocumentSetup", "Action History Length:", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("Prefs_DocumentSetup", "Saving && Undo", 0));
    } // retranslateUi

};

namespace Ui {
    class Prefs_DocumentSetup: public Ui_Prefs_DocumentSetup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PREFS_DOCUMENTSETUPBASE_H
