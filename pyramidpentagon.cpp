#include "pyramidpentagon.h"
#include "ui_pyramidpentagon.h"
#include "PyramidBase.h"
#include <cmath>

PyramidBase *pyramidbase3;

PyramidPentagon::PyramidPentagon(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PyramidPentagon)
{
    ui->setupUi(this);
}

PyramidPentagon::~PyramidPentagon()
{
    delete ui;
}

void PyramidPentagon::on_pushButton_2_clicked()
{
    hide();
    pyramidbase3 = new PyramidBase(this);
    pyramidbase3 -> show();
}


void PyramidPentagon::on_SliderA_valueChanged(int value)
{
    ui->label_a_value->setText(QString::number(value));
}


void PyramidPentagon::on_SliderH_valueChanged(int value)
{
    ui->label_H_value->setText(QString::number(value));
}


void PyramidPentagon::on_pushButton_clicked()
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
        double k_value = sqrt(pow(sqrt(5 + 2 * sqrt(5)) / 4 * a_value, 2.0) + pow(H_value, 2.0));

        double result_P =  (1.0/4.0) * sqrt(5 * (5 + 2 * sqrt(5))) * pow(a_value, 2.0) + (5*a_value*k_value/2);
        ui->labelPole->setText(QString::number(result_P));

        double result_Ob = (1.0/4.0) * sqrt(5 * (5 + 2 * sqrt(5))) * pow(a_value, 2.0) * H_value/3;
        ui->labelOb->setText(QString::number(result_Ob));
    }
}
