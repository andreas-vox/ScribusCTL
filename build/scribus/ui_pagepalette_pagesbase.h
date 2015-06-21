/********************************************************************************
** Form generated from reading UI file 'pagepalette_pagesbase.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGEPALETTE_PAGESBASE_H
#define UI_PAGEPALETTE_PAGESBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "ui/pagelayout.h"
#include "ui/pagepalette_widgets.h"

QT_BEGIN_NAMESPACE

class Ui_PagePalette_PagesBase
{
public:
    QVBoxLayout *verticalLayout;
    QSplitter *splitter;
    QWidget *widget;
    QVBoxLayout *verticalLayout_3;
    QLabel *textLabel1;
    SeList *masterPageList;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout_4;
    QLabel *textLabel2;
    SeView *pageView;
    QHBoxLayout *horizontalLayout;
    PageLayouts *pageLayout;
    TrashBin *trash;

    void setupUi(QWidget *PagePalette_PagesBase)
    {
        if (PagePalette_PagesBase->objectName().isEmpty())
            PagePalette_PagesBase->setObjectName(QStringLiteral("PagePalette_PagesBase"));
        PagePalette_PagesBase->resize(440, 286);
        verticalLayout = new QVBoxLayout(PagePalette_PagesBase);
        verticalLayout->setSpacing(5);
        verticalLayout->setContentsMargins(5, 5, 5, 5);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        splitter = new QSplitter(PagePalette_PagesBase);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Vertical);
        widget = new QWidget(splitter);
        widget->setObjectName(QStringLiteral("widget"));
        verticalLayout_3 = new QVBoxLayout(widget);
        verticalLayout_3->setSpacing(5);
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        textLabel1 = new QLabel(widget);
        textLabel1->setObjectName(QStringLiteral("textLabel1"));

        verticalLayout_3->addWidget(textLabel1);

        masterPageList = new SeList(widget);
        masterPageList->setObjectName(QStringLiteral("masterPageList"));
        masterPageList->setMinimumSize(QSize(130, 70));
        masterPageList->setIconSize(QSize(60, 60));

        verticalLayout_3->addWidget(masterPageList);

        splitter->addWidget(widget);
        widget_2 = new QWidget(splitter);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        verticalLayout_4 = new QVBoxLayout(widget_2);
        verticalLayout_4->setSpacing(5);
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        textLabel2 = new QLabel(widget_2);
        textLabel2->setObjectName(QStringLiteral("textLabel2"));

        verticalLayout_4->addWidget(textLabel2);

        pageView = new SeView(widget_2);
        if (pageView->columnCount() < 1)
            pageView->setColumnCount(1);
        if (pageView->rowCount() < 1)
            pageView->setRowCount(1);
        pageView->setObjectName(QStringLiteral("pageView"));
        pageView->setMinimumSize(QSize(130, 120));
        pageView->setSelectionMode(QAbstractItemView::NoSelection);
        pageView->setIconSize(QSize(60, 60));
        pageView->setRowCount(1);
        pageView->setColumnCount(1);
        pageView->horizontalHeader()->setVisible(false);
        pageView->verticalHeader()->setVisible(false);

        verticalLayout_4->addWidget(pageView);

        splitter->addWidget(widget_2);

        verticalLayout->addWidget(splitter);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pageLayout = new PageLayouts(PagePalette_PagesBase);
        pageLayout->setObjectName(QStringLiteral("pageLayout"));

        horizontalLayout->addWidget(pageLayout);

        trash = new TrashBin(PagePalette_PagesBase);
        trash->setObjectName(QStringLiteral("trash"));
        trash->setMinimumSize(QSize(32, 32));
        trash->setMaximumSize(QSize(32, 32));

        horizontalLayout->addWidget(trash);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(PagePalette_PagesBase);

        QMetaObject::connectSlotsByName(PagePalette_PagesBase);
    } // setupUi

    void retranslateUi(QWidget *PagePalette_PagesBase)
    {
        PagePalette_PagesBase->setWindowTitle(QApplication::translate("PagePalette_PagesBase", "Form", 0));
        textLabel1->setText(QApplication::translate("PagePalette_PagesBase", "Available Master Pages:", 0));
        textLabel2->setText(QApplication::translate("PagePalette_PagesBase", "Document Pages:", 0));
        pageLayout->setTitle(QApplication::translate("PagePalette_PagesBase", "Document Layout", 0));
        trash->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class PagePalette_PagesBase: public Ui_PagePalette_PagesBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGEPALETTE_PAGESBASE_H
