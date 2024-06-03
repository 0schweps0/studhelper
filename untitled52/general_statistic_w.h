#ifndef GENERAL_STATISTIC_W_H
#define GENERAL_STATISTIC_W_H

#include <QDialog>

QT_BEGIN_NAMESPACE
namespace Ui { class general_statistic_w; }
QT_END_NAMESPACE

class general_statistic_w : public QDialog
{
    Q_OBJECT

public:
    general_statistic_w(QWidget *parent = nullptr);
    ~general_statistic_w();

private slots:
    void updateData();

private:
    void loadDataFromFile(const QString &filePath);

private:
    Ui::general_statistic_w *ui;
};

#endif
