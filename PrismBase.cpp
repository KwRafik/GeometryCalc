#include "PrismBase.h"
#include "ui_PrismBase.h"
#include "choosetype.h"

ChooseType *choosetype1;

PrismBase::PrismBase(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PrismBase)
{
    ui->setupUi(this);
}

PrismBase::~PrismBase()
{
    delete ui;
}

void PrismBase::on_backButton_clicked()
{
    hide();
    choosetype1 = new ChooseType(this);
    choosetype1 -> show();
}


void PrismBase::on_RectangleButton_clicked()
{

}


void PrismBase::on_TriangleButton_clicked()
{

}


void PrismBase::on_PentagonButton_clicked()
{

}


void PrismBase::on_HexagonButton_clicked()
{

}

