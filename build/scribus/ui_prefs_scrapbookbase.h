/********************************************************************************
** Form generated from reading UI file 'prefs_scrapbookbase.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PREFS_SCRAPBOOKBASE_H
#define UI_PREFS_SCRAPBOOKBASE_H

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

class Ui_Prefs_Scrapbook
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *titleLabel;
    QFrame *line;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *autoSendCopiedToScrapCheckBox;
    QCheckBox *keepCopiedAcrossSessionsCheckBox;
    QCheckBox *writePreviewsCheckBox;
    QHBoxLayout *horizontalLayout;
    QLabel *itemCountKeptInScrapbookLabel;
    QSpinBox *itemCountKeptInScrapbookSpinBox;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *Prefs_Scrapbook)
    {
        if (Prefs_Scrapbook->objectName().isEmpty())
            Prefs_Scrapbook->setObjectName(QStringLiteral("Prefs_Scrapbook"));
        Prefs_Scrapbook->resize(705, 386);
        verticalLayout = new QVBoxLayout(Prefs_Scrapbook);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        titleLabel = new QLabel(Prefs_Scrapbook);
        titleLabel->setObjectName(QStringLiteral("titleLabel"));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        titleLabel->setFont(font);

        verticalLayout->addWidget(titleLabel);

        line = new QFrame(Prefs_Scrapbook);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        scrollArea = new QScrollArea(Prefs_Scrapbook);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 677, 316));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        autoSendCopiedToScrapCheckBox = new QCheckBox(scrollAreaWidgetContents);
        autoSendCopiedToScrapCheckBox->setObjectName(QStringLiteral("autoSendCopiedToScrapCheckBox"));

        verticalLayout_2->addWidget(autoSendCopiedToScrapCheckBox);

        keepCopiedAcrossSessionsCheckBox = new QCheckBox(scrollAreaWidgetContents);
        keepCopiedAcrossSessionsCheckBox->setObjectName(QStringLiteral("keepCopiedAcrossSessionsCheckBox"));

        verticalLayout_2->addWidget(keepCopiedAcrossSessionsCheckBox);

        writePreviewsCheckBox = new QCheckBox(scrollAreaWidgetContents);
        writePreviewsCheckBox->setObjectName(QStringLiteral("writePreviewsCheckBox"));

        verticalLayout_2->addWidget(writePreviewsCheckBox);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        itemCountKeptInScrapbookLabel = new QLabel(scrollAreaWidgetContents);
        itemCountKeptInScrapbookLabel->setObjectName(QStringLiteral("itemCountKeptInScrapbookLabel"));

        horizontalLayout->addWidget(itemCountKeptInScrapbookLabel);

        itemCountKeptInScrapbookSpinBox = new QSpinBox(scrollAreaWidgetContents);
        itemCountKeptInScrapbookSpinBox->setObjectName(QStringLiteral("itemCountKeptInScrapbookSpinBox"));

        horizontalLayout->addWidget(itemCountKeptInScrapbookSpinBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);

#ifndef QT_NO_SHORTCUT
        itemCountKeptInScrapbookLabel->setBuddy(itemCountKeptInScrapbookSpinBox);
#endif // QT_NO_SHORTCUT

        retranslateUi(Prefs_Scrapbook);

        QMetaObject::connectSlotsByName(Prefs_Scrapbook);
    } // setupUi

    void retranslateUi(QWidget *Prefs_Scrapbook)
    {
        Prefs_Scrapbook->setWindowTitle(QApplication::translate("Prefs_Scrapbook", "Form", 0));
        titleLabel->setText(QApplication::translate("Prefs_Scrapbook", "Scrapbook", 0));
        autoSendCopiedToScrapCheckBox->setText(QApplication::translate("Prefs_Scrapbook", "Send Copied Items Automatically to the Scrapbook", 0));
        keepCopiedAcrossSessionsCheckBox->setText(QApplication::translate("Prefs_Scrapbook", "Keep Copied Items Permanently Across Sessions", 0));
        writePreviewsCheckBox->setText(QApplication::translate("Prefs_Scrapbook", "Write Item Previews to the Scrapbook Directory", 0));
        itemCountKeptInScrapbookLabel->setText(QApplication::translate("Prefs_Scrapbook", "Number of Copied Items to Keep in Scrapbook", 0));
    } // retranslateUi

};

namespace Ui {
    class Prefs_Scrapbook: public Ui_Prefs_Scrapbook {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PREFS_SCRAPBOOKBASE_H
