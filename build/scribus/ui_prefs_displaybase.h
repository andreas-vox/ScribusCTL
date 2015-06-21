/********************************************************************************
** Form generated from reading UI file 'prefs_displaybase.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PREFS_DISPLAYBASE_H
#define UI_PREFS_DISPLAYBASE_H

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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <ui/scrspinbox.h>

QT_BEGIN_NAMESPACE

class Ui_Prefs_Display
{
public:
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QFrame *line;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *showRulersCheckBox;
    QCheckBox *showRulersRelativeToPageCheckBox;
    QCheckBox *showFramesCheckBox;
    QCheckBox *showImagesCheckBox;
    QCheckBox *showTextChainsCheckBox;
    QCheckBox *showControlCharsCheckBox;
    QCheckBox *showLayerIndicatorsCheckBox;
    QCheckBox *showUnprintableAreaInMarginColorCheckBox;
    QCheckBox *showBleedAreaCheckBox;
    QCheckBox *showPageShadowCheckBox;
    QCheckBox *showVerifierWarningsOnCanvasCheckBox;
    QCheckBox *showAutosaveClockOnCanvasCheckBox;
    QSpacerItem *verticalSpacer_8;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_5;
    QFormLayout *formLayout;
    QLabel *label_4;
    ScrSpinBox *scratchSpaceLeftSpinBox;
    QLabel *label_5;
    ScrSpinBox *scratchSpaceRightSpinBox;
    QLabel *label_6;
    ScrSpinBox *scratchSpaceTopSpinBox;
    QLabel *label_7;
    ScrSpinBox *scratchSpaceBottomSpinBox;
    QSpacerItem *verticalSpacer;
    QLabel *label_8;
    QFrame *line_4;
    QFormLayout *formLayout_4;
    QLabel *label_11;
    ScrSpinBox *pageGapHorizontalSpinBox;
    QLabel *label_12;
    ScrSpinBox *pageGapVerticalSpinBox;
    QSpacerItem *verticalSpacer_7;
    QWidget *tab_3;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout;
    QSlider *adjustDisplaySlider;
    QLabel *displayDPI;
    QToolButton *buttonRestoreDPI;
    QHBoxLayout *horizontalLayout_2;
    QLabel *displaySizeRuler;
    QComboBox *rulerUnitComboBox;
    QSpacerItem *verticalSpacer_6;
    QWidget *tab_4;
    QVBoxLayout *verticalLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QFormLayout *formLayout_2;
    QLabel *label_15;
    QPushButton *pageFillColorButton;
    QLabel *label_2;
    QPushButton *scratchSpaceColorButton;
    QLabel *label_13;
    QPushButton *selectedPageBorderButton;
    QLabel *label_14;
    QPushButton *frameColorButton;
    QLabel *label_16;
    QPushButton *frameLockedColorButton;
    QLabel *label_17;
    QPushButton *frameSelectedColorButton;
    QLabel *label_31;
    QPushButton *frameLinkedColorButton;
    QLabel *label_30;
    QPushButton *frameGroupedColorButton;
    QLabel *label_29;
    QPushButton *frameAnnotationColorButton;
    QLabel *label_32;
    QPushButton *textControlCharsButton;

    void setupUi(QWidget *Prefs_Display)
    {
        if (Prefs_Display->objectName().isEmpty())
            Prefs_Display->setObjectName(QStringLiteral("Prefs_Display"));
        Prefs_Display->resize(521, 406);
        verticalLayout_3 = new QVBoxLayout(Prefs_Display);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label = new QLabel(Prefs_Display);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        verticalLayout_3->addWidget(label);

        line = new QFrame(Prefs_Display);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(line);

        tabWidget = new QTabWidget(Prefs_Display);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        verticalLayout_2 = new QVBoxLayout(tab);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        showRulersCheckBox = new QCheckBox(tab);
        showRulersCheckBox->setObjectName(QStringLiteral("showRulersCheckBox"));

        verticalLayout_2->addWidget(showRulersCheckBox);

        showRulersRelativeToPageCheckBox = new QCheckBox(tab);
        showRulersRelativeToPageCheckBox->setObjectName(QStringLiteral("showRulersRelativeToPageCheckBox"));

        verticalLayout_2->addWidget(showRulersRelativeToPageCheckBox);

        showFramesCheckBox = new QCheckBox(tab);
        showFramesCheckBox->setObjectName(QStringLiteral("showFramesCheckBox"));

        verticalLayout_2->addWidget(showFramesCheckBox);

        showImagesCheckBox = new QCheckBox(tab);
        showImagesCheckBox->setObjectName(QStringLiteral("showImagesCheckBox"));

        verticalLayout_2->addWidget(showImagesCheckBox);

        showTextChainsCheckBox = new QCheckBox(tab);
        showTextChainsCheckBox->setObjectName(QStringLiteral("showTextChainsCheckBox"));

        verticalLayout_2->addWidget(showTextChainsCheckBox);

        showControlCharsCheckBox = new QCheckBox(tab);
        showControlCharsCheckBox->setObjectName(QStringLiteral("showControlCharsCheckBox"));

        verticalLayout_2->addWidget(showControlCharsCheckBox);

        showLayerIndicatorsCheckBox = new QCheckBox(tab);
        showLayerIndicatorsCheckBox->setObjectName(QStringLiteral("showLayerIndicatorsCheckBox"));

        verticalLayout_2->addWidget(showLayerIndicatorsCheckBox);

        showUnprintableAreaInMarginColorCheckBox = new QCheckBox(tab);
        showUnprintableAreaInMarginColorCheckBox->setObjectName(QStringLiteral("showUnprintableAreaInMarginColorCheckBox"));

        verticalLayout_2->addWidget(showUnprintableAreaInMarginColorCheckBox);

        showBleedAreaCheckBox = new QCheckBox(tab);
        showBleedAreaCheckBox->setObjectName(QStringLiteral("showBleedAreaCheckBox"));

        verticalLayout_2->addWidget(showBleedAreaCheckBox);

        showPageShadowCheckBox = new QCheckBox(tab);
        showPageShadowCheckBox->setObjectName(QStringLiteral("showPageShadowCheckBox"));

        verticalLayout_2->addWidget(showPageShadowCheckBox);

        showVerifierWarningsOnCanvasCheckBox = new QCheckBox(tab);
        showVerifierWarningsOnCanvasCheckBox->setObjectName(QStringLiteral("showVerifierWarningsOnCanvasCheckBox"));

        verticalLayout_2->addWidget(showVerifierWarningsOnCanvasCheckBox);

        showAutosaveClockOnCanvasCheckBox = new QCheckBox(tab);
        showAutosaveClockOnCanvasCheckBox->setObjectName(QStringLiteral("showAutosaveClockOnCanvasCheckBox"));

        verticalLayout_2->addWidget(showAutosaveClockOnCanvasCheckBox);

        verticalSpacer_8 = new QSpacerItem(20, 4, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_8);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        verticalLayout_5 = new QVBoxLayout(tab_2);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label_4 = new QLabel(tab_2);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_4);

        scratchSpaceLeftSpinBox = new ScrSpinBox(tab_2);
        scratchSpaceLeftSpinBox->setObjectName(QStringLiteral("scratchSpaceLeftSpinBox"));

        formLayout->setWidget(0, QFormLayout::FieldRole, scratchSpaceLeftSpinBox);

        label_5 = new QLabel(tab_2);
        label_5->setObjectName(QStringLiteral("label_5"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_5);

        scratchSpaceRightSpinBox = new ScrSpinBox(tab_2);
        scratchSpaceRightSpinBox->setObjectName(QStringLiteral("scratchSpaceRightSpinBox"));

        formLayout->setWidget(1, QFormLayout::FieldRole, scratchSpaceRightSpinBox);

        label_6 = new QLabel(tab_2);
        label_6->setObjectName(QStringLiteral("label_6"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_6);

        scratchSpaceTopSpinBox = new ScrSpinBox(tab_2);
        scratchSpaceTopSpinBox->setObjectName(QStringLiteral("scratchSpaceTopSpinBox"));

        formLayout->setWidget(2, QFormLayout::FieldRole, scratchSpaceTopSpinBox);

        label_7 = new QLabel(tab_2);
        label_7->setObjectName(QStringLiteral("label_7"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_7);

        scratchSpaceBottomSpinBox = new ScrSpinBox(tab_2);
        scratchSpaceBottomSpinBox->setObjectName(QStringLiteral("scratchSpaceBottomSpinBox"));

        formLayout->setWidget(3, QFormLayout::FieldRole, scratchSpaceBottomSpinBox);


        verticalLayout_5->addLayout(formLayout);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_5->addItem(verticalSpacer);

        label_8 = new QLabel(tab_2);
        label_8->setObjectName(QStringLiteral("label_8"));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        label_8->setFont(font1);

        verticalLayout_5->addWidget(label_8);

        line_4 = new QFrame(tab_2);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        verticalLayout_5->addWidget(line_4);

        formLayout_4 = new QFormLayout();
        formLayout_4->setObjectName(QStringLiteral("formLayout_4"));
        label_11 = new QLabel(tab_2);
        label_11->setObjectName(QStringLiteral("label_11"));

        formLayout_4->setWidget(0, QFormLayout::LabelRole, label_11);

        pageGapHorizontalSpinBox = new ScrSpinBox(tab_2);
        pageGapHorizontalSpinBox->setObjectName(QStringLiteral("pageGapHorizontalSpinBox"));

        formLayout_4->setWidget(0, QFormLayout::FieldRole, pageGapHorizontalSpinBox);

        label_12 = new QLabel(tab_2);
        label_12->setObjectName(QStringLiteral("label_12"));

        formLayout_4->setWidget(1, QFormLayout::LabelRole, label_12);

        pageGapVerticalSpinBox = new ScrSpinBox(tab_2);
        pageGapVerticalSpinBox->setObjectName(QStringLiteral("pageGapVerticalSpinBox"));

        formLayout_4->setWidget(1, QFormLayout::FieldRole, pageGapVerticalSpinBox);


        verticalLayout_5->addLayout(formLayout_4);

        verticalSpacer_7 = new QSpacerItem(20, 195, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_7);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        verticalLayout_4 = new QVBoxLayout(tab_3);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        adjustDisplaySlider = new QSlider(tab_3);
        adjustDisplaySlider->setObjectName(QStringLiteral("adjustDisplaySlider"));
        adjustDisplaySlider->setMinimum(-150);
        adjustDisplaySlider->setMaximum(500);
        adjustDisplaySlider->setOrientation(Qt::Horizontal);
        adjustDisplaySlider->setTickInterval(10);

        horizontalLayout->addWidget(adjustDisplaySlider);

        displayDPI = new QLabel(tab_3);
        displayDPI->setObjectName(QStringLiteral("displayDPI"));
        displayDPI->setWordWrap(false);

        horizontalLayout->addWidget(displayDPI);

        buttonRestoreDPI = new QToolButton(tab_3);
        buttonRestoreDPI->setObjectName(QStringLiteral("buttonRestoreDPI"));

        horizontalLayout->addWidget(buttonRestoreDPI);


        verticalLayout_4->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        displaySizeRuler = new QLabel(tab_3);
        displaySizeRuler->setObjectName(QStringLiteral("displaySizeRuler"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(displaySizeRuler->sizePolicy().hasHeightForWidth());
        displaySizeRuler->setSizePolicy(sizePolicy);
        displaySizeRuler->setMinimumSize(QSize(20, 20));
        displaySizeRuler->setFrameShape(QFrame::Box);
        displaySizeRuler->setFrameShadow(QFrame::Sunken);
        displaySizeRuler->setWordWrap(false);

        horizontalLayout_2->addWidget(displaySizeRuler);

        rulerUnitComboBox = new QComboBox(tab_3);
        rulerUnitComboBox->setObjectName(QStringLiteral("rulerUnitComboBox"));

        horizontalLayout_2->addWidget(rulerUnitComboBox);


        verticalLayout_4->addLayout(horizontalLayout_2);

        verticalSpacer_6 = new QSpacerItem(20, 263, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_6);

        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        verticalLayout = new QVBoxLayout(tab_4);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        scrollArea = new QScrollArea(tab_4);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 246, 350));
        formLayout_2 = new QFormLayout(scrollAreaWidgetContents);
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        label_15 = new QLabel(scrollAreaWidgetContents);
        label_15->setObjectName(QStringLiteral("label_15"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_15);

        pageFillColorButton = new QPushButton(scrollAreaWidgetContents);
        pageFillColorButton->setObjectName(QStringLiteral("pageFillColorButton"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, pageFillColorButton);

        label_2 = new QLabel(scrollAreaWidgetContents);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_2);

        scratchSpaceColorButton = new QPushButton(scrollAreaWidgetContents);
        scratchSpaceColorButton->setObjectName(QStringLiteral("scratchSpaceColorButton"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, scratchSpaceColorButton);

        label_13 = new QLabel(scrollAreaWidgetContents);
        label_13->setObjectName(QStringLiteral("label_13"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_13);

        selectedPageBorderButton = new QPushButton(scrollAreaWidgetContents);
        selectedPageBorderButton->setObjectName(QStringLiteral("selectedPageBorderButton"));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, selectedPageBorderButton);

        label_14 = new QLabel(scrollAreaWidgetContents);
        label_14->setObjectName(QStringLiteral("label_14"));

        formLayout_2->setWidget(3, QFormLayout::LabelRole, label_14);

        frameColorButton = new QPushButton(scrollAreaWidgetContents);
        frameColorButton->setObjectName(QStringLiteral("frameColorButton"));

        formLayout_2->setWidget(3, QFormLayout::FieldRole, frameColorButton);

        label_16 = new QLabel(scrollAreaWidgetContents);
        label_16->setObjectName(QStringLiteral("label_16"));

        formLayout_2->setWidget(4, QFormLayout::LabelRole, label_16);

        frameLockedColorButton = new QPushButton(scrollAreaWidgetContents);
        frameLockedColorButton->setObjectName(QStringLiteral("frameLockedColorButton"));

        formLayout_2->setWidget(4, QFormLayout::FieldRole, frameLockedColorButton);

        label_17 = new QLabel(scrollAreaWidgetContents);
        label_17->setObjectName(QStringLiteral("label_17"));

        formLayout_2->setWidget(5, QFormLayout::LabelRole, label_17);

        frameSelectedColorButton = new QPushButton(scrollAreaWidgetContents);
        frameSelectedColorButton->setObjectName(QStringLiteral("frameSelectedColorButton"));

        formLayout_2->setWidget(5, QFormLayout::FieldRole, frameSelectedColorButton);

        label_31 = new QLabel(scrollAreaWidgetContents);
        label_31->setObjectName(QStringLiteral("label_31"));

        formLayout_2->setWidget(6, QFormLayout::LabelRole, label_31);

        frameLinkedColorButton = new QPushButton(scrollAreaWidgetContents);
        frameLinkedColorButton->setObjectName(QStringLiteral("frameLinkedColorButton"));

        formLayout_2->setWidget(6, QFormLayout::FieldRole, frameLinkedColorButton);

        label_30 = new QLabel(scrollAreaWidgetContents);
        label_30->setObjectName(QStringLiteral("label_30"));

        formLayout_2->setWidget(7, QFormLayout::LabelRole, label_30);

        frameGroupedColorButton = new QPushButton(scrollAreaWidgetContents);
        frameGroupedColorButton->setObjectName(QStringLiteral("frameGroupedColorButton"));

        formLayout_2->setWidget(7, QFormLayout::FieldRole, frameGroupedColorButton);

        label_29 = new QLabel(scrollAreaWidgetContents);
        label_29->setObjectName(QStringLiteral("label_29"));

        formLayout_2->setWidget(8, QFormLayout::LabelRole, label_29);

        frameAnnotationColorButton = new QPushButton(scrollAreaWidgetContents);
        frameAnnotationColorButton->setObjectName(QStringLiteral("frameAnnotationColorButton"));

        formLayout_2->setWidget(8, QFormLayout::FieldRole, frameAnnotationColorButton);

        label_32 = new QLabel(scrollAreaWidgetContents);
        label_32->setObjectName(QStringLiteral("label_32"));

        formLayout_2->setWidget(9, QFormLayout::LabelRole, label_32);

        textControlCharsButton = new QPushButton(scrollAreaWidgetContents);
        textControlCharsButton->setObjectName(QStringLiteral("textControlCharsButton"));

        formLayout_2->setWidget(9, QFormLayout::FieldRole, textControlCharsButton);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);

        tabWidget->addTab(tab_4, QString());

        verticalLayout_3->addWidget(tabWidget);


        retranslateUi(Prefs_Display);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Prefs_Display);
    } // setupUi

    void retranslateUi(QWidget *Prefs_Display)
    {
        Prefs_Display->setWindowTitle(QApplication::translate("Prefs_Display", "Form", 0));
        label->setText(QApplication::translate("Prefs_Display", "Display", 0));
        showRulersCheckBox->setText(QApplication::translate("Prefs_Display", "Show Rulers", 0));
        showRulersRelativeToPageCheckBox->setText(QApplication::translate("Prefs_Display", "Show Rulers Relative to Page", 0));
        showFramesCheckBox->setText(QApplication::translate("Prefs_Display", "Show Frames", 0));
        showImagesCheckBox->setText(QApplication::translate("Prefs_Display", "Show Images", 0));
        showTextChainsCheckBox->setText(QApplication::translate("Prefs_Display", "Show Text Chains", 0));
        showControlCharsCheckBox->setText(QApplication::translate("Prefs_Display", "Show Text Control Characters", 0));
        showLayerIndicatorsCheckBox->setText(QApplication::translate("Prefs_Display", "Show Layer Indicators", 0));
        showUnprintableAreaInMarginColorCheckBox->setText(QApplication::translate("Prefs_Display", "Show Unprintable Area in Margin Color", 0));
        showBleedAreaCheckBox->setText(QApplication::translate("Prefs_Display", "Show Bleed Area", 0));
        showPageShadowCheckBox->setText(QApplication::translate("Prefs_Display", "Show Page Shadow", 0));
        showVerifierWarningsOnCanvasCheckBox->setText(QApplication::translate("Prefs_Display", "Show Preflight Verifier Warnings on the Page", 0));
        showAutosaveClockOnCanvasCheckBox->setText(QApplication::translate("Prefs_Display", "Show Autosave Countdown Clock on the Canvas", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("Prefs_Display", "Pages", 0));
        label_4->setText(QApplication::translate("Prefs_Display", "Left:", 0));
        label_5->setText(QApplication::translate("Prefs_Display", "Right:", 0));
        label_6->setText(QApplication::translate("Prefs_Display", "Top:", 0));
        label_7->setText(QApplication::translate("Prefs_Display", "Bottom:", 0));
        label_8->setText(QApplication::translate("Prefs_Display", "Gaps Between Pages", 0));
        label_11->setText(QApplication::translate("Prefs_Display", "Horizontal:", 0));
        label_12->setText(QApplication::translate("Prefs_Display", "Vertical:", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("Prefs_Display", "Scratch Space", 0));
        displayDPI->setText(QApplication::translate("Prefs_Display", "Scale%", 0));
#ifndef QT_NO_TOOLTIP
        buttonRestoreDPI->setToolTip(QApplication::translate("Prefs_Display", "Resets the scale to the default dpi of your display", 0));
#endif // QT_NO_TOOLTIP
        buttonRestoreDPI->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("Prefs_Display", "Display Scaling", 0));
        label_15->setText(QApplication::translate("Prefs_Display", "Page Fill:", 0));
        pageFillColorButton->setText(QString());
        label_2->setText(QApplication::translate("Prefs_Display", "Scratch Space:", 0));
        scratchSpaceColorButton->setText(QString());
        label_13->setText(QApplication::translate("Prefs_Display", "Selected Page Border:", 0));
        selectedPageBorderButton->setText(QString());
        label_14->setText(QApplication::translate("Prefs_Display", "Frames:", 0));
        frameColorButton->setText(QString());
        label_16->setText(QApplication::translate("Prefs_Display", "Locked Frames:", 0));
        frameLockedColorButton->setText(QString());
        label_17->setText(QApplication::translate("Prefs_Display", "Selected Frames:", 0));
        frameSelectedColorButton->setText(QString());
        label_31->setText(QApplication::translate("Prefs_Display", "Linked Frames:", 0));
        frameLinkedColorButton->setText(QString());
        label_30->setText(QApplication::translate("Prefs_Display", "Grouped Frames:", 0));
        frameGroupedColorButton->setText(QString());
        label_29->setText(QApplication::translate("Prefs_Display", "Annotation Frames:", 0));
        frameAnnotationColorButton->setText(QString());
        label_32->setText(QApplication::translate("Prefs_Display", "Text Control Characters:", 0));
        textControlCharsButton->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("Prefs_Display", "Colors", 0));
    } // retranslateUi

};

namespace Ui {
    class Prefs_Display: public Ui_Prefs_Display {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PREFS_DISPLAYBASE_H
