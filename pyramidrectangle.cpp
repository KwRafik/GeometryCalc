#include "pyramidrectangle.h"
#include "ui_pyramidrectangle.h"
#include "PyramidBase.h"

PyramidBase *pyramidbase;

PyramidRectangle::PyramidRectangle(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PyramidRectangle)
{
    ui->setupUi(this);
}

PyramidRectangle::~PyramidRectangle()
{
    delete ui;
}

void PyramidRectangle::on_Slidera_valueChanged(int value)
{
    ui->label_a_value->setText(QString::number(value));
}


void PyramidRectangle::on_SliderH_valueChanged(int value)
{
    ui->label_H_value->setText(QString::number(value));
}


void PyramidRectangle::on_Sliderh_valueChanged(int value)
{
    ui->label_h_value->setText(QString::number(value));
}

void PyramidRectangle::on_Sliderb_valueChanged(int value)
{
    ui->label_b_value->setText(QString::number(value));
}

void PyramidRectangle::on_backbutton_clicked()
{
    hide();
    pyramidbase = new PyramidBase(this);
    pyramidbase -> show();
}

void PyramidRectangle::on_pushButton_clicked()
{
    QString label_a = ui ->label_a_value->text();
    int a_value = label_a.toInt();
    QString label_H = ui ->label_H_value->text();
    int H_value = label_H.toInt();
    QString label_h = ui ->label_h_value->text();
    int h_value = label_h.toInt();
    QString label_b = ui ->label_b_value->text();
    int b_value = label_b.toInt();

    if(a_value == 0 || h_value == 0 || b_value == 0)
    {
        ui->labelPole->setText("error");

    }else{
        int result_P = (b_value*a_value) + 2*h_value*a_value + 2*h_value*b_value;
        ui->labelPole->setText(QString::number(result_P));
    }

    if(a_value == 0 || H_value == 0 || b_value == 0)
    {
        ui->labelOb->setText("error");

    }else{
        int result_Ob = (b_value*a_value)*H_value/3;
        ui->labelOb->setText(QString::number(result_Ob));
    }
}




