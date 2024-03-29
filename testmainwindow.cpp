﻿#include "testmainwindow.h"
#include "ui_testmainwindow.h"
#include "debug.h"
#include <QUrl>
//Debug *myDebug=new Debug();
TestMainWindow::TestMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::TestMainWindow)
{
    ui->setupUi(this);
    this->media=new Media();
    myVideoWidget=new QVideoWidget();
    myVideoWidget->setParent(this);
    myVideoWidget->resize(291,151);
    myVideoWidget->move(80,25);
   // media->getPlayWindow()->setVideoOutput(myVideoWidget);
    myVideoWidget->setWindowFlags(Qt::WindowStaysOnTopHint);
    label=new QLabel(this->myVideoWidget);
    label->setPixmap((QPixmap("E:/QT/UtherPlayer/image/backgroundPicture/uther1.png")));
    label->setScaledContents(true);
    label->resize(291,151);
    //设置播放窗口背景色
    //设置自动刷新
//    myVideoWidget->setObjectName("mv");//设置对象名称
//    myVideoWidget->setStyleSheet("#mv{color-image:url(E:/QT/UtherPlayer/image/backgroundPicture/uther1.png);}");
    QPalette palette=myVideoWidget->palette();
    palette.setBrush(QPalette::Background,QBrush(QPixmap("E:/QT/UtherPlayer/image/backgroundPicture/uther1.png")));
    this->myVideoWidget->setPalette(palette);
    myVideoWidget->setAutoFillBackground(true);
//    myVideoWidget->setStyleSheet("border-image:url(../image/backgroundPicture/uther1.png);");
    
    
    QString str("CTRL+A");
    ui->pauseButton->setShortcut(QKeySequence(str.toLatin1().data()));
    
    
    
    //测试收藏夹功能
    //添加收藏夹
//    this->media->testRun();
    //播放视频
    //this->media->play(PlayArea::FOLDERS, 0, 0);
    
    //播放本地视频
//    QFileInfo info("../vid/t3.avi");
//    this->media->play(true,info.fileName(),info.filePath());
    
    
    
    
//    //测试历史记录功能
//    this->media->play("../vid/t3.avi");
    
//    //测试播放速度功能

}


TestMainWindow::~TestMainWindow()
{
    delete ui;
}

void TestMainWindow::on_playButton_clicked()
{
    media->getController()->restorePlay();
}

void TestMainWindow::on_pauseButton_clicked()
{
    media->getController()->pauseVideo();
}

void TestMainWindow::on_terminateButton_clicked()
{
    media->getController()->terminateVideo();
}

void TestMainWindow::on_nextButton_clicked()
{
    media->playNextByHand();
}



void TestMainWindow::on_forwardButton_clicked()
{
    media->getController()->jump(2);
}

void TestMainWindow::on_volumeUpButton_clicked()
{
    media->getController()->setVolume(80);
}

void TestMainWindow::on_volumeDownButton_clicked()
{
    media->getController()->setVolume(10);
}

void TestMainWindow::on_jumpButton_clicked()
{
    media->getController()->seekPosition(media->getController()->getDuration()/2);    
    
}

void TestMainWindow::on_muteButton_clicked()
{
    media->getController()->setMuted(true);
}

void TestMainWindow::on_nonMuteButton_clicked()
{
    media->getController()->setMuted(false);
}

void TestMainWindow::on_screenCutButton_clicked()
{
    QDateTime local(QDateTime::currentDateTime());
    QString localTime = local.toString("yyMMddhhmmsszzz");
    QString fileName="ScreenCutByTMZPlayer"+localTime;
    QString filePath="../output/";
    media->getController()->cutScreen(this->myVideoWidget->winId(),fileName,filePath,"jpg",-1);
}

void TestMainWindow::on_gifStartButton_clicked()
{
    QDateTime local(QDateTime::currentDateTime());
    QString localTime = local.toString("yyMMddhhmmss");
    QString fileName="GIFByTMZPlayer"+localTime;
    QString filePath="../output/";
    media->startCreateGif(this->myVideoWidget->winId(),fileName,filePath);
}

void TestMainWindow::on_gifEndButton_clicked()
{
    media->endCreateGif();
}

void TestMainWindow::closeEvent(QCloseEvent* event)
{
    this->media->closeSelf();
}
