#include "built.h"
#include "ui_built.h"

Built::Built(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Built)
{
    ui->setupUi(this);
}

Built::~Built()
{
    delete ui;
}
