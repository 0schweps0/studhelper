#include "general_statistic_w.h"
#include "ui_general_statistic_w.h"
#include <QFile>
#include <QTextStream>
#include <QFont>
#include <QDebug>
#include <QFileInfo>

general_statistic_w::general_statistic_w(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::general_statistic_w)
{
    ui->setupUi(this);

    QFont font = ui->textBrowser->font();
    font.setPointSize(12); // Задайте нужный размер шрифта для текстового браузера
    ui->textBrowser->setFont(font);

    // Add paths to CSV files in ComboBox
    ui->comboBox->addItem("English", "233-2 - Grade.csv");
    ui->comboBox->addItem("LAaG", "LAaG_g233 - Main_Grades.csv");
    ui->comboBox->addItem("C++", "С++ 2024 grades - All.csv");

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
    qDebug() << "Selected file path: " << filePath;

    // Check if file exists
    QFileInfo checkFile(filePath);
    if (!checkFile.exists() || !checkFile.isFile()) {
        qDebug() << "File does not exist: " << filePath;
        return;
    }

    int startLine = 0;
    int endLine = 0;
    int column2Index = 1;
    int lastColumnIndex = -1;

    if (filePath.contains("LAaG")) {
        startLine = 3;
        endLine = 28;
        column2Index = 1; // Второй столбец
        lastColumnIndex = -2; // Предпоследний столбец
    } else if (filePath.contains("233-2 - Grade")) {
        startLine = 17;
        endLine = 31;
        column2Index = 1; // Второй столбец
        lastColumnIndex = -1; // Последний столбец
    } else if (filePath.contains("С++ 2024")) {
        startLine = 57;
        endLine = 80;
        column2Index = 0; // Второй столбец
        lastColumnIndex = 8; // Последний столбец
    }

    loadDataFromFile(filePath, startLine, endLine, column2Index, lastColumnIndex);
}

void general_statistic_w::loadDataFromFile(const QString &filePath, int startLine, int endLine, int column2Index, int lastColumnIndex)
{
    QFile file(filePath);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        qDebug() << "Could not open file: " << filePath;
        return;
    }

    qDebug() << "Reading file: " << filePath;

    QTextStream in(&file);
    int lineCount = 0;
    QString html = "<html><body><table border='1' cellspacing='0' cellpadding='4' style='border-collapse: collapse;'>";

    while (!in.atEnd()) {
        QString line = in.readLine();
        lineCount++;
        qDebug() << "Line" << lineCount;
        if (lineCount >= startLine && lineCount <= endLine) {
            QStringList fields = line.split(","); // Разбиваем строку по запятой
            qDebug() << "Processing line: " << line;
            if (fields.size() >= qMax(column2Index, lastColumnIndex) + 1) {
                QString column2 = fields.at(column2Index);
                QString lastColumn = fields.at(lastColumnIndex >= 0 ? lastColumnIndex : fields.size() + lastColumnIndex);

                // Добавляем данные в HTML таблицу
                html += "<tr><td style='padding: 5px; text-align: left;'>" + column2 + "</td><td style='padding: 5px; text-align: left;'>" + lastColumn + "</td></tr>";
            }
        }
    }
    html += "</table></body></html>";
    ui->textBrowser->setHtml(html);

    qDebug() << "Finished reading file: " << filePath;

    file.close();
}
