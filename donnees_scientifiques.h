#ifndef DONNEES_SCIENTIFIQUES_H
#define DONNEES_SCIENTIFIQUES_H

#include <QDialog>
#include "menu.h"

namespace Ui {
class Donnees_Scientifiques;
}

class Menu;

class Donnees_Scientifiques : public QDialog
{
    Q_OBJECT

public:
    explicit Donnees_Scientifiques(QWidget *parent = nullptr);
    ~Donnees_Scientifiques();

private:
    Ui::Donnees_Scientifiques *ui;
};

#endif // DONNEES_SCIENTIFIQUES_H
