/********************************************************************************
** Form generated from reading UI file 'general_statistic_w.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GENERAL_STATISTIC_W_H
#define UI_GENERAL_STATISTIC_W_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_general_statistic_w
{
public:
    QTextBrowser *textBrowser;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QComboBox *comboBox;

    void setupUi(QDialog *general_statistic_w)
    {
        if (general_statistic_w->objectName().isEmpty())
            general_statistic_w->setObjectName("general_statistic_w");
        general_statistic_w->resize(1200, 720);
        textBrowser = new QTextBrowser(general_statistic_w);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(30, 170, 1141, 521));
        groupBox = new QGroupBox(general_statistic_w);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(30, 60, 96, 51));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName("verticalLayout");
        comboBox = new QComboBox(groupBox);
        comboBox->setObjectName("comboBox");

        verticalLayout->addWidget(comboBox);


        retranslateUi(general_statistic_w);

        QMetaObject::connectSlotsByName(general_statistic_w);
    } // setupUi

    void retranslateUi(QDialog *general_statistic_w)
    {
        general_statistic_w->setWindowTitle(QCoreApplication::translate("general_statistic_w", "Dialog", nullptr));
        groupBox->setTitle(QString());
    } // retranslateUi

};

namespace Ui {
    class general_statistic_w: public Ui_general_statistic_w {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GENERAL_STATISTIC_W_H
