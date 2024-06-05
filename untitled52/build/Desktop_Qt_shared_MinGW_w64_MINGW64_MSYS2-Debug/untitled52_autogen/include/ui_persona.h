/********************************************************************************
** Form generated from reading UI file 'persona.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PERSONA_H
#define UI_PERSONA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_persona
{
public:
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QTextBrowser *textBrowser;
    QTextBrowser *textBrowser_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;

    void setupUi(QDialog *persona)
    {
        if (persona->objectName().isEmpty())
            persona->setObjectName("persona");
        persona->resize(1200, 760);
        persona->setStyleSheet(QString::fromUtf8("background-color: rgb(63, 63, 63);\n"
"background-image: url(:/img/hse.png);\n"
"color: rgb(255, 255, 255);"));
        verticalLayout_2 = new QVBoxLayout(persona);
        verticalLayout_2->setObjectName("verticalLayout_2");
        groupBox_2 = new QGroupBox(persona);
        groupBox_2->setObjectName("groupBox_2");
        verticalLayout = new QVBoxLayout(groupBox_2);
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(groupBox_2);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        groupBox = new QGroupBox(groupBox_2);
        groupBox->setObjectName("groupBox");
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName("horizontalLayout");
        textBrowser = new QTextBrowser(groupBox);
        textBrowser->setObjectName("textBrowser");

        horizontalLayout->addWidget(textBrowser);

        textBrowser_2 = new QTextBrowser(groupBox);
        textBrowser_2->setObjectName("textBrowser_2");

        horizontalLayout->addWidget(textBrowser_2);

        horizontalSpacer = new QSpacerItem(371, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addWidget(groupBox);

        pushButton = new QPushButton(groupBox_2);
        pushButton->setObjectName("pushButton");

        verticalLayout->addWidget(pushButton);


        verticalLayout_2->addWidget(groupBox_2);


        retranslateUi(persona);

        QMetaObject::connectSlotsByName(persona);
    } // setupUi

    void retranslateUi(QDialog *persona)
    {
        persona->setWindowTitle(QCoreApplication::translate("persona", "Dialog", nullptr));
        groupBox_2->setTitle(QString());
        label->setText(QCoreApplication::translate("persona", "TextLabel", nullptr));
        groupBox->setTitle(QString());
        pushButton->setText(QCoreApplication::translate("persona", "close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class persona: public Ui_persona {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PERSONA_H
