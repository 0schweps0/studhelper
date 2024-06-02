#include "general_statistic_w.h"
#include "ui_general_statistic_w.h"

general_statistic_w::general_statistic_w(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::general_statistic_w)
{
    ui->setupUi(this);
}

general_statistic_w::~general_statistic_w()
{
    delete ui;
}
