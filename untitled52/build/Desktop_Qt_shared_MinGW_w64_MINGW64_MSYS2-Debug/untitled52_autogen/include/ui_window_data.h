/********************************************************************************
** Form generated from reading UI file 'window_data.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOW_DATA_H
#define UI_WINDOW_DATA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_window_data
{
public:
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout;
    QLabel *label_4;
    QLineEdit *lineEdit_4;
    QLabel *label_5;
    QLineEdit *lineEdit_5;
    QLabel *label_6;
    QLineEdit *lineEdit_6;

    void setupUi(QDialog *window_data)
    {
        if (window_data->objectName().isEmpty())
            window_data->setObjectName("window_data");
        window_data->resize(896, 778);
        groupBox_2 = new QGroupBox(window_data);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(20, 10, 281, 321));
        verticalLayout = new QVBoxLayout(groupBox_2);
        verticalLayout->setObjectName("verticalLayout");
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName("label_4");

        verticalLayout->addWidget(label_4);

        lineEdit_4 = new QLineEdit(groupBox_2);
        lineEdit_4->setObjectName("lineEdit_4");

        verticalLayout->addWidget(lineEdit_4);

        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName("label_5");

        verticalLayout->addWidget(label_5);

        lineEdit_5 = new QLineEdit(groupBox_2);
        lineEdit_5->setObjectName("lineEdit_5");

        verticalLayout->addWidget(lineEdit_5);

        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName("label_6");

        verticalLayout->addWidget(label_6);

        lineEdit_6 = new QLineEdit(groupBox_2);
        lineEdit_6->setObjectName("lineEdit_6");

        verticalLayout->addWidget(lineEdit_6);


        retranslateUi(window_data);

        QMetaObject::connectSlotsByName(window_data);
    } // setupUi

    void retranslateUi(QDialog *window_data)
    {
        window_data->setWindowTitle(QCoreApplication::translate("window_data", "Dialog", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("window_data", "Input data for looking your statistic", nullptr));
        label_4->setText(QCoreApplication::translate("window_data", "Name", nullptr));
        label_5->setText(QCoreApplication::translate("window_data", "Second name", nullptr));
        label_6->setText(QCoreApplication::translate("window_data", "Group", nullptr));
    } // retranslateUi

};

namespace Ui {
    class window_data: public Ui_window_data {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOW_DATA_H
