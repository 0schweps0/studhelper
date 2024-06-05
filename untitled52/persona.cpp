#include "persona.h"
#include "ui_persona.h"
#include "window_data.h"
#include "globalconstants.h"
#include <QFile>
#include <QTextStream>
#include <QFont>
#include <QDebug>
#include <QFileInfo>
#include <QStringList>
#include <algorithm>

persona::persona(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::persona)
{
    ui->setupUi(this);
}

persona::~persona()
{
    delete ui;
}

void persona::showEvent(QShowEvent *event)
{
    QDialog::showEvent(event);  // Не забудьте вызвать базовую реализацию
    name = name.at(0).toUpper() + name.mid(1).toLower();
    secondName = secondName.at(0).toUpper() + secondName.mid(1).toLower();
    ui->label->setText(name + " " + secondName + "      группа:  " + group);  // Установите текст для QLabel при открытии окна

    struct FileColumn {
        QString fileName;
        int searchColumn;
        int outputColumn;
    };

    // Список файлов и их соответствующих столбцов
    FileColumn files[] = {
        {"233-2 - Grade.csv", 1, -1},
        {"LAaG_g233 - Main_Grades.csv", 1, -2},
        {"С++ 2024 grades - All.csv", 0, 8},
        {"Calculus DSBA 231-235 - 233 2 semester.csv", 0, 9},
        {"Scores-DSBA-233-group.csv", 1, -1},
        {"233-1 - Grade.csv", 1, -1},
        {"DSBA DM 23_24 - Academic Performance - Final grades.csv", 1, -4}
    };

    // Найдем максимальную длину имени файла
    int maxFileNameLength = 0;
    for (const FileColumn &fileInfo : files) {
        maxFileNameLength = std::max(maxFileNameLength, static_cast<int>(fileInfo.fileName.length()));
    }

    // Флаг, показывающий, было ли найдено хотя бы одно совпадение
    bool foundMatch = false;

    for (const FileColumn &fileInfo : files) {
        QFile file(fileInfo.fileName);

        if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
            QTextStream in(&file);
            int lineNumber = 0;

            while (!in.atEnd()) {
                QString line = in.readLine();
                QStringList fields = line.split(',');  // Разделяем строки по запятым

                if (fields.size() > fileInfo.searchColumn) {
                    QString searchField = fields[fileInfo.searchColumn];
                    if (searchField.toLower().contains(name.toLower()) && searchField.toLower().contains(secondName.toLower())) {
                        // Обновляем флаг, если найдено совпадение
                        foundMatch = true;

                        int adjustedOutputColumn = (fileInfo.outputColumn < 0) ? (fields.size() + fileInfo.outputColumn) : fileInfo.outputColumn;
                        QString outputField = (fields.size() > adjustedOutputColumn) ? fields[adjustedOutputColumn] : "N/A";
                        QString fileName = fileInfo.fileName;
                        if (fileName.contains("233-2 - Grade.csv")) fileName = "English";
                        else if (fileName.contains("LAaG_g233 - Main_Grades.csv")) fileName = "LAaG";
                        else if (fileName.contains("С++ 2024 grades - All.csv")) fileName = "C++";
                        else if (fileName.contains("Calculus DSBA 231-235 - 233 2 semester.csv")) fileName = "Calculus";
                        else if (fileName.contains("Scores-DSBA-233-group.csv")) fileName = "Foundation of Russian Statehood";
                        else if (fileName.contains("233-1 - Grade.csv")) fileName = "English";
                        else if (fileName.contains("DSBA DM 23_24 - Academic Performance - Final grades.csv")) fileName = "Discrete Math";

                        // Форматирование строки с выравниванием
                        QString result = QString("%1")
                                             .arg(fileName.leftJustified(maxFileNameLength));

                        QString result2 = QString("%1")
                                              .arg(outputField.replace("\"", "")); // Удаляем кавычки вокруг цифр

                        ui->textBrowser->append(result);
                        ui->textBrowser_2->append(result2);
                        break;
                    }
                }
                ++lineNumber;
            }

            file.close();
        } else {
            qDebug() << "Failed to open file:" << fileInfo.fileName;
        }
    }

    // Проверяем, было ли найдено совпадение, и меняем текст label при необходимости
    if (!foundMatch) {
        ui->label->setText(name + " " + secondName + " не обнаружен. Попробуйте ввести другие значения.");
    }

    ui->textBrowser->setAlignment(Qt::AlignLeft); // Выравнивание по левому краю
    ui->textBrowser_2->setAlignment(Qt::AlignLeft); // Выравнивание по правому краю
}

void persona::on_pushButton_clicked()
{
    ui->textBrowser->clear();
    ui->textBrowser_2->clear();
    this->close();
    emit firstWindow();
}
