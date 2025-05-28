/**
* @file mainwindow.cpp
* @brief La définition de la classe MainWindow
*/

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "connexion.h"
#include "menu.h"
#include <QMessageBox>
#include "trim.h"



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

    // Connexion au serveur
    connexion conn;
    std::string response = conn.comGET("/connexion");

    // Analyse de la réponse
    std::vector<std::string> tokens;
    tokenize(response, ',', tokens);

    std::string userFromServer, passwordFromServer;

    for (const auto& token : tokens) {
        if (token.find("Utilisateurs:") != std::string::npos) {
            userFromServer = trim(token.substr(token.find(":") + 1));
        } else if (token.find("Mot de passe:") != std::string::npos) {
            passwordFromServer = trim(token.substr(token.find(":") + 1));
        }
    }

    QMessageBox msgBox;
    msgBox.setStyleSheet("QLabel{ color: white; font-size: 16px; }"
                         "QMessageBox{ background-color: black; }"
                         "QPushButton{ background-color: gray; color: white; border-radius: 5px; padding: 5px; }"
                         "QPushButton:hover{ background-color: darkgray; }");

    if (utilisateur.toStdString() == userFromServer && motdepasse.toStdString() == passwordFromServer) {
        msgBox.setWindowTitle("Connexion");
        msgBox.setText("Connecté avec succès");
        msgBox.setIcon(QMessageBox::Information);
        menu = new Menu();
        menu->show();
        this->close();
    } else {
        msgBox.setWindowTitle("Connexion");
        msgBox.setText("Utilisateur ou mot de passe incorrect");
        msgBox.setIcon(QMessageBox::Warning);
    }

    msgBox.exec();
}

