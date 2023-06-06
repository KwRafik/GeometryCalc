#ifndef PRISMHEXAGON_H
#define PRISMHEXAGON_H

#include <QDialog>

namespace Ui {
class PrismHexagon;
}

class PrismHexagon : public QDialog
{
    Q_OBJECT

public:
    explicit PrismHexagon(QWidget *parent = nullptr);
    ~PrismHexagon();

private slots:
    void on_pushButton_2_clicked();

    void on_SliderA_valueChanged(int value);

    void on_Sliderh_valueChanged(int value);

    void on_SliderH_valueChanged(int value);

    void on_pushButton_clicked();

private:
    Ui::PrismHexagon *ui;
};

#endif // PRISMHEXAGON_H
