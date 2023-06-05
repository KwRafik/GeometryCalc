#ifndef PYRAMIDRECTANGLE_H
#define PYRAMIDRECTANGLE_H

#include <QDialog>

namespace Ui {
class PyramidRectangle;
}

class PyramidRectangle : public QDialog
{
    Q_OBJECT

public:
    explicit PyramidRectangle(QWidget *parent = nullptr);
    ~PyramidRectangle();

private slots:
    void on_Slidera_valueChanged(int value);

    void on_SliderH_valueChanged(int value);

    void on_Sliderh_valueChanged(int value);

    void on_Sliderk_valueChanged(int value);

    void on_backbutton_clicked();

    void on_pushButton_clicked();

    void on_Sliderb_valueChanged(int value);

private:
    Ui::PyramidRectangle *ui;
};

#endif // PYRAMIDRECTANGLE_H
