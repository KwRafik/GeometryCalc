#ifndef PYRAMIDBASE_H
#define PYRAMIDBASE_H

#include <QDialog>
#include "built.h"
#include "pyramidrectangle.h"
#include "pyramidtriangle.h"


namespace Ui {
class PyramidBase;
}

class PyramidBase : public QDialog
{
    Q_OBJECT

public:
    explicit PyramidBase(QWidget *parent = nullptr);
    ~PyramidBase();

private slots:
    void on_backButton_clicked();

    void on_TriangleButton_clicked();

    void on_RectangleButton_clicked();

    void on_TrapezeButton_clicked();

    void on_ParallelogramButton_clicked();

private:
    Ui::PyramidBase *ui;
    Built *built2;
    PyramidRectangle *pyramidrectangle;
    PyramidTriangle *pyramidtriangle2;

};

#endif // PYRAMIDBASE_H
