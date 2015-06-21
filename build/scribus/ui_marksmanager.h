/********************************************************************************
** Form generated from reading UI file 'marksmanager.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MARKSMANAGER_H
#define UI_MARKSMANAGER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTreeWidget>

QT_BEGIN_NAMESPACE

class Ui_MarksManager
{
public:
    QGridLayout *gridLayout;
    QPushButton *UpdateButton;
    QSplitter *splitter;
    QPushButton *EditButton;
    QPushButton *DeleteButton;
    QTreeWidget *listView;

    void setupUi(QDialog *MarksManager)
    {
        if (MarksManager->objectName().isEmpty())
            MarksManager->setObjectName(QStringLiteral("MarksManager"));
        MarksManager->resize(253, 249);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MarksManager->sizePolicy().hasHeightForWidth());
        MarksManager->setSizePolicy(sizePolicy);
        MarksManager->setMinimumSize(QSize(200, 100));
        MarksManager->setModal(false);
        gridLayout = new QGridLayout(MarksManager);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        UpdateButton = new QPushButton(MarksManager);
        UpdateButton->setObjectName(QStringLiteral("UpdateButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(UpdateButton->sizePolicy().hasHeightForWidth());
        UpdateButton->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(UpdateButton, 1, 0, 1, 1);

        splitter = new QSplitter(MarksManager);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        EditButton = new QPushButton(splitter);
        EditButton->setObjectName(QStringLiteral("EditButton"));
        splitter->addWidget(EditButton);
        DeleteButton = new QPushButton(splitter);
        DeleteButton->setObjectName(QStringLiteral("DeleteButton"));
        splitter->addWidget(DeleteButton);

        gridLayout->addWidget(splitter, 2, 0, 1, 1);

        listView = new QTreeWidget(MarksManager);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QStringLiteral("1"));
        listView->setHeaderItem(__qtreewidgetitem);
        listView->setObjectName(QStringLiteral("listView"));
        listView->setEditTriggers(QAbstractItemView::DoubleClicked);
        listView->setProperty("showDropIndicator", QVariant(false));
        listView->setSelectionMode(QAbstractItemView::NoSelection);
        listView->setSelectionBehavior(QAbstractItemView::SelectItems);
        listView->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);

        gridLayout->addWidget(listView, 0, 0, 1, 1);


        retranslateUi(MarksManager);

        QMetaObject::connectSlotsByName(MarksManager);
    } // setupUi

    void retranslateUi(QDialog *MarksManager)
    {
        MarksManager->setWindowTitle(QApplication::translate("MarksManager", "Dialog", 0));
        UpdateButton->setText(QApplication::translate("MarksManager", "Update All Marks", 0));
        EditButton->setText(QApplication::translate("MarksManager", "Edit", 0));
        DeleteButton->setText(QApplication::translate("MarksManager", "Delete", 0));
    } // retranslateUi

};

namespace Ui {
    class MarksManager: public Ui_MarksManager {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MARKSMANAGER_H
