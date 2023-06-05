#include "built.h"
#include "ui_built.h"
#include "choosetype.h"

ChooseType *choosetype3;

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

void Built::on_pushButton_clicked()
{
    hide();
    choosetype3 = new ChooseType(this);
    choosetype3 -> show();

}

