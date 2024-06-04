#ifndef PERSONA_H
#define PERSONA_H

#include <QDialog>

namespace Ui {
class persona;
}

class persona : public QDialog
{
    Q_OBJECT

public:
    explicit persona(QWidget *parent = 0);
    ~persona();

signals:
    void firstWindow();

private slots:
    void on_pushButton_clicked();

private:
    Ui::persona *ui;
};

#endif // PERSONA_H
