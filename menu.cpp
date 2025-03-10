#include "menu.h"
#include "mainwindow.h" // Ajoutez cette ligne
#include "ui_menu.h"
#include <QMessageBox>

Menu::Menu(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Menu)
{
    ui->setupUi(this);
    this->setWindowTitle("Menu");
}

Menu::~Menu()
{
    delete ui;
}

void Menu::on_BoutonArret_clicked()
{
    QMessageBox msgBox;
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

