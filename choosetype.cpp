#include "choosetype.h"
#include "ui_choosetype.h"


ChooseType::ChooseType(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ChooseType)
{
    ui->setupUi(this);
}

ChooseType::~ChooseType()
{
    delete ui;
}

void ChooseType::on_PrismButton_2_clicked()
{
    hide();
    prismbase = new PrismBase(this);
    prismbase -> show();
}


void ChooseType::on_PyramidButton_2_clicked()
{
    hide();
    pyramidbase = new PyramidBase(this);
    pyramidbase -> show();
}

