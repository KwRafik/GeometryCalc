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


void PyramidTriangle::on_Sliderb_valueChanged(int value)
{
    ui->label_b_value->setText(QString::number(value));
}


void PyramidTriangle::on_SliderC_valueChanged(int value)
{
    ui->label_c_value->setText(QString::number(value));
}


void PyramidTriangle::on_SliderH_valueChanged(int value)
{
    ui->label_H_value->setText(QString::number(value));
}


void PyramidTriangle::on_Sliderh_valueChanged(int value)
{
    ui->label_h_value->setText(QString::number(value));
}

void PyramidTriangle::on_Sliderk_valueChanged(int value)
{
   ui->label_k_value->setText(QString::number(value));
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
    int a_value = label_a.toInt();
    QString label_H = ui ->label_H_value->text();
    int H_value = label_H.toInt();
    QString label_h = ui ->label_h_value->text();
    int h_value = label_h.toInt();
    QString label_b = ui ->label_b_value->text();
    int b_value = label_b.toInt();
    QString label_c = ui ->label_c_value->text();
    int c_value = label_c.toInt();
    QString label_k = ui ->label_k_value->text();
    int k_value = label_k.toInt();

    if(a_value + b_value > c_value && b_value + c_value > a_value && c_value + a_value > b_value)
    {
        if(a_value == 0 || k_value == 0 || b_value == 0 || c_value == 0)
        {
            ui->labelPole->setText("error");

        }else{
            double result_P = (b_value*a_value) + k_value*a_value + k_value*b_value + k_value*c_value;
            ui->labelPole->setText(QString::number(result_P));
        }

        if(a_value == 0 || H_value == 0 || h_value == 0)
        {
            ui->labelOb->setText("error");

        }else{
            double result_Ob = (h_value*a_value/2)*H_value/3;
            ui->labelOb->setText(QString::number(result_Ob));
        }

    }else{
        ui->labelPole->setText("error");
        ui->labelOb->setText("error");
    }
}




