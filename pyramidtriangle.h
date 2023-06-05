#ifndef PYRAMIDTRIANGLE_H
#define PYRAMIDTRIANGLE_H

#include <QDialog>

namespace Ui {
class PyramidTriangle;
}

class PyramidTriangle : public QDialog
{
    Q_OBJECT

public:
    explicit PyramidTriangle(QWidget *parent = nullptr);
    ~PyramidTriangle();

private slots:
    void on_Slidera_valueChanged(int value);

    void on_Sliderb_valueChanged(int value);

    void on_SliderC_valueChanged(int value);

    void on_SliderH_valueChanged(int value);

    void on_Sliderh_valueChanged(int value);

    void on_backbutton_clicked();

    void on_pushButton_clicked();

    void on_Sliderk_valueChanged(int value);

private:
    Ui::PyramidTriangle *ui;
};

#endif // PYRAMIDTRIANGLE_H
