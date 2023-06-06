#include "prismhexagon.h"
#include "ui_prismhexagon.h"
#include "PrismBase.h"
#include <cmath>

PrismBase *prismbase4;

PrismHexagon::PrismHexagon(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PrismHexagon)
{
    ui->setupUi(this);
}

PrismHexagon::~PrismHexagon()
{
    delete ui;
}

void PrismHexagon::on_pushButton_2_clicked()
{
    hide();
    prismbase4 = new PrismBase(this);
    prismbase4 -> show();
}


void PrismHexagon::on_SliderA_valueChanged(int value)
{
    ui->label_a_value->setText(QString::number(value));
}


void PrismHexagon::on_SliderH_valueChanged(int value)
{
    ui->label_H_value->setText(QString::number(value));
}


void PrismHexagon::on_pushButton_clicked()
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
        double result_P = 2 * ((3 * sqrt(3) * (a_value * a_value)) / 2) + (6*a_value*H_value);
        ui->labelPole->setText(QString::number(result_P));

        double result_Ob = ((3 * sqrt(3) * (a_value * a_value)) / 2) * H_value;
        ui->labelOb->setText(QString::number(result_Ob));
    }
}
