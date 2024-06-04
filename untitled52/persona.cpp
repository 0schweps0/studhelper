#include "persona.h"
#include "ui_persona.h"

persona::persona(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::persona)
{
    ui->setupUi(this);
}

persona::~persona()
{
    delete ui;
}

void persona::on_pushButton_clicked()
{
    this->close();
    emit firstWindow();
}


