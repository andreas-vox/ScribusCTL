/********************************************************************************
** Form generated from reading UI file 'propertiespalette_textbase.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROPERTIESPALETTE_TEXTBASE_H
#define UI_PROPERTIESPALETTE_TEXTBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "ui/alignselect.h"
#include "ui/fontcombo.h"
#include "ui/scrspinbox.h"
#include "ui/sctreewidget.h"
#include "ui/spalette.h"

QT_BEGIN_NAMESPACE

class Ui_PropertiesPalette_TextBase
{
public:
    QVBoxLayout *verticalLayout;
    FontComboH *fonts;
    QHBoxLayout *horizontalLayout;
    QLabel *fontSizeLabel;
    ScrSpinBox *fontSize;
    QFrame *line_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *lineSpacingLabel;
    QComboBox *lineSpacingModeCombo;
    ScrSpinBox *lineSpacing;
    QHBoxLayout *horizontalLayout_5;
    AlignSelect *textAlignment;
    QSpacerItem *horizontalSpacer;
    QFrame *line;
    QHBoxLayout *horizontalLayout_3;
    QLabel *paraStyleLabel;
    ParaStyleComboBox *paraStyleCombo;
    QToolButton *paraStyleClear;
    QHBoxLayout *horizontalLayout_4;
    QLabel *charStyleLabel;
    CharStyleComboBox *charStyleCombo;
    QToolButton *charStyleClear;
    QFrame *line_2;
    ScTreeWidget *textTree;

    void setupUi(QWidget *PropertiesPalette_TextBase)
    {
        if (PropertiesPalette_TextBase->objectName().isEmpty())
            PropertiesPalette_TextBase->setObjectName(QStringLiteral("PropertiesPalette_TextBase"));
        PropertiesPalette_TextBase->resize(214, 357);
        verticalLayout = new QVBoxLayout(PropertiesPalette_TextBase);
        verticalLayout->setSpacing(2);
        verticalLayout->setContentsMargins(2, 2, 2, 2);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        fonts = new FontComboH(PropertiesPalette_TextBase);
        fonts->setObjectName(QStringLiteral("fonts"));

        verticalLayout->addWidget(fonts);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        fontSizeLabel = new QLabel(PropertiesPalette_TextBase);
        fontSizeLabel->setObjectName(QStringLiteral("fontSizeLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(fontSizeLabel->sizePolicy().hasHeightForWidth());
        fontSizeLabel->setSizePolicy(sizePolicy);
        fontSizeLabel->setPixmap(QPixmap(QString::fromUtf8("../../resources/icons/Zeichen.xpm")));
        fontSizeLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout->addWidget(fontSizeLabel);

        fontSize = new ScrSpinBox(PropertiesPalette_TextBase);
        fontSize->setObjectName(QStringLiteral("fontSize"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(fontSize->sizePolicy().hasHeightForWidth());
        fontSize->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(fontSize);


        verticalLayout->addLayout(horizontalLayout);

        line_3 = new QFrame(PropertiesPalette_TextBase);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        lineSpacingLabel = new QLabel(PropertiesPalette_TextBase);
        lineSpacingLabel->setObjectName(QStringLiteral("lineSpacingLabel"));
        sizePolicy.setHeightForWidth(lineSpacingLabel->sizePolicy().hasHeightForWidth());
        lineSpacingLabel->setSizePolicy(sizePolicy);
        lineSpacingLabel->setPixmap(QPixmap(QString::fromUtf8("../../resources/icons/linespacing2.png")));

        horizontalLayout_2->addWidget(lineSpacingLabel);

        lineSpacingModeCombo = new QComboBox(PropertiesPalette_TextBase);
        lineSpacingModeCombo->setObjectName(QStringLiteral("lineSpacingModeCombo"));
        sizePolicy1.setHeightForWidth(lineSpacingModeCombo->sizePolicy().hasHeightForWidth());
        lineSpacingModeCombo->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(lineSpacingModeCombo);

        lineSpacing = new ScrSpinBox(PropertiesPalette_TextBase);
        lineSpacing->setObjectName(QStringLiteral("lineSpacing"));
        sizePolicy.setHeightForWidth(lineSpacing->sizePolicy().hasHeightForWidth());
        lineSpacing->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(lineSpacing);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        textAlignment = new AlignSelect(PropertiesPalette_TextBase);
        textAlignment->setObjectName(QStringLiteral("textAlignment"));

        horizontalLayout_5->addWidget(textAlignment);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_5);

        line = new QFrame(PropertiesPalette_TextBase);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        paraStyleLabel = new QLabel(PropertiesPalette_TextBase);
        paraStyleLabel->setObjectName(QStringLiteral("paraStyleLabel"));
        sizePolicy.setHeightForWidth(paraStyleLabel->sizePolicy().hasHeightForWidth());
        paraStyleLabel->setSizePolicy(sizePolicy);
        paraStyleLabel->setPixmap(QPixmap(QString::fromUtf8("../../resources/icons/Zeichen.xpm")));

        horizontalLayout_3->addWidget(paraStyleLabel);

        paraStyleCombo = new ParaStyleComboBox(PropertiesPalette_TextBase);
        paraStyleCombo->setObjectName(QStringLiteral("paraStyleCombo"));
        sizePolicy1.setHeightForWidth(paraStyleCombo->sizePolicy().hasHeightForWidth());
        paraStyleCombo->setSizePolicy(sizePolicy1);

        horizontalLayout_3->addWidget(paraStyleCombo);

        paraStyleClear = new QToolButton(PropertiesPalette_TextBase);
        paraStyleClear->setObjectName(QStringLiteral("paraStyleClear"));
        paraStyleClear->setMaximumSize(QSize(22, 22));
        QIcon icon;
        icon.addFile(QStringLiteral("../../resources/icons/16/edit-clear.png"), QSize(), QIcon::Normal, QIcon::Off);
        paraStyleClear->setIcon(icon);

        horizontalLayout_3->addWidget(paraStyleClear);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        charStyleLabel = new QLabel(PropertiesPalette_TextBase);
        charStyleLabel->setObjectName(QStringLiteral("charStyleLabel"));
        sizePolicy.setHeightForWidth(charStyleLabel->sizePolicy().hasHeightForWidth());
        charStyleLabel->setSizePolicy(sizePolicy);
        charStyleLabel->setPixmap(QPixmap(QString::fromUtf8("../../resources/icons/Zeichen.xpm")));

        horizontalLayout_4->addWidget(charStyleLabel);

        charStyleCombo = new CharStyleComboBox(PropertiesPalette_TextBase);
        charStyleCombo->setObjectName(QStringLiteral("charStyleCombo"));
        sizePolicy1.setHeightForWidth(charStyleCombo->sizePolicy().hasHeightForWidth());
        charStyleCombo->setSizePolicy(sizePolicy1);

        horizontalLayout_4->addWidget(charStyleCombo);

        charStyleClear = new QToolButton(PropertiesPalette_TextBase);
        charStyleClear->setObjectName(QStringLiteral("charStyleClear"));
        charStyleClear->setMaximumSize(QSize(22, 22));
        charStyleClear->setIcon(icon);

        horizontalLayout_4->addWidget(charStyleClear);


        verticalLayout->addLayout(horizontalLayout_4);

        line_2 = new QFrame(PropertiesPalette_TextBase);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_2);

        textTree = new ScTreeWidget(PropertiesPalette_TextBase);
        textTree->setObjectName(QStringLiteral("textTree"));

        verticalLayout->addWidget(textTree);


        retranslateUi(PropertiesPalette_TextBase);

        QMetaObject::connectSlotsByName(PropertiesPalette_TextBase);
    } // setupUi

    void retranslateUi(QWidget *PropertiesPalette_TextBase)
    {
        PropertiesPalette_TextBase->setWindowTitle(QApplication::translate("PropertiesPalette_TextBase", "Form", 0));
        fontSizeLabel->setText(QString());
        lineSpacingLabel->setText(QString());
        paraStyleLabel->setText(QString());
        paraStyleClear->setText(QString());
        charStyleLabel->setText(QString());
        charStyleClear->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class PropertiesPalette_TextBase: public Ui_PropertiesPalette_TextBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROPERTIESPALETTE_TEXTBASE_H
