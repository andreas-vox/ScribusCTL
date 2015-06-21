/********************************************************************************
** Form generated from reading UI file 'smreplacedia.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SMREPLACEDIA_H
#define UI_SMREPLACEDIA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SMReplaceDia
{
public:
    QVBoxLayout *vboxLayout;
    QFrame *mainFrame;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QPushButton *buttonOk;
    QPushButton *buttonCancel;

    void setupUi(QDialog *SMReplaceDia)
    {
        if (SMReplaceDia->objectName().isEmpty())
            SMReplaceDia->setObjectName(QStringLiteral("SMReplaceDia"));
        SMReplaceDia->resize(235, 271);
        SMReplaceDia->setSizeGripEnabled(false);
        vboxLayout = new QVBoxLayout(SMReplaceDia);
        vboxLayout->setSpacing(5);
        vboxLayout->setContentsMargins(5, 5, 5, 5);
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        mainFrame = new QFrame(SMReplaceDia);
        mainFrame->setObjectName(QStringLiteral("mainFrame"));
        mainFrame->setFrameShape(QFrame::NoFrame);
        mainFrame->setFrameShadow(QFrame::Plain);
        mainFrame->setLineWidth(0);

        vboxLayout->addWidget(mainFrame);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        spacerItem = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        buttonOk = new QPushButton(SMReplaceDia);
        buttonOk->setObjectName(QStringLiteral("buttonOk"));
        buttonOk->setAutoDefault(true);
        buttonOk->setDefault(true);

        hboxLayout->addWidget(buttonOk);

        buttonCancel = new QPushButton(SMReplaceDia);
        buttonCancel->setObjectName(QStringLiteral("buttonCancel"));
        buttonCancel->setAutoDefault(true);

        hboxLayout->addWidget(buttonCancel);


        vboxLayout->addLayout(hboxLayout);


        retranslateUi(SMReplaceDia);
        QObject::connect(buttonOk, SIGNAL(clicked()), SMReplaceDia, SLOT(accept()));
        QObject::connect(buttonCancel, SIGNAL(clicked()), SMReplaceDia, SLOT(reject()));

        QMetaObject::connectSlotsByName(SMReplaceDia);
    } // setupUi

    void retranslateUi(QDialog *SMReplaceDia)
    {
        SMReplaceDia->setWindowTitle(QApplication::translate("SMReplaceDia", "Delete Styles", 0));
        buttonOk->setText(QApplication::translate("SMReplaceDia", "&OK", 0));
        buttonOk->setShortcut(QString());
        buttonCancel->setText(QApplication::translate("SMReplaceDia", "Ca&ncel", 0));
        buttonCancel->setShortcut(QApplication::translate("SMReplaceDia", "Alt+N", 0));
    } // retranslateUi

};

namespace Ui {
    class SMReplaceDia: public Ui_SMReplaceDia {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SMREPLACEDIA_H
