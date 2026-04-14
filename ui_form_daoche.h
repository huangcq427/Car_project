/********************************************************************************
** Form generated from reading UI file 'form_daoche.ui'
**
** Created by: Qt User Interface Compiler version 6.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORM_DAOCHE_H
#define UI_FORM_DAOCHE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form_daoche
{
public:
    QLabel *daoche_label;
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QWidget *Form_daoche)
    {
        if (Form_daoche->objectName().isEmpty())
            Form_daoche->setObjectName("Form_daoche");
        Form_daoche->resize(545, 434);
        Form_daoche->setStyleSheet(QString::fromUtf8("background-color: rgb(115, 210, 22);\n"
""));
        daoche_label = new QLabel(Form_daoche);
        daoche_label->setObjectName("daoche_label");
        daoche_label->setGeometry(QRect(230, 170, 67, 17));
        label = new QLabel(Form_daoche);
        label->setObjectName("label");
        label->setGeometry(QRect(130, 170, 67, 17));
        pushButton = new QPushButton(Form_daoche);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(460, 350, 64, 64));
        pushButton->setStyleSheet(QString::fromUtf8("border-image: url(:/img/back.png);"));

        retranslateUi(Form_daoche);

        QMetaObject::connectSlotsByName(Form_daoche);
    } // setupUi

    void retranslateUi(QWidget *Form_daoche)
    {
        Form_daoche->setWindowTitle(QCoreApplication::translate("Form_daoche", "Form", nullptr));
        daoche_label->setText(QCoreApplication::translate("Form_daoche", "TextLabel", nullptr));
        label->setText(QCoreApplication::translate("Form_daoche", "distance:", nullptr));
        pushButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Form_daoche: public Ui_Form_daoche {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORM_DAOCHE_H
