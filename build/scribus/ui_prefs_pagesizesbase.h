/********************************************************************************
** Form generated from reading UI file 'prefs_pagesizesbase.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PREFS_PAGESIZESBASE_H
#define UI_PREFS_PAGESIZESBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Prefs_PageSizes
{
public:
    QVBoxLayout *verticalLayout_4;
    QLabel *label;
    QFrame *line;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QListWidget *availableSizesListWidget;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QPushButton *toActiveButton;
    QPushButton *fromActiveButton;
    QSpacerItem *verticalSpacer_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_3;
    QListWidget *activeSizesListWidget;

    void setupUi(QWidget *Prefs_PageSizes)
    {
        if (Prefs_PageSizes->objectName().isEmpty())
            Prefs_PageSizes->setObjectName(QStringLiteral("Prefs_PageSizes"));
        Prefs_PageSizes->resize(657, 358);
        verticalLayout_4 = new QVBoxLayout(Prefs_PageSizes);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label = new QLabel(Prefs_PageSizes);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        verticalLayout_4->addWidget(label);

        line = new QFrame(Prefs_PageSizes);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_4->addWidget(line);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_2 = new QLabel(Prefs_PageSizes);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_2->addWidget(label_2);

        availableSizesListWidget = new QListWidget(Prefs_PageSizes);
        availableSizesListWidget->setObjectName(QStringLiteral("availableSizesListWidget"));
        availableSizesListWidget->setAlternatingRowColors(false);
        availableSizesListWidget->setSelectionMode(QAbstractItemView::ExtendedSelection);
        availableSizesListWidget->setSortingEnabled(true);

        verticalLayout_2->addWidget(availableSizesListWidget);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        toActiveButton = new QPushButton(Prefs_PageSizes);
        toActiveButton->setObjectName(QStringLiteral("toActiveButton"));

        verticalLayout->addWidget(toActiveButton);

        fromActiveButton = new QPushButton(Prefs_PageSizes);
        fromActiveButton->setObjectName(QStringLiteral("fromActiveButton"));

        verticalLayout->addWidget(fromActiveButton);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_3 = new QLabel(Prefs_PageSizes);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout_3->addWidget(label_3);

        activeSizesListWidget = new QListWidget(Prefs_PageSizes);
        activeSizesListWidget->setObjectName(QStringLiteral("activeSizesListWidget"));
        activeSizesListWidget->setSelectionMode(QAbstractItemView::ExtendedSelection);
        activeSizesListWidget->setSortingEnabled(true);

        verticalLayout_3->addWidget(activeSizesListWidget);


        horizontalLayout->addLayout(verticalLayout_3);


        verticalLayout_4->addLayout(horizontalLayout);


        retranslateUi(Prefs_PageSizes);

        QMetaObject::connectSlotsByName(Prefs_PageSizes);
    } // setupUi

    void retranslateUi(QWidget *Prefs_PageSizes)
    {
        Prefs_PageSizes->setWindowTitle(QApplication::translate("Prefs_PageSizes", "Form", 0));
        label->setText(QApplication::translate("Prefs_PageSizes", "Page Sizes", 0));
        label_2->setText(QApplication::translate("Prefs_PageSizes", "Available Sizes", 0));
        toActiveButton->setText(QString());
        fromActiveButton->setText(QString());
        label_3->setText(QApplication::translate("Prefs_PageSizes", "Active Sizes", 0));
    } // retranslateUi

};

namespace Ui {
    class Prefs_PageSizes: public Ui_Prefs_PageSizes {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PREFS_PAGESIZESBASE_H
