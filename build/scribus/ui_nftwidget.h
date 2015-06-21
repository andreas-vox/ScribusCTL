/********************************************************************************
** Form generated from reading UI file 'nftwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NFTWIDGET_H
#define UI_NFTWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_nftwidget
{
public:
    QHBoxLayout *horizontalLayout;
    QListWidget *categoryList;
    QListWidget *tnailGrid;
    QToolBox *toolBox;
    QWidget *aboutPage;
    QGridLayout *gridLayout;
    QTextBrowser *textBrowser;
    QWidget *previewPage;
    QGridLayout *_2;
    QListWidget *imageView;
    QWidget *helpPage;
    QGridLayout *_3;
    QTextBrowser *helpBrowser;

    void setupUi(QWidget *nftwidget)
    {
        if (nftwidget->objectName().isEmpty())
            nftwidget->setObjectName(QStringLiteral("nftwidget"));
        nftwidget->resize(628, 313);
        horizontalLayout = new QHBoxLayout(nftwidget);
        horizontalLayout->setSpacing(5);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        categoryList = new QListWidget(nftwidget);
        categoryList->setObjectName(QStringLiteral("categoryList"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(categoryList->sizePolicy().hasHeightForWidth());
        categoryList->setSizePolicy(sizePolicy);
        categoryList->setMinimumSize(QSize(130, 200));
        categoryList->setMaximumSize(QSize(140, 16777215));

        horizontalLayout->addWidget(categoryList);

        tnailGrid = new QListWidget(nftwidget);
        tnailGrid->setObjectName(QStringLiteral("tnailGrid"));
        tnailGrid->setMinimumSize(QSize(250, 0));
        tnailGrid->setContextMenuPolicy(Qt::ActionsContextMenu);
        tnailGrid->setSpacing(5);
        tnailGrid->setViewMode(QListView::IconMode);

        horizontalLayout->addWidget(tnailGrid);

        toolBox = new QToolBox(nftwidget);
        toolBox->setObjectName(QStringLiteral("toolBox"));
        toolBox->setMinimumSize(QSize(220, 16));
        aboutPage = new QWidget();
        aboutPage->setObjectName(QStringLiteral("aboutPage"));
        aboutPage->setGeometry(QRect(0, 0, 220, 202));
        gridLayout = new QGridLayout(aboutPage);
#ifndef Q_OS_MAC
        gridLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        textBrowser = new QTextBrowser(aboutPage);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));

        gridLayout->addWidget(textBrowser, 0, 0, 1, 1);

        toolBox->addItem(aboutPage, QStringLiteral("&About"));
        previewPage = new QWidget();
        previewPage->setObjectName(QStringLiteral("previewPage"));
        previewPage->setGeometry(QRect(0, 0, 112, 112));
        _2 = new QGridLayout(previewPage);
#ifndef Q_OS_MAC
        _2->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        _2->setContentsMargins(9, 9, 9, 9);
#endif
        _2->setObjectName(QStringLiteral("_2"));
        imageView = new QListWidget(previewPage);
        imageView->setObjectName(QStringLiteral("imageView"));
        imageView->setViewMode(QListView::IconMode);

        _2->addWidget(imageView, 0, 0, 1, 1);

        toolBox->addItem(previewPage, QStringLiteral("&Preview"));
        helpPage = new QWidget();
        helpPage->setObjectName(QStringLiteral("helpPage"));
        helpPage->setGeometry(QRect(0, 0, 112, 112));
        _3 = new QGridLayout(helpPage);
#ifndef Q_OS_MAC
        _3->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        _3->setContentsMargins(9, 9, 9, 9);
#endif
        _3->setObjectName(QStringLiteral("_3"));
        helpBrowser = new QTextBrowser(helpPage);
        helpBrowser->setObjectName(QStringLiteral("helpBrowser"));

        _3->addWidget(helpBrowser, 0, 0, 1, 1);

        toolBox->addItem(helpPage, QStringLiteral("&Help"));

        horizontalLayout->addWidget(toolBox);


        retranslateUi(nftwidget);

        toolBox->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(nftwidget);
    } // setupUi

    void retranslateUi(QWidget *nftwidget)
    {
        nftwidget->setWindowTitle(QApplication::translate("nftwidget", "Form", 0));
        toolBox->setItemText(toolBox->indexOf(aboutPage), QApplication::translate("nftwidget", "&About", 0));
        toolBox->setItemText(toolBox->indexOf(previewPage), QApplication::translate("nftwidget", "&Preview", 0));
        toolBox->setItemText(toolBox->indexOf(helpPage), QApplication::translate("nftwidget", "&Help", 0));
    } // retranslateUi

};

namespace Ui {
    class nftwidget: public Ui_nftwidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NFTWIDGET_H
