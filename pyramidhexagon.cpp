#include "pyramidhexagon.h"
#include "ui_pyramidhexagon.h"
#include "PyramidBase.h"
#include <cmath>

PyramidBase *pyramidbase4;

PyramidHexagon::PyramidHexagon(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PyramidHexagon)
{
    ui->setupUi(this);
}

PyramidHexagon::~PyramidHexagon()
{
    delete ui;
}

void PyramidHexagon::on_pushButton_2_clicked()
{
    hide();
    pyramidbase4 = new PyramidBase(this);
    pyramidbase4 -> show();
}


void PyramidHexagon::on_SliderA_valueChanged(int value)
{
    ui->label_a_value->setText(QString::number(value));
}


void PyramidHexagon::on_SliderH_valueChanged(int value)
{
    ui->label_H_value->setText(QString::number(value));
}


void PyramidHexagon::on_pushButton_clicked()
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
        double k_value = sqrt(pow(a_value * sqrt(3) / 4, 2.0) + pow(H_value, 2.0));

        double result_P = ((3 * sqrt(3) * a_value * a_value) / 2) + (6*a_value*k_value / 2);
        ui->labelPole->setText(QString::number(result_P));
    }

    if(a_value == 0 || H_value == 0)
    {
        ui->labelOb->setText("error");

    }else{
        double result_Ob = ((3 * sqrt(3) * pow(a_value, 2.0)) / 2)*H_value/3;
        ui->labelOb->setText(QString::number(result_Ob));
    }
}
