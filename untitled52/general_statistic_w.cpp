#include "general_statistic_w.h"
#include "ui_general_statistic_w.h"
#include <QFile>
#include <QTextStream>
#include <QFont>

general_statistic_w::general_statistic_w(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::general_statistic_w)
{
    ui->setupUi(this);

    QFont font = ui->textBrowser->font();
    font.setPointSize(12); // Задайте нужный размер шрифта
    ui->textBrowser->setFont(font);

    // Add paths to CSV files in ComboBox
    ui->comboBox->addItem("233-2 - Grade.csv", "C:/Users/EDELWEISS PC/Documents/GitHub/studhelper/untitled52/cvsinfo/233-2 - Grade.csv");
    ui->comboBox->addItem("LAaG_g233 - Main_Grades.csv", "C:/Users/EDELWEISS PC/Documents/GitHub/studhelper/untitled52/cvsinfo/LAaG_g233 - Main_Grades.csv");

    // Connect comboBox signal to the slot
    connect(ui->comboBox, SIGNAL(currentIndexChanged(int)), this, SLOT(updateData()));

    // Load data for the first item by default
    updateData();
}

general_statistic_w::~general_statistic_w()
{
    delete ui;
}

void general_statistic_w::updateData()
{
    QString filePath = ui->comboBox->currentData().toString();
    loadDataFromFile(filePath);
}

void general_statistic_w::loadDataFromFile(const QString &filePath)
{
    QFile file(filePath);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        return;
    }

    QTextStream in(&file);
    int lineCount = 0;
    QString html = "<html><body><table border='1' cellspacing='0' cellpadding='4' style='border-collapse: collapse;'>";
    while (!in.atEnd()) {
        QString line = in.readLine();
        lineCount++;
        if (lineCount >= 17 && lineCount <= 25) {
            QStringList fields = line.split(",");
            if (fields.size() >= 2) {
                QString column2 = fields.at(1); // Второй столбец
                QString lastColumn = fields.last(); // Последний столбец

                // Добавляем данные в HTML таблицу
                html += "<tr><td style='padding: 5px; text-align: left;'>" + column2 + "</td><td style='padding: 5px; text-align: left;'>" + lastColumn + "</td></tr>";
            }
        }
    }
    html += "</table></body></html>";
    ui->textBrowser->setHtml(html);

    file.close();
}
