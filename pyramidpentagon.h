#ifndef PYRAMIDPENTAGON_H
#define PYRAMIDPENTAGON_H

#include <QDialog>

namespace Ui {
class PyramidPentagon;
}

class PyramidPentagon : public QDialog
{
    Q_OBJECT

public:
    explicit PyramidPentagon(QWidget *parent = nullptr);
    ~PyramidPentagon();

private slots:
    void on_pushButton_2_clicked();

    void on_SliderA_valueChanged(int value);

    void on_Sliderh_valueChanged(int value);

    void on_SliderH_valueChanged(int value);

    void on_SliderK_valueChanged(int value);

    void on_pushButton_clicked();

private:
    Ui::PyramidPentagon *ui;
};

#endif // PYRAMIDPENTAGON_H
