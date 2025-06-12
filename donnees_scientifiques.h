/**
* @file donnes_scientifiques.h
* @brief La déclaration de la classe Donnes_Scientifiques
*/

#ifndef DONNEES_SCIENTIFIQUES_H
#define DONNEES_SCIENTIFIQUES_H

#include <QDialog>
#include <QtWidgets>
#include <QtCharts>
#include "menu.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class Donnees_Scientifiques;
}
QT_END_NAMESPACE

class Donnees_Scientifiques : public QDialog
{
    Q_OBJECT

public:
    explicit Donnees_Scientifiques(QWidget *parent = nullptr);
    ~Donnees_Scientifiques();

private:
    Ui::Donnees_Scientifiques *ui;
    Menu *menu;
    QChartView *graphique; // un widget pour afficher un graphe
    QChart *graphe; // la représentation d'un graphe
    QLineSeries *courbe; // les données
};

#endif // DONNEES_SCIENTIFIQUES_H
