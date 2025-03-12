#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "menu.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("Centre Mission");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_Connexion_clicked()
{
    QString utilisateur = ui->User->text();
    QString motdepasse = ui->Password->text();

    QMessageBox msgBox;
    msgBox.setStyleSheet("QLabel{ color: white; font-size: 16px; }"
                         "QMessageBox{ background-color: black; }"
                         "QPushButton{ background-color: gray; color: white; border-radius: 5px; padding: 5px; }"
                         "QPushButton:hover{ background-color: darkgray; }");

    if(utilisateur == "admin" && motdepasse == "admin") {
        msgBox.setWindowTitle("Connexion");
        msgBox.setText("Connecté avec succès");
        //hide();
        msgBox.setIcon(QMessageBox::Information);
        menu = new Menu();
        menu->show();
        this->close();
    }
    else {
        msgBox.setWindowTitle("Connexion");
        msgBox.setText("Utilisateur ou mot de passe incorrect");
        msgBox.setIcon(QMessageBox::Warning);

    }

    msgBox.exec();
}

