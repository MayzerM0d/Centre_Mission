#ifndef POSITION_H
#define POSITION_H

#include <QDialog>
#include "menu.h"

namespace Ui {
class Position;
}

class Position : public QDialog
{
    Q_OBJECT

public:
    explicit Position(QWidget *parent = nullptr);
    ~Position();

private:
    Ui::Position *ui;
};

#endif // POSITION_H
