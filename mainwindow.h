#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include"choosetype.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_StartButton_5_clicked();

private:
    Ui::MainWindow *ui;

    ChooseType *choosetype;
};
#endif // MAINWINDOW_H
