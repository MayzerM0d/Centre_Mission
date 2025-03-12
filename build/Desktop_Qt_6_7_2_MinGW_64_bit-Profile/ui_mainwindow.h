/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QFrame *frame;
    QLabel *ConnectezVous;
    QPushButton *Connexion;
    QLineEdit *User;
    QLineEdit *Password;
    QLabel *Utilisateur;
    QLabel *MotDePasse;
    QToolButton *logo;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(687, 750);
        MainWindow->setStyleSheet(QString::fromUtf8(" *{\n"
"	font-family:century gothic;\n"
"	font-size:24px;\n"
"	color:black;\n"
"}\n"
"\n"
"QFrame\n"
"{\n"
"	background:rgba(0,0,0,0.8);\n"
"	border-radius:15px;\n"
"}\n"
"\n"
"#centralwidget\n"
"{\n"
"	background: url(:/images/fond.jpg) no-repeat center center;\n"
"	background-size: contain;\n"
"}\n"
"\n"
"QPushButton\n"
"{\n"
"\n"
"	background:red;\n"
"	border-radius:60px\n"
"}\n"
"\n"
"QToolButton\n"
"{\n"
"\n"
"	background:red;\n"
"	border-radius:60px\n"
"}\n"
"\n"
"QLabel\n"
"{\n"
"	color:white;\n"
"	background:transparent;\n"
"\n"
"}\n"
"\n"
"QPushButton\n"
"{\n"
"\n"
"	color:white;\n"
"	border-radius:15px\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	color:#333;\n"
"	border-radius:15px;\n"
"	background:#fff;\n"
"}\n"
"\n"
"QLineEdit\n"
"{\n"
"	background:transparent;\n"
"	border:none;\n"
"	color:#717072;\n"
"	border-bottom:1px solid #717072;\n"
"}\n"
"\n"
"QMessageBox {\n"
"	color:black;\n"
"}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(100, 130, 481, 541));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        ConnectezVous = new QLabel(frame);
        ConnectezVous->setObjectName("ConnectezVous");
        ConnectezVous->setGeometry(QRect(160, 80, 161, 61));
        ConnectezVous->setStyleSheet(QString::fromUtf8(""));
        ConnectezVous->setAlignment(Qt::AlignCenter);
        Connexion = new QPushButton(frame);
        Connexion->setObjectName("Connexion");
        Connexion->setGeometry(QRect(50, 460, 381, 61));
        User = new QLineEdit(frame);
        User->setObjectName("User");
        User->setGeometry(QRect(50, 240, 371, 41));
        Password = new QLineEdit(frame);
        Password->setObjectName("Password");
        Password->setGeometry(QRect(50, 360, 371, 41));
        Password->setEchoMode(QLineEdit::Password);
        Utilisateur = new QLabel(frame);
        Utilisateur->setObjectName("Utilisateur");
        Utilisateur->setGeometry(QRect(52, 190, 201, 61));
        Utilisateur->setStyleSheet(QString::fromUtf8(""));
        MotDePasse = new QLabel(frame);
        MotDePasse->setObjectName("MotDePasse");
        MotDePasse->setGeometry(QRect(50, 310, 201, 61));
        MotDePasse->setStyleSheet(QString::fromUtf8(""));
        logo = new QToolButton(centralwidget);
        logo->setObjectName("logo");
        logo->setEnabled(false);
        logo->setGeometry(QRect(280, 70, 121, 121));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/user.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        logo->setIcon(icon);
        logo->setIconSize(QSize(64, 64));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        ConnectezVous->setText(QCoreApplication::translate("MainWindow", "Centre Mission", nullptr));
        Connexion->setText(QCoreApplication::translate("MainWindow", "Connexion", nullptr));
        User->setText(QString());
        User->setPlaceholderText(QCoreApplication::translate("MainWindow", "Utilisateur", nullptr));
        Password->setText(QString());
        Password->setPlaceholderText(QCoreApplication::translate("MainWindow", "Mot de Passe", nullptr));
        Utilisateur->setText(QCoreApplication::translate("MainWindow", "Utilisateur", nullptr));
        MotDePasse->setText(QCoreApplication::translate("MainWindow", "Mot de Passe", nullptr));
        logo->setText(QCoreApplication::translate("MainWindow", "Connexion", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
