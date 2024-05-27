#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "window_data.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_window_data_b_clicked()
{
    window_2 = new window_data(this);
}

