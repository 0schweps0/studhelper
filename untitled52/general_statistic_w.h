#ifndef GENERAL_STATISTIC_W_H
#define GENERAL_STATISTIC_W_H

#include <QDialog>

namespace Ui {
class general_statistic_w;
}

class general_statistic_w : public QDialog
{
    Q_OBJECT

public:
    explicit general_statistic_w(QWidget *parent = nullptr);
    ~general_statistic_w();

signals:
    void firstWindow();

private slots:
    void updateData();
    void loadDataFromFile(const QString &filePath, int startLine, int endLine, int column2Index, int lastColumnIndex);

    void on_pushButton_clicked();

private:
    Ui::general_statistic_w *ui;
};

#endif // GENERAL_STATISTIC_W_H
