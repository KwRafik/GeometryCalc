#ifndef PRISMPENTAGON_H
#define PRISMPENTAGON_H

#include <QDialog>

namespace Ui {
class PrismPentagon;
}

class PrismPentagon : public QDialog
{
    Q_OBJECT

public:
    explicit PrismPentagon(QWidget *parent = nullptr);
    ~PrismPentagon();

private slots:
    void on_pushButton_2_clicked();

    void on_SliderA_valueChanged(int value);

    void on_Sliderh_valueChanged(int value);

    void on_SliderH_valueChanged(int value);

    void on_pushButton_clicked();

private:
    Ui::PrismPentagon *ui;
};

#endif // PRISMPENTAGON_H
