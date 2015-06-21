/********************************************************************************
** Form generated from reading UI file 'picsearchoptions.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PICSEARCHOPTIONS_H
#define UI_PICSEARCHOPTIONS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_PicSearchOptions
{
public:
    QGridLayout *gridLayout;
    QLabel *textLabel1_2;
    QLabel *textLabel1;
    QLineEdit *directoryEdit;
    QLineEdit *fileEdit;
    QPushButton *changeDirButton;
    QHBoxLayout *hboxLayout;
    QLabel *searchLabel;
    QProgressBar *progressBar1;
    QSpacerItem *spacerItem;
    QPushButton *startButton;
    QHBoxLayout *hboxLayout1;
    QCheckBox *caseInsensitiveCheck;
    QCheckBox *recursiveSearch;
    QSpacerItem *spacerItem1;

    void setupUi(QDialog *PicSearchOptions)
    {
        if (PicSearchOptions->objectName().isEmpty())
            PicSearchOptions->setObjectName(QStringLiteral("PicSearchOptions"));
        PicSearchOptions->resize(513, 139);
        gridLayout = new QGridLayout(PicSearchOptions);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(9, 9, 9, 9);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        textLabel1_2 = new QLabel(PicSearchOptions);
        textLabel1_2->setObjectName(QStringLiteral("textLabel1_2"));
        textLabel1_2->setWordWrap(false);

        gridLayout->addWidget(textLabel1_2, 0, 0, 1, 1);

        textLabel1 = new QLabel(PicSearchOptions);
        textLabel1->setObjectName(QStringLiteral("textLabel1"));
        textLabel1->setWordWrap(false);

        gridLayout->addWidget(textLabel1, 1, 0, 1, 1);

        directoryEdit = new QLineEdit(PicSearchOptions);
        directoryEdit->setObjectName(QStringLiteral("directoryEdit"));
        directoryEdit->setMinimumSize(QSize(300, 0));

        gridLayout->addWidget(directoryEdit, 1, 1, 1, 1);

        fileEdit = new QLineEdit(PicSearchOptions);
        fileEdit->setObjectName(QStringLiteral("fileEdit"));

        gridLayout->addWidget(fileEdit, 0, 1, 1, 2);

        changeDirButton = new QPushButton(PicSearchOptions);
        changeDirButton->setObjectName(QStringLiteral("changeDirButton"));

        gridLayout->addWidget(changeDirButton, 1, 2, 1, 1);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(5);
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        searchLabel = new QLabel(PicSearchOptions);
        searchLabel->setObjectName(QStringLiteral("searchLabel"));
        searchLabel->setWordWrap(false);

        hboxLayout->addWidget(searchLabel);

        progressBar1 = new QProgressBar(PicSearchOptions);
        progressBar1->setObjectName(QStringLiteral("progressBar1"));
        progressBar1->setMinimumSize(QSize(0, 20));
        progressBar1->setMaximumSize(QSize(250, 22));
        progressBar1->setOrientation(Qt::Horizontal);

        hboxLayout->addWidget(progressBar1);

        spacerItem = new QSpacerItem(30, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        startButton = new QPushButton(PicSearchOptions);
        startButton->setObjectName(QStringLiteral("startButton"));

        hboxLayout->addWidget(startButton);


        gridLayout->addLayout(hboxLayout, 3, 0, 1, 3);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(5);
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
        hboxLayout1->setObjectName(QStringLiteral("hboxLayout1"));
        caseInsensitiveCheck = new QCheckBox(PicSearchOptions);
        caseInsensitiveCheck->setObjectName(QStringLiteral("caseInsensitiveCheck"));

        hboxLayout1->addWidget(caseInsensitiveCheck);

        recursiveSearch = new QCheckBox(PicSearchOptions);
        recursiveSearch->setObjectName(QStringLiteral("recursiveSearch"));
        recursiveSearch->setChecked(true);

        hboxLayout1->addWidget(recursiveSearch);

        spacerItem1 = new QSpacerItem(81, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem1);


        gridLayout->addLayout(hboxLayout1, 2, 0, 1, 3);

#ifndef QT_NO_SHORTCUT
        textLabel1_2->setBuddy(fileEdit);
        textLabel1->setBuddy(directoryEdit);
#endif // QT_NO_SHORTCUT

        retranslateUi(PicSearchOptions);

        QMetaObject::connectSlotsByName(PicSearchOptions);
    } // setupUi

    void retranslateUi(QDialog *PicSearchOptions)
    {
        PicSearchOptions->setWindowTitle(QApplication::translate("PicSearchOptions", "Search Images", 0));
        textLabel1_2->setText(QApplication::translate("PicSearchOptions", "Search for:", 0));
        textLabel1->setText(QApplication::translate("PicSearchOptions", "Start at:", 0));
        changeDirButton->setText(QApplication::translate("PicSearchOptions", "Change...", 0));
        searchLabel->setText(QApplication::translate("PicSearchOptions", "Searching", 0));
        startButton->setText(QApplication::translate("PicSearchOptions", "Start Search", 0));
        caseInsensitiveCheck->setText(QApplication::translate("PicSearchOptions", "Case insensitive search", 0));
        recursiveSearch->setText(QApplication::translate("PicSearchOptions", "Search recursively", 0));
    } // retranslateUi

};

namespace Ui {
    class PicSearchOptions: public Ui_PicSearchOptions {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PICSEARCHOPTIONS_H
