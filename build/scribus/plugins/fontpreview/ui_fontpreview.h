/********************************************************************************
** Form generated from reading UI file 'fontpreview.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FONTPREVIEW_H
#define UI_FONTPREVIEW_H

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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include "ui/fontlistview.h"

QT_BEGIN_NAMESPACE

class Ui_FontPreview
{
public:
    QGridLayout *gridLayout;
    QLabel *searchLabel;
    QLineEdit *searchEdit;
    QCheckBox *extendedCheckBox;
    FontListView *fontList;
    QLabel *fontPreview;
    QLabel *sizeLabel;
    QSpinBox *sizeSpin;
    QLabel *displayLabel;
    QLineEdit *displayEdit;
    QPushButton *displayButton;
    QPushButton *resetDisplayButton;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QPushButton *cancelButton;

    void setupUi(QDialog *FontPreview)
    {
        if (FontPreview->objectName().isEmpty())
            FontPreview->setObjectName(QStringLiteral("FontPreview"));
        FontPreview->resize(604, 463);
        gridLayout = new QGridLayout(FontPreview);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        searchLabel = new QLabel(FontPreview);
        searchLabel->setObjectName(QStringLiteral("searchLabel"));
        searchLabel->setWordWrap(false);

        gridLayout->addWidget(searchLabel, 0, 0, 1, 2);

        searchEdit = new QLineEdit(FontPreview);
        searchEdit->setObjectName(QStringLiteral("searchEdit"));

        gridLayout->addWidget(searchEdit, 0, 2, 1, 5);

        extendedCheckBox = new QCheckBox(FontPreview);
        extendedCheckBox->setObjectName(QStringLiteral("extendedCheckBox"));

        gridLayout->addWidget(extendedCheckBox, 1, 0, 1, 7);

        fontList = new FontListView(FontPreview);
        fontList->setObjectName(QStringLiteral("fontList"));
        fontList->setAlternatingRowColors(true);
        fontList->setSelectionMode(QAbstractItemView::SingleSelection);
        fontList->setSelectionBehavior(QAbstractItemView::SelectRows);
        fontList->setSortingEnabled(true);

        gridLayout->addWidget(fontList, 2, 0, 1, 7);

        fontPreview = new QLabel(FontPreview);
        fontPreview->setObjectName(QStringLiteral("fontPreview"));
        fontPreview->setMinimumSize(QSize(500, 100));
        fontPreview->setMaximumSize(QSize(16777215, 100));
        fontPreview->setFrameShape(QFrame::Box);
        fontPreview->setWordWrap(false);

        gridLayout->addWidget(fontPreview, 3, 0, 1, 7);

        sizeLabel = new QLabel(FontPreview);
        sizeLabel->setObjectName(QStringLiteral("sizeLabel"));
        sizeLabel->setWordWrap(false);

        gridLayout->addWidget(sizeLabel, 4, 0, 1, 1);

        sizeSpin = new QSpinBox(FontPreview);
        sizeSpin->setObjectName(QStringLiteral("sizeSpin"));
        sizeSpin->setMinimum(10);
        sizeSpin->setMaximum(72);

        gridLayout->addWidget(sizeSpin, 4, 1, 1, 2);

        displayLabel = new QLabel(FontPreview);
        displayLabel->setObjectName(QStringLiteral("displayLabel"));
        displayLabel->setWordWrap(false);

        gridLayout->addWidget(displayLabel, 4, 3, 1, 1);

        displayEdit = new QLineEdit(FontPreview);
        displayEdit->setObjectName(QStringLiteral("displayEdit"));

        gridLayout->addWidget(displayEdit, 4, 4, 1, 1);

        displayButton = new QPushButton(FontPreview);
        displayButton->setObjectName(QStringLiteral("displayButton"));

        gridLayout->addWidget(displayButton, 4, 5, 1, 1);

        resetDisplayButton = new QPushButton(FontPreview);
        resetDisplayButton->setObjectName(QStringLiteral("resetDisplayButton"));

        gridLayout->addWidget(resetDisplayButton, 4, 6, 1, 1);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        cancelButton = new QPushButton(FontPreview);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));

        hboxLayout->addWidget(cancelButton);


        gridLayout->addLayout(hboxLayout, 5, 0, 1, 7);

#ifndef QT_NO_SHORTCUT
        searchLabel->setBuddy(searchEdit);
        sizeLabel->setBuddy(sizeSpin);
#endif // QT_NO_SHORTCUT

        retranslateUi(FontPreview);

        QMetaObject::connectSlotsByName(FontPreview);
    } // setupUi

    void retranslateUi(QDialog *FontPreview)
    {
        FontPreview->setWindowTitle(QApplication::translate("FontPreview", "Fonts Preview", 0));
        searchLabel->setText(QApplication::translate("FontPreview", "&Quick Search:", 0));
        extendedCheckBox->setText(QApplication::translate("FontPreview", "Show Extended Font Information", 0));
        sizeLabel->setText(QApplication::translate("FontPreview", "&Font Size:", 0));
        displayLabel->setText(QApplication::translate("FontPreview", "Text", 0));
#ifndef QT_NO_TOOLTIP
        displayEdit->setToolTip(QApplication::translate("FontPreview", "Sample text to display", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        displayButton->setToolTip(QApplication::translate("FontPreview", "Set the preview text", 0));
#endif // QT_NO_TOOLTIP
        displayButton->setText(QApplication::translate("FontPreview", "Se&t", 0));
        displayButton->setShortcut(QApplication::translate("FontPreview", "Alt+T", 0));
#ifndef QT_NO_TOOLTIP
        resetDisplayButton->setToolTip(QApplication::translate("FontPreview", "Reset the text", 0));
#endif // QT_NO_TOOLTIP
        resetDisplayButton->setText(QApplication::translate("FontPreview", "&Default", 0));
        cancelButton->setText(QApplication::translate("FontPreview", "&Close", 0));
        cancelButton->setShortcut(QApplication::translate("FontPreview", "Alt+C", 0));
    } // retranslateUi

};

namespace Ui {
    class FontPreview: public Ui_FontPreview {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FONTPREVIEW_H
