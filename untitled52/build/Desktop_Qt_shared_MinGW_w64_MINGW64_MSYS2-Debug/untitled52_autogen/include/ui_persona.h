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
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_persona
{
public:
    QPushButton *pushButton;
    QLabel *label;
    QTextBrowser *textBrowser;
    QTextBrowser *textBrowser_2;

    void setupUi(QDialog *persona)
    {
        if (persona->objectName().isEmpty())
            persona->setObjectName("persona");
        persona->resize(1200, 760);
        persona->setStyleSheet(QString::fromUtf8("background-color: rgb(63, 63, 63);\n"
"background-image: url(:/img/hse.png);\n"
"color: rgb(255, 255, 255);"));
        pushButton = new QPushButton(persona);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(560, 670, 80, 24));
        label = new QLabel(persona);
        label->setObjectName("label");
        label->setGeometry(QRect(100, 40, 281, 41));
        textBrowser = new QTextBrowser(persona);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(60, 130, 211, 541));
        textBrowser_2 = new QTextBrowser(persona);
        textBrowser_2->setObjectName("textBrowser_2");
        textBrowser_2->setGeometry(QRect(290, 130, 256, 541));

        retranslateUi(persona);

        QMetaObject::connectSlotsByName(persona);
    } // setupUi

    void retranslateUi(QDialog *persona)
    {
        persona->setWindowTitle(QCoreApplication::translate("persona", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("persona", "close", nullptr));
        label->setText(QCoreApplication::translate("persona", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class persona: public Ui_persona {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PERSONA_H
