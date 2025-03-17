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
#include <QtWidgets/QLCDNumber>
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
    QLabel *R_etat;
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
    QLabel *Formulaire;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *I_Formulaire;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_11;
    QLabel *Dashboard;
    QHBoxLayout *horizontalLayout_3;
    QLCDNumber *lcdNumber;
    QHBoxLayout *horizontalLayout_5;
    QLCDNumber *lcdNumber_2;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_16;
    QLabel *Donnee_scientifique;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *I_Donnee_scientifique;
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
        R_etat = new QLabel(Menu);
        R_etat->setObjectName("R_etat");

        PanneauArretDeconnexion->addWidget(R_etat);

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
        Formulaire = new QLabel(horizontalWidget);
        Formulaire->setObjectName("Formulaire");
        Formulaire->setAlignment(Qt::AlignCenter);

        verticalLayout_19->addWidget(Formulaire);


        verticalLayout_2->addLayout(verticalLayout_19);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(20);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(20, 20, 20, 20);
        I_Formulaire = new QPushButton(horizontalWidget);
        I_Formulaire->setObjectName("I_Formulaire");
        sizePolicy.setHeightForWidth(I_Formulaire->sizePolicy().hasHeightForWidth());
        I_Formulaire->setSizePolicy(sizePolicy);
        I_Formulaire->setMinimumSize(QSize(50, 50));
        I_Formulaire->setLayoutDirection(Qt::LeftToRight);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/position.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        I_Formulaire->setIcon(icon2);
        I_Formulaire->setIconSize(QSize(100, 100));

        horizontalLayout_2->addWidget(I_Formulaire);


        verticalLayout_2->addLayout(horizontalLayout_2);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(20);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setContentsMargins(20, 20, 20, 20);
        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setObjectName("verticalLayout_11");
        Dashboard = new QLabel(horizontalWidget);
        Dashboard->setObjectName("Dashboard");
        Dashboard->setAlignment(Qt::AlignCenter);

        verticalLayout_11->addWidget(Dashboard);


        verticalLayout_5->addLayout(verticalLayout_11);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(20);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(20, 20, 20, 20);
        lcdNumber = new QLCDNumber(horizontalWidget);
        lcdNumber->setObjectName("lcdNumber");

        horizontalLayout_3->addWidget(lcdNumber);


        verticalLayout_5->addLayout(horizontalLayout_3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(20);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(20, 20, 20, 20);
        lcdNumber_2 = new QLCDNumber(horizontalWidget);
        lcdNumber_2->setObjectName("lcdNumber_2");

        horizontalLayout_5->addWidget(lcdNumber_2);


        verticalLayout_5->addLayout(horizontalLayout_5);


        horizontalLayout->addLayout(verticalLayout_5);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(20);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(20, 20, 20, 20);
        verticalLayout_16 = new QVBoxLayout();
        verticalLayout_16->setObjectName("verticalLayout_16");
        Donnee_scientifique = new QLabel(horizontalWidget);
        Donnee_scientifique->setObjectName("Donnee_scientifique");
        Donnee_scientifique->setAlignment(Qt::AlignCenter);

        verticalLayout_16->addWidget(Donnee_scientifique);


        verticalLayout_3->addLayout(verticalLayout_16);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(20);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(20, 20, 20, 20);
        I_Donnee_scientifique = new QPushButton(horizontalWidget);
        I_Donnee_scientifique->setObjectName("I_Donnee_scientifique");
        sizePolicy.setHeightForWidth(I_Donnee_scientifique->sizePolicy().hasHeightForWidth());
        I_Donnee_scientifique->setSizePolicy(sizePolicy);
        I_Donnee_scientifique->setMinimumSize(QSize(50, 50));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/donnees.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        I_Donnee_scientifique->setIcon(icon3);
        I_Donnee_scientifique->setIconSize(QSize(100, 100));

        horizontalLayout_4->addWidget(I_Donnee_scientifique);


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
        R_etat->setText(QCoreApplication::translate("Menu", "Rover connect\303\251", nullptr));
        MenuHaut->setText(QCoreApplication::translate("Menu", "Menu", nullptr));
        BoutonDeconnexion->setText(QString());
        BoutonArret->setText(QString());
        Formulaire->setText(QCoreApplication::translate("Menu", "Formulaire de Mission", nullptr));
        I_Formulaire->setText(QString());
        Dashboard->setText(QCoreApplication::translate("Menu", "Dashboard", nullptr));
        Donnee_scientifique->setText(QCoreApplication::translate("Menu", "Donn\303\251es Scientifiques", nullptr));
        I_Donnee_scientifique->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Menu: public Ui_Menu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENU_H
