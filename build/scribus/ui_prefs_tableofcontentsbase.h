/********************************************************************************
** Form generated from reading UI file 'prefs_tableofcontentsbase.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PREFS_TABLEOFCONTENTSBASE_H
#define UI_PREFS_TABLEOFCONTENTSBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Prefs_TableOfContents
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QFrame *line;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_2;
    QListWidget *tocListBox;
    QLineEdit *tocNameLineEdit;
    QHBoxLayout *_2;
    QPushButton *tocAddButton;
    QPushButton *tocDeleteButton;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_2;
    QFrame *line_2;
    QFormLayout *formLayout;
    QLabel *tocItemAttrLabel;
    QComboBox *itemAttrComboBox;
    QLabel *tocDestFrameLabel;
    QComboBox *itemDestFrameComboBox;
    QLabel *tocNumberPlacementLabel;
    QComboBox *itemNumberPlacementComboBox;
    QLabel *tocParagraphStyleLabel;
    QComboBox *itemParagraphStyleComboBox;
    QCheckBox *itemListNonPrintingCheckBox;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *Prefs_TableOfContents)
    {
        if (Prefs_TableOfContents->objectName().isEmpty())
            Prefs_TableOfContents->setObjectName(QStringLiteral("Prefs_TableOfContents"));
        Prefs_TableOfContents->resize(523, 607);
        verticalLayout = new QVBoxLayout(Prefs_TableOfContents);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(Prefs_TableOfContents);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        verticalLayout->addWidget(label);

        line = new QFrame(Prefs_TableOfContents);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        scrollArea = new QScrollArea(Prefs_TableOfContents);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 495, 536));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        tocListBox = new QListWidget(scrollAreaWidgetContents);
        tocListBox->setObjectName(QStringLiteral("tocListBox"));

        verticalLayout_2->addWidget(tocListBox);

        tocNameLineEdit = new QLineEdit(scrollAreaWidgetContents);
        tocNameLineEdit->setObjectName(QStringLiteral("tocNameLineEdit"));

        verticalLayout_2->addWidget(tocNameLineEdit);

        _2 = new QHBoxLayout();
        _2->setObjectName(QStringLiteral("_2"));
        tocAddButton = new QPushButton(scrollAreaWidgetContents);
        tocAddButton->setObjectName(QStringLiteral("tocAddButton"));

        _2->addWidget(tocAddButton);

        tocDeleteButton = new QPushButton(scrollAreaWidgetContents);
        tocDeleteButton->setObjectName(QStringLiteral("tocDeleteButton"));

        _2->addWidget(tocDeleteButton);


        verticalLayout_2->addLayout(_2);

        verticalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_2);

        label_2 = new QLabel(scrollAreaWidgetContents);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        label_2->setFont(font1);

        verticalLayout_2->addWidget(label_2);

        line_2 = new QFrame(scrollAreaWidgetContents);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line_2);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setFormAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        tocItemAttrLabel = new QLabel(scrollAreaWidgetContents);
        tocItemAttrLabel->setObjectName(QStringLiteral("tocItemAttrLabel"));
        tocItemAttrLabel->setWordWrap(false);

        formLayout->setWidget(0, QFormLayout::LabelRole, tocItemAttrLabel);

        itemAttrComboBox = new QComboBox(scrollAreaWidgetContents);
        itemAttrComboBox->setObjectName(QStringLiteral("itemAttrComboBox"));

        formLayout->setWidget(0, QFormLayout::FieldRole, itemAttrComboBox);

        tocDestFrameLabel = new QLabel(scrollAreaWidgetContents);
        tocDestFrameLabel->setObjectName(QStringLiteral("tocDestFrameLabel"));
        tocDestFrameLabel->setWordWrap(false);

        formLayout->setWidget(1, QFormLayout::LabelRole, tocDestFrameLabel);

        itemDestFrameComboBox = new QComboBox(scrollAreaWidgetContents);
        itemDestFrameComboBox->setObjectName(QStringLiteral("itemDestFrameComboBox"));

        formLayout->setWidget(1, QFormLayout::FieldRole, itemDestFrameComboBox);

        tocNumberPlacementLabel = new QLabel(scrollAreaWidgetContents);
        tocNumberPlacementLabel->setObjectName(QStringLiteral("tocNumberPlacementLabel"));
        tocNumberPlacementLabel->setWordWrap(false);

        formLayout->setWidget(2, QFormLayout::LabelRole, tocNumberPlacementLabel);

        itemNumberPlacementComboBox = new QComboBox(scrollAreaWidgetContents);
        itemNumberPlacementComboBox->setObjectName(QStringLiteral("itemNumberPlacementComboBox"));

        formLayout->setWidget(2, QFormLayout::FieldRole, itemNumberPlacementComboBox);

        tocParagraphStyleLabel = new QLabel(scrollAreaWidgetContents);
        tocParagraphStyleLabel->setObjectName(QStringLiteral("tocParagraphStyleLabel"));
        tocParagraphStyleLabel->setWordWrap(false);

        formLayout->setWidget(3, QFormLayout::LabelRole, tocParagraphStyleLabel);

        itemParagraphStyleComboBox = new QComboBox(scrollAreaWidgetContents);
        itemParagraphStyleComboBox->setObjectName(QStringLiteral("itemParagraphStyleComboBox"));

        formLayout->setWidget(3, QFormLayout::FieldRole, itemParagraphStyleComboBox);

        itemListNonPrintingCheckBox = new QCheckBox(scrollAreaWidgetContents);
        itemListNonPrintingCheckBox->setObjectName(QStringLiteral("itemListNonPrintingCheckBox"));

        formLayout->setWidget(4, QFormLayout::SpanningRole, itemListNonPrintingCheckBox);


        verticalLayout_2->addLayout(formLayout);

        verticalSpacer = new QSpacerItem(20, 93, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);


        retranslateUi(Prefs_TableOfContents);

        QMetaObject::connectSlotsByName(Prefs_TableOfContents);
    } // setupUi

    void retranslateUi(QWidget *Prefs_TableOfContents)
    {
        Prefs_TableOfContents->setWindowTitle(QApplication::translate("Prefs_TableOfContents", "Form", 0));
        label->setText(QApplication::translate("Prefs_TableOfContents", "Table of Contents", 0));
        tocAddButton->setText(QApplication::translate("Prefs_TableOfContents", "&Add", 0));
        tocAddButton->setShortcut(QApplication::translate("Prefs_TableOfContents", "Alt+A", 0));
        tocDeleteButton->setText(QApplication::translate("Prefs_TableOfContents", "&Delete", 0));
        tocDeleteButton->setShortcut(QApplication::translate("Prefs_TableOfContents", "Alt+D", 0));
        label_2->setText(QApplication::translate("Prefs_TableOfContents", "Properties", 0));
        tocItemAttrLabel->setText(QApplication::translate("Prefs_TableOfContents", "Item Attribute Name:", 0));
#ifndef QT_NO_TOOLTIP
        itemAttrComboBox->setToolTip(QApplication::translate("Prefs_TableOfContents", "The Item Attribute that will be set on frames used as a basis for creation of the entries", 0));
#endif // QT_NO_TOOLTIP
        tocDestFrameLabel->setText(QApplication::translate("Prefs_TableOfContents", "Destination Frame:", 0));
#ifndef QT_NO_TOOLTIP
        itemDestFrameComboBox->setToolTip(QApplication::translate("Prefs_TableOfContents", "The frame the table of contents will be placed into", 0));
#endif // QT_NO_TOOLTIP
        tocNumberPlacementLabel->setText(QApplication::translate("Prefs_TableOfContents", "Page Number Placement:", 0));
#ifndef QT_NO_TOOLTIP
        itemNumberPlacementComboBox->setToolTip(QApplication::translate("Prefs_TableOfContents", "Place page numbers of the entries at the beginning or the end of the line, or not at all", 0));
#endif // QT_NO_TOOLTIP
        tocParagraphStyleLabel->setText(QApplication::translate("Prefs_TableOfContents", "Paragraph Style:", 0));
#ifndef QT_NO_TOOLTIP
        itemParagraphStyleComboBox->setToolTip(QApplication::translate("Prefs_TableOfContents", "The paragraph style used for the entry lines", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        itemListNonPrintingCheckBox->setToolTip(QApplication::translate("Prefs_TableOfContents", "Include frames that are set to not print as well", 0));
#endif // QT_NO_TOOLTIP
        itemListNonPrintingCheckBox->setText(QApplication::translate("Prefs_TableOfContents", "List Non-Printing Entries", 0));
    } // retranslateUi

};

namespace Ui {
    class Prefs_TableOfContents: public Ui_Prefs_TableOfContents {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PREFS_TABLEOFCONTENTSBASE_H
