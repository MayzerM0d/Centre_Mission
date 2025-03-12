/********************************************************************************
** Form generated from reading UI file 'position.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POSITION_H
#define UI_POSITION_H

#include <QtCore/QVariant>
#include <QtQuickWidgets/QQuickWidget>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Position
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QSpacerItem *verticalSpacer_2;
    QQuickWidget *quickWidget;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *Position)
    {
        if (Position->objectName().isEmpty())
            Position->setObjectName("Position");
        Position->resize(800, 600);
        Position->setStyleSheet(QString::fromUtf8(" *{\n"
"	font-family:century gothic;\n"
"	font-size:24px;\n"
"	color:black;\n"
"	background:#333;\n"
"}\n"
"\n"
"QLabel\n"
"{\n"
"	color:white;\n"
"}\n"
""));
        verticalLayout = new QVBoxLayout(Position);
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(Position);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        quickWidget = new QQuickWidget(Position);
        quickWidget->setObjectName("quickWidget");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(quickWidget->sizePolicy().hasHeightForWidth());
        quickWidget->setSizePolicy(sizePolicy);
        quickWidget->setMinimumSize(QSize(500, 500));
        quickWidget->setResizeMode(QQuickWidget::SizeRootObjectToView);

        verticalLayout->addWidget(quickWidget);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(Position);

        QMetaObject::connectSlotsByName(Position);
    } // setupUi

    void retranslateUi(QDialog *Position)
    {
        Position->setWindowTitle(QCoreApplication::translate("Position", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Position", "Position", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Position: public Ui_Position {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POSITION_H
