/********************************************************************************
** Form generated from reading UI file 'persona.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PERSONA_H
#define UI_PERSONA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_persona
{
public:
    QPushButton *pushButton;

    void setupUi(QDialog *persona)
    {
        if (persona->objectName().isEmpty())
            persona->setObjectName("persona");
        persona->resize(400, 300);
        persona->setStyleSheet(QString::fromUtf8("background-color: rgb(63, 63, 63);\n"
"background-image: url(:/img/hse.png);\n"
"color: rgb(255, 255, 255);"));
        pushButton = new QPushButton(persona);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(160, 260, 80, 24));

        retranslateUi(persona);

        QMetaObject::connectSlotsByName(persona);
    } // setupUi

    void retranslateUi(QDialog *persona)
    {
        persona->setWindowTitle(QCoreApplication::translate("persona", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("persona", "close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class persona: public Ui_persona {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PERSONA_H
