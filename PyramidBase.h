#ifndef PYRAMIDBASE_H
#define PYRAMIDBASE_H

#include <QDialog>



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

private:
    Ui::PyramidBase *ui;


};

#endif // PYRAMIDBASE_H
