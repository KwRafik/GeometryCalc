#include "errortriangle.h"
#include "ui_errortriangle.h"

ErrorTriangle::ErrorTriangle(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ErrorTriangle)
{
    ui->setupUi(this);
}

ErrorTriangle::~ErrorTriangle()
{
    delete ui;
}
