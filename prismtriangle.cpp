#include "prismtriangle.h"
#include "ui_prismtriangle.h"
#include "PrismBase.h"

PrismBase *prismbase2;

PrismTriangle::PrismTriangle(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PrismTriangle)
{
    ui->setupUi(this);
}

PrismTriangle::~PrismTriangle()
{
    delete ui;
}

void PrismTriangle::on_backbutton_clicked()
{
    hide();
    prismbase2 = new PrismBase(this);
    prismbase2 -> show();
}

void PrismTriangle::on_SliderA_valueChanged(int value)
{
    ui->label_a_value->setText(QString::number(value));
}


void PrismTriangle::on_SliderB_valueChanged(int value)
{
    ui->label_b_value->setText(QString::number(value));
}


void PrismTriangle::on_SliderC_valueChanged(int value)
{
    ui->label_c_value->setText(QString::number(value));
}

void PrismTriangle::on_SliderH_valueChanged(int value)
{
    ui->label_H_value->setText(QString::number(value));
}

void PrismTriangle::on_Sliderh_valueChanged(int value)
{
    ui->label_h_value->setText(QString::number(value));
}

void PrismTriangle::on_pushButton_clicked()
{
    QString label_a = ui ->label_a_value->text();
    int a_value = label_a.toInt();
    QString label_b = ui ->label_b_value->text();
    int b_value = label_b.toInt();
    QString label_c = ui ->label_c_value->text();
    int c_value = label_c.toInt();
    QString label_h = ui ->label_h_value->text();
    int h_value = label_h.toInt();
    QString label_H = ui ->label_H_value->text();
    int H_value = label_H.toInt();

    if(a_value + b_value > c_value && b_value + c_value > a_value && c_value + a_value > b_value)
    {
        if(a_value == 0 || b_value == 0 || c_value == 0 || h_value == 0 || H_value == 0)
        {
            ui->labelPole->setText("error");
            ui->labelOb->setText("error");

        }else{
            double result_P = (2*h_value*a_value/2) + H_value*a_value + H_value*b_value + H_value*c_value;
            ui->labelPole->setText(QString::number(result_P));

            double result_Ob = (h_value*a_value/2)*H_value;
            ui->labelOb->setText(QString::number(result_Ob));
        }
    }else{
        ui->labelPole->setText("error");
        ui->labelOb->setText("error");
    }
}




