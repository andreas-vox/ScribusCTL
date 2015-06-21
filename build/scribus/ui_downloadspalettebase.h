/********************************************************************************
** Form generated from reading UI file 'downloadspalettebase.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DOWNLOADSPALETTEBASE_H
#define UI_DOWNLOADSPALETTEBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DownloadsPalette_Base
{
public:
    QVBoxLayout *verticalLayout;
    QListView *listView;
    QHBoxLayout *horizontalLayout;
    QPushButton *showInButton;
    QPushButton *removeButton;
    QPushButton *removeAllButton;

    void setupUi(QDialog *DownloadsPalette_Base)
    {
        if (DownloadsPalette_Base->objectName().isEmpty())
            DownloadsPalette_Base->setObjectName(QStringLiteral("DownloadsPalette_Base"));
        DownloadsPalette_Base->resize(310, 325);
        verticalLayout = new QVBoxLayout(DownloadsPalette_Base);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        listView = new QListView(DownloadsPalette_Base);
        listView->setObjectName(QStringLiteral("listView"));

        verticalLayout->addWidget(listView);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        showInButton = new QPushButton(DownloadsPalette_Base);
        showInButton->setObjectName(QStringLiteral("showInButton"));
        showInButton->setEnabled(false);
        showInButton->setAutoDefault(false);

        horizontalLayout->addWidget(showInButton);

        removeButton = new QPushButton(DownloadsPalette_Base);
        removeButton->setObjectName(QStringLiteral("removeButton"));
        removeButton->setEnabled(false);

        horizontalLayout->addWidget(removeButton);

        removeAllButton = new QPushButton(DownloadsPalette_Base);
        removeAllButton->setObjectName(QStringLiteral("removeAllButton"));
        removeAllButton->setEnabled(false);

        horizontalLayout->addWidget(removeAllButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(DownloadsPalette_Base);

        QMetaObject::connectSlotsByName(DownloadsPalette_Base);
    } // setupUi

    void retranslateUi(QDialog *DownloadsPalette_Base)
    {
        DownloadsPalette_Base->setWindowTitle(QApplication::translate("DownloadsPalette_Base", "Downloads", 0));
        showInButton->setText(QApplication::translate("DownloadsPalette_Base", "Show", 0));
        removeButton->setText(QApplication::translate("DownloadsPalette_Base", "Remove", 0));
        removeAllButton->setText(QApplication::translate("DownloadsPalette_Base", "Remove All", 0));
    } // retranslateUi

};

namespace Ui {
    class DownloadsPalette_Base: public Ui_DownloadsPalette_Base {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DOWNLOADSPALETTEBASE_H
