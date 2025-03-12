#ifndef MENU_H
#define MENU_H

#include <QDialog>
#include "mainwindow.h" // Assurez-vous que ce fichier est inclus ici
#include "position.h"

class MainWindow;
class Position;

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

    void on_pushButton_clicked();

private:
    Ui::Menu *ui;
    MainWindow *mainwindow = nullptr;
    Position *position = nullptr;
};

#endif // MENU_H
