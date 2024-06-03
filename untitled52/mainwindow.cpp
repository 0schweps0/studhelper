#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "window_data.h"
#include <QMessageBox>
#include <QPixmap>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    window_2 = new window_data();
    window_3 = new general_statistic_w();
    connect(window_2, &window_data::firstWindow, this, &MainWindow::show);
    connect(window_3, &general_statistic_w::firstWindow, this, &MainWindow::show);
    // QPixmap pix(":/img/hse_logo.jpg");
    // int w = ui ->image->width();
    // int h = ui ->image->height();

    // ui ->image->setPixmap(pix.scaled(w, h, Qt::KeepAspectRatio));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_window_data_b_clicked()
{
    window_2->show();
    this->close();
}


void MainWindow::on_pushButton_2_clicked()
{
    QMessageBox::aboutQt(this, "");
}


void MainWindow::on_pushButton_3_clicked()
{

    window_3-> show();
    this->close();
}

