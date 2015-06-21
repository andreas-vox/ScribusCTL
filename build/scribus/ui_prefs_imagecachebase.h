/********************************************************************************
** Form generated from reading UI file 'prefs_imagecachebase.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PREFS_IMAGECACHEBASE_H
#define UI_PREFS_IMAGECACHEBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Prefs_ImageCache
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QFrame *line;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *enableImageCacheCheckBox;
    QFormLayout *formLayout;
    QLabel *cacheSizeLimitLabel;
    QSpinBox *cacheSizeLimitSpinBox;
    QLabel *cacheEntryLimitLabel;
    QSpinBox *cacheEntryLimitSpinBox;
    QLabel *compressionLevelLabel;
    QSpinBox *compressionLevelSpinBox;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *Prefs_ImageCache)
    {
        if (Prefs_ImageCache->objectName().isEmpty())
            Prefs_ImageCache->setObjectName(QStringLiteral("Prefs_ImageCache"));
        Prefs_ImageCache->resize(582, 277);
        verticalLayout = new QVBoxLayout(Prefs_ImageCache);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(Prefs_ImageCache);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        verticalLayout->addWidget(label);

        line = new QFrame(Prefs_ImageCache);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        scrollArea = new QScrollArea(Prefs_ImageCache);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 554, 207));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        enableImageCacheCheckBox = new QCheckBox(scrollAreaWidgetContents);
        enableImageCacheCheckBox->setObjectName(QStringLiteral("enableImageCacheCheckBox"));

        verticalLayout_2->addWidget(enableImageCacheCheckBox);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setFormAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        cacheSizeLimitLabel = new QLabel(scrollAreaWidgetContents);
        cacheSizeLimitLabel->setObjectName(QStringLiteral("cacheSizeLimitLabel"));
        cacheSizeLimitLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        cacheSizeLimitLabel->setWordWrap(false);

        formLayout->setWidget(0, QFormLayout::LabelRole, cacheSizeLimitLabel);

        cacheSizeLimitSpinBox = new QSpinBox(scrollAreaWidgetContents);
        cacheSizeLimitSpinBox->setObjectName(QStringLiteral("cacheSizeLimitSpinBox"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(cacheSizeLimitSpinBox->sizePolicy().hasHeightForWidth());
        cacheSizeLimitSpinBox->setSizePolicy(sizePolicy);
        cacheSizeLimitSpinBox->setMinimumSize(QSize(100, 0));
        cacheSizeLimitSpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        cacheSizeLimitSpinBox->setButtonSymbols(QAbstractSpinBox::UpDownArrows);
        cacheSizeLimitSpinBox->setMinimum(100);
        cacheSizeLimitSpinBox->setMaximum(1000000);
        cacheSizeLimitSpinBox->setSingleStep(100);
        cacheSizeLimitSpinBox->setValue(1000);

        formLayout->setWidget(0, QFormLayout::FieldRole, cacheSizeLimitSpinBox);

        cacheEntryLimitLabel = new QLabel(scrollAreaWidgetContents);
        cacheEntryLimitLabel->setObjectName(QStringLiteral("cacheEntryLimitLabel"));
        cacheEntryLimitLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        cacheEntryLimitLabel->setWordWrap(false);

        formLayout->setWidget(1, QFormLayout::LabelRole, cacheEntryLimitLabel);

        cacheEntryLimitSpinBox = new QSpinBox(scrollAreaWidgetContents);
        cacheEntryLimitSpinBox->setObjectName(QStringLiteral("cacheEntryLimitSpinBox"));
        sizePolicy.setHeightForWidth(cacheEntryLimitSpinBox->sizePolicy().hasHeightForWidth());
        cacheEntryLimitSpinBox->setSizePolicy(sizePolicy);
        cacheEntryLimitSpinBox->setMinimumSize(QSize(100, 0));
        cacheEntryLimitSpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        cacheEntryLimitSpinBox->setMinimum(100);
        cacheEntryLimitSpinBox->setMaximum(100000);
        cacheEntryLimitSpinBox->setSingleStep(100);
        cacheEntryLimitSpinBox->setValue(1000);

        formLayout->setWidget(1, QFormLayout::FieldRole, cacheEntryLimitSpinBox);

        compressionLevelLabel = new QLabel(scrollAreaWidgetContents);
        compressionLevelLabel->setObjectName(QStringLiteral("compressionLevelLabel"));
        compressionLevelLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(2, QFormLayout::LabelRole, compressionLevelLabel);

        compressionLevelSpinBox = new QSpinBox(scrollAreaWidgetContents);
        compressionLevelSpinBox->setObjectName(QStringLiteral("compressionLevelSpinBox"));
        sizePolicy.setHeightForWidth(compressionLevelSpinBox->sizePolicy().hasHeightForWidth());
        compressionLevelSpinBox->setSizePolicy(sizePolicy);
        compressionLevelSpinBox->setMinimumSize(QSize(100, 0));
        compressionLevelSpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        compressionLevelSpinBox->setMinimum(0);
        compressionLevelSpinBox->setMaximum(9);
        compressionLevelSpinBox->setValue(6);

        formLayout->setWidget(2, QFormLayout::FieldRole, compressionLevelSpinBox);


        verticalLayout_2->addLayout(formLayout);

        verticalSpacer = new QSpacerItem(20, 27, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);

        QWidget::setTabOrder(scrollArea, enableImageCacheCheckBox);
        QWidget::setTabOrder(enableImageCacheCheckBox, cacheSizeLimitSpinBox);
        QWidget::setTabOrder(cacheSizeLimitSpinBox, cacheEntryLimitSpinBox);

        retranslateUi(Prefs_ImageCache);

        QMetaObject::connectSlotsByName(Prefs_ImageCache);
    } // setupUi

    void retranslateUi(QWidget *Prefs_ImageCache)
    {
        Prefs_ImageCache->setWindowTitle(QApplication::translate("Prefs_ImageCache", "Form", 0));
        label->setText(QApplication::translate("Prefs_ImageCache", "Image Cache", 0));
        enableImageCacheCheckBox->setText(QApplication::translate("Prefs_ImageCache", "Enable Image Cache", 0));
        cacheSizeLimitLabel->setText(QApplication::translate("Prefs_ImageCache", "Cache Size Limit:", 0));
        cacheSizeLimitSpinBox->setSuffix(QApplication::translate("Prefs_ImageCache", " Mb", 0));
        cacheEntryLimitLabel->setText(QApplication::translate("Prefs_ImageCache", "Cache Entry Limit:", 0));
        compressionLevelLabel->setText(QApplication::translate("Prefs_ImageCache", "Compression Level:", 0));
    } // retranslateUi

};

namespace Ui {
    class Prefs_ImageCache: public Ui_Prefs_ImageCache {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PREFS_IMAGECACHEBASE_H
