/**
* @file menu.cpp
* @brief Définition de la classe Menu
*/

#include "menu.h"
#include "mainwindow.h"
#include "formulaire.h"
#include "ui_menu.h"

#include <QMessageBox>
#include <QTimer>
#include <QString>

#include <string>
#include <vector>
#include <algorithm>

#include "connexion.h"
#include "trim.h"

using namespace std;

Menu::Menu(QWidget *parent)
    : QDialog(parent),
    ui(new Ui::Menu)
{
    ui->setupUi(this);
    this->setWindowTitle("Menu");

    // Timer pour mise à jour des données d'énergie toutes les 5 secondes
    QTimer *timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &Menu::fetchEnergyData);
    timer->start(5000);
}

Menu::~Menu()
{
    delete ui;
}

void Menu::on_BoutonArret_clicked()
{
    QMessageBox msgBox;
    msgBox.setStyleSheet(
        "QLabel { color: white; font-size: 16px; }"
        "QMessageBox { background-color: black; }"
        "QPushButton { background-color: gray; color: white; border-radius: 5px; padding: 5px; }"
        "QPushButton:hover { background-color: darkgray; }"
        );

    msgBox.setText("Confirmation");
    msgBox.setInformativeText("Voulez-vous vraiment arrêter l'application ?");
    msgBox.setStandardButtons(QMessageBox::Yes | QMessageBox::No);
    msgBox.setDefaultButton(QMessageBox::No);

    if (msgBox.exec() == QMessageBox::Yes) {
        QApplication::quit();
    }
}

void Menu::on_BoutonDeconnexion_clicked()
{
    QMessageBox msgBox;
    msgBox.setStyleSheet(
        "QLabel { color: white; font-size: 16px; }"
        "QMessageBox { background-color: black; }"
        "QPushButton { background-color: gray; color: white; border-radius: 5px; padding: 5px; }"
        "QPushButton:hover { background-color: darkgray; }"
        );

    msgBox.setText("Confirmation");
    msgBox.setInformativeText("Voulez-vous vous déconnecter ?");
    msgBox.setStandardButtons(QMessageBox::Yes | QMessageBox::No);
    msgBox.setDefaultButton(QMessageBox::No);

    if (msgBox.exec() == QMessageBox::Yes) {
        this->close();
        mainwindow = new MainWindow();
        mainwindow->show();
    }
}

void Menu::on_I_Formulaire_clicked()
{
    if (!formulaire) {
        formulaire = new Formulaire();
    }
    formulaire->show();
}

void Menu::on_I_Donnee_scientifique_clicked()
{
    QMessageBox::information(this, "Données Scientifiques", "Bouton Données Scientifiques cliqué");
}

void Menu::fetchEnergyData()
{
    connexion con;
    string response = con.comGET("/energie");

    vector<string> lines;
    tokenize(response, '\n', lines);
    if (lines.empty()) return;

    vector<string> tokens;
    tokenize(lines.back(), ',', tokens);

    string consStr, restStr;

    for (const auto &token : tokens) {
        if (token.find("Consommees:") != string::npos) {
            consStr = trim(token.substr(token.find(":") + 1));
        } else if (token.find("Restantes:") != string::npos) {
            restStr = trim(token.substr(token.find(":") + 1));
        }
    }

    if (!consStr.empty() && !restStr.empty()) {
        int cons = stoi(consStr);
        int rest = stoi(restStr);

        ui->Energie_C->setValue(cons);
        ui->Energie_R->setValue(rest);
        updateEnergyBar(rest);
    }
}

void Menu::updateEnergyBar(int value)
{
    int red = qMin(255, (100 - value) * 255 / 50);
    int green = qMin(255, value * 255 / 50);

    QString style = QString(
                        "QProgressBar {"
                        "border: 2px solid #424242;"
                        "border-radius: 5px;"
                        "text-align: center;"
                        "color: white;"
                        "}"
                        "QProgressBar::chunk {"
                        "background-color: rgb(%1, %2, 0);"
                        "border-radius: 3px;"
                        "}").arg(red).arg(green);

    ui->Energie_C->setStyleSheet(style);
    ui->Energie_R->setStyleSheet(style);
}
