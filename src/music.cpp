#include "music.h"
#include "ui_music.h"

bool music_playing_flag = 0;
bool music_start_once = 1;

QString music_total_length;
QString music_current_pos;

Music::Music(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Music)
{
    ui->setupUi(this);
    this->ui->pushButton->setFocusPolicy(Qt::NoFocus);
    this->ui->horizontalSlider->setFocusPolicy(Qt::NoFocus);
    this->ui->horizontalSlider_3->setFocusPolicy(Qt::NoFocus);

    // -------------- 修复 1：背景图用资源路径 ----------------
    this->setStyleSheet("background-image: url(:/img/ljj.jpg);");

    process = new QProcess(this);

    ui->listWidget->addItem("ljj-jj.mp3");
    ui->listWidget->addItem("zjl-yq.mp3");
    ui->listWidget->setCurrentRow(0);

    ui->horizontalSlider->setRange(0,100);
    ui->horizontalSlider->setValue(5);
    ui->label_volume_percent->setText(QString("%1%").arg(ui->horizontalSlider->value()));

    connect(process,&QProcess::readyRead,[=](){
        QString msg = QString(process->readAll());
        QString tmp = msg;

        if(tmp.indexOf("ANS_LENGTH=") != -1)
        {
            int start = tmp.indexOf(QString("ANS_LENGTH="));
            QString len  = tmp.mid(start+11, 100);
            len.chop(4);
            music_total_length = len;

            int totalSecs = music_total_length.toInt();
            QString minute = QString("%1").arg(totalSecs / 60, 2, 10, QChar('0'));
            QString second = QString("%1").arg(totalSecs % 60, 2, 10, QChar('0'));

            ui->label_total_length->setText(QString("%1:%2").arg(minute).arg(second));
            ui->horizontalSlider_3->setRange(0,music_total_length.toInt());
        }
        else if(msg.indexOf("ANS_TIME_POSITION=") != -1)
        {
            int start = msg.indexOf(QString("ANS_TIME_POSITION="));
            QString pos  = msg.mid(start+18, 100);
            pos.chop(3);
            music_current_pos= pos;

            int currentSecs = music_current_pos.toInt();
            QString minute = QString("%1").arg(currentSecs / 60, 2, 10, QChar('0'));
            QString second = QString("%1").arg(currentSecs % 60, 2, 10, QChar('0'));

            // -------------- 修复 2：判断音乐名称去掉路径 ----------------
            QString currMusic = ui->listWidget->currentItem()->text();
            if(currMusic == "ljj-jj.mp3")
            {
                for(int i=0; i < lrc_ljj_stringlist.size(); i++)
                {
                    QString tmp =  lrc_ljj_stringlist.at(i);
                    if(tmp.contains(QString("[%1:%2").arg(minute).arg(second)))
                    {
                        ui->label_lrc->setText(tmp.mid(10,100));
                    }
                }
            }
            else if(currMusic == "zjl-yq.mp3")
            {
                for(int i=0; i < lrc_zjl_stringlist.size(); i++)
                {
                    QString tmp =  lrc_zjl_stringlist.at(i);
                    if(tmp.contains(QString("[%1:%2").arg(minute).arg(second)))
                    {
                        ui->label_lrc->setText(tmp.mid(10,100));
                    }
                }
            }

            ui->label_current_pos->setText(QString("%1:%2").arg(minute).arg(second));
            ui->horizontalSlider_3->setValue(music_current_pos.toInt());

            if(music_current_pos == QString("%1").arg(music_total_length.toInt()-2))
            {
                on_pushButton_3_clicked();
            }
        }
    });


    timer = new QTimer(this);
    connect(timer,&QTimer::timeout,[=](){
        process->write("get_time_pos\n");
    });

    // -------------- 修复 3：歌词路径正确 ----------------
    lrc_file_ljj = new QFile("res/music/ljj-jj.lrc");
    lrc_file_zjl = new QFile("res/music/zjl-yq.lrc");

    if(lrc_file_ljj->open(QIODevice::ReadOnly | QIODevice::Text) &&
       lrc_file_zjl->open(QIODevice::ReadOnly | QIODevice::Text))
    {
         qDebug() << "lrc file open success";
         lrc_ljj_stringlist = QString(lrc_file_ljj->readAll()).split("\n");
         lrc_zjl_stringlist = QString(lrc_file_zjl->readAll()).split("\n");
    }
    else
    {
        qDebug() << "lrc file open error";
    }

}

Music::~Music()
{
    delete ui;
}

void Music::on_pushButton_clicked()
{
    this->parentWidget()->show();
    delete this;
    music_start_once = 1;
}

void Music::on_pushButton_2_clicked()
{
    if(music_start_once)
    {
        music_start_once = 0;
        // -------------- 修复 4：播放时正确带上路径 ----------------
        QString musicPath = "res/music/" + ui->listWidget->currentItem()->text();
        process->start(QString("mplayer -quiet -slave %1").arg(musicPath));

        process->write(QString("volume %1 1\n").arg(ui->horizontalSlider->value()).toStdString().c_str());
        music_playing_flag = 1;
        ui->pushButton_2->setStyleSheet("border-image: url(:/img/pause.png);");
        process->write("get_time_length\n");
        timer->start(1000);
        return;
    }

    if(music_playing_flag)
    {
        process->write("pause\n");
        music_playing_flag = 0;
        ui->pushButton_2->setStyleSheet("border-image: url(:/img/play.png);");
        timer->stop();
    }
    else
    {
        process->write("pause\n");
        music_playing_flag = 1;
        ui->pushButton_2->setStyleSheet("border-image: url(:/img/pause.png);");
        timer->start();
    }
}

void Music::on_horizontalSlider_valueChanged(int value)
{
    ui->label_volume_percent->setText(QString("%1%").arg(value));
    if(music_playing_flag)
    {
        process->write(QString("volume %1 1\n").arg(value).toStdString().c_str());
    }
}

void Music::on_pushButton_5_clicked()
{
    process->write("seek +10\n");
}

void Music::on_pushButton_6_clicked()
{
    process->write("seek -10\n");
}

void Music::on_pushButton_3_clicked()
{
    timer->stop();
    if(process->state() == QProcess::Running)
    {
        process->kill();
        process->waitForFinished();
    }
    int index = ui->listWidget->currentRow();
    index = (index+1)%2;
    ui->listWidget->setCurrentRow(index);

    QString musicPath = "res/music/" + ui->listWidget->currentItem()->text();
    process->start(QString("mplayer -quiet -slave %1").arg(musicPath));

    process->write(QString("volume %1 1\n").arg(ui->horizontalSlider->value()).toStdString().c_str());
    music_playing_flag = 1;
    ui->pushButton_2->setStyleSheet("border-image: url(:/img/pause.png);");

    if(ui->listWidget->currentItem()->text() == "ljj-jj.mp3")
        this->setStyleSheet("background-image: url(:/img/ljj.jpg);");
    else
        this->setStyleSheet("background-image: url(:/img/zjl.jpeg);");

    process->write("get_time_length\n");
    timer->start();
    ui->label_lrc->clear();
}

void Music::on_pushButton_4_clicked()
{
    if(process->state() == QProcess::Running)
    {
        process->kill();
        process->waitForFinished();
    }
    int index = ui->listWidget->currentRow();
    index = index - 1;
    if(index == -1) index = 1;
    ui->listWidget->setCurrentRow(index);

    QString musicPath = "res/music/" + ui->listWidget->currentItem()->text();
    process->start(QString("mplayer -quiet -slave %1").arg(musicPath));

    process->write(QString("volume %1 1\n").arg(ui->horizontalSlider->value()).toStdString().c_str());
    music_playing_flag = 1;
    ui->pushButton_2->setStyleSheet("border-image: url(:/img/pause.png);");

    if(ui->listWidget->currentItem()->text() == "ljj-jj.mp3")
        this->setStyleSheet("background-image: url(:/img/ljj.jpg);");
    else
        this->setStyleSheet("background-image: url(:/img/zjl.jpeg);");

    process->write("get_time_length\n");
    ui->label_lrc->clear();
}

void Music::on_horizontalSlider_3_sliderPressed()
{
    timer->stop();
}

void Music::on_horizontalSlider_3_sliderReleased()
{
    int pos = ui->horizontalSlider_3->value();
    if(music_playing_flag)
    {
        process->write(QString("seek %1\n").arg(pos).toStdString().c_str());
        music_current_pos = QString::number(pos);
    }
    timer->start();
}