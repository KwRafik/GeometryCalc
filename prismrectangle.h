#ifndef PRISMRECTANGLE_H
#define PRISMRECTANGLE_H

#include <QDialog>

namespace Ui {
class PrismRectangle;
}

class PrismRectangle : public QDialog
{
    Q_OBJECT

public:
    explicit PrismRectangle(QWidget *parent = nullptr);
    ~PrismRectangle();

private slots:
    void on_backbutton_clicked();

    void on_SliderA_valueChanged(int value);

    void on_SliderB_valueChanged(int value);

    void on_SliderC_valueChanged(int value);

    void on_pushButton_clicked();

private:
    Ui::PrismRectangle *ui;
};

#endif // PRISMRECTANGLE_H
