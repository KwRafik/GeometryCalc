#include "PyramidBase.h"
#include "ui_PyramidBase.h"
#include "choosetype.h"

ChooseType *choosetype2;

PyramidBase::PyramidBase(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PyramidBase)
{
    ui->setupUi(this);
}

PyramidBase::~PyramidBase()
{
    delete ui;
}

void PyramidBase::on_backButton_clicked()
{
    hide();
    choosetype2 = new ChooseType(this);
    choosetype2 -> show();
}

