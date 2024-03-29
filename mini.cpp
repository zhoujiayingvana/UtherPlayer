﻿
#include "mini.h"
#include "ui_mini.h"

#include <QDrag>
#include <QDebug>
#include <QWidget>
#include <QSlider>
#include <QToolTip>
#include <QMouseEvent>
#include <QPushButton>
#include <QDesktopWidget>


/* Author: zyt
 * Name: Mini
 * Function: mini窗口显示的初始化
 * Parameters: parent
 */
Mini::Mini(QWidget *parent,Media* m) :
    QWidget(parent),
    ui(new Ui::Mini),media(m)
{
    ui->setupUi(this);
    drag = false;

    //设置mini模式无边框、在最前、允许拖拽
    setWindowFlags(Qt::Window|Qt::FramelessWindowHint|Qt::WindowTitleHint|Qt::WindowStaysOnTopHint);
    setMouseTracking(true);

    // 音量条初始化
    volumeSlider = new MySlider;
    volumeSlider->setWindowFlags(Qt::Window|Qt::SubWindow|Qt::FramelessWindowHint|Qt::WindowTitleHint);
    volumeSlider->setMinimum(0);
    volumeSlider->setMaximum(100);
    volumeSlider->setValue(10);
    volumeSlider->setVisible(false);
    volumeSlider->setFixedSize(32,84);

    ui->albumPic->setMouseTracking(true);

    //设置鼠标样式
    ui->lastSongBtn->setCursor(QCursor(Qt::PointingHandCursor));
    ui->playOrPauseBtn->setCursor(QCursor(Qt::PointingHandCursor));
    ui->nextSongBtn->setCursor(QCursor(Qt::PointingHandCursor));
    ui->volumeBtn->setCursor(QCursor(Qt::PointingHandCursor));
    ui->closeBtn->setCursor(QCursor(Qt::PointingHandCursor));
    ui->maxModeBtn->setCursor(QCursor(Qt::PointingHandCursor));
    ui->albumPic->setCursor(QCursor(Qt::PointingHandCursor));


    //设置NoFocus策略
    ui->lastSongBtn->setFocusPolicy(Qt::NoFocus);
    ui->playOrPauseBtn->setFocusPolicy(Qt::NoFocus);
    ui->nextSongBtn->setFocusPolicy(Qt::NoFocus);
    ui->volumeBtn->setFocusPolicy(Qt::NoFocus);
    ui->closeBtn->setFocusPolicy(Qt::NoFocus);
    ui->maxModeBtn->setFocusPolicy(Qt::NoFocus);
    ui->albumPic->setFocusPolicy(Qt::NoFocus);

    //添加按钮图片
    ui->playOrPauseBtn->setStyleSheet("QPushButton{ border-image: url(:/image/image/icon_play.png); }");
    ui->lastSongBtn->setStyleSheet("QPushButton{ border-image: url(:/image/image/mini_last.jpg); }");
    ui->nextSongBtn->setStyleSheet("QPushButton{ border-image: url(:/image/image/mini_next.jpg); }");
    ui->volumeBtn->setStyleSheet("QPushButton{ border-image: url(:/image/image/horn.png); }");
    ui->closeBtn->setStyleSheet("QPushButton{ border-image: url(:/image/image/btn_close_n.png); }");
    ui->maxModeBtn->setStyleSheet("QPushButton{ border-image: url(:/image/image/btn_max_n.png); }");
    ui->albumPic->setStyleSheet("QPushButton{ border-image: url(:/image/image/test.png); }");

    //鼠标不放上去时先让上一曲/播放/下一曲隐藏
    ui->lastSongBtn->setVisible(false);
    ui->playOrPauseBtn->setVisible(false);
    ui->nextSongBtn->setVisible(false);

    ui->lastSongBtn->setText("");
    ui->playOrPauseBtn->setText("");
    ui->nextSongBtn->setText("");

    ui->playOrPauseBtn->setToolTip(QStringLiteral("播放"));
    ui->lastSongBtn->setToolTip(QStringLiteral("上一曲"));
    ui->nextSongBtn->setToolTip(QStringLiteral("下一曲"));
    ui->volumeBtn->setToolTip(QStringLiteral("调节音量"));
    ui->closeBtn->setToolTip(QStringLiteral("托盘模式"));
    ui->maxModeBtn->setToolTip(QStringLiteral("显示主界面"));
    ui->albumPic->setToolTip(QStringLiteral("显示主界面"));

    connect(volumeSlider,SIGNAL(valueChanged(int)),this,SLOT(on_volumeSlider_valueChanged(int)));
}

Mini::~Mini()
{
    delete ui;
}

/* Author: zyt
 * Name: mousePressEvent
 * Function: 检测鼠标点击了mini界面，记录mini界面初始位置
 */
void Mini::mousePressEvent(QMouseEvent *event)
{
    if(event->button() == Qt::LeftButton)
    {
        drag = true;
        mouseStartPos = event->globalPos();
        windowStartPos = this->frameGeometry().topLeft();
        volumeSlider->hide();
    }
}

/* Author: zyt
 * Name: mouseMoveEvent
 * Function: 实现mini移动
 */
void Mini::mouseMoveEvent(QMouseEvent *event)
{
    Q_UNUSED(event);
    if(drag)
    {
        QPoint distance = event->globalPos() - mouseStartPos;
        this->move(windowStartPos + distance);
    }
    else
        return QWidget::mouseMoveEvent(event);
}

/* Author: zyt
 * Name: mouseReleaseEvent
 * Function: 记录使用者不再移动窗口
 */
void Mini::mouseReleaseEvent(QMouseEvent *event)
{
    if(event->button() == Qt::LeftButton)
    {
        drag = false;
    }
    if(this->frameGeometry().top() < 0)
    {
        this->setGeometry(this->frameGeometry().left(),0,this->width(),this->height());
    }
    if(this->frameGeometry().left() < 0)
    {
        this->setGeometry(0,this->frameGeometry().top(),this->width(),this->height());
    }
    if(this->frameGeometry().top() > (QApplication::desktop()->height()-this->height()))
    {
        this->setGeometry(this->frameGeometry().left(),(QApplication::desktop()->height()-this->height()),this->width(),this->height());
    }
    if(this->frameGeometry().left() > (QApplication::desktop()->width()-this->width()))
    {
        this->setGeometry((QApplication::desktop()->width()-this->width()),this->frameGeometry().top(),this->width(),this->height());
    }

}

/* Author: zyt
 * Name: enterEvent
 * Function: 检测鼠标进入mini界面，显示上一曲/暂停/下一曲按钮
 */
void Mini::enterEvent(QEvent *event)
{
    Q_UNUSED(event);
    ui->songLabel->setVisible(false);
    ui->singerLabel->setVisible(false);
    ui->lastSongBtn->setVisible(true);
    ui->playOrPauseBtn->setVisible(true);
    ui->nextSongBtn->setVisible(true);
}

/* Author: zyt
 * Name: leaveEvent
 * Function: 检测鼠标进入mini界面，隐藏上一曲/暂停/下一曲按钮，显示原有界面
 */
void Mini::leaveEvent(QEvent *event)
{
    Q_UNUSED(event);
    ui->songLabel->setVisible(true);
    ui->singerLabel->setVisible(true);
    ui->lastSongBtn->setVisible(false);
    ui->playOrPauseBtn->setVisible(false);
    ui->nextSongBtn->setVisible(false);
}

/* Author: zyt
 * Name: on_maxModeBtn_clicked
 * Function: 槽：发送信号：mini模式->窗口模式
 */
void Mini::on_maxModeBtn_clicked()
{
    volumeSlider->hide();
    emit miniToMaxSignal();
}

/* Author: zyt
 * Name: on_closeBtn_clicked
 * Function: 槽：发送信号：
void Mini::on_closeBtn_clicked()mini模式->托盘模式
 */
void Mini::on_closeBtn_clicked()
{
    volumeSlider->hide();
    emit closeSignal();
}

/* Author: zyt
 * Name: on_volumeBtn_clicked
 * Function: 槽：显示音量条
 */
void Mini::on_volumeBtn_clicked()
{
    if(this->frameGeometry().top() < volumeSlider->height())//mini框偏上音量条在下显示
    {
        volumeSlider->setGeometry(ui->volumeBtn->frameGeometry().left()+this->frameGeometry().left()+ui->volumeBtn->width()/2-volumeSlider->width()/2,
                                  this->frameGeometry().bottom(),
                                  volumeSlider->width(),volumeSlider->height());
    }
    else//音量条在上显示
    {
        volumeSlider->setGeometry(ui->volumeBtn->frameGeometry().left()+this->frameGeometry().left()+ui->volumeBtn->width()/2-volumeSlider->width()/2,
                                  this->frameGeometry().top()-volumeSlider->height(),
                                  volumeSlider->width(),volumeSlider->height());
    }

    if(volumeSlider->isVisible())//单击Btn使音量条显示/消失
    {
        volumeSlider->setVisible(false);
    }
    else
    {
        volumeSlider->setVisible(true);
    }
}

void Mini::on_volumeSlider_valueChanged(int vol)//拖拽改变音量时用tooltip显示当前音量
{
    QToolTip::showText(QCursor::pos(),"音量:"+QString::number(vol),this);
    emit volumeChanged(vol);
}


/* Author: zyt
 * Name: on_playOrPauseBtn_clicked
 * Function: 槽：点击时切换播放/暂停的图标
 */
void Mini::on_playOrPauseBtn_clicked()
{
    volumeSlider->hide();
    emit sendPlayOrPauseSignal();
}

void Mini::changeVolume(int vol)//改变音量
{

    if(vol == volumeSlider->value())
    {

    }
    else
    {
        volumeSlider->setValue(vol);
    }

}

void Mini::changePlayOrPauseBtn(bool isPlaying)
{
    if(!isPlaying)
    {
        ui->playOrPauseBtn->setStyleSheet("QPushButton{ border-image: url(:/image/image/icon_play.png); }");
        ui->playOrPauseBtn->setToolTip(QStringLiteral("播放"));
    }
    else if(isPlaying)
    {
        ui->playOrPauseBtn->setStyleSheet("QPushButton{ border-image: url(:/image/image/mini_pause.png); }");
        ui->playOrPauseBtn->setToolTip(QStringLiteral("暂停"));
    }
}

void Mini::on_lastSongBtn_clicked()
{
    emit sendLastSignal();
}

void Mini::on_nextSongBtn_clicked()
{
    emit sendNextSignal();
}
