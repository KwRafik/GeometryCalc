#ifndef PRISMTRIANGLE_H
#define PRISMTRIANGLE_H

#include <QDialog>

namespace Ui {
class PrismTriangle;
}

class PrismTriangle : public QDialog
{
    Q_OBJECT

public:
    explicit PrismTriangle(QWidget *parent = nullptr);
    ~PrismTriangle();

private slots:
    void on_backbutton_clicked();

    void on_SliderA_valueChanged(int value);

    void on_SliderB_valueChanged(int value);

    void on_SliderC_valueChanged(int value);

    void on_pushButton_clicked();

    void on_Sliderh_valueChanged(int value);

    void on_SliderH_valueChanged(int value);

private:
    Ui::PrismTriangle *ui;
};

#endif // PRISMTRIANGLE_H
