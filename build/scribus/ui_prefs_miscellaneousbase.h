/********************************************************************************
** Form generated from reading UI file 'prefs_miscellaneousbase.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PREFS_MISCELLANEOUSBASE_H
#define UI_PREFS_MISCELLANEOUSBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Prefs_Miscellaneous
{
public:
    QVBoxLayout *verticalLayout_3;
    QLabel *titleLabel;
    QFrame *line;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout;
    QCheckBox *confirmFontReplacementsCheckBox;
    QCheckBox *previewParaStylesCheckBox;
    QSpacerItem *verticalSpacer_2;
    QLabel *label;
    QFrame *line_2;
    QCheckBox *useStandardLoremIpsumCheckBox;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QSpinBox *loremIpsumParaCountSpinBox;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *Prefs_Miscellaneous)
    {
        if (Prefs_Miscellaneous->objectName().isEmpty())
            Prefs_Miscellaneous->setObjectName(QStringLiteral("Prefs_Miscellaneous"));
        Prefs_Miscellaneous->resize(691, 420);
        verticalLayout_3 = new QVBoxLayout(Prefs_Miscellaneous);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        titleLabel = new QLabel(Prefs_Miscellaneous);
        titleLabel->setObjectName(QStringLiteral("titleLabel"));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        titleLabel->setFont(font);

        verticalLayout_3->addWidget(titleLabel);

        line = new QFrame(Prefs_Miscellaneous);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(line);

        scrollArea = new QScrollArea(Prefs_Miscellaneous);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 663, 350));
        verticalLayout = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        confirmFontReplacementsCheckBox = new QCheckBox(scrollAreaWidgetContents);
        confirmFontReplacementsCheckBox->setObjectName(QStringLiteral("confirmFontReplacementsCheckBox"));

        verticalLayout->addWidget(confirmFontReplacementsCheckBox);

        previewParaStylesCheckBox = new QCheckBox(scrollAreaWidgetContents);
        previewParaStylesCheckBox->setObjectName(QStringLiteral("previewParaStylesCheckBox"));

        verticalLayout->addWidget(previewParaStylesCheckBox);

        verticalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_2);

        label = new QLabel(scrollAreaWidgetContents);
        label->setObjectName(QStringLiteral("label"));
        QFont font1;
        font1.setPointSize(13);
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);

        verticalLayout->addWidget(label);

        line_2 = new QFrame(scrollAreaWidgetContents);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_2);

        useStandardLoremIpsumCheckBox = new QCheckBox(scrollAreaWidgetContents);
        useStandardLoremIpsumCheckBox->setObjectName(QStringLiteral("useStandardLoremIpsumCheckBox"));

        verticalLayout->addWidget(useStandardLoremIpsumCheckBox);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(scrollAreaWidgetContents);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        loremIpsumParaCountSpinBox = new QSpinBox(scrollAreaWidgetContents);
        loremIpsumParaCountSpinBox->setObjectName(QStringLiteral("loremIpsumParaCountSpinBox"));

        horizontalLayout_2->addWidget(loremIpsumParaCountSpinBox);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        verticalLayout->addItem(verticalSpacer);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_3->addWidget(scrollArea);


        retranslateUi(Prefs_Miscellaneous);

        QMetaObject::connectSlotsByName(Prefs_Miscellaneous);
    } // setupUi

    void retranslateUi(QWidget *Prefs_Miscellaneous)
    {
        Prefs_Miscellaneous->setWindowTitle(QApplication::translate("Prefs_Miscellaneous", "Form", 0));
        titleLabel->setText(QApplication::translate("Prefs_Miscellaneous", "Miscellaneous", 0));
        confirmFontReplacementsCheckBox->setText(QApplication::translate("Prefs_Miscellaneous", "Always ask before fonts are replaced when loading a document", 0));
        previewParaStylesCheckBox->setText(QApplication::translate("Prefs_Miscellaneous", "Preview of current Paragraph Style is visible when editing Styles", 0));
        label->setText(QApplication::translate("Prefs_Miscellaneous", "Lorem Ipsum", 0));
        useStandardLoremIpsumCheckBox->setText(QApplication::translate("Prefs_Miscellaneous", "Always use standard Lorem Ipsum text", 0));
        label_2->setText(QApplication::translate("Prefs_Miscellaneous", "Paragraph Count:", 0));
    } // retranslateUi

};

namespace Ui {
    class Prefs_Miscellaneous: public Ui_Prefs_Miscellaneous {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PREFS_MISCELLANEOUSBASE_H
