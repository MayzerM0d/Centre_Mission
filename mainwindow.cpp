/**
* @file mainwindow.cpp
* @brief La définition de la classe MainWindow
*/

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "connexion.h"
#include "menu.h"
#include <QMessageBox>
#include <sstream>
#include <QCryptographicHash>
#include <QRegularExpression>
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

    // Vérifie que les champs sont remplis
    if (utilisateur.isEmpty() || motdepasse.isEmpty()) {
        QMessageBox::warning(this, "Erreur", "Veuillez remplir tous les champs.");
        return;
    }

    // Hashage du mot de passe
    QByteArray hash = QCryptographicHash::hash(motdepasse.toUtf8(), QCryptographicHash::Sha256);
    QString motdepasse_hache = hash.toHex();

    // Récupération des données du serveur
    connexion conn;
    std::string response = conn.comGET("/connexion");

    std::istringstream stream(response);
    std::string line;
    bool isConnected = false;

    while (std::getline(stream, line)) {
        // Extrait le nom d'utilisateur et le mot de passe haché avec une expression régulière
        QRegularExpression regex(R"(Utilisateurs:\s*(.*?),\s*Mot de passe:\s*(.*))");
        QRegularExpressionMatch match = regex.match(QString::fromStdString(line));

        if (match.hasMatch()) {
            QString user = match.captured(1).trimmed();
            QString pass = match.captured(2).trimmed();

            if (utilisateur == user && motdepasse_hache == pass) {
                isConnected = true;
                break;
            }
        }
    }

    QMessageBox msgBox;
    msgBox.setStyleSheet("QLabel{ color: white; font-size: 16px; }"
                         "QMessageBox{ background-color: black; }"
                         "QPushButton{ background-color: gray; color: white; border-radius: 5px; padding: 5px; }"
                         "QPushButton:hover{ background-color: darkgray; }");

    if (isConnected) {
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




void MainWindow::on_CreerCompte_clicked()
{
    QString utilisateur = ui->User->text();
    QString motdepasse = ui->Password->text();

    // Vérifier que les champs ne sont pas vides
    if (utilisateur.isEmpty() || motdepasse.isEmpty()) {
        QMessageBox::warning(this, "Erreur", "Veuillez remplir tous les champs.");
        return;
    }

    // Hachage du mot de passe
    QByteArray hash = QCryptographicHash::hash(motdepasse.toUtf8(), QCryptographicHash::Sha256);
    QString motdepasse_hache = hash.toHex();

    // Mise en forme des données : 'utilisateur','motdepasse_hache'
    std::string postData = "'" + utilisateur.toStdString() + "','" + motdepasse_hache.toStdString() + "'";

    // Envoi via POST
    connexion conn;
    std::string response = conn.comPOST("/econnexion", postData);

    // Affichage de la réponse
    QMessageBox msgBox;
    msgBox.setStyleSheet("QLabel{ color: white; font-size: 16px; }"
                         "QMessageBox{ background-color: black; }"
                         "QPushButton{ background-color: gray; color: white; border-radius: 5px; padding: 5px; }"
                         "QPushButton:hover{ background-color: darkgray; }");

    msgBox.setWindowTitle("Créer un compte");
    msgBox.setText(QString::fromStdString(response));
    msgBox.setIcon(QMessageBox::Information);
    msgBox.exec();
}


