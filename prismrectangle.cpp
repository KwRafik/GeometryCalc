#include "prismrectangle.h"
#include "ui_prismrectangle.h"
#include "PrismBase.h"

PrismBase *prismbase;

PrismRectangle::PrismRectangle(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PrismRectangle)
{
    ui->setupUi(this);
}

PrismRectangle::~PrismRectangle()
{
    delete ui;
}

void PrismRectangle::on_backbutton_clicked()
{
    hide();
    prismbase = new PrismBase(this);
    prismbase -> show();
}


void PrismRectangle::on_SliderA_valueChanged(int value)
{
    ui->label_a_value->setText(QString::number(value));
}


void PrismRectangle::on_SliderB_valueChanged(int value)
{
    ui->label_b_value->setText(QString::number(value));
}


void PrismRectangle::on_SliderC_valueChanged(int value)
{
    ui->label_c_value->setText(QString::number(value));
}


void PrismRectangle::on_pushButton_clicked()
{
    QString label_a = ui ->label_a_value->text();
    int a_value = label_a.toInt();
    QString label_b = ui ->label_b_value->text();
    int b_value = label_b.toInt();
    QString label_c = ui ->label_c_value->text();
    int c_value = label_c.toInt();

    if(a_value == 0 || b_value == 0 || c_value == 0)
    {
        ui->labelPole->setText("error");
        ui->labelOb->setText("error");

    }else{
        double result_P = (2*c_value*a_value) + (2*c_value*b_value) + (2*a_value*b_value);
        ui->labelPole->setText(QString::number(result_P));

        double result_Ob = a_value*b_value*c_value;
        ui->labelOb->setText(QString::number(result_Ob));
    }
}

