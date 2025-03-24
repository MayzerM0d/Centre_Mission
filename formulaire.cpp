#include "formulaire.h"
#include "ui_formulaire.h"
#include "menu.h"

Formulaire::Formulaire(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Formulaire)
{
    ui->setupUi(this);
}

Formulaire::~Formulaire()
{
    delete ui;
}
