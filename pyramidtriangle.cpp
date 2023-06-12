#include "pyramidtriangle.h"
#include "ui_pyramidtriangle.h"
#include "PyramidBase.h"

PyramidBase *pyramidbase2;

PyramidTriangle::PyramidTriangle(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PyramidTriangle)
{
    ui->setupUi(this);
}

PyramidTriangle::~PyramidTriangle()
{
    delete ui;
}

void PyramidTriangle::on_Slidera_valueChanged(int value)
{
    ui->label_a_value->setText(QString::number(value));
}


void PyramidTriangle::on_SliderH_valueChanged(int value)
{
    ui->label_H_value->setText(QString::number(value));
}


void PyramidTriangle::on_backbutton_clicked()
{
    hide();
    pyramidbase2 = new PyramidBase(this);
    pyramidbase2 -> show();
}


void PyramidTriangle::on_pushButton_clicked()
{
    QString label_a = ui ->label_a_value->text();
    double a_value = label_a.toInt();
    QString label_H = ui ->label_H_value->text();
    double H_value = label_H.toInt();

        if(a_value == 0 || H_value == 0)
        {
            ui->labelPole->setText("error");
            ui->labelOb->setText("error");

        }else{
            double k_value = sqrt(pow(a_value * sqrt(3) / 4, 2.0) + pow(H_value, 2.0));

            double result_P = (pow(a_value, 2.0) * sqrt(3) / 2) + (3 * a_value * k_value / 2);
            ui->labelPole->setText(QString::number(result_P));

            double result_Ob = pow(a_value, 2.0) * sqrt(3) / 4;
            ui->labelOb->setText(QString::number(result_Ob));
        }
    }




