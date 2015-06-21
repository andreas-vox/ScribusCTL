/********************************************************************************
** Form generated from reading UI file 'propertywidget_advancedbase.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROPERTYWIDGET_ADVANCEDBASE_H
#define UI_PROPERTYWIDGET_ADVANCEDBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include "ui/scrspinbox.h"

QT_BEGIN_NAMESPACE

class Ui_PropertyWidget_AdvancedBase
{
public:
    QGridLayout *gridLayout;
    QLabel *textBaseLabel;
    ScrSpinBox *textBase;
    QLabel *trackingLabel;
    ScrSpinBox *tracking;
    QLabel *scaleHLabel;
    ScrSpinBox *scaleH;
    QLabel *scaleVLabel;
    ScrSpinBox *scaleV;
    QLabel *wordTrackingLabel;
    QLabel *minWordTrackingLabel;
    ScrSpinBox *minWordTrackingSpinBox;
    ScrSpinBox *normWordTrackingSpinBox;
    QLabel *normWordTrackingLabel;
    QLabel *glyphExtensionLabel;
    QLabel *minGlyphExtensionLabel;
    ScrSpinBox *minGlyphExtSpinBox;
    ScrSpinBox *maxGlyphExtSpinBox;
    QLabel *maxGlyphExtensionLabel;

    void setupUi(QFrame *PropertyWidget_AdvancedBase)
    {
        if (PropertyWidget_AdvancedBase->objectName().isEmpty())
            PropertyWidget_AdvancedBase->setObjectName(QStringLiteral("PropertyWidget_AdvancedBase"));
        PropertyWidget_AdvancedBase->resize(239, 155);
        PropertyWidget_AdvancedBase->setFrameShape(QFrame::StyledPanel);
        PropertyWidget_AdvancedBase->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(PropertyWidget_AdvancedBase);
        gridLayout->setSpacing(3);
        gridLayout->setContentsMargins(3, 3, 3, 3);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        textBaseLabel = new QLabel(PropertyWidget_AdvancedBase);
        textBaseLabel->setObjectName(QStringLiteral("textBaseLabel"));

        gridLayout->addWidget(textBaseLabel, 0, 0, 1, 1);

        textBase = new ScrSpinBox(PropertyWidget_AdvancedBase);
        textBase->setObjectName(QStringLiteral("textBase"));
        textBase->setMinimum(-100);
        textBase->setMaximum(100);

        gridLayout->addWidget(textBase, 0, 1, 1, 1);

        trackingLabel = new QLabel(PropertyWidget_AdvancedBase);
        trackingLabel->setObjectName(QStringLiteral("trackingLabel"));

        gridLayout->addWidget(trackingLabel, 0, 2, 1, 1);

        tracking = new ScrSpinBox(PropertyWidget_AdvancedBase);
        tracking->setObjectName(QStringLiteral("tracking"));

        gridLayout->addWidget(tracking, 0, 3, 1, 1);

        scaleHLabel = new QLabel(PropertyWidget_AdvancedBase);
        scaleHLabel->setObjectName(QStringLiteral("scaleHLabel"));

        gridLayout->addWidget(scaleHLabel, 1, 0, 1, 1);

        scaleH = new ScrSpinBox(PropertyWidget_AdvancedBase);
        scaleH->setObjectName(QStringLiteral("scaleH"));

        gridLayout->addWidget(scaleH, 1, 1, 1, 1);

        scaleVLabel = new QLabel(PropertyWidget_AdvancedBase);
        scaleVLabel->setObjectName(QStringLiteral("scaleVLabel"));

        gridLayout->addWidget(scaleVLabel, 1, 2, 1, 1);

        scaleV = new ScrSpinBox(PropertyWidget_AdvancedBase);
        scaleV->setObjectName(QStringLiteral("scaleV"));

        gridLayout->addWidget(scaleV, 1, 3, 1, 1);

        wordTrackingLabel = new QLabel(PropertyWidget_AdvancedBase);
        wordTrackingLabel->setObjectName(QStringLiteral("wordTrackingLabel"));

        gridLayout->addWidget(wordTrackingLabel, 2, 0, 1, 2);

        minWordTrackingLabel = new QLabel(PropertyWidget_AdvancedBase);
        minWordTrackingLabel->setObjectName(QStringLiteral("minWordTrackingLabel"));

        gridLayout->addWidget(minWordTrackingLabel, 3, 0, 1, 1);

        minWordTrackingSpinBox = new ScrSpinBox(PropertyWidget_AdvancedBase);
        minWordTrackingSpinBox->setObjectName(QStringLiteral("minWordTrackingSpinBox"));
        minWordTrackingSpinBox->setMinimum(1);
        minWordTrackingSpinBox->setMaximum(200);
        minWordTrackingSpinBox->setValue(100);

        gridLayout->addWidget(minWordTrackingSpinBox, 3, 1, 1, 1);

        normWordTrackingSpinBox = new ScrSpinBox(PropertyWidget_AdvancedBase);
        normWordTrackingSpinBox->setObjectName(QStringLiteral("normWordTrackingSpinBox"));
        normWordTrackingSpinBox->setMinimum(1);
        normWordTrackingSpinBox->setMaximum(2000);
        normWordTrackingSpinBox->setValue(100);

        gridLayout->addWidget(normWordTrackingSpinBox, 3, 3, 1, 1);

        normWordTrackingLabel = new QLabel(PropertyWidget_AdvancedBase);
        normWordTrackingLabel->setObjectName(QStringLiteral("normWordTrackingLabel"));

        gridLayout->addWidget(normWordTrackingLabel, 3, 2, 1, 1);

        glyphExtensionLabel = new QLabel(PropertyWidget_AdvancedBase);
        glyphExtensionLabel->setObjectName(QStringLiteral("glyphExtensionLabel"));

        gridLayout->addWidget(glyphExtensionLabel, 4, 0, 1, 2);

        minGlyphExtensionLabel = new QLabel(PropertyWidget_AdvancedBase);
        minGlyphExtensionLabel->setObjectName(QStringLiteral("minGlyphExtensionLabel"));

        gridLayout->addWidget(minGlyphExtensionLabel, 5, 0, 1, 1);

        minGlyphExtSpinBox = new ScrSpinBox(PropertyWidget_AdvancedBase);
        minGlyphExtSpinBox->setObjectName(QStringLiteral("minGlyphExtSpinBox"));
        minGlyphExtSpinBox->setMinimum(90);
        minGlyphExtSpinBox->setMaximum(110);
        minGlyphExtSpinBox->setValue(100);

        gridLayout->addWidget(minGlyphExtSpinBox, 5, 1, 1, 1);

        maxGlyphExtSpinBox = new ScrSpinBox(PropertyWidget_AdvancedBase);
        maxGlyphExtSpinBox->setObjectName(QStringLiteral("maxGlyphExtSpinBox"));
        maxGlyphExtSpinBox->setMinimum(90);
        maxGlyphExtSpinBox->setMaximum(110);
        maxGlyphExtSpinBox->setValue(100);

        gridLayout->addWidget(maxGlyphExtSpinBox, 5, 3, 1, 1);

        maxGlyphExtensionLabel = new QLabel(PropertyWidget_AdvancedBase);
        maxGlyphExtensionLabel->setObjectName(QStringLiteral("maxGlyphExtensionLabel"));

        gridLayout->addWidget(maxGlyphExtensionLabel, 5, 2, 1, 1);


        retranslateUi(PropertyWidget_AdvancedBase);

        QMetaObject::connectSlotsByName(PropertyWidget_AdvancedBase);
    } // setupUi

    void retranslateUi(QFrame *PropertyWidget_AdvancedBase)
    {
        PropertyWidget_AdvancedBase->setWindowTitle(QApplication::translate("PropertyWidget_AdvancedBase", "Frame", 0));
        textBaseLabel->setText(QString());
        trackingLabel->setText(QString());
        scaleHLabel->setText(QString());
        scaleVLabel->setText(QString());
        wordTrackingLabel->setText(QApplication::translate("PropertyWidget_AdvancedBase", "Word Spacing", 0));
        minWordTrackingLabel->setText(QApplication::translate("PropertyWidget_AdvancedBase", "Min:", 0));
        normWordTrackingLabel->setText(QApplication::translate("PropertyWidget_AdvancedBase", "Max:", 0));
        glyphExtensionLabel->setText(QApplication::translate("PropertyWidget_AdvancedBase", "Glyph Extension", 0));
        minGlyphExtensionLabel->setText(QApplication::translate("PropertyWidget_AdvancedBase", "Min:", 0));
        maxGlyphExtensionLabel->setText(QApplication::translate("PropertyWidget_AdvancedBase", "Max:", 0));
    } // retranslateUi

};

namespace Ui {
    class PropertyWidget_AdvancedBase: public Ui_PropertyWidget_AdvancedBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROPERTYWIDGET_ADVANCEDBASE_H
