#ifndef WINDOW_DATA_H
#define WINDOW_DATA_H

#include <QDialog>


namespace Ui {
class window_data;
}

class window_data : public QDialog
{
    Q_OBJECT

public:
    explicit window_data(QWidget *parent = 0);
    ~window_data();

signals:
    void firstWindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::window_data *ui;
};

#endif // WINDOW_DATA_H
