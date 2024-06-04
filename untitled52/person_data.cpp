#include "person_data.h"
#include "ui_person_data.h"

person_data::person_data(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::person_data)
{
    ui->setupUi(this);
}

person_data::~person_data()
{
    delete ui;
}
