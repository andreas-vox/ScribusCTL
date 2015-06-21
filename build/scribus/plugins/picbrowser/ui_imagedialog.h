/********************************************************************************
** Form generated from reading UI file 'imagedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IMAGEDIALOG_H
#define UI_IMAGEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include "iview.h"

QT_BEGIN_NAMESPACE

class Ui_imagedialog
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *hboxLayout;
    QRadioButton *fitToWindowRadiobutton;
    QSpacerItem *spacerItem;
    QRadioButton *zoomRadiobutton;
    QSpinBox *zoomSpinbox;
    QSpacerItem *spacerItem1;
    QPushButton *showOriginalSizeButton;
    IView *pView;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;

    void setupUi(QDialog *imagedialog)
    {
        if (imagedialog->objectName().isEmpty())
            imagedialog->setObjectName(QStringLiteral("imagedialog"));
        imagedialog->resize(470, 316);
        gridLayout = new QGridLayout(imagedialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(8);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        fitToWindowRadiobutton = new QRadioButton(imagedialog);
        fitToWindowRadiobutton->setObjectName(QStringLiteral("fitToWindowRadiobutton"));
        fitToWindowRadiobutton->setChecked(true);

        hboxLayout->addWidget(fitToWindowRadiobutton);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        zoomRadiobutton = new QRadioButton(imagedialog);
        zoomRadiobutton->setObjectName(QStringLiteral("zoomRadiobutton"));

        hboxLayout->addWidget(zoomRadiobutton);

        zoomSpinbox = new QSpinBox(imagedialog);
        zoomSpinbox->setObjectName(QStringLiteral("zoomSpinbox"));
        zoomSpinbox->setEnabled(false);
        zoomSpinbox->setMinimum(1);
        zoomSpinbox->setMaximum(60000);
        zoomSpinbox->setValue(100);

        hboxLayout->addWidget(zoomSpinbox);

        spacerItem1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem1);

        showOriginalSizeButton = new QPushButton(imagedialog);
        showOriginalSizeButton->setObjectName(QStringLiteral("showOriginalSizeButton"));

        hboxLayout->addWidget(showOriginalSizeButton);


        gridLayout->addLayout(hboxLayout, 0, 0, 1, 2);

        pView = new IView(imagedialog);
        pView->setObjectName(QStringLiteral("pView"));

        gridLayout->addWidget(pView, 1, 0, 1, 2);

        horizontalSpacer = new QSpacerItem(387, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 0, 1, 1);

        pushButton = new QPushButton(imagedialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout->addWidget(pushButton, 2, 1, 1, 1);


        retranslateUi(imagedialog);
        QObject::connect(pushButton, SIGNAL(clicked()), imagedialog, SLOT(close()));

        QMetaObject::connectSlotsByName(imagedialog);
    } // setupUi

    void retranslateUi(QDialog *imagedialog)
    {
        imagedialog->setWindowTitle(QApplication::translate("imagedialog", "Dialog", 0));
        fitToWindowRadiobutton->setText(QApplication::translate("imagedialog", "Fit to Window", 0));
        zoomRadiobutton->setText(QApplication::translate("imagedialog", "Custom Zoom", 0));
#ifndef QT_NO_TOOLTIP
        zoomSpinbox->setToolTip(QApplication::translate("imagedialog", "Current zoom level", 0));
#endif // QT_NO_TOOLTIP
        zoomSpinbox->setSuffix(QApplication::translate("imagedialog", "%", 0));
#ifndef QT_NO_TOOLTIP
        showOriginalSizeButton->setToolTip(QApplication::translate("imagedialog", "Set zoom to 100%", 0));
#endif // QT_NO_TOOLTIP
        showOriginalSizeButton->setText(QApplication::translate("imagedialog", "Original Size", 0));
        pushButton->setText(QApplication::translate("imagedialog", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class imagedialog: public Ui_imagedialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMAGEDIALOG_H
