/********************************************************************************
** Form generated from reading UI file 'picsearch.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PICSEARCH_H
#define UI_PICSEARCH_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_PicSearch
{
public:
    QVBoxLayout *vboxLayout;
    QHBoxLayout *hboxLayout;
    QLabel *textLabel1;
    QLabel *fileNameLabel;
    QHBoxLayout *hboxLayout1;
    QListWidget *foundFilesBox;
    QVBoxLayout *vboxLayout1;
    QCheckBox *previewCheckBox;
    QSpacerItem *spacerItem;
    QPushButton *useButton;
    QPushButton *cancelButton;
    QVBoxLayout *vboxLayout2;
    QLabel *previewLabel;
    QSpacerItem *spacerItem1;

    void setupUi(QDialog *PicSearch)
    {
        if (PicSearch->objectName().isEmpty())
            PicSearch->setObjectName(QStringLiteral("PicSearch"));
        PicSearch->resize(499, 263);
        vboxLayout = new QVBoxLayout(PicSearch);
        vboxLayout->setSpacing(5);
        vboxLayout->setContentsMargins(10, 10, 10, 10);
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(5);
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        textLabel1 = new QLabel(PicSearch);
        textLabel1->setObjectName(QStringLiteral("textLabel1"));
        textLabel1->setWordWrap(false);

        hboxLayout->addWidget(textLabel1);

        fileNameLabel = new QLabel(PicSearch);
        fileNameLabel->setObjectName(QStringLiteral("fileNameLabel"));
        QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(5));
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(fileNameLabel->sizePolicy().hasHeightForWidth());
        fileNameLabel->setSizePolicy(sizePolicy);
        fileNameLabel->setFrameShape(QFrame::Box);
        fileNameLabel->setWordWrap(false);

        hboxLayout->addWidget(fileNameLabel);


        vboxLayout->addLayout(hboxLayout);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(5);
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
        hboxLayout1->setObjectName(QStringLiteral("hboxLayout1"));
        foundFilesBox = new QListWidget(PicSearch);
        foundFilesBox->setObjectName(QStringLiteral("foundFilesBox"));

        hboxLayout1->addWidget(foundFilesBox);

        vboxLayout1 = new QVBoxLayout();
        vboxLayout1->setSpacing(5);
        vboxLayout1->setContentsMargins(0, 0, 0, 0);
        vboxLayout1->setObjectName(QStringLiteral("vboxLayout1"));
        previewCheckBox = new QCheckBox(PicSearch);
        previewCheckBox->setObjectName(QStringLiteral("previewCheckBox"));

        vboxLayout1->addWidget(previewCheckBox);

        spacerItem = new QSpacerItem(21, 81, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout1->addItem(spacerItem);

        useButton = new QPushButton(PicSearch);
        useButton->setObjectName(QStringLiteral("useButton"));
        useButton->setEnabled(false);
        useButton->setDefault(true);

        vboxLayout1->addWidget(useButton);

        cancelButton = new QPushButton(PicSearch);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));

        vboxLayout1->addWidget(cancelButton);


        hboxLayout1->addLayout(vboxLayout1);

        vboxLayout2 = new QVBoxLayout();
        vboxLayout2->setSpacing(5);
        vboxLayout2->setContentsMargins(0, 0, 0, 0);
        vboxLayout2->setObjectName(QStringLiteral("vboxLayout2"));
        previewLabel = new QLabel(PicSearch);
        previewLabel->setObjectName(QStringLiteral("previewLabel"));
        previewLabel->setMinimumSize(QSize(210, 210));
        previewLabel->setMaximumSize(QSize(210, 210));
        previewLabel->setFrameShape(QFrame::Box);
        previewLabel->setAlignment(Qt::AlignCenter);
        previewLabel->setWordWrap(false);

        vboxLayout2->addWidget(previewLabel);

        spacerItem1 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout2->addItem(spacerItem1);


        hboxLayout1->addLayout(vboxLayout2);


        vboxLayout->addLayout(hboxLayout1);


        retranslateUi(PicSearch);

        QMetaObject::connectSlotsByName(PicSearch);
    } // setupUi

    void retranslateUi(QDialog *PicSearch)
    {
        PicSearch->setWindowTitle(QApplication::translate("PicSearch", "Result", 0));
        textLabel1->setText(QApplication::translate("PicSearch", "Search Results for: ", 0));
        fileNameLabel->setText(QString());
        previewCheckBox->setText(QApplication::translate("PicSearch", "&Preview", 0));
        previewCheckBox->setShortcut(QApplication::translate("PicSearch", "Alt+P", 0));
        useButton->setText(QApplication::translate("PicSearch", "&Select", 0));
        useButton->setShortcut(QApplication::translate("PicSearch", "Alt+S", 0));
        cancelButton->setText(QApplication::translate("PicSearch", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class PicSearch: public Ui_PicSearch {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PICSEARCH_H
