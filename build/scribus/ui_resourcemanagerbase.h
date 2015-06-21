/********************************************************************************
** Form generated from reading UI file 'resourcemanagerbase.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESOURCEMANAGERBASE_H
#define UI_RESOURCEMANAGERBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ResourceManagerBase
{
public:
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout;
    QLabel *categoryLabel;
    QComboBox *categoryComboBox;
    QSpacerItem *horizontalSpacer;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_2;
    QTableWidget *installedTableWidget;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_4;
    QPushButton *showInFSButton;
    QPushButton *deleteSelectedButton;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_3;
    QTableWidget *availableTableWidget;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer_3;
    QPushButton *updateAvailableButton;
    QPushButton *downloadButton;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QProgressBar *downloadProgressBar;

    void setupUi(QDialog *ResourceManagerBase)
    {
        if (ResourceManagerBase->objectName().isEmpty())
            ResourceManagerBase->setObjectName(QStringLiteral("ResourceManagerBase"));
        ResourceManagerBase->resize(785, 716);
        verticalLayout_5 = new QVBoxLayout(ResourceManagerBase);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        categoryLabel = new QLabel(ResourceManagerBase);
        categoryLabel->setObjectName(QStringLiteral("categoryLabel"));

        horizontalLayout->addWidget(categoryLabel);

        categoryComboBox = new QComboBox(ResourceManagerBase);
        categoryComboBox->setObjectName(QStringLiteral("categoryComboBox"));

        horizontalLayout->addWidget(categoryComboBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_5->addLayout(horizontalLayout);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setSizeConstraint(QLayout::SetDefaultConstraint);
        label_2 = new QLabel(ResourceManagerBase);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font;
        font.setBold(false);
        font.setWeight(50);
        label_2->setFont(font);
        label_2->setTextFormat(Qt::AutoText);

        verticalLayout_3->addWidget(label_2);

        installedTableWidget = new QTableWidget(ResourceManagerBase);
        if (installedTableWidget->columnCount() < 3)
            installedTableWidget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        installedTableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        installedTableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        installedTableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        installedTableWidget->setObjectName(QStringLiteral("installedTableWidget"));
        installedTableWidget->setAlternatingRowColors(true);
        installedTableWidget->setSortingEnabled(true);
        installedTableWidget->horizontalHeader()->setStretchLastSection(true);
        installedTableWidget->verticalHeader()->setVisible(false);

        verticalLayout_3->addWidget(installedTableWidget);


        gridLayout->addLayout(verticalLayout_3, 0, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);

        showInFSButton = new QPushButton(ResourceManagerBase);
        showInFSButton->setObjectName(QStringLiteral("showInFSButton"));
        showInFSButton->setAutoDefault(false);

        verticalLayout->addWidget(showInFSButton);

        deleteSelectedButton = new QPushButton(ResourceManagerBase);
        deleteSelectedButton->setObjectName(QStringLiteral("deleteSelectedButton"));
        deleteSelectedButton->setEnabled(false);
        deleteSelectedButton->setAutoDefault(false);

        verticalLayout->addWidget(deleteSelectedButton);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        gridLayout->addLayout(verticalLayout, 0, 1, 1, 1);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label_3 = new QLabel(ResourceManagerBase);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout_4->addWidget(label_3);

        availableTableWidget = new QTableWidget(ResourceManagerBase);
        if (availableTableWidget->columnCount() < 4)
            availableTableWidget->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        availableTableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        availableTableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        availableTableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        availableTableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem6);
        availableTableWidget->setObjectName(QStringLiteral("availableTableWidget"));
        availableTableWidget->setAlternatingRowColors(true);
        availableTableWidget->setSortingEnabled(true);
        availableTableWidget->setRowCount(0);
        availableTableWidget->setColumnCount(4);
        availableTableWidget->horizontalHeader()->setStretchLastSection(true);
        availableTableWidget->verticalHeader()->setVisible(false);

        verticalLayout_4->addWidget(availableTableWidget);


        gridLayout->addLayout(verticalLayout_4, 1, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_3);

        updateAvailableButton = new QPushButton(ResourceManagerBase);
        updateAvailableButton->setObjectName(QStringLiteral("updateAvailableButton"));
        updateAvailableButton->setAutoDefault(false);

        verticalLayout_2->addWidget(updateAvailableButton);

        downloadButton = new QPushButton(ResourceManagerBase);
        downloadButton->setObjectName(QStringLiteral("downloadButton"));
        downloadButton->setEnabled(false);
        downloadButton->setAutoDefault(false);

        verticalLayout_2->addWidget(downloadButton);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        downloadProgressBar = new QProgressBar(ResourceManagerBase);
        downloadProgressBar->setObjectName(QStringLiteral("downloadProgressBar"));
        downloadProgressBar->setValue(24);

        horizontalLayout_2->addWidget(downloadProgressBar);


        verticalLayout_2->addLayout(horizontalLayout_2);


        gridLayout->addLayout(verticalLayout_2, 1, 1, 1, 1);

        gridLayout->setColumnStretch(0, 1);

        verticalLayout_5->addLayout(gridLayout);


        retranslateUi(ResourceManagerBase);

        QMetaObject::connectSlotsByName(ResourceManagerBase);
    } // setupUi

    void retranslateUi(QDialog *ResourceManagerBase)
    {
        ResourceManagerBase->setWindowTitle(QApplication::translate("ResourceManagerBase", "Resource Manager", 0));
        categoryLabel->setText(QApplication::translate("ResourceManagerBase", "Category:", 0));
        label_2->setText(QApplication::translate("ResourceManagerBase", "Installed", 0));
        QTableWidgetItem *___qtablewidgetitem = installedTableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("ResourceManagerBase", "Description", 0));
        QTableWidgetItem *___qtablewidgetitem1 = installedTableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("ResourceManagerBase", "ID", 0));
        QTableWidgetItem *___qtablewidgetitem2 = installedTableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("ResourceManagerBase", "Location", 0));
        showInFSButton->setText(QApplication::translate("ResourceManagerBase", "Show in Filesystem", 0));
        deleteSelectedButton->setText(QApplication::translate("ResourceManagerBase", "Delete Selected", 0));
        label_3->setText(QApplication::translate("ResourceManagerBase", "Available", 0));
        QTableWidgetItem *___qtablewidgetitem3 = availableTableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem3->setText(QApplication::translate("ResourceManagerBase", "Description", 0));
        QTableWidgetItem *___qtablewidgetitem4 = availableTableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem4->setText(QApplication::translate("ResourceManagerBase", "ID", 0));
        QTableWidgetItem *___qtablewidgetitem5 = availableTableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem5->setText(QApplication::translate("ResourceManagerBase", "Location", 0));
        QTableWidgetItem *___qtablewidgetitem6 = availableTableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem6->setText(QApplication::translate("ResourceManagerBase", "Download", 0));
        updateAvailableButton->setText(QApplication::translate("ResourceManagerBase", "Update Available List", 0));
        downloadButton->setText(QApplication::translate("ResourceManagerBase", "Download", 0));
    } // retranslateUi

};

namespace Ui {
    class ResourceManagerBase: public Ui_ResourceManagerBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESOURCEMANAGERBASE_H
