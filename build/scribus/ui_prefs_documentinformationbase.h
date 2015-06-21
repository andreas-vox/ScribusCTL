/********************************************************************************
** Form generated from reading UI file 'prefs_documentinformationbase.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PREFS_DOCUMENTINFORMATIONBASE_H
#define UI_PREFS_DOCUMENTINFORMATIONBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Prefs_DocumentInformation
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QFrame *line;
    QTabWidget *tabWidget;
    QWidget *tabDocument;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLineEdit *titleLineEdit;
    QLabel *label_3;
    QLineEdit *authorLineEdit;
    QLabel *label_4;
    QLineEdit *subjectLineEdit;
    QLabel *label_5;
    QTextEdit *keywordsTextEdit;
    QLabel *label_6;
    QTextEdit *descriptionTextEdit;
    QWidget *tabFurtherInformation;
    QVBoxLayout *verticalLayout_3;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_2;
    QFormLayout *formLayout_2;
    QLabel *label_7;
    QLineEdit *publisherLineEdit;
    QLabel *label_8;
    QTextEdit *contributorsTextEdit;
    QLabel *label_9;
    QLineEdit *dateLineEdit;
    QLabel *label_10;
    QLineEdit *typeLineEdit;
    QLabel *label_11;
    QLineEdit *formatLineEdit;
    QLabel *label_12;
    QLineEdit *identifierLineEdit;
    QLabel *label_13;
    QLineEdit *sourceLineEdit;
    QLabel *label_14;
    QLineEdit *languageLineEdit;
    QLabel *label_15;
    QLineEdit *relationLineEdit;
    QLabel *label_16;
    QLineEdit *coverageLineEdit;
    QLabel *label_17;
    QLineEdit *rightsLineEdit;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *Prefs_DocumentInformation)
    {
        if (Prefs_DocumentInformation->objectName().isEmpty())
            Prefs_DocumentInformation->setObjectName(QStringLiteral("Prefs_DocumentInformation"));
        Prefs_DocumentInformation->resize(700, 872);
        verticalLayout = new QVBoxLayout(Prefs_DocumentInformation);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(Prefs_DocumentInformation);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        verticalLayout->addWidget(label);

        line = new QFrame(Prefs_DocumentInformation);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        tabWidget = new QTabWidget(Prefs_DocumentInformation);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabDocument = new QWidget();
        tabDocument->setObjectName(QStringLiteral("tabDocument"));
        formLayout = new QFormLayout(tabDocument);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label_2 = new QLabel(tabDocument);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        titleLineEdit = new QLineEdit(tabDocument);
        titleLineEdit->setObjectName(QStringLiteral("titleLineEdit"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(titleLineEdit->sizePolicy().hasHeightForWidth());
        titleLineEdit->setSizePolicy(sizePolicy);

        formLayout->setWidget(0, QFormLayout::FieldRole, titleLineEdit);

        label_3 = new QLabel(tabDocument);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_3);

        authorLineEdit = new QLineEdit(tabDocument);
        authorLineEdit->setObjectName(QStringLiteral("authorLineEdit"));

        formLayout->setWidget(1, QFormLayout::FieldRole, authorLineEdit);

        label_4 = new QLabel(tabDocument);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_4);

        subjectLineEdit = new QLineEdit(tabDocument);
        subjectLineEdit->setObjectName(QStringLiteral("subjectLineEdit"));

        formLayout->setWidget(2, QFormLayout::FieldRole, subjectLineEdit);

        label_5 = new QLabel(tabDocument);
        label_5->setObjectName(QStringLiteral("label_5"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_5);

        keywordsTextEdit = new QTextEdit(tabDocument);
        keywordsTextEdit->setObjectName(QStringLiteral("keywordsTextEdit"));

        formLayout->setWidget(3, QFormLayout::FieldRole, keywordsTextEdit);

        label_6 = new QLabel(tabDocument);
        label_6->setObjectName(QStringLiteral("label_6"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_6);

        descriptionTextEdit = new QTextEdit(tabDocument);
        descriptionTextEdit->setObjectName(QStringLiteral("descriptionTextEdit"));

        formLayout->setWidget(4, QFormLayout::FieldRole, descriptionTextEdit);

        tabWidget->addTab(tabDocument, QString());
        tabFurtherInformation = new QWidget();
        tabFurtherInformation->setObjectName(QStringLiteral("tabFurtherInformation"));
        verticalLayout_3 = new QVBoxLayout(tabFurtherInformation);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        scrollArea = new QScrollArea(tabFurtherInformation);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setFrameShadow(QFrame::Plain);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 630, 747));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        label_7 = new QLabel(scrollAreaWidgetContents);
        label_7->setObjectName(QStringLiteral("label_7"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_7);

        publisherLineEdit = new QLineEdit(scrollAreaWidgetContents);
        publisherLineEdit->setObjectName(QStringLiteral("publisherLineEdit"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, publisherLineEdit);

        label_8 = new QLabel(scrollAreaWidgetContents);
        label_8->setObjectName(QStringLiteral("label_8"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_8);

        contributorsTextEdit = new QTextEdit(scrollAreaWidgetContents);
        contributorsTextEdit->setObjectName(QStringLiteral("contributorsTextEdit"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, contributorsTextEdit);

        label_9 = new QLabel(scrollAreaWidgetContents);
        label_9->setObjectName(QStringLiteral("label_9"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_9);

        dateLineEdit = new QLineEdit(scrollAreaWidgetContents);
        dateLineEdit->setObjectName(QStringLiteral("dateLineEdit"));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, dateLineEdit);

        label_10 = new QLabel(scrollAreaWidgetContents);
        label_10->setObjectName(QStringLiteral("label_10"));

        formLayout_2->setWidget(3, QFormLayout::LabelRole, label_10);

        typeLineEdit = new QLineEdit(scrollAreaWidgetContents);
        typeLineEdit->setObjectName(QStringLiteral("typeLineEdit"));

        formLayout_2->setWidget(3, QFormLayout::FieldRole, typeLineEdit);

        label_11 = new QLabel(scrollAreaWidgetContents);
        label_11->setObjectName(QStringLiteral("label_11"));

        formLayout_2->setWidget(4, QFormLayout::LabelRole, label_11);

        formatLineEdit = new QLineEdit(scrollAreaWidgetContents);
        formatLineEdit->setObjectName(QStringLiteral("formatLineEdit"));

        formLayout_2->setWidget(4, QFormLayout::FieldRole, formatLineEdit);

        label_12 = new QLabel(scrollAreaWidgetContents);
        label_12->setObjectName(QStringLiteral("label_12"));

        formLayout_2->setWidget(5, QFormLayout::LabelRole, label_12);

        identifierLineEdit = new QLineEdit(scrollAreaWidgetContents);
        identifierLineEdit->setObjectName(QStringLiteral("identifierLineEdit"));

        formLayout_2->setWidget(5, QFormLayout::FieldRole, identifierLineEdit);

        label_13 = new QLabel(scrollAreaWidgetContents);
        label_13->setObjectName(QStringLiteral("label_13"));

        formLayout_2->setWidget(6, QFormLayout::LabelRole, label_13);

        sourceLineEdit = new QLineEdit(scrollAreaWidgetContents);
        sourceLineEdit->setObjectName(QStringLiteral("sourceLineEdit"));

        formLayout_2->setWidget(6, QFormLayout::FieldRole, sourceLineEdit);

        label_14 = new QLabel(scrollAreaWidgetContents);
        label_14->setObjectName(QStringLiteral("label_14"));

        formLayout_2->setWidget(7, QFormLayout::LabelRole, label_14);

        languageLineEdit = new QLineEdit(scrollAreaWidgetContents);
        languageLineEdit->setObjectName(QStringLiteral("languageLineEdit"));

        formLayout_2->setWidget(7, QFormLayout::FieldRole, languageLineEdit);

        label_15 = new QLabel(scrollAreaWidgetContents);
        label_15->setObjectName(QStringLiteral("label_15"));

        formLayout_2->setWidget(8, QFormLayout::LabelRole, label_15);

        relationLineEdit = new QLineEdit(scrollAreaWidgetContents);
        relationLineEdit->setObjectName(QStringLiteral("relationLineEdit"));

        formLayout_2->setWidget(8, QFormLayout::FieldRole, relationLineEdit);

        label_16 = new QLabel(scrollAreaWidgetContents);
        label_16->setObjectName(QStringLiteral("label_16"));

        formLayout_2->setWidget(9, QFormLayout::LabelRole, label_16);

        coverageLineEdit = new QLineEdit(scrollAreaWidgetContents);
        coverageLineEdit->setObjectName(QStringLiteral("coverageLineEdit"));

        formLayout_2->setWidget(9, QFormLayout::FieldRole, coverageLineEdit);

        label_17 = new QLabel(scrollAreaWidgetContents);
        label_17->setObjectName(QStringLiteral("label_17"));

        formLayout_2->setWidget(10, QFormLayout::LabelRole, label_17);

        rightsLineEdit = new QLineEdit(scrollAreaWidgetContents);
        rightsLineEdit->setObjectName(QStringLiteral("rightsLineEdit"));

        formLayout_2->setWidget(10, QFormLayout::FieldRole, rightsLineEdit);


        verticalLayout_2->addLayout(formLayout_2);

        verticalSpacer = new QSpacerItem(20, 192, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_3->addWidget(scrollArea);

        tabWidget->addTab(tabFurtherInformation, QString());

        verticalLayout->addWidget(tabWidget);


        retranslateUi(Prefs_DocumentInformation);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Prefs_DocumentInformation);
    } // setupUi

    void retranslateUi(QWidget *Prefs_DocumentInformation)
    {
        Prefs_DocumentInformation->setWindowTitle(QApplication::translate("Prefs_DocumentInformation", "Form", 0));
        label->setText(QApplication::translate("Prefs_DocumentInformation", "Document Information", 0));
        label_2->setText(QApplication::translate("Prefs_DocumentInformation", "Title:", 0));
        label_3->setText(QApplication::translate("Prefs_DocumentInformation", "Author:", 0));
        label_4->setText(QApplication::translate("Prefs_DocumentInformation", "Subject:", 0));
        label_5->setText(QApplication::translate("Prefs_DocumentInformation", "Keywords:", 0));
        label_6->setText(QApplication::translate("Prefs_DocumentInformation", "Description:", 0));
        tabWidget->setTabText(tabWidget->indexOf(tabDocument), QApplication::translate("Prefs_DocumentInformation", "Document", 0));
        label_7->setText(QApplication::translate("Prefs_DocumentInformation", "Publisher:", 0));
        label_8->setText(QApplication::translate("Prefs_DocumentInformation", "Contributors:", 0));
        label_9->setText(QApplication::translate("Prefs_DocumentInformation", "Date:", 0));
        label_10->setText(QApplication::translate("Prefs_DocumentInformation", "Type:", 0));
        label_11->setText(QApplication::translate("Prefs_DocumentInformation", "Format:", 0));
        label_12->setText(QApplication::translate("Prefs_DocumentInformation", "Identifier:", 0));
        label_13->setText(QApplication::translate("Prefs_DocumentInformation", "Source:", 0));
        label_14->setText(QApplication::translate("Prefs_DocumentInformation", "Language:", 0));
        label_15->setText(QApplication::translate("Prefs_DocumentInformation", "Relation:", 0));
        label_16->setText(QApplication::translate("Prefs_DocumentInformation", "Coverage:", 0));
        label_17->setText(QApplication::translate("Prefs_DocumentInformation", "Rights:", 0));
        tabWidget->setTabText(tabWidget->indexOf(tabFurtherInformation), QApplication::translate("Prefs_DocumentInformation", "Further Information", 0));
    } // retranslateUi

};

namespace Ui {
    class Prefs_DocumentInformation: public Ui_Prefs_DocumentInformation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PREFS_DOCUMENTINFORMATIONBASE_H
