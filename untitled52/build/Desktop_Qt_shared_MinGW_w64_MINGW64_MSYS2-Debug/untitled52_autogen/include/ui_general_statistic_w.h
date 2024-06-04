/********************************************************************************
** Form generated from reading UI file 'general_statistic_w.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_general_statistic_w
{
public:
    QHBoxLayout *horizontalLayout_3;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QComboBox *comboBox;
    QSpacerItem *horizontalSpacer;
    QTextBrowser *textBrowser;
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_3;

    void setupUi(QDialog *general_statistic_w)
    {
        if (general_statistic_w->objectName().isEmpty())
            general_statistic_w->setObjectName("general_statistic_w");
        general_statistic_w->resize(1200, 720);
        general_statistic_w->setStyleSheet(QString::fromUtf8("background-color: rgb(63, 63, 63);\n"
"background-image: url(:/img/hse.png);\n"
"color: rgb(255, 255, 255);"));
        horizontalLayout_3 = new QHBoxLayout(general_statistic_w);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        groupBox_2 = new QGroupBox(general_statistic_w);
        groupBox_2->setObjectName("groupBox_2");
        verticalLayout = new QVBoxLayout(groupBox_2);
        verticalLayout->setObjectName("verticalLayout");
        groupBox = new QGroupBox(groupBox_2);
        groupBox->setObjectName("groupBox");
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName("horizontalLayout");
        comboBox = new QComboBox(groupBox);
        comboBox->setObjectName("comboBox");

        horizontalLayout->addWidget(comboBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addWidget(groupBox);

        textBrowser = new QTextBrowser(groupBox_2);
        textBrowser->setObjectName("textBrowser");

        verticalLayout->addWidget(textBrowser);

        groupBox_3 = new QGroupBox(groupBox_2);
        groupBox_3->setObjectName("groupBox_3");
        horizontalLayout_2 = new QHBoxLayout(groupBox_3);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer_2 = new QSpacerItem(521, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        pushButton = new QPushButton(groupBox_3);
        pushButton->setObjectName("pushButton");
        pushButton->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_2->addWidget(pushButton);

        horizontalSpacer_3 = new QSpacerItem(520, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);


        verticalLayout->addWidget(groupBox_3);


        horizontalLayout_3->addWidget(groupBox_2);


        retranslateUi(general_statistic_w);

        QMetaObject::connectSlotsByName(general_statistic_w);
    } // setupUi

    void retranslateUi(QDialog *general_statistic_w)
    {
        general_statistic_w->setWindowTitle(QCoreApplication::translate("general_statistic_w", "Dialog", nullptr));
        groupBox_2->setTitle(QString());
        groupBox->setTitle(QString());
        groupBox_3->setTitle(QString());
        pushButton->setText(QCoreApplication::translate("general_statistic_w", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class general_statistic_w: public Ui_general_statistic_w {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GENERAL_STATISTIC_W_H
