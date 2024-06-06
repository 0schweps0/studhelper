/********************************************************************************
** Form generated from reading UI file 'window_data.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOW_DATA_H
#define UI_WINDOW_DATA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_window_data
{
public:
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout;
    QLabel *label_4;
    QLineEdit *lineEdit_4;
    QLabel *label_5;
    QLineEdit *lineEdit_5;
    QLabel *label_6;
    QLineEdit *lineEdit_6;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer_2;
    QPushButton *pushButton_2;

    void setupUi(QDialog *window_data)
    {
        if (window_data->objectName().isEmpty())
            window_data->setObjectName("window_data");
        window_data->resize(896, 778);
        window_data->setStyleSheet(QString::fromUtf8("background-color: rgb(63, 63, 63);\n"
"background-image: url(:/img/hse.png);\n"
"color: rgb(255, 255, 255);"));
        verticalLayout_2 = new QVBoxLayout(window_data);
        verticalLayout_2->setObjectName("verticalLayout_2");
        groupBox = new QGroupBox(window_data);
        groupBox->setObjectName("groupBox");
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName("groupBox_2");
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

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        pushButton = new QPushButton(groupBox_2);
        pushButton->setObjectName("pushButton");

        verticalLayout->addWidget(pushButton);


        horizontalLayout->addWidget(groupBox_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_2->addWidget(groupBox);

        verticalSpacer_2 = new QSpacerItem(20, 359, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        pushButton_2 = new QPushButton(window_data);
        pushButton_2->setObjectName("pushButton_2");

        verticalLayout_2->addWidget(pushButton_2);


        retranslateUi(window_data);

        QMetaObject::connectSlotsByName(window_data);
    } // setupUi

    void retranslateUi(QDialog *window_data)
    {
        window_data->setWindowTitle(QCoreApplication::translate("window_data", "Dialog", nullptr));
        groupBox->setTitle(QString());
        groupBox_2->setTitle(QCoreApplication::translate("window_data", "Input data for looking your statistic", nullptr));
        label_4->setText(QCoreApplication::translate("window_data", "Name", nullptr));
        label_5->setText(QCoreApplication::translate("window_data", "Second name", nullptr));
        label_6->setText(QCoreApplication::translate("window_data", "Group", nullptr));
        pushButton->setText(QCoreApplication::translate("window_data", "Go", nullptr));
        pushButton_2->setText(QCoreApplication::translate("window_data", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class window_data: public Ui_window_data {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOW_DATA_H
