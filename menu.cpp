/**
* @file menu.cpp
* @brief La définition de la classe Menu
*/

#include "menu.h"
#include "mainwindow.h" // Ajoutez cette ligne
#include "formulaire.h"
#include "ui_menu.h"
#include <QMessageBox>
#include <string>
#include "connexion.h"

using namespace std;

Menu::Menu(QWidget *parent):
    QDialog(parent),
    ui(new Ui::Menu)
{
    ui->setupUi(this);
    this->setWindowTitle("Menu");
    /*ui->progressBar->setRange(0, 100);
    updateEnergyBar(50); // Valeur initiale*/

}

Menu::~Menu()
{
    delete ui;
}

void Menu::on_BoutonArret_clicked()
{
    QMessageBox msgBox;
    msgBox.setStyleSheet("QLabel{ color: white; font-size: 16px; }"
                         "QMessageBox{ background-color: black; }"
                         "QPushButton{ background-color: gray; color: white; border-radius: 5px; padding: 5px; }"
                         "QPushButton:hover{ background-color: darkgray; }");

    msgBox.setText("Confirmation");
    msgBox.setInformativeText("Voulez-vous vraiment arreter l'application ?");
    msgBox.setStandardButtons(QMessageBox :: Yes | QMessageBox :: No);
    msgBox.setDefaultButton(QMessageBox :: No);
    int ret = msgBox.exec();
    if (ret == QMessageBox :: Yes) {
        QApplication :: quit();
    }
}


void Menu::on_BoutonDeconnexion_clicked()
{
    QMessageBox msgBox;
    msgBox.setStyleSheet("QLabel{ color: white; font-size: 16px; }"
                         "QMessageBox{ background-color: black; }"
                         "QPushButton{ background-color: gray; color: white; border-radius: 5px; padding: 5px; }"
                         "QPushButton:hover{ background-color: darkgray; }");

    msgBox.setText("Confirmation");
    msgBox.setInformativeText("Voulez-vous vous deconnecter ?");
    msgBox.setStandardButtons(QMessageBox::Yes | QMessageBox::No);
    msgBox.setDefaultButton(QMessageBox::No);
    int ret = msgBox.exec();

    if (ret == QMessageBox::Yes) {
        // Fermer la fenêtre du menu
        this->close();

        // Réouvrir la fenêtre de connexion
        mainwindow = new MainWindow();  // Crée un nouvel objet MainWindow
        mainwindow->show();
    }
}


void Menu::on_I_Formulaire_clicked()
{
    if (!formulaire) {
        formulaire = new Formulaire();
    }
    formulaire->show();
    string target = "/mission";
    connexion test;
    test.comGET(target);

}

void Menu::on_I_Donnee_scientifique_clicked()
{
    // Implémentez le traitement du clic ici
    // Par exemple :
    QMessageBox::information(this, "Données Scientifiques", "Bouton Données Scientifiques cliqué");

    // Ou si vous voulez ouvrir une nouvelle fenêtre :
    /*
    if (!donneesScientifiquesWindow) {
        donneesScientifiquesWindow = new DonneesScientifiquesWindow(this);
    }
    donneesScientifiquesWindow->show();
    */
}

/*void Menu::updateEnergyBar(int value) {
    ui->progressBar->setValue(value);

    // Calcul de la couleur en fonction du pourcentage
    int red = qMin(255, (100 - value) * 255 / 50);
    int green = qMin(255, value * 255 / 50);

    QString style = QString(
                        "QProgressBar {"
                        "border: 2px solid #424242;"
                        "border-radius: 5px;"
                        "text-align: center;"
                        "color: white;"  // Couleur du texte
                        "}"
                        "QProgressBar::chunk {"
                        "background-color: rgb(%1, %2, 0);"
                        "border-radius: 3px;"  // Coins arrondis pour le remplissage
                        "}"
                        ).arg(red).arg(green);

    ui->progressBar->setStyleSheet(style);
}*/



