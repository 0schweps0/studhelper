#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "window_data.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_window_data_b_clicked();

private:
    Ui::MainWindow *ui;
    window_data *window_2;
};
#endif // MAINWINDOW_H
