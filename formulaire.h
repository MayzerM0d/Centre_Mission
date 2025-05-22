/**
* @file formulaire.h
* @brief La déclaration de la classe Formulaire
*/

#ifndef FORMULAIRE_H
#define FORMULAIRE_H

#include <QDialog>
#include "menu.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class Formulaire;
}
QT_END_NAMESPACE

class Formulaire : public QDialog
{
    Q_OBJECT

public:
    Formulaire(QWidget *parent = nullptr);
    ~Formulaire();

private slots:
    void on_pushButton_Conf_clicked();

    void on_pushButton_plusX_clicked();

    void on_pushButton_moinsX_clicked();

    void on_pushButton_plusY_clicked();

    void on_pushButton_moinsY_clicked();

    void on_pushButton_plus10X_clicked();

    void on_pushButton_plus50X_clicked();

    void on_pushButton_moins10X_clicked();

    void on_pushButton_moins50X_clicked();

    void on_pushButton_plus10Y_clicked();

    void on_pushButton_plus50Y_clicked();

    void on_pushButton_moins10Y_clicked();

    void on_pushButton_moins50Y_clicked();

    void on_pushButton_Del_clicked();

private:
    Ui::Formulaire *ui;
    Menu *menu;
    int valX = 0;
    int valY = 0;
    int valDist = 0;
    double valAngle = 0;
    int mission[2][15];
    int nbmission = 0;
    int id_mission = 0;
    int select = -1;
};

#endif // FORMULAIRE_H










