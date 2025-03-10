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
    } // retranslateUi

};

namespace Ui {
    class Menu: public Ui_Menu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENU_H
