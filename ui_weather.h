/********************************************************************************
** Form generated from reading UI file 'weather.ui'
**
** Created by: Qt User Interface Compiler version 6.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WEATHER_H
#define UI_WEATHER_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Weather
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_14;
    QGridLayout *gridLayout_2;
    QSpacerItem *horizontalSpacer;
    QLabel *label_17;
    QLabel *label_wea;
    QLabel *label_15;
    QLabel *label_city;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_8;
    QLineEdit *lineEdit_searchcity;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_data;
    QWidget *widget;
    QLabel *label;
    QWidget *widget_Ganmao;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_8;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_WindType_4;
    QLabel *label_9;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_10;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_temp;
    QLabel *label_tempvalue;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_12;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_airquaity;
    QLabel *label_13;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QVBoxLayout *verticalLayout;
    QLabel *label_WindType;
    QLabel *label_windlevel;
    QWidget *widget_9;
    QVBoxLayout *verticalLayout_8;
    QWidget *widget_6;
    QGridLayout *gridLayout_3;
    QLabel *label_27;
    QLabel *label_29;
    QLabel *label_32;
    QLabel *label_34;
    QLabel *label_36;
    QLabel *label_38;
    QLabel *label_28;
    QLabel *label_30;
    QLabel *label_31;
    QLabel *label_33;
    QLabel *label_35;
    QLabel *label_37;
    QWidget *widget_7;
    QGridLayout *gridLayout_4;
    QLabel *label_39;
    QLabel *label_40;
    QLabel *label_43;
    QLabel *label_45;
    QLabel *label_47;
    QLabel *label_49;
    QLabel *label_41;
    QLabel *label_42;
    QLabel *label_44;
    QLabel *label_46;
    QLabel *label_48;
    QLabel *label_50;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_21;
    QLabel *label_22;
    QLabel *label_23;
    QLabel *label_24;
    QLabel *label_25;
    QLabel *label_26;
    QWidget *widget_5;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_63;
    QWidget *widget_8;
    QGridLayout *gridLayout_5;
    QLabel *label_52;
    QLabel *label_54;
    QLabel *label_56;
    QLabel *label_58;
    QLabel *label_60;
    QLabel *label_62;
    QLabel *label_51;
    QLabel *label_53;
    QLabel *label_55;
    QLabel *label_57;
    QLabel *label_59;
    QLabel *label_61;

    void setupUi(QMainWindow *Weather)
    {
        if (Weather->objectName().isEmpty())
            Weather->setObjectName("Weather");
        Weather->resize(527, 599);
        Weather->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(154, 154, 154);"));
        centralwidget = new QWidget(Weather);
        centralwidget->setObjectName("centralwidget");
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(30, 530, 64, 64));
        pushButton->setStyleSheet(QString::fromUtf8("border-image: url(:/img/back.png);"));
        widget_2 = new QWidget(centralwidget);
        widget_2->setObjectName("widget_2");
        widget_2->setGeometry(QRect(120, 61, 401, 101));
        horizontalLayout_7 = new QHBoxLayout(widget_2);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        label_14 = new QLabel(widget_2);
        label_14->setObjectName("label_14");
        label_14->setMaximumSize(QSize(70, 70));
        label_14->setPixmap(QPixmap(QString::fromUtf8(":/res/sun.png")));
        label_14->setScaledContents(true);

        horizontalLayout_7->addWidget(label_14);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 1, 2, 1, 1);

        label_17 = new QLabel(widget_2);
        label_17->setObjectName("label_17");

        gridLayout_2->addWidget(label_17, 1, 1, 1, 1);

        label_wea = new QLabel(widget_2);
        label_wea->setObjectName("label_wea");

        gridLayout_2->addWidget(label_wea, 1, 0, 1, 1);

        label_15 = new QLabel(widget_2);
        label_15->setObjectName("label_15");
        QFont font;
        font.setPointSize(23);
        label_15->setFont(font);

        gridLayout_2->addWidget(label_15, 0, 0, 1, 1);

        label_city = new QLabel(widget_2);
        label_city->setObjectName("label_city");
        label_city->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_city, 0, 2, 1, 1);


        horizontalLayout_7->addLayout(gridLayout_2);

        widget_3 = new QWidget(centralwidget);
        widget_3->setObjectName("widget_3");
        widget_3->setGeometry(QRect(120, 2, 369, 53));
        horizontalLayout_8 = new QHBoxLayout(widget_3);
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        lineEdit_searchcity = new QLineEdit(widget_3);
        lineEdit_searchcity->setObjectName("lineEdit_searchcity");
        lineEdit_searchcity->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border: 1px solid gray; /* \350\276\271\346\241\206\351\242\234\350\211\262\345\222\214\345\256\275\345\272\246 */\n"
"    border-radius: 10px; /* \345\234\206\350\247\222\345\215\212\345\276\204\357\274\214\345\217\257\344\273\245\346\240\271\346\215\256\351\234\200\350\246\201\350\260\203\346\225\264 */\n"
"    padding: 2px 5px; /* \345\206\205\350\276\271\350\267\235\357\274\214\344\275\277\346\226\207\346\234\254\344\270\216\350\276\271\346\241\206\344\271\213\351\227\264\346\234\211\347\251\272\351\227\264 */\n"
"    background-color: white; /* \350\203\214\346\231\257\351\242\234\350\211\262 */\n"
"	color: red;\n"
"}"));

        horizontalLayout_8->addWidget(lineEdit_searchcity);

        pushButton_2 = new QPushButton(widget_3);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setMinimumSize(QSize(35, 35));
        pushButton_2->setMaximumSize(QSize(35, 35));
        pushButton_2->setStyleSheet(QString::fromUtf8("border-radius: 10px;"));
        pushButton_2->setText(QString::fromUtf8(""));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/res/search.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton_2->setIcon(icon);

        horizontalLayout_8->addWidget(pushButton_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_2);

        label_data = new QLabel(widget_3);
        label_data->setObjectName("label_data");
        label_data->setMinimumSize(QSize(140, 0));
        label_data->setMaximumSize(QSize(80, 16777215));
        label_data->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_8->addWidget(label_data);

        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(120, 153, 411, 191));
        label = new QLabel(widget);
        label->setObjectName("label");
        label->setGeometry(QRect(9, 9, 168, 16));
        widget_Ganmao = new QWidget(widget);
        widget_Ganmao->setObjectName("widget_Ganmao");
        widget_Ganmao->setGeometry(QRect(9, 32, 391, 151));
        widget_Ganmao->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 179, 116);\n"
"border-radius: 10px;"));
        gridLayout = new QGridLayout(widget_Ganmao);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setHorizontalSpacing(30);
        gridLayout->setContentsMargins(20, 20, 20, 20);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setSizeConstraint(QLayout::SetMinimumSize);
        label_8 = new QLabel(widget_Ganmao);
        label_8->setObjectName("label_8");
        label_8->setMaximumSize(QSize(50, 50));
        label_8->setPixmap(QPixmap(QString::fromUtf8(":/res/PM25.png")));
        label_8->setScaledContents(true);

        horizontalLayout_4->addWidget(label_8);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        label_WindType_4 = new QLabel(widget_Ganmao);
        label_WindType_4->setObjectName("label_WindType_4");
        label_WindType_4->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label_WindType_4);

        label_9 = new QLabel(widget_Ganmao);
        label_9->setObjectName("label_9");
        label_9->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label_9);


        horizontalLayout_4->addLayout(verticalLayout_4);


        gridLayout->addLayout(horizontalLayout_4, 0, 1, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setSizeConstraint(QLayout::SetMinimumSize);
        label_10 = new QLabel(widget_Ganmao);
        label_10->setObjectName("label_10");
        label_10->setMaximumSize(QSize(50, 50));
        label_10->setPixmap(QPixmap(QString::fromUtf8(":/res/tempature.png")));
        label_10->setScaledContents(true);

        horizontalLayout_5->addWidget(label_10);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        label_temp = new QLabel(widget_Ganmao);
        label_temp->setObjectName("label_temp");
        label_temp->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(label_temp);

        label_tempvalue = new QLabel(widget_Ganmao);
        label_tempvalue->setObjectName("label_tempvalue");
        label_tempvalue->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(label_tempvalue);


        horizontalLayout_5->addLayout(verticalLayout_5);


        gridLayout->addLayout(horizontalLayout_5, 1, 0, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout_6->setSizeConstraint(QLayout::SetMinimumSize);
        label_12 = new QLabel(widget_Ganmao);
        label_12->setObjectName("label_12");
        label_12->setMaximumSize(QSize(50, 50));
        label_12->setPixmap(QPixmap(QString::fromUtf8(":/res/airQuity.png")));
        label_12->setScaledContents(true);

        horizontalLayout_6->addWidget(label_12);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName("verticalLayout_6");
        label_airquaity = new QLabel(widget_Ganmao);
        label_airquaity->setObjectName("label_airquaity");
        label_airquaity->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(label_airquaity);

        label_13 = new QLabel(widget_Ganmao);
        label_13->setObjectName("label_13");
        label_13->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(label_13);


        horizontalLayout_6->addLayout(verticalLayout_6);


        gridLayout->addLayout(horizontalLayout_6, 1, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setSizeConstraint(QLayout::SetMinimumSize);
        label_2 = new QLabel(widget_Ganmao);
        label_2->setObjectName("label_2");
        label_2->setMaximumSize(QSize(50, 50));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/res/eastWind.png")));
        label_2->setScaledContents(true);

        horizontalLayout->addWidget(label_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label_WindType = new QLabel(widget_Ganmao);
        label_WindType->setObjectName("label_WindType");
        label_WindType->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_WindType);

        label_windlevel = new QLabel(widget_Ganmao);
        label_windlevel->setObjectName("label_windlevel");
        label_windlevel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_windlevel);


        horizontalLayout->addLayout(verticalLayout);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        widget_9 = new QWidget(centralwidget);
        widget_9->setObjectName("widget_9");
        widget_9->setGeometry(QRect(120, 350, 401, 301));
        verticalLayout_8 = new QVBoxLayout(widget_9);
        verticalLayout_8->setObjectName("verticalLayout_8");
        widget_6 = new QWidget(widget_9);
        widget_6->setObjectName("widget_6");
        gridLayout_3 = new QGridLayout(widget_6);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_3->setHorizontalSpacing(8);
        gridLayout_3->setVerticalSpacing(0);
        gridLayout_3->setContentsMargins(-1, 9, -1, -1);
        label_27 = new QLabel(widget_6);
        label_27->setObjectName("label_27");
        label_27->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(255, 170, 255);\n"
"    border-radius: 10px; /* \345\234\206\350\247\222\345\215\212\345\276\204\357\274\214\345\217\257\344\273\245\346\240\271\346\215\256\351\234\200\350\246\201\350\260\203\346\225\264 */\n"
"    padding: 2px 5px; /* \345\206\205\350\276\271\350\267\235\357\274\214\344\275\277\346\226\207\346\234\254\344\270\216\350\276\271\346\241\206\344\271\213\351\227\264\346\234\211\347\251\272\351\227\264 */\n"
"  border-bottom-left-radius: 0px; /* \345\267\246\344\270\213\350\247\222\345\234\206\350\247\222 */\n"
"    border-bottom-right-radius: 0px; \n"
""));
        label_27->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        gridLayout_3->addWidget(label_27, 0, 0, 1, 1);

        label_29 = new QLabel(widget_6);
        label_29->setObjectName("label_29");
        label_29->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(255, 170, 255);\n"
"    border-radius: 10px; /* \345\234\206\350\247\222\345\215\212\345\276\204\357\274\214\345\217\257\344\273\245\346\240\271\346\215\256\351\234\200\350\246\201\350\260\203\346\225\264 */\n"
"    padding: 2px 5px; /* \345\206\205\350\276\271\350\267\235\357\274\214\344\275\277\346\226\207\346\234\254\344\270\216\350\276\271\346\241\206\344\271\213\351\227\264\346\234\211\347\251\272\351\227\264 */\n"
"  border-bottom-left-radius: 0px; /* \345\267\246\344\270\213\350\247\222\345\234\206\350\247\222 */\n"
"    border-bottom-right-radius: 0px; \n"
""));
        label_29->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        gridLayout_3->addWidget(label_29, 0, 1, 1, 1);

        label_32 = new QLabel(widget_6);
        label_32->setObjectName("label_32");
        label_32->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(255, 170, 255);\n"
"    border-radius: 10px; /* \345\234\206\350\247\222\345\215\212\345\276\204\357\274\214\345\217\257\344\273\245\346\240\271\346\215\256\351\234\200\350\246\201\350\260\203\346\225\264 */\n"
"    padding: 2px 5px; /* \345\206\205\350\276\271\350\267\235\357\274\214\344\275\277\346\226\207\346\234\254\344\270\216\350\276\271\346\241\206\344\271\213\351\227\264\346\234\211\347\251\272\351\227\264 */\n"
"  border-bottom-left-radius: 0px; /* \345\267\246\344\270\213\350\247\222\345\234\206\350\247\222 */\n"
"    border-bottom-right-radius: 0px; \n"
""));
        label_32->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        gridLayout_3->addWidget(label_32, 0, 2, 1, 1);

        label_34 = new QLabel(widget_6);
        label_34->setObjectName("label_34");
        label_34->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(255, 170, 255);\n"
"    border-radius: 10px; /* \345\234\206\350\247\222\345\215\212\345\276\204\357\274\214\345\217\257\344\273\245\346\240\271\346\215\256\351\234\200\350\246\201\350\260\203\346\225\264 */\n"
"    padding: 2px 5px; /* \345\206\205\350\276\271\350\267\235\357\274\214\344\275\277\346\226\207\346\234\254\344\270\216\350\276\271\346\241\206\344\271\213\351\227\264\346\234\211\347\251\272\351\227\264 */\n"
"  border-bottom-left-radius: 0px; /* \345\267\246\344\270\213\350\247\222\345\234\206\350\247\222 */\n"
"    border-bottom-right-radius: 0px; \n"
""));
        label_34->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        gridLayout_3->addWidget(label_34, 0, 3, 1, 1);

        label_36 = new QLabel(widget_6);
        label_36->setObjectName("label_36");
        label_36->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(255, 170, 255);\n"
"    border-radius: 10px; /* \345\234\206\350\247\222\345\215\212\345\276\204\357\274\214\345\217\257\344\273\245\346\240\271\346\215\256\351\234\200\350\246\201\350\260\203\346\225\264 */\n"
"    padding: 2px 5px; /* \345\206\205\350\276\271\350\267\235\357\274\214\344\275\277\346\226\207\346\234\254\344\270\216\350\276\271\346\241\206\344\271\213\351\227\264\346\234\211\347\251\272\351\227\264 */\n"
"  border-bottom-left-radius: 0px; /* \345\267\246\344\270\213\350\247\222\345\234\206\350\247\222 */\n"
"    border-bottom-right-radius: 0px; \n"
""));
        label_36->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        gridLayout_3->addWidget(label_36, 0, 4, 1, 1);

        label_38 = new QLabel(widget_6);
        label_38->setObjectName("label_38");
        label_38->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(255, 170, 255);\n"
"    border-radius: 10px; /* \345\234\206\350\247\222\345\215\212\345\276\204\357\274\214\345\217\257\344\273\245\346\240\271\346\215\256\351\234\200\350\246\201\350\260\203\346\225\264 */\n"
"    padding: 2px 5px; /* \345\206\205\350\276\271\350\267\235\357\274\214\344\275\277\346\226\207\346\234\254\344\270\216\350\276\271\346\241\206\344\271\213\351\227\264\346\234\211\347\251\272\351\227\264 */\n"
"  border-bottom-left-radius: 0px; /* \345\267\246\344\270\213\350\247\222\345\234\206\350\247\222 */\n"
"    border-bottom-right-radius: 0px; \n"
""));
        label_38->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        gridLayout_3->addWidget(label_38, 0, 5, 1, 1);

        label_28 = new QLabel(widget_6);
        label_28->setObjectName("label_28");
        label_28->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(255, 170, 255);\n"
"    border-radius: 10px; /* \345\234\206\350\247\222\345\215\212\345\276\204\357\274\214\345\217\257\344\273\245\346\240\271\346\215\256\351\234\200\350\246\201\350\260\203\346\225\264 */\n"
"    padding: 2px 5px; /* \345\206\205\350\276\271\350\267\235\357\274\214\344\275\277\346\226\207\346\234\254\344\270\216\350\276\271\346\241\206\344\271\213\351\227\264\346\234\211\347\251\272\351\227\264 */\n"
"  border-top-left-radius: 0px; /* \345\267\246\344\270\213\350\247\222\345\234\206\350\247\222 */\n"
"    border-top-right-radius: 0px; \n"
""));
        label_28->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        gridLayout_3->addWidget(label_28, 1, 0, 1, 1);

        label_30 = new QLabel(widget_6);
        label_30->setObjectName("label_30");
        label_30->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(255, 170, 255);\n"
"    border-radius: 10px; /* \345\234\206\350\247\222\345\215\212\345\276\204\357\274\214\345\217\257\344\273\245\346\240\271\346\215\256\351\234\200\350\246\201\350\260\203\346\225\264 */\n"
"    padding: 2px 5px; /* \345\206\205\350\276\271\350\267\235\357\274\214\344\275\277\346\226\207\346\234\254\344\270\216\350\276\271\346\241\206\344\271\213\351\227\264\346\234\211\347\251\272\351\227\264 */\n"
"  border-top-left-radius: 0px; /* \345\267\246\344\270\213\350\247\222\345\234\206\350\247\222 */\n"
"    border-top-right-radius: 0px; \n"
""));
        label_30->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        gridLayout_3->addWidget(label_30, 1, 1, 1, 1);

        label_31 = new QLabel(widget_6);
        label_31->setObjectName("label_31");
        label_31->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(255, 170, 255);\n"
"    border-radius: 10px; /* \345\234\206\350\247\222\345\215\212\345\276\204\357\274\214\345\217\257\344\273\245\346\240\271\346\215\256\351\234\200\350\246\201\350\260\203\346\225\264 */\n"
"    padding: 2px 5px; /* \345\206\205\350\276\271\350\267\235\357\274\214\344\275\277\346\226\207\346\234\254\344\270\216\350\276\271\346\241\206\344\271\213\351\227\264\346\234\211\347\251\272\351\227\264 */\n"
"  border-top-left-radius: 0px; /* \345\267\246\344\270\213\350\247\222\345\234\206\350\247\222 */\n"
"    border-top-right-radius: 0px; \n"
""));
        label_31->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        gridLayout_3->addWidget(label_31, 1, 2, 1, 1);

        label_33 = new QLabel(widget_6);
        label_33->setObjectName("label_33");
        label_33->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(255, 170, 255);\n"
"    border-radius: 10px; /* \345\234\206\350\247\222\345\215\212\345\276\204\357\274\214\345\217\257\344\273\245\346\240\271\346\215\256\351\234\200\350\246\201\350\260\203\346\225\264 */\n"
"    padding: 2px 5px; /* \345\206\205\350\276\271\350\267\235\357\274\214\344\275\277\346\226\207\346\234\254\344\270\216\350\276\271\346\241\206\344\271\213\351\227\264\346\234\211\347\251\272\351\227\264 */\n"
"  border-top-left-radius: 0px; /* \345\267\246\344\270\213\350\247\222\345\234\206\350\247\222 */\n"
"    border-top-right-radius: 0px; \n"
""));
        label_33->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        gridLayout_3->addWidget(label_33, 1, 3, 1, 1);

        label_35 = new QLabel(widget_6);
        label_35->setObjectName("label_35");
        label_35->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(255, 170, 255);\n"
"    border-radius: 10px; /* \345\234\206\350\247\222\345\215\212\345\276\204\357\274\214\345\217\257\344\273\245\346\240\271\346\215\256\351\234\200\350\246\201\350\260\203\346\225\264 */\n"
"    padding: 2px 5px; /* \345\206\205\350\276\271\350\267\235\357\274\214\344\275\277\346\226\207\346\234\254\344\270\216\350\276\271\346\241\206\344\271\213\351\227\264\346\234\211\347\251\272\351\227\264 */\n"
"  border-top-left-radius: 0px; /* \345\267\246\344\270\213\350\247\222\345\234\206\350\247\222 */\n"
"    border-top-right-radius: 0px; \n"
""));
        label_35->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        gridLayout_3->addWidget(label_35, 1, 4, 1, 1);

        label_37 = new QLabel(widget_6);
        label_37->setObjectName("label_37");
        label_37->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(255, 170, 255);\n"
"    border-radius: 10px; /* \345\234\206\350\247\222\345\215\212\345\276\204\357\274\214\345\217\257\344\273\245\346\240\271\346\215\256\351\234\200\350\246\201\350\260\203\346\225\264 */\n"
"    padding: 2px 5px; /* \345\206\205\350\276\271\350\267\235\357\274\214\344\275\277\346\226\207\346\234\254\344\270\216\350\276\271\346\241\206\344\271\213\351\227\264\346\234\211\347\251\272\351\227\264 */\n"
"  border-top-left-radius: 0px; /* \345\267\246\344\270\213\350\247\222\345\234\206\350\247\222 */\n"
"    border-top-right-radius: 0px; \n"
""));
        label_37->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        gridLayout_3->addWidget(label_37, 1, 5, 1, 1);


        verticalLayout_8->addWidget(widget_6);

        widget_7 = new QWidget(widget_9);
        widget_7->setObjectName("widget_7");
        gridLayout_4 = new QGridLayout(widget_7);
        gridLayout_4->setObjectName("gridLayout_4");
        gridLayout_4->setVerticalSpacing(0);
        label_39 = new QLabel(widget_7);
        label_39->setObjectName("label_39");
        label_39->setStyleSheet(QString::fromUtf8("background-color: rgb(103, 103, 154);"));
        label_39->setPixmap(QPixmap(QString::fromUtf8(":/res/muchcloud.png")));
        label_39->setScaledContents(true);

        gridLayout_4->addWidget(label_39, 0, 0, 1, 1);

        label_40 = new QLabel(widget_7);
        label_40->setObjectName("label_40");
        label_40->setStyleSheet(QString::fromUtf8("background-color: rgb(103, 103, 154);"));
        label_40->setPixmap(QPixmap(QString::fromUtf8(":/res/muchcloud.png")));
        label_40->setScaledContents(true);

        gridLayout_4->addWidget(label_40, 0, 1, 1, 1);

        label_43 = new QLabel(widget_7);
        label_43->setObjectName("label_43");
        label_43->setStyleSheet(QString::fromUtf8("background-color: rgb(103, 103, 154);"));
        label_43->setPixmap(QPixmap(QString::fromUtf8(":/res/muchcloud.png")));
        label_43->setScaledContents(true);

        gridLayout_4->addWidget(label_43, 0, 2, 1, 1);

        label_45 = new QLabel(widget_7);
        label_45->setObjectName("label_45");
        label_45->setStyleSheet(QString::fromUtf8("background-color: rgb(103, 103, 154);"));
        label_45->setPixmap(QPixmap(QString::fromUtf8(":/res/muchcloud.png")));
        label_45->setScaledContents(true);

        gridLayout_4->addWidget(label_45, 0, 3, 1, 1);

        label_47 = new QLabel(widget_7);
        label_47->setObjectName("label_47");
        label_47->setStyleSheet(QString::fromUtf8("background-color: rgb(103, 103, 154);"));
        label_47->setPixmap(QPixmap(QString::fromUtf8(":/res/muchcloud.png")));
        label_47->setScaledContents(true);

        gridLayout_4->addWidget(label_47, 0, 4, 1, 1);

        label_49 = new QLabel(widget_7);
        label_49->setObjectName("label_49");
        label_49->setStyleSheet(QString::fromUtf8("background-color: rgb(103, 103, 154);"));
        label_49->setPixmap(QPixmap(QString::fromUtf8(":/res/muchcloud.png")));
        label_49->setScaledContents(true);

        gridLayout_4->addWidget(label_49, 0, 5, 1, 1);

        label_41 = new QLabel(widget_7);
        label_41->setObjectName("label_41");
        label_41->setStyleSheet(QString::fromUtf8("background-color: rgb(103, 103, 154);"));
        label_41->setScaledContents(true);
        label_41->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_41, 1, 0, 1, 1);

        label_42 = new QLabel(widget_7);
        label_42->setObjectName("label_42");
        label_42->setStyleSheet(QString::fromUtf8("background-color: rgb(103, 103, 154);"));
        label_42->setScaledContents(true);
        label_42->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_42, 1, 1, 1, 1);

        label_44 = new QLabel(widget_7);
        label_44->setObjectName("label_44");
        label_44->setStyleSheet(QString::fromUtf8("background-color: rgb(103, 103, 154);"));
        label_44->setScaledContents(true);
        label_44->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_44, 1, 2, 1, 1);

        label_46 = new QLabel(widget_7);
        label_46->setObjectName("label_46");
        label_46->setStyleSheet(QString::fromUtf8("background-color: rgb(103, 103, 154);"));
        label_46->setScaledContents(true);
        label_46->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_46, 1, 3, 1, 1);

        label_48 = new QLabel(widget_7);
        label_48->setObjectName("label_48");
        label_48->setStyleSheet(QString::fromUtf8("background-color: rgb(103, 103, 154);"));
        label_48->setScaledContents(true);
        label_48->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_48, 1, 4, 1, 1);

        label_50 = new QLabel(widget_7);
        label_50->setObjectName("label_50");
        label_50->setStyleSheet(QString::fromUtf8("background-color: rgb(103, 103, 154);"));
        label_50->setScaledContents(true);
        label_50->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_50, 1, 5, 1, 1);


        verticalLayout_8->addWidget(widget_7);

        widget_4 = new QWidget(widget_9);
        widget_4->setObjectName("widget_4");
        horizontalLayout_9 = new QHBoxLayout(widget_4);
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        label_21 = new QLabel(widget_4);
        label_21->setObjectName("label_21");
        label_21->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 255, 127);\n"
"border: 1px solid gray; /* \350\276\271\346\241\206\351\242\234\350\211\262\345\222\214\345\256\275\345\272\246 */\n"
"border-radius: 6px;"));
        label_21->setAlignment(Qt::AlignCenter);

        horizontalLayout_9->addWidget(label_21);

        label_22 = new QLabel(widget_4);
        label_22->setObjectName("label_22");
        label_22->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(255, 170, 0);\n"
"border: 1px solid gray; /* \350\276\271\346\241\206\351\242\234\350\211\262\345\222\214\345\256\275\345\272\246 */\n"
"border-radius: 6px;"));
        label_22->setAlignment(Qt::AlignCenter);

        horizontalLayout_9->addWidget(label_22);

        label_23 = new QLabel(widget_4);
        label_23->setObjectName("label_23");
        label_23->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 255, 127);\n"
"border: 1px solid gray; /* \350\276\271\346\241\206\351\242\234\350\211\262\345\222\214\345\256\275\345\272\246 */\n"
"border-radius: 6px;"));
        label_23->setAlignment(Qt::AlignCenter);

        horizontalLayout_9->addWidget(label_23);

        label_24 = new QLabel(widget_4);
        label_24->setObjectName("label_24");
        label_24->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 255, 127);\n"
"border: 1px solid gray; /* \350\276\271\346\241\206\351\242\234\350\211\262\345\222\214\345\256\275\345\272\246 */\n"
"border-radius: 6px;"));
        label_24->setAlignment(Qt::AlignCenter);

        horizontalLayout_9->addWidget(label_24);

        label_25 = new QLabel(widget_4);
        label_25->setObjectName("label_25");
        label_25->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 255, 127);\n"
"border: 1px solid gray; /* \350\276\271\346\241\206\351\242\234\350\211\262\345\222\214\345\256\275\345\272\246 */\n"
"border-radius: 6px;"));
        label_25->setAlignment(Qt::AlignCenter);

        horizontalLayout_9->addWidget(label_25);

        label_26 = new QLabel(widget_4);
        label_26->setObjectName("label_26");
        label_26->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 255, 127);\n"
"border: 1px solid gray; /* \350\276\271\346\241\206\351\242\234\350\211\262\345\222\214\345\256\275\345\272\246 */\n"
"border-radius: 6px;"));
        label_26->setAlignment(Qt::AlignCenter);

        horizontalLayout_9->addWidget(label_26);


        verticalLayout_8->addWidget(widget_4);

        widget_5 = new QWidget(widget_9);
        widget_5->setObjectName("widget_5");
        widget_5->setMaximumSize(QSize(400, 16777215));
        widget_5->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 255);"));
        verticalLayout_9 = new QVBoxLayout(widget_5);
        verticalLayout_9->setObjectName("verticalLayout_9");
        label_63 = new QLabel(widget_5);
        label_63->setObjectName("label_63");
        label_63->setMaximumSize(QSize(200, 16777215));

        verticalLayout_9->addWidget(label_63);


        verticalLayout_8->addWidget(widget_5);

        widget_8 = new QWidget(widget_9);
        widget_8->setObjectName("widget_8");
        gridLayout_5 = new QGridLayout(widget_8);
        gridLayout_5->setObjectName("gridLayout_5");
        gridLayout_5->setVerticalSpacing(0);
        label_52 = new QLabel(widget_8);
        label_52->setObjectName("label_52");
        label_52->setStyleSheet(QString::fromUtf8("background-color: rgb(103, 103, 154);"));
        label_52->setScaledContents(false);
        label_52->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label_52, 0, 0, 1, 1);

        label_54 = new QLabel(widget_8);
        label_54->setObjectName("label_54");
        label_54->setStyleSheet(QString::fromUtf8("background-color: rgb(103, 103, 154);"));
        label_54->setScaledContents(false);
        label_54->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label_54, 0, 1, 1, 1);

        label_56 = new QLabel(widget_8);
        label_56->setObjectName("label_56");
        label_56->setStyleSheet(QString::fromUtf8("background-color: rgb(103, 103, 154);"));
        label_56->setScaledContents(false);
        label_56->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label_56, 0, 2, 1, 1);

        label_58 = new QLabel(widget_8);
        label_58->setObjectName("label_58");
        label_58->setStyleSheet(QString::fromUtf8("background-color: rgb(103, 103, 154);"));
        label_58->setScaledContents(false);
        label_58->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label_58, 0, 3, 1, 1);

        label_60 = new QLabel(widget_8);
        label_60->setObjectName("label_60");
        label_60->setStyleSheet(QString::fromUtf8("background-color: rgb(103, 103, 154);"));
        label_60->setScaledContents(false);
        label_60->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label_60, 0, 4, 1, 1);

        label_62 = new QLabel(widget_8);
        label_62->setObjectName("label_62");
        label_62->setStyleSheet(QString::fromUtf8("background-color: rgb(103, 103, 154);"));
        label_62->setScaledContents(false);
        label_62->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label_62, 0, 5, 1, 1);

        label_51 = new QLabel(widget_8);
        label_51->setObjectName("label_51");
        label_51->setStyleSheet(QString::fromUtf8("background-color: rgb(103, 103, 154);"));
        label_51->setScaledContents(true);
        label_51->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label_51, 1, 0, 1, 1);

        label_53 = new QLabel(widget_8);
        label_53->setObjectName("label_53");
        label_53->setStyleSheet(QString::fromUtf8("background-color: rgb(103, 103, 154);"));
        label_53->setScaledContents(true);
        label_53->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label_53, 1, 1, 1, 1);

        label_55 = new QLabel(widget_8);
        label_55->setObjectName("label_55");
        label_55->setStyleSheet(QString::fromUtf8("background-color: rgb(103, 103, 154);"));
        label_55->setScaledContents(true);
        label_55->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label_55, 1, 2, 1, 1);

        label_57 = new QLabel(widget_8);
        label_57->setObjectName("label_57");
        label_57->setStyleSheet(QString::fromUtf8("background-color: rgb(103, 103, 154);"));
        label_57->setScaledContents(true);
        label_57->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label_57, 1, 3, 1, 1);

        label_59 = new QLabel(widget_8);
        label_59->setObjectName("label_59");
        label_59->setStyleSheet(QString::fromUtf8("background-color: rgb(103, 103, 154);"));
        label_59->setScaledContents(true);
        label_59->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label_59, 1, 4, 1, 1);

        label_61 = new QLabel(widget_8);
        label_61->setObjectName("label_61");
        label_61->setStyleSheet(QString::fromUtf8("background-color: rgb(103, 103, 154);"));
        label_61->setScaledContents(true);
        label_61->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label_61, 1, 5, 1, 1);


        verticalLayout_8->addWidget(widget_8);

        Weather->setCentralWidget(centralwidget);

        retranslateUi(Weather);

        QMetaObject::connectSlotsByName(Weather);
    } // setupUi

    void retranslateUi(QMainWindow *Weather)
    {
        Weather->setWindowTitle(QCoreApplication::translate("Weather", "MainWindow", nullptr));
        pushButton->setText(QString());
        label_14->setText(QString());
        label_17->setText(QCoreApplication::translate("Weather", "20\302\260C~26\302\260C", nullptr));
        label_wea->setText(QCoreApplication::translate("Weather", "\346\231\264\345\244\251 ", nullptr));
        label_15->setText(QCoreApplication::translate("Weather", "23", nullptr));
        label_city->setText(QCoreApplication::translate("Weather", "\346\267\261\345\234\263\345\270\202", nullptr));
        label_data->setText(QCoreApplication::translate("Weather", "\346\230\237\346\234\237\346\227\24512\346\234\2103\346\227\245", nullptr));
        label->setText(QCoreApplication::translate("Weather", "\346\204\237\345\206\222\346\214\207\346\225\260\357\274\232\345\220\204\347\261\273\344\272\272\347\276\244\345\217\257\350\207\252\347\224\261\346\264\273\345\212\250", nullptr));
        label_8->setText(QString());
        label_WindType_4->setText(QCoreApplication::translate("Weather", "PM2.5", nullptr));
        label_9->setText(QCoreApplication::translate("Weather", "24", nullptr));
        label_10->setText(QString());
        label_temp->setText(QCoreApplication::translate("Weather", "\346\271\277\345\272\246", nullptr));
        label_tempvalue->setText(QCoreApplication::translate("Weather", "36\302\260C", nullptr));
        label_12->setText(QString());
        label_airquaity->setText(QCoreApplication::translate("Weather", "\347\251\272\346\260\224\350\264\250\351\207\217", nullptr));
        label_13->setText(QCoreApplication::translate("Weather", "\344\274\230", nullptr));
        label_2->setText(QString());
        label_WindType->setText(QCoreApplication::translate("Weather", "\344\270\234\345\215\227\351\243\216", nullptr));
        label_windlevel->setText(QCoreApplication::translate("Weather", "2\347\272\247", nullptr));
        label_27->setText(QCoreApplication::translate("Weather", "\345\222\213\345\244\251", nullptr));
        label_29->setText(QCoreApplication::translate("Weather", "\345\222\213\345\244\251", nullptr));
        label_32->setText(QCoreApplication::translate("Weather", "\345\222\213\345\244\251", nullptr));
        label_34->setText(QCoreApplication::translate("Weather", "\345\222\213\345\244\251", nullptr));
        label_36->setText(QCoreApplication::translate("Weather", "\345\222\213\345\244\251", nullptr));
        label_38->setText(QCoreApplication::translate("Weather", "\345\222\213\345\244\251", nullptr));
        label_28->setText(QCoreApplication::translate("Weather", "12/03", nullptr));
        label_30->setText(QCoreApplication::translate("Weather", "12/03", nullptr));
        label_31->setText(QCoreApplication::translate("Weather", "12/03", nullptr));
        label_33->setText(QCoreApplication::translate("Weather", "12/03", nullptr));
        label_35->setText(QCoreApplication::translate("Weather", "12/03", nullptr));
        label_37->setText(QCoreApplication::translate("Weather", "12/03", nullptr));
        label_39->setText(QString());
        label_40->setText(QString());
        label_43->setText(QString());
        label_45->setText(QString());
        label_47->setText(QString());
        label_49->setText(QString());
        label_41->setText(QCoreApplication::translate("Weather", "\345\244\232\344\272\221", nullptr));
        label_42->setText(QCoreApplication::translate("Weather", "\345\244\232\344\272\221", nullptr));
        label_44->setText(QCoreApplication::translate("Weather", "\345\244\232\344\272\221", nullptr));
        label_46->setText(QCoreApplication::translate("Weather", "\345\244\232\344\272\221", nullptr));
        label_48->setText(QCoreApplication::translate("Weather", "\345\244\232\344\272\221", nullptr));
        label_50->setText(QCoreApplication::translate("Weather", "\345\244\232\344\272\221", nullptr));
        label_21->setText(QCoreApplication::translate("Weather", "\344\274\230", nullptr));
        label_22->setText(QCoreApplication::translate("Weather", "\350\211\257", nullptr));
        label_23->setText(QCoreApplication::translate("Weather", "\344\274\230", nullptr));
        label_24->setText(QCoreApplication::translate("Weather", "\344\274\230", nullptr));
        label_25->setText(QCoreApplication::translate("Weather", "\344\274\230", nullptr));
        label_26->setText(QCoreApplication::translate("Weather", "\344\274\230", nullptr));
        label_63->setText(QCoreApplication::translate("Weather", "TextLabel", nullptr));
        label_52->setText(QCoreApplication::translate("Weather", "\344\270\234\345\215\227\351\243\216", nullptr));
        label_54->setText(QCoreApplication::translate("Weather", "\344\270\234\345\215\227\351\243\216", nullptr));
        label_56->setText(QCoreApplication::translate("Weather", "\344\270\234\345\215\227\351\243\216", nullptr));
        label_58->setText(QCoreApplication::translate("Weather", "\344\270\234\345\215\227\351\243\216", nullptr));
        label_60->setText(QCoreApplication::translate("Weather", "\344\270\234\345\215\227\351\243\216", nullptr));
        label_62->setText(QCoreApplication::translate("Weather", "\344\270\234\345\215\227\351\243\216", nullptr));
        label_51->setText(QCoreApplication::translate("Weather", "2\347\272\247", nullptr));
        label_53->setText(QCoreApplication::translate("Weather", "2\347\272\247", nullptr));
        label_55->setText(QCoreApplication::translate("Weather", "2\347\272\247", nullptr));
        label_57->setText(QCoreApplication::translate("Weather", "2\347\272\247", nullptr));
        label_59->setText(QCoreApplication::translate("Weather", "2\347\272\247", nullptr));
        label_61->setText(QCoreApplication::translate("Weather", "2\347\272\247", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Weather: public Ui_Weather {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WEATHER_H
