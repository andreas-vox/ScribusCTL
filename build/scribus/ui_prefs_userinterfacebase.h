/********************************************************************************
** Form generated from reading UI file 'prefs_userinterfacebase.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PREFS_USERINTERFACEBASE_H
#define UI_PREFS_USERINTERFACEBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Prefs_UserInterface
{
public:
    QVBoxLayout *verticalLayout_2;
    QLabel *titleLabel;
    QFrame *line;
    QTabWidget *tabWidget;
    QWidget *tab_3;
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QFormLayout *formLayout;
    QLabel *languageLabel;
    QComboBox *languageComboBox;
    QLabel *themeLabel;
    QComboBox *themeComboBox;
    QCheckBox *useSmallWidgetsCheckBox;
    QCheckBox *useTabsForDocumentsCheckBox;
    QLabel *recentDocumentsLabel;
    QSpinBox *recentDocumentsSpinBox;
    QSpacerItem *verticalSpacer_4;
    QLabel *label_2;
    QFrame *line_2;
    QFormLayout *formLayout_2;
    QLabel *fontSizeMenusLabel;
    QSpinBox *fontSizeMenuSpinBox;
    QLabel *fontSizePalettesLabel;
    QSpinBox *fontSizePaletteSpinBox;
    QSpacerItem *verticalSpacer_3;
    QWidget *tab_4;
    QVBoxLayout *verticalLayout_5;
    QFormLayout *formLayout_3;
    QLabel *storyEditorFontLabel;
    QPushButton *storyEditorFontPushButton;
    QLabel *storyEditorFontColorLabel;
    QPushButton *storyEditorFontColorPushButton;
    QCheckBox *storyEditorUseSmartSelectionCheckBox;
    QSpacerItem *verticalSpacer_5;
    QWidget *tab;
    QVBoxLayout *verticalLayout_4;
    QFormLayout *formLayout_4;
    QLabel *resizeMoveDelayLabel;
    QSpinBox *resizeMoveDelaySpinBox;
    QLabel *wheelJumpLabel;
    QSpinBox *wheelJumpSpinBox;
    QSpacerItem *verticalSpacer_2;
    QWidget *tab_5;
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout_5;
    QCheckBox *showStartupDialogCheckBox;
    QCheckBox *showSplashCheckBox;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *Prefs_UserInterface)
    {
        if (Prefs_UserInterface->objectName().isEmpty())
            Prefs_UserInterface->setObjectName(QStringLiteral("Prefs_UserInterface"));
        Prefs_UserInterface->resize(803, 431);
        verticalLayout_2 = new QVBoxLayout(Prefs_UserInterface);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        titleLabel = new QLabel(Prefs_UserInterface);
        titleLabel->setObjectName(QStringLiteral("titleLabel"));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        titleLabel->setFont(font);

        verticalLayout_2->addWidget(titleLabel);

        line = new QFrame(Prefs_UserInterface);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line);

        tabWidget = new QTabWidget(Prefs_UserInterface);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        verticalLayout_3 = new QVBoxLayout(tab_3);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label = new QLabel(tab_3);
        label->setObjectName(QStringLiteral("label"));
        QFont font1;
        font1.setPointSize(13);
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);

        verticalLayout_3->addWidget(label);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::FieldsStayAtSizeHint);
        languageLabel = new QLabel(tab_3);
        languageLabel->setObjectName(QStringLiteral("languageLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, languageLabel);

        languageComboBox = new QComboBox(tab_3);
        languageComboBox->setObjectName(QStringLiteral("languageComboBox"));

        formLayout->setWidget(0, QFormLayout::FieldRole, languageComboBox);

        themeLabel = new QLabel(tab_3);
        themeLabel->setObjectName(QStringLiteral("themeLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, themeLabel);

        themeComboBox = new QComboBox(tab_3);
        themeComboBox->setObjectName(QStringLiteral("themeComboBox"));

        formLayout->setWidget(1, QFormLayout::FieldRole, themeComboBox);

        useSmallWidgetsCheckBox = new QCheckBox(tab_3);
        useSmallWidgetsCheckBox->setObjectName(QStringLiteral("useSmallWidgetsCheckBox"));

        formLayout->setWidget(2, QFormLayout::FieldRole, useSmallWidgetsCheckBox);

        useTabsForDocumentsCheckBox = new QCheckBox(tab_3);
        useTabsForDocumentsCheckBox->setObjectName(QStringLiteral("useTabsForDocumentsCheckBox"));

        formLayout->setWidget(3, QFormLayout::FieldRole, useTabsForDocumentsCheckBox);

        recentDocumentsLabel = new QLabel(tab_3);
        recentDocumentsLabel->setObjectName(QStringLiteral("recentDocumentsLabel"));

        formLayout->setWidget(4, QFormLayout::LabelRole, recentDocumentsLabel);

        recentDocumentsSpinBox = new QSpinBox(tab_3);
        recentDocumentsSpinBox->setObjectName(QStringLiteral("recentDocumentsSpinBox"));

        formLayout->setWidget(4, QFormLayout::FieldRole, recentDocumentsSpinBox);


        verticalLayout_3->addLayout(formLayout);

        verticalSpacer_4 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_4);

        label_2 = new QLabel(tab_3);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font1);

        verticalLayout_3->addWidget(label_2);

        line_2 = new QFrame(tab_3);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(line_2);

        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        fontSizeMenusLabel = new QLabel(tab_3);
        fontSizeMenusLabel->setObjectName(QStringLiteral("fontSizeMenusLabel"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, fontSizeMenusLabel);

        fontSizeMenuSpinBox = new QSpinBox(tab_3);
        fontSizeMenuSpinBox->setObjectName(QStringLiteral("fontSizeMenuSpinBox"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, fontSizeMenuSpinBox);

        fontSizePalettesLabel = new QLabel(tab_3);
        fontSizePalettesLabel->setObjectName(QStringLiteral("fontSizePalettesLabel"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, fontSizePalettesLabel);

        fontSizePaletteSpinBox = new QSpinBox(tab_3);
        fontSizePaletteSpinBox->setObjectName(QStringLiteral("fontSizePaletteSpinBox"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, fontSizePaletteSpinBox);


        verticalLayout_3->addLayout(formLayout_2);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_3);

        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        verticalLayout_5 = new QVBoxLayout(tab_4);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        formLayout_3 = new QFormLayout();
        formLayout_3->setObjectName(QStringLiteral("formLayout_3"));
        formLayout_3->setFieldGrowthPolicy(QFormLayout::FieldsStayAtSizeHint);
        storyEditorFontLabel = new QLabel(tab_4);
        storyEditorFontLabel->setObjectName(QStringLiteral("storyEditorFontLabel"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, storyEditorFontLabel);

        storyEditorFontPushButton = new QPushButton(tab_4);
        storyEditorFontPushButton->setObjectName(QStringLiteral("storyEditorFontPushButton"));

        formLayout_3->setWidget(0, QFormLayout::FieldRole, storyEditorFontPushButton);

        storyEditorFontColorLabel = new QLabel(tab_4);
        storyEditorFontColorLabel->setObjectName(QStringLiteral("storyEditorFontColorLabel"));

        formLayout_3->setWidget(1, QFormLayout::LabelRole, storyEditorFontColorLabel);

        storyEditorFontColorPushButton = new QPushButton(tab_4);
        storyEditorFontColorPushButton->setObjectName(QStringLiteral("storyEditorFontColorPushButton"));

        formLayout_3->setWidget(1, QFormLayout::FieldRole, storyEditorFontColorPushButton);

        storyEditorUseSmartSelectionCheckBox = new QCheckBox(tab_4);
        storyEditorUseSmartSelectionCheckBox->setObjectName(QStringLiteral("storyEditorUseSmartSelectionCheckBox"));

        formLayout_3->setWidget(2, QFormLayout::FieldRole, storyEditorUseSmartSelectionCheckBox);


        verticalLayout_5->addLayout(formLayout_3);

        verticalSpacer_5 = new QSpacerItem(20, 251, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_5);

        tabWidget->addTab(tab_4, QString());
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        verticalLayout_4 = new QVBoxLayout(tab);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        formLayout_4 = new QFormLayout();
        formLayout_4->setObjectName(QStringLiteral("formLayout_4"));
        formLayout_4->setFieldGrowthPolicy(QFormLayout::FieldsStayAtSizeHint);
        resizeMoveDelayLabel = new QLabel(tab);
        resizeMoveDelayLabel->setObjectName(QStringLiteral("resizeMoveDelayLabel"));

        formLayout_4->setWidget(0, QFormLayout::LabelRole, resizeMoveDelayLabel);

        resizeMoveDelaySpinBox = new QSpinBox(tab);
        resizeMoveDelaySpinBox->setObjectName(QStringLiteral("resizeMoveDelaySpinBox"));
        resizeMoveDelaySpinBox->setMaximum(9999);

        formLayout_4->setWidget(0, QFormLayout::FieldRole, resizeMoveDelaySpinBox);

        wheelJumpLabel = new QLabel(tab);
        wheelJumpLabel->setObjectName(QStringLiteral("wheelJumpLabel"));

        formLayout_4->setWidget(1, QFormLayout::LabelRole, wheelJumpLabel);

        wheelJumpSpinBox = new QSpinBox(tab);
        wheelJumpSpinBox->setObjectName(QStringLiteral("wheelJumpSpinBox"));

        formLayout_4->setWidget(1, QFormLayout::FieldRole, wheelJumpSpinBox);


        verticalLayout_4->addLayout(formLayout_4);

        verticalSpacer_2 = new QSpacerItem(20, 266, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_2);

        tabWidget->addTab(tab, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        verticalLayout = new QVBoxLayout(tab_5);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        formLayout_5 = new QFormLayout();
        formLayout_5->setObjectName(QStringLiteral("formLayout_5"));
        showStartupDialogCheckBox = new QCheckBox(tab_5);
        showStartupDialogCheckBox->setObjectName(QStringLiteral("showStartupDialogCheckBox"));

        formLayout_5->setWidget(2, QFormLayout::FieldRole, showStartupDialogCheckBox);

        showSplashCheckBox = new QCheckBox(tab_5);
        showSplashCheckBox->setObjectName(QStringLiteral("showSplashCheckBox"));

        formLayout_5->setWidget(1, QFormLayout::FieldRole, showSplashCheckBox);


        verticalLayout->addLayout(formLayout_5);

        verticalSpacer = new QSpacerItem(20, 296, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        tabWidget->addTab(tab_5, QString());

        verticalLayout_2->addWidget(tabWidget);

#ifndef QT_NO_SHORTCUT
        languageLabel->setBuddy(languageComboBox);
        themeLabel->setBuddy(themeComboBox);
        recentDocumentsLabel->setBuddy(recentDocumentsSpinBox);
        fontSizeMenusLabel->setBuddy(fontSizeMenuSpinBox);
        fontSizePalettesLabel->setBuddy(fontSizePaletteSpinBox);
        resizeMoveDelayLabel->setBuddy(resizeMoveDelaySpinBox);
        wheelJumpLabel->setBuddy(wheelJumpSpinBox);
#endif // QT_NO_SHORTCUT

        retranslateUi(Prefs_UserInterface);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Prefs_UserInterface);
    } // setupUi

    void retranslateUi(QWidget *Prefs_UserInterface)
    {
        Prefs_UserInterface->setWindowTitle(QApplication::translate("Prefs_UserInterface", "Form", 0));
        titleLabel->setText(QApplication::translate("Prefs_UserInterface", "User Interface", 0));
        label->setText(QApplication::translate("Prefs_UserInterface", "Appearance", 0));
        languageLabel->setText(QApplication::translate("Prefs_UserInterface", "&Language:", 0));
        themeLabel->setText(QApplication::translate("Prefs_UserInterface", "&Theme:", 0));
        useSmallWidgetsCheckBox->setText(QApplication::translate("Prefs_UserInterface", "Use Small Widgets on Palettes", 0));
        useTabsForDocumentsCheckBox->setText(QApplication::translate("Prefs_UserInterface", "Use Tabs for Documents", 0));
        recentDocumentsLabel->setText(QApplication::translate("Prefs_UserInterface", "&Recent Documents:", 0));
        label_2->setText(QApplication::translate("Prefs_UserInterface", "Font Sizes", 0));
        fontSizeMenusLabel->setText(QApplication::translate("Prefs_UserInterface", "&Menus:", 0));
        fontSizeMenuSpinBox->setSuffix(QApplication::translate("Prefs_UserInterface", " pt", 0));
        fontSizePalettesLabel->setText(QApplication::translate("Prefs_UserInterface", "&Palettes:", 0));
        fontSizePaletteSpinBox->setSuffix(QApplication::translate("Prefs_UserInterface", " pt", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("Prefs_UserInterface", "Main Window", 0));
        storyEditorFontLabel->setText(QApplication::translate("Prefs_UserInterface", "Font:", 0));
        storyEditorFontPushButton->setText(QString());
        storyEditorFontColorLabel->setText(QApplication::translate("Prefs_UserInterface", "Background Color:", 0));
        storyEditorFontColorPushButton->setText(QString());
        storyEditorUseSmartSelectionCheckBox->setText(QApplication::translate("Prefs_UserInterface", "Use Smart Text Selection", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("Prefs_UserInterface", "Story Editor", 0));
        resizeMoveDelayLabel->setText(QApplication::translate("Prefs_UserInterface", "Time before resize or move starts:", 0));
        resizeMoveDelaySpinBox->setSuffix(QApplication::translate("Prefs_UserInterface", " ms", 0));
        wheelJumpLabel->setText(QApplication::translate("Prefs_UserInterface", "&Wheel Jump:", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("Prefs_UserInterface", "Interactivity", 0));
        showStartupDialogCheckBox->setText(QApplication::translate("Prefs_UserInterface", "Show Startup Dialog", 0));
        showSplashCheckBox->setText(QApplication::translate("Prefs_UserInterface", "Show Splashscreen", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("Prefs_UserInterface", "Start Up", 0));
    } // retranslateUi

};

namespace Ui {
    class Prefs_UserInterface: public Ui_Prefs_UserInterface {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PREFS_USERINTERFACEBASE_H
