/**
* @file formulaire.cpp
* @brief La définition de la classe Formulaire
*/

#include "formulaire.h"
#include "ui_formulaire.h"
#include "menu.h"
#include <QMessageBox>

Formulaire::Formulaire(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Formulaire)
{
    ui->setupUi(this);
    ui->tableWidgetPoints->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeMode::Stretch);
    ui->pushButton_Conf->setEnabled(true);
    ui->lcdNumber_X->setDisabled(true);
    ui->lcdNumber_Y->setDisabled(true);
    ui->pushButton_Del->setDisabled(true);
    ui->tableWidgetPoints->setRowCount(15);
}

Formulaire::~Formulaire()
{
    delete ui;
}

void Formulaire::on_pushButton_Conf_clicked()
{
    QMessageBox msgBox;
    QString valColonneX = QString::number(valX);
    QString valColonneY = QString::number(valY);
    QString nMissionId = QString("Mission n° ") + QString::number(nbmission);

    if (valX == 0 && valY == 0)
    {
        msgBox.setWindowTitle("Cordonnees");
        msgBox.setText("Veuillez rentrer des coordonnes");
        msgBox.setIcon(QMessageBox::Information);
        msgBox.exec();
    }
    else
    {

        QString valDistance = QString::number(valDist);

        ui->tableWidgetPoints->setItem(id_mission,0, new QTableWidgetItem(nMissionId));
        ui->tableWidgetPoints->setItem(id_mission,1, new QTableWidgetItem(valColonneX));
        ui->tableWidgetPoints->setItem(id_mission,2, new QTableWidgetItem(valColonneY));
        ui->tableWidgetPoints->setItem(id_mission,2, new QTableWidgetItem(valColonneY));
        valX = 0;
        valY = 0;
        ui->lcdNumber_X->display(valX);
        ui->lcdNumber_Y->display(valY);
        id_mission++;
        nbmission++;
        ui->pushButton_Del->setEnabled(true);
    }
}


void Formulaire::on_pushButton_plusX_clicked()
{
    valX = valX + 1;


    if (valX <= 250 && valX >= -250)
    {
        ui->lcdNumber_X->display(valX);
    }
    if (valX > 250)
    {
        valX = 250;
        ui->lcdNumber_X->display(valX);
    }
    if (valX < -250)
    {
        valX = -250;
        ui->lcdNumber_X->display(valX);
    }
}
void Formulaire::on_pushButton_plus10X_clicked()
{
    valX = valX + 10;

    if (valX <= 250 && valX >= -250)
    {
        ui->lcdNumber_X->display(valX);
    }
    if (valX > 250)
    {
        valX = 250;
        ui->lcdNumber_X->display(valX);
    }
    if (valX < -250)
    {
        valX = -250;
        ui->lcdNumber_X->display(valX);
    }

}
void Formulaire::on_pushButton_plus50X_clicked()
{
    valX = valX + 50;


    if (valX <= 250 && valX >= -250)
    {
        ui->lcdNumber_X->display(valX);
    }
    if (valX > 250)
    {
        valX = 250;
        ui->lcdNumber_X->display(valX);
    }
    if (valX < -250)
    {
        valX = -250;
        ui->lcdNumber_X->display(valX);
    }
}


void Formulaire::on_pushButton_moinsX_clicked()
{
    valX = valX - 1;

    if (valX <= 250 && valX >= -250)
    {
        ui->lcdNumber_X->display(valX);
    }
    if (valX > 250)
    {
        valX = 250;
        ui->lcdNumber_X->display(valX);
    }
    if (valX < -250)
    {
        valX = -250;
        ui->lcdNumber_X->display(valX);
    }
}
void Formulaire::on_pushButton_moins10X_clicked()
{
    valX = valX - 10;

    if (valX <= 250 && valX >= -250)
    {
        ui->lcdNumber_X->display(valX);
    }
    if (valX > 250)
    {
        valX = 250;
        ui->lcdNumber_X->display(valX);
    }
    if (valX < -250)
    {
        valX = -250;
        ui->lcdNumber_X->display(valX);
    }
}
void Formulaire::on_pushButton_moins50X_clicked()
{
    valX = valX - 50;

    if (valX <= 250 && valX >= -250)
    {
        ui->lcdNumber_X->display(valX);
    }
    if (valX > 250)
    {
        valX = 250;
        ui->lcdNumber_X->display(valX);
    }
    if (valX < -250)
    {
        valX = -250;
        ui->lcdNumber_X->display(valX);
    }
}


void Formulaire::on_pushButton_plusY_clicked()
{
    valY= valY + 1;

    if (valY < 250 && valY > -250)
    {
        ui->lcdNumber_Y->display(valY);
    }
    if (valY > 250)
    {
        valY = 250;
        ui->lcdNumber_Y->display(valY);
    }
    if (valY < -250)
    {
        valY = -250;
        ui->lcdNumber_Y->display(valY);
    }
}
void Formulaire::on_pushButton_plus10Y_clicked()
{
    valY= valY + 10;

    if (valY < 250 && valY > -250)
    {
        ui->lcdNumber_Y->display(valY);
    }
    if (valY > 250)
    {
        valY = 250;
        ui->lcdNumber_Y->display(valY);
    }
    if (valY < -250)
    {
        valY = -250;
        ui->lcdNumber_Y->display(valY);
    }
}
void Formulaire::on_pushButton_plus50Y_clicked()
{
    valY= valY + 50;

    if (valY < 250 && valY > -250)
    {
        ui->lcdNumber_Y->display(valY);
    }
    if (valY > 250)
    {
        valY = 250;
        ui->lcdNumber_Y->display(valY);
    }
    if (valY < -250)
    {
        valY = -250;
        ui->lcdNumber_Y->display(valY);
    }
}


void Formulaire::on_pushButton_moinsY_clicked()
{
    valY= valY - 1;

    if (valY < 250 && valY > -250)
    {
        ui->lcdNumber_Y->display(valY);
    }
    if (valY > 250)
    {
        valY = 250;
        ui->lcdNumber_Y->display(valY);
    }
    if (valY < -250)
    {
        valY = -250;
        ui->lcdNumber_Y->display(valY);
    }
}
void Formulaire::on_pushButton_moins10Y_clicked()
{
    valY= valY - 10;

    if (valY < 250 && valY > -250)
    {
        ui->lcdNumber_Y->display(valY);
    }
    if (valY > 250)
    {
        valY = 250;
        ui->lcdNumber_Y->display(valY);
    }
    if (valY < -250)
    {
        valY = -250;
        ui->lcdNumber_Y->display(valY);
    }
}
void Formulaire::on_pushButton_moins50Y_clicked()
{
    valY= valY - 50;

    if (valY < 250 && valY > -250)
    {
        ui->lcdNumber_Y->display(valY);
    }
    if (valY > 250)
    {
        valY = 250;
        ui->lcdNumber_Y->display(valY);
    }
    if (valY < -250)
    {
        valY = -250;
        ui->lcdNumber_Y->display(valY);
    }
}


void Formulaire::on_pushButton_Del_clicked()
{
    QMessageBox messageBox;
    messageBox.setWindowTitle(tr("Supprimer"));
    messageBox.setText(tr("Voulez-vous vraiment supprimer la mission ?"));
    messageBox.setStandardButtons(QMessageBox::Yes | QMessageBox::No);
    messageBox.setDefaultButton(QMessageBox::No);

    int rep = messageBox.exec();

    if (rep == QMessageBox::Yes)
    {
        int currentRow = ui->tableWidgetPoints->currentRow();

        if (currentRow != -1)
        {
            //ui->tableWidgetPoints->removeRow(currentRow);
            ui->tableWidgetPoints->clearContents();
        }
        id_mission--;

    }
}




