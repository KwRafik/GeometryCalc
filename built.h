#ifndef BUILT_H
#define BUILT_H

#include <QDialog>

namespace Ui {
class Built;
}

class Built : public QDialog
{
    Q_OBJECT

public:
    explicit Built(QWidget *parent = nullptr);
    ~Built();

private:
    Ui::Built *ui;
};

#endif // BUILT_H
