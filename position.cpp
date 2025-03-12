#include "position.h"
#include "ui_position.h"

Position::Position(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Position)
{
    ui->setupUi(this);
    ui->quickWidget->setSource(QUrl("qrc:/Map.qml"));
    ui->quickWidget->show();
}

Position::~Position()
{
    delete ui;
}
