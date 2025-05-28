/**
* @file menu.h
* @brief La déclaration de la classe Menu
*/


#ifndef MENU_H
#define MENU_H

#include <QDialog>
#include "mainwindow.h" // Assurez-vous que ce fichier est inclus ici


namespace Ui {
class Menu;
}

class MainWindow;
class Formulaire;
class Donnees_Scientifiques;

class Menu : public QDialog
{
    Q_OBJECT

public:
    explicit Menu(QWidget *parent = nullptr);
    ~Menu();

private slots:
    void on_BoutonArret_clicked();
    void on_BoutonDeconnexion_clicked();
    void on_I_Formulaire_clicked();
    void on_I_Donnee_scientifique_clicked();
    void on_R_etat_windowTitleChanged(const QString &title);
    void fetchEnergyData();
    void updateEnergyBar(int value);

private:
    Ui::Menu *ui;
    MainWindow *mainwindow = nullptr;
    Formulaire *formulaire = nullptr;
    Donnees_Scientifiques *donnees_scientifiques = nullptr;



};

#endif // MENU_H
