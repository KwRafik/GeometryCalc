#ifndef PYRAMIDHEXAGON_H
#define PYRAMIDHEXAGON_H

#include <QDialog>

namespace Ui {
class PyramidHexagon;
}

class PyramidHexagon : public QDialog
{
    Q_OBJECT

public:
    explicit PyramidHexagon(QWidget *parent = nullptr);
    ~PyramidHexagon();

private slots:
    void on_pushButton_2_clicked();

    void on_SliderA_valueChanged(int value);

    void on_Sliderh_valueChanged(int value);

    void on_SliderH_valueChanged(int value);

    void on_SliderK_valueChanged(int value);

    void on_pushButton_clicked();

private:
    Ui::PyramidHexagon *ui;
};

#endif // PYRAMIDHEXAGON_H
