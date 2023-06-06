#ifndef CHOOSETYPE_H
#define CHOOSETYPE_H

#include <QDialog>

#include"PrismBase.h"
#include "PyramidBase.h"

namespace Ui {
class ChooseType;
}

class ChooseType : public QDialog
{
    Q_OBJECT

public:
    explicit ChooseType(QWidget *parent = nullptr);
    ~ChooseType();

private slots:
    void on_PrismButton_2_clicked();

    void on_PyramidButton_2_clicked();

private:
    Ui::ChooseType *ui;
    PrismBase *prismbase;
    PyramidBase  *pyramidbase;
};

#endif // CHOOSETYPE_H
