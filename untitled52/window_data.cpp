#include "window_data.h"
#include "ui_window_data.h"
#include <QDebug>

window_data::window_data(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::window_data)
{
    ui->setupUi(this);
}

window_data::~window_data()
{
    delete ui;
}

void window_data::on_pushButton_clicked()
{
    QString name = ui->lineEdit_4->text();
    QString secondname = ui->lineEdit_5->text();
    QString group = ui->lineEdit_6->text();

    qDebug() << "Name" << name;
    qDebug() << "SecondName" << secondname;
    qDebug() << "Gropu" << group;
}


void window_data::on_pushButton_2_clicked()
{
    this->close();
    emit firstWindow();
}

