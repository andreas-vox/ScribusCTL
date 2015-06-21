/********************************************************************************
** Form generated from reading UI file 'helpbrowsernavigation.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELPBROWSERNAVIGATION_H
#define UI_HELPBROWSERNAVIGATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HelpBrowserNavigation
{
public:
    QGridLayout *gridLayout;
    QSplitter *splitter;
    QTabWidget *tabWidget;
    QWidget *tabContents;
    QVBoxLayout *vboxLayout;
    QTreeView *listView;
    QWidget *tabSearching;
    QVBoxLayout *_2;
    QHBoxLayout *_3;
    QLineEdit *searchingEdit;
    QPushButton *searchingButton;
    QTreeWidget *searchingView;
    QWidget *tabBookmarks;
    QVBoxLayout *_4;
    QTreeWidget *bookmarksView;
    QHBoxLayout *_5;
    QPushButton *bookmarkButton;
    QPushButton *deleteBookmarkButton;
    QPushButton *deleteAllBookmarkButton;

    void setupUi(QWidget *HelpBrowserNavigation)
    {
        if (HelpBrowserNavigation->objectName().isEmpty())
            HelpBrowserNavigation->setObjectName(QStringLiteral("HelpBrowserNavigation"));
        HelpBrowserNavigation->resize(438, 682);
        gridLayout = new QGridLayout(HelpBrowserNavigation);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        splitter = new QSplitter(HelpBrowserNavigation);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        splitter->setChildrenCollapsible(false);
        tabWidget = new QTabWidget(splitter);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabContents = new QWidget();
        tabContents->setObjectName(QStringLiteral("tabContents"));
        vboxLayout = new QVBoxLayout(tabContents);
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        listView = new QTreeView(tabContents);
        listView->setObjectName(QStringLiteral("listView"));
        listView->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);

        vboxLayout->addWidget(listView);

        tabWidget->addTab(tabContents, QString());
        tabSearching = new QWidget();
        tabSearching->setObjectName(QStringLiteral("tabSearching"));
        _2 = new QVBoxLayout(tabSearching);
        _2->setObjectName(QStringLiteral("_2"));
        _3 = new QHBoxLayout();
        _3->setObjectName(QStringLiteral("_3"));
        searchingEdit = new QLineEdit(tabSearching);
        searchingEdit->setObjectName(QStringLiteral("searchingEdit"));

        _3->addWidget(searchingEdit);

        searchingButton = new QPushButton(tabSearching);
        searchingButton->setObjectName(QStringLiteral("searchingButton"));

        _3->addWidget(searchingButton);


        _2->addLayout(_3);

        searchingView = new QTreeWidget(tabSearching);
        searchingView->setObjectName(QStringLiteral("searchingView"));

        _2->addWidget(searchingView);

        tabWidget->addTab(tabSearching, QString());
        tabBookmarks = new QWidget();
        tabBookmarks->setObjectName(QStringLiteral("tabBookmarks"));
        _4 = new QVBoxLayout(tabBookmarks);
        _4->setObjectName(QStringLiteral("_4"));
        bookmarksView = new QTreeWidget(tabBookmarks);
        bookmarksView->setObjectName(QStringLiteral("bookmarksView"));

        _4->addWidget(bookmarksView);

        _5 = new QHBoxLayout();
        _5->setObjectName(QStringLiteral("_5"));
        bookmarkButton = new QPushButton(tabBookmarks);
        bookmarkButton->setObjectName(QStringLiteral("bookmarkButton"));

        _5->addWidget(bookmarkButton);

        deleteBookmarkButton = new QPushButton(tabBookmarks);
        deleteBookmarkButton->setObjectName(QStringLiteral("deleteBookmarkButton"));

        _5->addWidget(deleteBookmarkButton);

        deleteAllBookmarkButton = new QPushButton(tabBookmarks);
        deleteAllBookmarkButton->setObjectName(QStringLiteral("deleteAllBookmarkButton"));

        _5->addWidget(deleteAllBookmarkButton);


        _4->addLayout(_5);

        tabWidget->addTab(tabBookmarks, QString());
        splitter->addWidget(tabWidget);

        gridLayout->addWidget(splitter, 0, 0, 1, 1);


        retranslateUi(HelpBrowserNavigation);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(HelpBrowserNavigation);
    } // setupUi

    void retranslateUi(QWidget *HelpBrowserNavigation)
    {
        HelpBrowserNavigation->setWindowTitle(QApplication::translate("HelpBrowserNavigation", "Form", 0));
        tabWidget->setTabText(tabWidget->indexOf(tabContents), QApplication::translate("HelpBrowserNavigation", "&Contents", 0));
#ifndef QT_NO_TOOLTIP
        searchingEdit->setToolTip(QApplication::translate("HelpBrowserNavigation", "Searching is case insensitive", 0));
#endif // QT_NO_TOOLTIP
        searchingButton->setText(QApplication::translate("HelpBrowserNavigation", "&Search", 0));
        QTreeWidgetItem *___qtreewidgetitem = searchingView->headerItem();
        ___qtreewidgetitem->setText(0, QApplication::translate("HelpBrowserNavigation", "1", 0));
        tabWidget->setTabText(tabWidget->indexOf(tabSearching), QApplication::translate("HelpBrowserNavigation", "Se&arch", 0));
        QTreeWidgetItem *___qtreewidgetitem1 = bookmarksView->headerItem();
        ___qtreewidgetitem1->setText(0, QApplication::translate("HelpBrowserNavigation", "1", 0));
        bookmarkButton->setText(QApplication::translate("HelpBrowserNavigation", "&New", 0));
        deleteBookmarkButton->setText(QApplication::translate("HelpBrowserNavigation", "&Delete", 0));
        deleteAllBookmarkButton->setText(QApplication::translate("HelpBrowserNavigation", "D&elete All", 0));
        tabWidget->setTabText(tabWidget->indexOf(tabBookmarks), QApplication::translate("HelpBrowserNavigation", "Book&marks", 0));
    } // retranslateUi

};

namespace Ui {
    class HelpBrowserNavigation: public Ui_HelpBrowserNavigation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELPBROWSERNAVIGATION_H
