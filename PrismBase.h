#ifndef PRISMBASE_H
#define PRISMBASE_H

#include <QDialog>
#include "built.h"
#include "prismrectangle.h"
#include "prismtriangle.h"


namespace Ui {
class PrismBase;
}

class PrismBase : public QDialog
{
    Q_OBJECT

public:
    explicit PrismBase(QWidget *parent = nullptr);
    ~PrismBase();

private slots:
    void on_backButton_clicked();

    void on_RectangleButton_clicked();

    void on_TriangleButton_clicked();

    void on_PentagonButton_clicked();

    void on_HexagonButton_clicked();

private:
    Ui::PrismBase *ui;
    Built *built;
    PrismRectangle *prismrectangle;
    PrismTriangle *prismtriangle;

};

#endif // PRISMBASE_H
