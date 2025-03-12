/********************************************************************************
** Form generated from reading UI file 'menu.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENU_H
#define UI_MENU_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Menu
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *PanneauArretDeconnexion;
    QSpacerItem *horizontalSpacer_2;
    QLabel *MenuHaut;
    QSpacerItem *horizontalSpacer;
    QPushButton *BoutonDeconnexion;
    QPushButton *BoutonArret;
    QSpacerItem *verticalSpacer_2;
    QWidget *horizontalWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout_19;
    QLabel *label;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_11;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_2;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_16;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButton_3;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *Menu)
    {
        if (Menu->objectName().isEmpty())
            Menu->setObjectName("Menu");
        Menu->resize(1920, 1080);
        Menu->setStyleSheet(QString::fromUtf8(" *{\n"
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
"\n"
"QMessageBox {\n"
"	color:black ;\n"
"}"));
        verticalLayout = new QVBoxLayout(Menu);
        verticalLayout->setObjectName("verticalLayout");
        PanneauArretDeconnexion = new QHBoxLayout();
        PanneauArretDeconnexion->setObjectName("PanneauArretDeconnexion");
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        PanneauArretDeconnexion->addItem(horizontalSpacer_2);

        MenuHaut = new QLabel(Menu);
        MenuHaut->setObjectName("MenuHaut");

        PanneauArretDeconnexion->addWidget(MenuHaut);

        horizontalSpacer = new QSpacerItem(793, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        PanneauArretDeconnexion->addItem(horizontalSpacer);

        BoutonDeconnexion = new QPushButton(Menu);
        BoutonDeconnexion->setObjectName("BoutonDeconnexion");
        BoutonDeconnexion->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(BoutonDeconnexion->sizePolicy().hasHeightForWidth());
        BoutonDeconnexion->setSizePolicy(sizePolicy);
        BoutonDeconnexion->setMinimumSize(QSize(55, 55));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/icone-deconnexion.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        BoutonDeconnexion->setIcon(icon);
        BoutonDeconnexion->setIconSize(QSize(25, 25));

        PanneauArretDeconnexion->addWidget(BoutonDeconnexion);

        BoutonArret = new QPushButton(Menu);
        BoutonArret->setObjectName("BoutonArret");
        BoutonArret->setEnabled(true);
        sizePolicy.setHeightForWidth(BoutonArret->sizePolicy().hasHeightForWidth());
        BoutonArret->setSizePolicy(sizePolicy);
        BoutonArret->setMinimumSize(QSize(55, 55));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/icone-arreter.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        BoutonArret->setIcon(icon1);
        BoutonArret->setIconSize(QSize(25, 25));

        PanneauArretDeconnexion->addWidget(BoutonArret);


        verticalLayout->addLayout(PanneauArretDeconnexion);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalWidget = new QWidget(Menu);
        horizontalWidget->setObjectName("horizontalWidget");
        horizontalWidget->setMinimumSize(QSize(700, 700));
        horizontalLayout = new QHBoxLayout(horizontalWidget);
        horizontalLayout->setSpacing(20);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(20, 20, 20, 20);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(20);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(20, 20, 20, 20);
        verticalLayout_19 = new QVBoxLayout();
        verticalLayout_19->setObjectName("verticalLayout_19");
        label = new QLabel(horizontalWidget);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_19->addWidget(label);


        verticalLayout_2->addLayout(verticalLayout_19);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(20);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(20, 20, 20, 20);
        pushButton = new QPushButton(horizontalWidget);
        pushButton->setObjectName("pushButton");
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        pushButton->setMinimumSize(QSize(50, 50));
        pushButton->setLayoutDirection(Qt::LeftToRight);

        horizontalLayout_2->addWidget(pushButton);


        verticalLayout_2->addLayout(horizontalLayout_2);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(20);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setContentsMargins(20, 20, 20, 20);
        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setObjectName("verticalLayout_11");
        label_2 = new QLabel(horizontalWidget);
        label_2->setObjectName("label_2");
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_11->addWidget(label_2);


        verticalLayout_5->addLayout(verticalLayout_11);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(20);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(20, 20, 20, 20);
        pushButton_2 = new QPushButton(horizontalWidget);
        pushButton_2->setObjectName("pushButton_2");
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);
        pushButton_2->setMinimumSize(QSize(50, 50));
        pushButton_2->setBaseSize(QSize(0, 0));

        horizontalLayout_3->addWidget(pushButton_2);


        verticalLayout_5->addLayout(horizontalLayout_3);


        horizontalLayout->addLayout(verticalLayout_5);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(20);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(20, 20, 20, 20);
        verticalLayout_16 = new QVBoxLayout();
        verticalLayout_16->setObjectName("verticalLayout_16");
        label_3 = new QLabel(horizontalWidget);
        label_3->setObjectName("label_3");
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout_16->addWidget(label_3);


        verticalLayout_3->addLayout(verticalLayout_16);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(20);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(20, 20, 20, 20);
        pushButton_3 = new QPushButton(horizontalWidget);
        pushButton_3->setObjectName("pushButton_3");
        sizePolicy.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy);
        pushButton_3->setMinimumSize(QSize(50, 50));

        horizontalLayout_4->addWidget(pushButton_3);


        verticalLayout_3->addLayout(horizontalLayout_4);


        horizontalLayout->addLayout(verticalLayout_3);


        verticalLayout->addWidget(horizontalWidget);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(Menu);

        QMetaObject::connectSlotsByName(Menu);
    } // setupUi

    void retranslateUi(QDialog *Menu)
    {
        Menu->setWindowTitle(QCoreApplication::translate("Menu", "Dialog", nullptr));
        MenuHaut->setText(QCoreApplication::translate("Menu", "Menu", nullptr));
        BoutonDeconnexion->setText(QString());
        BoutonArret->setText(QString());
        label->setText(QCoreApplication::translate("Menu", "Position", nullptr));
        pushButton->setText(QCoreApplication::translate("Menu", "Allez vers la Position", nullptr));
        label_2->setText(QCoreApplication::translate("Menu", "Consommation", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Menu", "Allez vers la Consommation", nullptr));
        label_3->setText(QCoreApplication::translate("Menu", "Mission", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Menu", "Allez vers la Mission", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Menu: public Ui_Menu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENU_H
