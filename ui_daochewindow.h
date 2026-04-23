/********************************************************************************
** Form generated from reading UI file 'daochewindow.ui'
**
** Created by: Qt User Interface Compiler version 6.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DAOCHEWINDOW_H
#define UI_DAOCHEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_daocheWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QPushButton *pushButton;
    QLabel *daoche_label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *daocheWindow)
    {
        if (daocheWindow->objectName().isEmpty())
            daocheWindow->setObjectName("daocheWindow");
        daocheWindow->resize(800, 600);
        centralwidget = new QWidget(daocheWindow);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(240, 180, 67, 17));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(570, 360, 64, 64));
        pushButton->setStyleSheet(QString::fromUtf8("border-image: url(:/img/back.png);"));
        daoche_label = new QLabel(centralwidget);
        daoche_label->setObjectName("daoche_label");
        daoche_label->setGeometry(QRect(340, 180, 67, 17));
        daocheWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(daocheWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        daocheWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(daocheWindow);
        statusbar->setObjectName("statusbar");
        daocheWindow->setStatusBar(statusbar);

        retranslateUi(daocheWindow);

        QMetaObject::connectSlotsByName(daocheWindow);
    } // setupUi

    void retranslateUi(QMainWindow *daocheWindow)
    {
        daocheWindow->setWindowTitle(QCoreApplication::translate("daocheWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("daocheWindow", "distance:", nullptr));
        pushButton->setText(QString());
        daoche_label->setText(QCoreApplication::translate("daocheWindow", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class daocheWindow: public Ui_daocheWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DAOCHEWINDOW_H
