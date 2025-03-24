#ifndef MENU_H
#define MENU_H

#include <QDialog>
#include "mainwindow.h" // Assurez-vous que ce fichier est inclus ici
#include "formulaire.h"

class MainWindow;
class Formulaire;

namespace Ui {
class Menu;
}

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

private:
    Ui::Menu *ui;
    MainWindow *mainwindow = nullptr;
    Formulaire *formulaire;
    Donnees_Scientifiques *donnees_scientifiques;
};

#endif // MENU_H
