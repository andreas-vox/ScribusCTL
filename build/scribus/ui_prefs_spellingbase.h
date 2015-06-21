/********************************************************************************
** Form generated from reading UI file 'prefs_spellingbase.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PREFS_SPELLINGBASE_H
#define UI_PREFS_SPELLINGBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Prefs_Spelling
{
public:
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QFrame *line;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label_5;
    QTableWidget *dictTableWidget;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_6;
    QTableWidget *availDictTableWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *dlLabel;
    QProgressBar *downloadProgressBar;
    QSpacerItem *horizontalSpacer;
    QPushButton *availListDownloadButton;
    QPushButton *spellDownloadButton;

    void setupUi(QWidget *Prefs_Spelling)
    {
        if (Prefs_Spelling->objectName().isEmpty())
            Prefs_Spelling->setObjectName(QStringLiteral("Prefs_Spelling"));
        Prefs_Spelling->resize(730, 304);
        verticalLayout_3 = new QVBoxLayout(Prefs_Spelling);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label = new QLabel(Prefs_Spelling);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        verticalLayout_3->addWidget(label);

        line = new QFrame(Prefs_Spelling);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(line);

        scrollArea = new QScrollArea(Prefs_Spelling);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 704, 236));
        verticalLayout_4 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_5 = new QLabel(scrollAreaWidgetContents);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout->addWidget(label_5);

        dictTableWidget = new QTableWidget(scrollAreaWidgetContents);
        dictTableWidget->setObjectName(QStringLiteral("dictTableWidget"));
        dictTableWidget->verticalHeader()->setVisible(false);

        verticalLayout->addWidget(dictTableWidget);


        horizontalLayout_2->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_6 = new QLabel(scrollAreaWidgetContents);
        label_6->setObjectName(QStringLiteral("label_6"));

        verticalLayout_2->addWidget(label_6);

        availDictTableWidget = new QTableWidget(scrollAreaWidgetContents);
        availDictTableWidget->setObjectName(QStringLiteral("availDictTableWidget"));
        availDictTableWidget->verticalHeader()->setVisible(false);

        verticalLayout_2->addWidget(availDictTableWidget);


        horizontalLayout_2->addLayout(verticalLayout_2);


        verticalLayout_4->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        dlLabel = new QLabel(scrollAreaWidgetContents);
        dlLabel->setObjectName(QStringLiteral("dlLabel"));

        horizontalLayout->addWidget(dlLabel);

        downloadProgressBar = new QProgressBar(scrollAreaWidgetContents);
        downloadProgressBar->setObjectName(QStringLiteral("downloadProgressBar"));
        downloadProgressBar->setValue(0);
        downloadProgressBar->setTextVisible(true);
        downloadProgressBar->setInvertedAppearance(false);

        horizontalLayout->addWidget(downloadProgressBar);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        availListDownloadButton = new QPushButton(scrollAreaWidgetContents);
        availListDownloadButton->setObjectName(QStringLiteral("availListDownloadButton"));

        horizontalLayout->addWidget(availListDownloadButton);

        spellDownloadButton = new QPushButton(scrollAreaWidgetContents);
        spellDownloadButton->setObjectName(QStringLiteral("spellDownloadButton"));

        horizontalLayout->addWidget(spellDownloadButton);


        verticalLayout_4->addLayout(horizontalLayout);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_3->addWidget(scrollArea);


        retranslateUi(Prefs_Spelling);

        QMetaObject::connectSlotsByName(Prefs_Spelling);
    } // setupUi

    void retranslateUi(QWidget *Prefs_Spelling)
    {
        Prefs_Spelling->setWindowTitle(QApplication::translate("Prefs_Spelling", "Form", 0));
        label->setText(QApplication::translate("Prefs_Spelling", "Spelling", 0));
        label_5->setText(QApplication::translate("Prefs_Spelling", "Installed Spelling Dictionaries", 0));
        label_6->setText(QApplication::translate("Prefs_Spelling", "Downloadable Spelling Dictionaries", 0));
        dlLabel->setText(QApplication::translate("Prefs_Spelling", "Downloading", 0));
        availListDownloadButton->setText(QApplication::translate("Prefs_Spelling", "Refresh Downloadable List", 0));
        spellDownloadButton->setText(QApplication::translate("Prefs_Spelling", "Download Selected Dictionaries", 0));
    } // retranslateUi

};

namespace Ui {
    class Prefs_Spelling: public Ui_Prefs_Spelling {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PREFS_SPELLINGBASE_H
