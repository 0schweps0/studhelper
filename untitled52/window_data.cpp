#include "window_data.h"
#include "ui_window_data.h"

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
