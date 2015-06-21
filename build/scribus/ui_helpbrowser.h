/********************************************************************************
** Form generated from reading UI file 'helpbrowser.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELPBROWSER_H
#define UI_HELPBROWSER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include "ui/sctextbrowser.h"

QT_BEGIN_NAMESPACE

class Ui_HelpBrowser
{
public:
    QAction *action_Print;
    QAction *action_Exit;
    QAction *action_Find;
    QAction *actionFind_Next;
    QAction *actionFind_Previous;
    QAction *action_Add;
    QAction *action_Delete;
    QAction *actionD_elete_All;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    ScTextBrowser *textBrowser;
    QMenuBar *menubar;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *HelpBrowser)
    {
        if (HelpBrowser->objectName().isEmpty())
            HelpBrowser->setObjectName(QStringLiteral("HelpBrowser"));
        HelpBrowser->resize(611, 535);
        action_Print = new QAction(HelpBrowser);
        action_Print->setObjectName(QStringLiteral("action_Print"));
        action_Exit = new QAction(HelpBrowser);
        action_Exit->setObjectName(QStringLiteral("action_Exit"));
        action_Find = new QAction(HelpBrowser);
        action_Find->setObjectName(QStringLiteral("action_Find"));
        actionFind_Next = new QAction(HelpBrowser);
        actionFind_Next->setObjectName(QStringLiteral("actionFind_Next"));
        actionFind_Previous = new QAction(HelpBrowser);
        actionFind_Previous->setObjectName(QStringLiteral("actionFind_Previous"));
        action_Add = new QAction(HelpBrowser);
        action_Add->setObjectName(QStringLiteral("action_Add"));
        action_Delete = new QAction(HelpBrowser);
        action_Delete->setObjectName(QStringLiteral("action_Delete"));
        actionD_elete_All = new QAction(HelpBrowser);
        actionD_elete_All->setObjectName(QStringLiteral("actionD_elete_All"));
        centralwidget = new QWidget(HelpBrowser);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        textBrowser = new ScTextBrowser(centralwidget);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));

        gridLayout->addWidget(textBrowser, 0, 0, 1, 1);

        HelpBrowser->setCentralWidget(centralwidget);
        menubar = new QMenuBar(HelpBrowser);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 611, 26));
        HelpBrowser->setMenuBar(menubar);
        statusbar = new QStatusBar(HelpBrowser);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        HelpBrowser->setStatusBar(statusbar);
        toolBar = new QToolBar(HelpBrowser);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        HelpBrowser->addToolBar(Qt::TopToolBarArea, toolBar);

        retranslateUi(HelpBrowser);

        QMetaObject::connectSlotsByName(HelpBrowser);
    } // setupUi

    void retranslateUi(QMainWindow *HelpBrowser)
    {
        HelpBrowser->setWindowTitle(QApplication::translate("HelpBrowser", "Scribus Help", 0));
        action_Print->setText(QApplication::translate("HelpBrowser", "&Print...", 0));
        action_Exit->setText(QApplication::translate("HelpBrowser", "&Exit", 0));
        action_Find->setText(QApplication::translate("HelpBrowser", "&Find...", 0));
        actionFind_Next->setText(QApplication::translate("HelpBrowser", "Find &Next...", 0));
        actionFind_Previous->setText(QApplication::translate("HelpBrowser", "Find &Previous...", 0));
        action_Add->setText(QApplication::translate("HelpBrowser", "&Add", 0));
        action_Delete->setText(QApplication::translate("HelpBrowser", "&Delete", 0));
        actionD_elete_All->setText(QApplication::translate("HelpBrowser", "D&elete All", 0));
        toolBar->setWindowTitle(QApplication::translate("HelpBrowser", "Scribus Help", 0));
    } // retranslateUi

};

namespace Ui {
    class HelpBrowser: public Ui_HelpBrowser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELPBROWSER_H
