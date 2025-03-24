#ifndef FORMULAIRE_H
#define FORMULAIRE_H

#include <QDialog>
#include "menu.h"

namespace Ui {
class Formulaire;
}

class Menu;

class Formulaire : public QDialog
{
    Q_OBJECT

public:
    explicit Formulaire(QWidget *parent = nullptr);
    ~Formulaire();

private:
    Ui::Formulaire *ui;
};

#endif // FORMULAIRE_H
