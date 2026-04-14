/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *daochepushButton_5;
    QPushButton *pushButton_3;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_4;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(811, 505);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName("centralWidget");
        centralWidget->setStyleSheet(QString::fromUtf8("background-image: url(:/img/bg.jpg);"));
        daochepushButton_5 = new QPushButton(centralWidget);
        daochepushButton_5->setObjectName("daochepushButton_5");
        daochepushButton_5->setGeometry(QRect(610, 170, 128, 128));
        daochepushButton_5->setMinimumSize(QSize(128, 128));
        daochepushButton_5->setStyleSheet(QString::fromUtf8("border-image: url(:/img/daoche.png);"));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(223, 271, 128, 128));
        pushButton_3->setMinimumSize(QSize(128, 128));
        pushButton_3->setStyleSheet(QString::fromUtf8("border-image: url(:/img/music.png);"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(223, 81, 128, 128));
        pushButton->setMinimumSize(QSize(128, 128));
        pushButton->setStyleSheet(QString::fromUtf8("border-image: url(:/img/weather.png);"));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(443, 81, 128, 128));
        pushButton_2->setMinimumSize(QSize(128, 128));
        pushButton_2->setStyleSheet(QString::fromUtf8("border-image: url(:/img/map.png);"));
        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(449, 271, 128, 128));
        pushButton_4->setMinimumSize(QSize(128, 128));
        pushButton_4->setStyleSheet(QString::fromUtf8("border-image: url(:/img/video.png);"));
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        daochepushButton_5->setText(QString());
        pushButton_3->setText(QString());
        pushButton->setText(QString());
        pushButton_2->setText(QString());
        pushButton_4->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
