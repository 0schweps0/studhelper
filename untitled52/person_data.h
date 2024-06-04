#ifndef PERSON_DATA_H
#define PERSON_DATA_H

#include <QDialog>

namespace Ui {
class person_data;
}

class person_data : public QDialog
{
    Q_OBJECT

public:
    explicit person_data(QWidget *parent = 0);
    ~person_data();

signals:
    void firstWindow();

private:
    Ui::person_data *ui;
};

#endif // PERSON_DATA_H
