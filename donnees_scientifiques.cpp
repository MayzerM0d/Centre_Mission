#include "donnees_scientifiques.h"
#include "ui_donnees_scientifiques.h"
#include "menu.h"

Donnees_Scientifiques::Donnees_Scientifiques(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Donnees_Scientifiques)
{
    ui->setupUi(this);
}

Donnees_Scientifiques::~Donnees_Scientifiques()
{
    delete ui;
}
