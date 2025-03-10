#ifndef MENU_H
#define MENU_H

#include <QDialog>
#include "mainwindow.h" // Assurez-vous que ce fichier est inclus ici

namespace Ui {
class Menu;
}
class MainWindow;

class Menu : public QDialog
{
    Q_OBJECT

public:
    explicit Menu(QWidget *parent = nullptr);
    ~Menu();

private slots:
    void on_BoutonArret_clicked();
    void on_BoutonDeconnexion_clicked();

private:
    Ui::Menu *ui;
    MainWindow *mainwindow;  // Déclaration correcte de la variable
};

#endif // MENU_H
