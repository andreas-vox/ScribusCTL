/********************************************************************************
** Form generated from reading UI file 'preferencesdialogbase.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PREFERENCESDIALOGBASE_H
#define UI_PREFERENCESDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PreferencesDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *frameHorizontalLayout;
    QListWidget *preferencesTypeList;
    QStackedWidget *prefsStackWidget;
    QWidget *page_2;
    QHBoxLayout *buttonHorizontalLayout;
    QPushButton *exportButton;
    QPushButton *defaultsButton;
    QSpacerItem *buttonHorizontalSpacer;
    QPushButton *applyButton;
    QPushButton *okButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *PreferencesDialog)
    {
        if (PreferencesDialog->objectName().isEmpty())
            PreferencesDialog->setObjectName(QStringLiteral("PreferencesDialog"));
        PreferencesDialog->resize(830, 545);
        verticalLayout = new QVBoxLayout(PreferencesDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        frameHorizontalLayout = new QHBoxLayout();
        frameHorizontalLayout->setObjectName(QStringLiteral("frameHorizontalLayout"));
        preferencesTypeList = new QListWidget(PreferencesDialog);
        preferencesTypeList->setObjectName(QStringLiteral("preferencesTypeList"));
        preferencesTypeList->setMinimumSize(QSize(0, 0));
        preferencesTypeList->setMaximumSize(QSize(151, 16777215));
        preferencesTypeList->setAlternatingRowColors(true);
        preferencesTypeList->setViewMode(QListView::IconMode);
        preferencesTypeList->setUniformItemSizes(false);

        frameHorizontalLayout->addWidget(preferencesTypeList);

        prefsStackWidget = new QStackedWidget(PreferencesDialog);
        prefsStackWidget->setObjectName(QStringLiteral("prefsStackWidget"));
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        prefsStackWidget->addWidget(page_2);

        frameHorizontalLayout->addWidget(prefsStackWidget);


        verticalLayout->addLayout(frameHorizontalLayout);

        buttonHorizontalLayout = new QHBoxLayout();
        buttonHorizontalLayout->setObjectName(QStringLiteral("buttonHorizontalLayout"));
        exportButton = new QPushButton(PreferencesDialog);
        exportButton->setObjectName(QStringLiteral("exportButton"));
        exportButton->setAutoDefault(false);

        buttonHorizontalLayout->addWidget(exportButton);

        defaultsButton = new QPushButton(PreferencesDialog);
        defaultsButton->setObjectName(QStringLiteral("defaultsButton"));
        defaultsButton->setAutoDefault(false);

        buttonHorizontalLayout->addWidget(defaultsButton);

        buttonHorizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        buttonHorizontalLayout->addItem(buttonHorizontalSpacer);

        applyButton = new QPushButton(PreferencesDialog);
        applyButton->setObjectName(QStringLiteral("applyButton"));
        applyButton->setAutoDefault(false);

        buttonHorizontalLayout->addWidget(applyButton);

        okButton = new QPushButton(PreferencesDialog);
        okButton->setObjectName(QStringLiteral("okButton"));
        okButton->setAutoDefault(false);

        buttonHorizontalLayout->addWidget(okButton);

        cancelButton = new QPushButton(PreferencesDialog);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));
        cancelButton->setDefault(true);

        buttonHorizontalLayout->addWidget(cancelButton);


        verticalLayout->addLayout(buttonHorizontalLayout);


        retranslateUi(PreferencesDialog);

        QMetaObject::connectSlotsByName(PreferencesDialog);
    } // setupUi

    void retranslateUi(QDialog *PreferencesDialog)
    {
        PreferencesDialog->setWindowTitle(QApplication::translate("PreferencesDialog", "Preferences", 0));
        exportButton->setText(QApplication::translate("PreferencesDialog", "Export...", 0));
        defaultsButton->setText(QApplication::translate("PreferencesDialog", "Defaults", 0));
        applyButton->setText(QApplication::translate("PreferencesDialog", "&Apply", 0));
        okButton->setText(QApplication::translate("PreferencesDialog", "&OK", 0));
        cancelButton->setText(QApplication::translate("PreferencesDialog", "&Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class PreferencesDialog: public Ui_PreferencesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PREFERENCESDIALOGBASE_H
