#include "triangle.h"
#include "choosetype.h"
#include "ui_triangle.h"


ChooseType *choosetype2;

Triangle::Triangle(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Triangle)
{
    ui->setupUi(this);
}

Triangle::~Triangle()
{
    delete ui;
}


void Triangle::on_BackButton_clicked()
{
    hide();
    choosetype2 = new ChooseType(this);
    choosetype2 -> show();
}
