#ifndef ERRORTRIANGLE_H
#define ERRORTRIANGLE_H

#include <QDialog>

namespace Ui {
class ErrorTriangle;
}

class ErrorTriangle : public QDialog
{
    Q_OBJECT

public:
    explicit ErrorTriangle(QWidget *parent = nullptr);
    ~ErrorTriangle();

private:
    Ui::ErrorTriangle *ui;
};

#endif // ERRORTRIANGLE_H
