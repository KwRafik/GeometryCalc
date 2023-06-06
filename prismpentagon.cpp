#include "prismpentagon.h"
#include "ui_prismpentagon.h"
#include "PrismBase.h"
#include <cmath>

PrismBase *prismbase3;

PrismPentagon::PrismPentagon(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PrismPentagon)
{
    ui->setupUi(this);
}

PrismPentagon::~PrismPentagon()
{
    delete ui;
}

void PrismPentagon::on_pushButton_2_clicked()
{
    hide();
    prismbase3 = new PrismBase(this);
    prismbase3 -> show();
}


void PrismPentagon::on_SliderA_valueChanged(int value)
{
    ui->label_a_value->setText(QString::number(value));
}

void PrismPentagon::on_SliderH_valueChanged(int value)
{
    ui->label_H_value->setText(QString::number(value));
}


void PrismPentagon::on_pushButton_clicked()
{
    QString label_a = ui ->label_a_value->text();
    int a_value = label_a.toInt();
    QString label_H = ui ->label_H_value->text();
    int H_value = label_H.toInt();

    if(a_value == 0 || H_value == 0)
    {
        ui->labelPole->setText("error");
        ui->labelOb->setText("error");

    }else{
        double result_P = 2 * (a_value * a_value) * (1.0/4.0) * sqrt(5 * (5 + 2 * sqrt(5))) + (5*a_value*H_value/2);
        ui->labelPole->setText(QString::number(result_P));

        double result_Ob = (1.0/4.0) * sqrt(5 * (5 + 2 * sqrt(5))) * a_value * a_value * H_value;
        ui->labelOb->setText(QString::number(result_Ob));
    }
}

