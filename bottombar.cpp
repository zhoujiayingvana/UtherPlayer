﻿#include "bottombar.h"
#include<QDebug>
#include<QToolTip>

/*
 *Author:LY
 *Function:实现底部栏
 */

BottomBar::BottomBar(QWidget *parent) : QWidget(parent)
{
    this->setAttribute(Qt::WA_StyledBackground);


    multiplyingPower=1;//倍速播放，默认1倍速
    quickMoveTime=1;//快进快退秒数初始化5

    setFixedHeight(60);
    lastButton = new QPushButton(this);//上一个按钮
    pauseButton = new QPushButton(this);//暂停/播放按钮
    nextButton = new QPushButton(this);//下一个按钮
    stopButton = new QPushButton(this);//停止按钮
    currentPos = new QLabel(this);//播放到的时间
    playSlider = new MySlider(this);//播放条
    totalTime = new QLabel(this);//总时长
    volumeButton = new BottomButton(this);//静音/恢复音量按钮
    volumeSlider = new MySlider(this);//音量条
    volumeSlider->setValue(10);
    playModeButton = new QPushButton(this);//播放模式按钮
    space = new QLabel ();//底部空白
    slashLabel = new QLabel ();//视频模式“/”
    slashLabel->setText("/");
    anotherSpace = new QLabel ();//另一片空白
    definitionButton = new BottomButton();//滤镜按钮
    settingsButton = new BottomButton();//视频设置按钮
    full_screenButton = new QPushButton();//全屏/恢复按钮
    playModeNum = 1;//播放模式初始为顺序播放

    //初始化快捷键
    pauseButton->setShortcut(QKeySequence("Space"));
    lastButton->setShortcut(QKeySequence("Ctrl+Left"));
    nextButton->setShortcut(QKeySequence("Ctrl+Right"));
    stopButton->setShortcut(QKeySequence("Ctrl+X"));
    volumeButton->setShortcut(QKeySequence("Ctrl+`"));

    //使Button、Slider不接受由Tab、鼠标中键产生焦点
    lastButton->setFocusPolicy(Qt::NoFocus);
    pauseButton->setFocusPolicy(Qt::NoFocus);
    nextButton->setFocusPolicy(Qt::NoFocus);
    stopButton->setFocusPolicy(Qt::NoFocus);
    playSlider->setFocusPolicy(Qt::NoFocus);
    volumeButton->setFocusPolicy(Qt::NoFocus);
    volumeSlider->setFocusPolicy(Qt::NoFocus);
    playModeButton->setFocusPolicy(Qt::NoFocus);
    definitionButton->setFocusPolicy(Qt::NoFocus);
    settingsButton->setFocusPolicy(Qt::NoFocus);
    full_screenButton->setFocusPolicy(Qt::NoFocus);


    currentPos->setAlignment(Qt::AlignRight|Qt::AlignVCenter);
    playSlider->setOrientation(Qt::Horizontal);
    volumeSlider->setOrientation(Qt::Horizontal);
    /*
     * playSlider还需设最大值
     */
    playSlider->setMaximum(0); //test
    volumeSlider->setMaximum(100);


    lastButton->setObjectName("lastButton");
    pauseButton->setObjectName("pauseButton");
    nextButton->setObjectName("nextButton");
    stopButton->setObjectName("stopButton");
    currentPos->setObjectName("currentPos");
    playSlider->setObjectName("playSlider");
    totalTime->setObjectName("totalTime");
    volumeButton->setObjectName("volumeButton");
    volumeSlider->setObjectName("volumeScrollBar");
    playModeButton->setObjectName("playModeButton");
    definitionButton->setObjectName("definitionButton");
    settingsButton->setObjectName("settingsButton");
    full_screenButton->setObjectName("full_screenButton");


    //固定按钮大小
    lastButton->setFixedSize(40, 40);
    pauseButton->setFixedSize(40, 40);
    nextButton->setFixedSize(40, 40);
    stopButton->setFixedSize(40, 40);
    currentPos->setFixedSize(52, 30);
    playSlider->setFixedHeight(20);
    totalTime->setFixedSize(52, 30);
    volumeButton->setFixedSize(40, 40);
    volumeSlider->setFixedSize(60, 20);
    playModeButton->setFixedSize(40, 40);
    definitionButton->setFixedSize(40, 40);
    settingsButton->setFixedSize(40, 40);
    full_screenButton->setFixedSize(40, 40);
    slashLabel->setFixedWidth(7);


    lastButton->setFlat(true);
    pauseButton->setFlat(true);
    nextButton->setFlat(true);
    stopButton->setFlat(true);
    volumeButton->setFlat(true);
    playModeButton->setFlat(true);
    definitionButton->setFlat(true);
    settingsButton->setFlat(true);
    full_screenButton->setFlat(true);



    lastButton->setStyleSheet("QPushButton{ border-image: url(:/image/image/bottomBar/last.png); }");
    pauseButton->setStyleSheet("QPushButton{ border-image: url(:/image/image/bottomBar/play.png); }");
    nextButton->setStyleSheet("QPushButton{ border-image: url(:/image/image/bottomBar/next.png); }");
    stopButton->setStyleSheet("QPushButton{ border-image: url(:/image/image/bottomBar/stop.png); }");
    currentPos->setText(QStringLiteral("00:00"));
    totalTime->setText(QStringLiteral("00:00"));
    volumeButton->setStyleSheet("QPushButton{ border-image: url(:/image/image/bottomBar/volume.png); }");
    playModeButton->setStyleSheet("QPushButton{ border-image: url(:/image/image/bottomBar/order.png); }");
    definitionButton->setText(QStringLiteral("滤镜"));
    settingsButton->setStyleSheet("QPushButton{ border-image: url(:/image/image/bottomBar/settings.png); }");
    full_screenButton->setStyleSheet("QPushButton{ border-image: url(:/image/image/bottomBar/fullScreen.png); }");



    //鼠标悬停在按钮上显示提示条
    lastButton->setToolTip(QStringLiteral("上一个"));
    pauseButton->setToolTip(QStringLiteral("暂停"));
    nextButton->setToolTip(QStringLiteral("下一个"));
    stopButton->setToolTip(QStringLiteral("停止"));
    volumeButton->setToolTip(QStringLiteral("静音"));
    volumeSlider->setToolTip(QStringLiteral("音量调节(Up/Down)"));
    playModeButton->setToolTip(QStringLiteral("顺序播放"));
    definitionButton->setToolTip(QStringLiteral("清晰度"));
    settingsButton->setToolTip(QStringLiteral("调节倍速"));
    playModeButton->setToolTip(QStringLiteral("顺序播放"));
    definitionButton->setToolTip(QStringLiteral("滤镜"));
    settingsButton->setToolTip(QStringLiteral("设置"));
    full_screenButton->setToolTip(QStringLiteral("全屏"));


    //改变光标样式
    lastButton->setCursor(Qt::PointingHandCursor);
    pauseButton->setCursor(Qt::PointingHandCursor);
    nextButton->setCursor(Qt::PointingHandCursor);
    stopButton->setCursor(Qt::PointingHandCursor);
    playSlider->setCursor(Qt::PointingHandCursor);
    volumeButton->setCursor(Qt::PointingHandCursor);
    volumeSlider->setCursor(Qt::PointingHandCursor);
    playModeButton->setCursor(Qt::PointingHandCursor);
    definitionButton->setCursor(Qt::PointingHandCursor);
    settingsButton->setCursor(Qt::PointingHandCursor);
    full_screenButton->setCursor(Qt::PointingHandCursor);


    BottomLayout = new QVBoxLayout(this);
    BmBottomLayout = new QHBoxLayout();
    BmBottomLayout->addWidget(stopButton);
    BmBottomLayout->addWidget(lastButton);
    BmBottomLayout->addWidget(pauseButton);
    BmBottomLayout->addWidget(nextButton);
    BmBottomLayout->addWidget(currentPos);
    BmBottomLayout->addWidget(playSlider);
    BmBottomLayout->addWidget(totalTime);
    BmBottomLayout->addWidget(volumeButton);
    BmBottomLayout->addWidget(volumeSlider);
    BmBottomLayout->addWidget(playModeButton);
    BmBottomLayout->setContentsMargins(0, 5, 0, 5);
    BmBottomLayout->setSpacing(0);
    BottomLayout->addLayout(BmBottomLayout);
    BottomLayout->setContentsMargins(0, 0, 0, 0);
    BottomLayout->setSpacing(0);


    volumeWidget = new Widget(parent);//视频模式音量窗口
    volumeWidget->setObjectName(QString::fromUtf8("volumeWidget"));
    volumeWidget->setAutoFillBackground(true);//test
    volumeWidget->setPalette(QPalette(Qt::black));//test
    volumeWidget->setGeometry(200, 200, 40, 80);//test
    volumeWidget->hide();
    volumeLayout =new QVBoxLayout(volumeWidget);//视频模式音量窗口的布局
    volumeLayout->setContentsMargins(5, 5, 5, 5);


    definitionWidget = new Widget(parent);//视频模式滤镜窗口
    definitionWidget->setObjectName(QString::fromUtf8("definitionWidget"));
    definitionWidget->setAutoFillBackground(true);//test
    definitionWidget->setPalette(QPalette(Qt::black));//test
    definitionWidget->setGeometry(200, 200, 40, 90);//test
    definitionWidget->hide();
    //视频模式滤镜窗口下各滤镜按钮
    p360DefinitionButton = new QPushButton(definitionWidget);
    p480DefinitionButton = new QPushButton(definitionWidget);
    p720DefinitionButton = new QPushButton(definitionWidget);
    p360DefinitionButton->setFocusPolicy(Qt::NoFocus);
    p480DefinitionButton->setFocusPolicy(Qt::NoFocus);
    p720DefinitionButton->setFocusPolicy(Qt::NoFocus);
    p360DefinitionButton->setObjectName("p360DefinitionButton");
    p480DefinitionButton->setObjectName("p480DefinitionButton");
    p720DefinitionButton->setObjectName("p720DefinitionButton");
    p360DefinitionButton->setFixedSize(30,20);
    p480DefinitionButton->setFixedSize(30,20);
    p720DefinitionButton->setFixedSize(30,20);
    p360DefinitionButton->setFlat(true);
    p480DefinitionButton->setFlat(true);
    p720DefinitionButton->setFlat(true);
    p360DefinitionButton->setText(QStringLiteral("默认"));//TEST
    p480DefinitionButton->setText(QStringLiteral("明亮"));//TEST
    p720DefinitionButton->setText(QStringLiteral("柔和"));//TEST
    definitionLayout =new QVBoxLayout(definitionWidget);//视频模式滤镜窗口的布局
    definitionLayout->addWidget(p720DefinitionButton);
    definitionLayout->addWidget(p480DefinitionButton);
    definitionLayout->addWidget(p360DefinitionButton);
    definitionLayout->setContentsMargins(5, 5, 5, 5);
    definitionLayout->setSpacing(0);



    settingsWidget = new Widget(parent);//视频模式设置窗口
    settingsWidget->setObjectName(QString::fromUtf8("settingsWidget"));
    settingsWidget->setAutoFillBackground(true);//test
    settingsWidget->setPalette(QPalette(Qt::black));//test
    settingsWidget->setGeometry(200, 200, 190, 60);//test
    settingsWidget->hide();
    //视频模式设置窗口下各按钮

    playSpeedLabel = new QLabel(settingsWidget);
    multiplyingPowerLabel = new QLabel(settingsWidget);
    playSpeedSlider = new MySlider(settingsWidget);

    playSpeedSlider->setMaximum(3);
    playSpeedSlider->setValue(1);//倍速播放默认一倍速

    playSpeedSlider->setFocusPolicy(Qt::NoFocus);

    playSpeedSlider->setOrientation(Qt::Horizontal);

    playSpeedLabel->setObjectName("playSpeedLabel");
    multiplyingPowerLabel->setObjectName("multiplyingPowerLabel");
    playSpeedSlider->setObjectName("playSpeedSlider");

    playSpeedLabel->setFixedSize(180,15);
    multiplyingPowerLabel->setFixedSize(180,15);
    playSpeedSlider->setFixedSize(180,20);




    playSpeedLabel->setText(QStringLiteral("播放速度"));
    multiplyingPowerLabel->setText(QStringLiteral("0.5   1.0  1.5   2.0"));

    settingsLayout =new QVBoxLayout(settingsWidget);//视频模式设置窗口的布局
    settingsLayout->addWidget(playSpeedLabel);
    settingsLayout->addWidget(multiplyingPowerLabel);
    settingsLayout->addWidget(playSpeedSlider);
    settingsLayout->setContentsMargins(5, 5, 5, 5);
    settingsLayout->setSpacing(0);




    timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(timePassingBy()));
    connect(lastButton,SIGNAL(clicked()),this,SLOT(on_lastButton_clicked()));
    connect(pauseButton,SIGNAL(clicked()),this,SLOT(on_pauseButton_clicked()));
    connect(nextButton,SIGNAL(clicked()),this,SLOT(on_nextButton_clicked()));
    connect(stopButton,SIGNAL(clicked()),this,SLOT(on_stopButton_clicked()));
    connect(p360DefinitionButton,SIGNAL(clicked()),this,SLOT(on_p360DefinitionButton_clicked()));
    connect(p480DefinitionButton,SIGNAL(clicked()),this,SLOT(on_p480DefinitionButton_clicked()));
    connect(p720DefinitionButton,SIGNAL(clicked()),this,SLOT(on_p720DefinitionButton_clicked()));
    connect(playSlider,SIGNAL(valueChanged(int)),this,SLOT(on_playSlider_valueChanged(int)));
    connect(playSlider,SIGNAL(timerStop()),timer,SLOT(stop()));
    connect(playSlider,SIGNAL(timerStop()),this,SLOT(on_pauseButton_clicked()));
    connect(playSlider,SIGNAL(timerStart()),timer,SLOT(start()));
    connect(playSlider,SIGNAL(timerStart()),this,SLOT(on_pauseButton_clicked()));
    connect(volumeButton,SIGNAL(clicked(bool)),this,SLOT(on_volumeButton_clicked()));
    connect(playModeButton,SIGNAL(clicked()),this,SLOT(on_playModeButton_clicked()));
    connect(volumeSlider,SIGNAL(valueChanged(int)),this,SLOT(on_volumeSlider_valueChanged(int)));
    connect(volumeButton,SIGNAL(leaveSignal()),this,SLOT(volumeWidgetDetection()));
    connect(definitionButton,SIGNAL(enterSignal(int ,int)),definitionWidget,SLOT(display(int,int)));
    connect(definitionButton,SIGNAL(leaveSignal()),this,SLOT(definitionWidgetDetection()));
    connect(settingsButton,SIGNAL(enterSignal(int ,int)),settingsWidget,SLOT(display(int,int)));
    connect(settingsButton,SIGNAL(leaveSignal()),this,SLOT(settingsWidgetDetection()));
    connect(full_screenButton,SIGNAL(clicked(bool)),this,SLOT(on_full_screenButton_clicked()));
    connect(this, SIGNAL(wheelMoving(int, int)), volumeWidget, SLOT(display(int, int)));




}

void BottomBar::on_playSlider_valueChanged(int value)//拖拽播放条时改变当前时间
{
    int val =value/1000;
    if(val/60>=10&&val%60>=10)
    {
        currentPos->setText(QString::number(val/60) + ":" + QString::number(val%60));
    }
    else if (val/60<10&&val%60>=10)
    {
        currentPos->setText("0" + QString::number(val/60) + ":" + QString::number(val%60));
    }
    else if (val/60>=10&&val%60<10)
    {
        currentPos->setText(QString::number(val/60) + ":" + "0" + QString::number(val%60));
    }
    else
    {
        currentPos->setText("0" + QString::number(val/60) + ":" + "0" + QString::number(val%60));
    }
    

    emit currentPosChanged(value);
}

void BottomBar::on_lastButton_clicked()//上一个
{
    emit lastButton_clicked();
}

void BottomBar::on_pauseButton_clicked()//播放暂停
{
    emit pauseButton_clicked();

}

void BottomBar::timePassingBy()//发射获取当前时间的信号
{
    emit needPosition();
}

void BottomBar::setPlaySliderValue(int val)//使进度条随时间走
{
    playSlider->setValue(val);
}

void BottomBar::on_nextButton_clicked()//下一个
{
    emit nextButton_clicked();

}

void BottomBar::on_stopButton_clicked()//停止
{
    emit stopButton_clicked();

}

void BottomBar::on_playModeButton_clicked()//改变播放模式
{
    switch(playModeNum)
    {
    case 1://改为列表循环
        emit changePlayMode(ORDER_CYCLE);
        playModeButton->setStyleSheet("QPushButton{ border-image: url(:/image/image/bottomBar/listOrder.png); }");
        playModeButton->setToolTip(QStringLiteral("列表循环"));
        QToolTip::showText(QCursor::pos(),QStringLiteral("列表循环"), this);
        break;
    case 2://改为单曲循环
        emit changePlayMode(SINGLE_CYCLE);
        playModeButton->setStyleSheet("QPushButton{ border-image: url(:/image/image/bottomBar/repeat.png); }");
        playModeButton->setToolTip(QStringLiteral("单曲循环"));
        QToolTip::showText(QCursor::pos(),QStringLiteral("单曲循环"), this);
        break;
    case 3://改为随机播放
        emit changePlayMode(SHUFFLE);
        playModeButton->setStyleSheet("QPushButton{ border-image: url(:/image/image/bottomBar/shuffle.png); }");
        playModeButton->setToolTip(QStringLiteral("随机播放"));
        QToolTip::showText(QCursor::pos(),QStringLiteral("随机播放"), this);
        break;
    case 4://改为顺序播放
        emit changePlayMode(ORDER_PLAY);
        playModeButton->setStyleSheet("QPushButton{ border-image: url(:/image/image/bottomBar/order.png); }");
        playModeButton->setToolTip(QStringLiteral("顺序播放"));
        QToolTip::showText(QCursor::pos(),QStringLiteral("顺序播放"), this);
        break;
    default:
        break;

    }
    playModeNum++;
    if(playModeNum==5)
        playModeNum=1;


}

void BottomBar::changePlayMode(int pmn)//接收信号改变播放模式
{
    playModeNum = pmn;
    emit playModeButton->click();
}

void BottomBar::changePauseButton(bool isPlaying)//改变播放暂停键图标
{
    if(isPlaying)
    {
        pauseButton->setStyleSheet("QPushButton{ border-image: url(:/image/image/bottomBar/pause.png); }");
        pauseButton->setToolTip(QStringLiteral("暂停"));
        timer->start();

    }
    else
    {
        pauseButton->setStyleSheet("QPushButton{ border-image: url(:/image/image/bottomBar/play.png); }");
        pauseButton->setToolTip(QStringLiteral("播放"));
        timer->stop();

    }
}

/**
* @method        BottomBar::changePlaySliderPlus
* @brief         修改快进快退秒数
* @param         INT
* @return        VOID
* @author        涂晴昊
* @date          2019-09-09
*/
void BottomBar::changePlaySliderPlus(int i)
{
    quickMoveTime=i;
}



void BottomBar::on_volumeButton_clicked()//点击按钮实现静音与恢复音量
{

    if(volumeSlider->value() == 0)
    {
        volumeSlider->setValue(10);
        if(volumeSlider->orientation()==Qt::Vertical)
        {
            volumeButton->setStyleSheet("QPushButton{ border-image: url(:/image/image/bottomBar/full_volume.png); }");
        }
        else
        {
            volumeButton->setStyleSheet("QPushButton{ border-image: url(:/image/image/bottomBar/volume.png); }");

        }
        volumeButton->setToolTip(QStringLiteral("静音"));

    }
    
    else
    {
        volumeSlider->setValue(0);
        if(volumeSlider->orientation()==Qt::Vertical)
        {
            volumeButton->setStyleSheet("QPushButton{ border-image: url(:/image/image/bottomBar/full_mute.png); }");
        }
        else
        {
            volumeButton->setStyleSheet("QPushButton{ border-image: url(:/image/image/bottomBar/mute.png); }");

        }
        volumeButton->setToolTip(QStringLiteral("恢复音量"));
    }
    emit volumeSlider->valueChanged(volumeSlider->value());
}

void BottomBar::on_volumeSlider_valueChanged(int vol)//拖拽改变音量时用tooltip显示当前音量
{
    QToolTip::showText(QCursor::pos(), "音量:" + QString::number(vol), this);
    if (vol == 0)
    {
        if(volumeSlider->orientation()==Qt::Vertical)
        {
            volumeButton->setStyleSheet("QPushButton{ border-image: url(:/image/image/bottomBar/full_mute.png); }");
        }
        else
        {
            volumeButton->setStyleSheet("QPushButton{ border-image: url(:/image/image/bottomBar/mute.png); }");

        }
    }
    else
    {
        if(volumeSlider->orientation()==Qt::Vertical)
        {
            volumeButton->setStyleSheet("QPushButton{ border-image: url(:/image/image/bottomBar/full_volume.png); }");
        }
        else
        {
            volumeButton->setStyleSheet("QPushButton{ border-image: url(:/image/image/bottomBar/volume.png); }");

        }

    }
    emit volumeChanged(vol);

}

void BottomBar::rcvSwitchModeButton(MediaType& _mediaType)//点击切换音乐/视频模式
{
    timer->start(100);
    if(_mediaType == MediaType::VIDEO)  // 变为视频模式
    {
        setFixedHeight(80);
        definitionButton->show();
        settingsButton->show();
        full_screenButton->show();
        space->show();
        anotherSpace->show();
        slashLabel->show();
        volumeSlider->setOrientation(Qt::Vertical);
        volumeSlider->setFixedSize(30,70);


        BmBottomLayout->removeWidget(lastButton);
        BmBottomLayout->removeWidget(pauseButton);
        BmBottomLayout->removeWidget(nextButton);
        BmBottomLayout->removeWidget(stopButton);
        BmBottomLayout->removeWidget(playSlider);
        BmBottomLayout->removeWidget(volumeSlider);
        BmBottomLayout->removeWidget(volumeButton);
        BmBottomLayout->removeWidget(playModeButton);
        BmBottomLayout->removeWidget(totalTime);
        BottomLayout->removeItem(BmBottomLayout);
        BottomLayout->addWidget(playSlider);
        BottomLayout->addLayout(BmBottomLayout);
        BmBottomLayout->addWidget(slashLabel);
        BmBottomLayout->addWidget(totalTime);
        BmBottomLayout->addWidget(space);
        BmBottomLayout->addWidget(stopButton);
        BmBottomLayout->addWidget(lastButton);
        BmBottomLayout->addWidget(pauseButton);
        BmBottomLayout->addWidget(nextButton);
        BmBottomLayout->addWidget(volumeButton);
        BmBottomLayout->addWidget(anotherSpace);
        BmBottomLayout->addWidget(definitionButton);
        BmBottomLayout->addWidget(settingsButton);
        BmBottomLayout->addWidget(playModeButton);
        BmBottomLayout->addWidget(full_screenButton);
        if(volumeSlider->value()==0)
        {
            volumeButton->setStyleSheet("QPushButton{ border-image: url(:/image/image/bottomBar/full_mute.png); }");
        }
        else
        {
            volumeButton->setStyleSheet("QPushButton{ border-image: url(:/image/image/bottomBar/full_volume.png); }");

        }

        volumeLayout->addWidget(volumeSlider);
        connect(volumeButton,SIGNAL(enterSignal(int ,int)),volumeWidget,SLOT(display(int,int)));
        emit videoPlaying();

    }
    else if (_mediaType == MediaType::AUDIO)  // 变为音乐模式
    {
        setFixedHeight(50);



        playModeButton->show();
        definitionButton->hide();
        settingsButton->hide();
        full_screenButton->hide();
        space->hide();
        anotherSpace->hide();
        slashLabel->hide();
        volumeSlider->setOrientation(Qt::Horizontal);
        volumeSlider->setFixedSize(60,20);


        BottomLayout->removeWidget(playSlider);
        BmBottomLayout->removeWidget(volumeButton);
        BmBottomLayout->removeWidget(space);
        BmBottomLayout->removeWidget(slashLabel);
        BmBottomLayout->removeWidget(anotherSpace);
        BmBottomLayout->removeWidget(currentPos);
        BmBottomLayout->removeWidget(totalTime);
        BmBottomLayout->addWidget(currentPos);
        BmBottomLayout->addWidget(playSlider);
        BmBottomLayout->addWidget(totalTime);
        BmBottomLayout->addWidget(volumeButton);
        BmBottomLayout->addWidget(volumeSlider);
        BmBottomLayout->addWidget(playModeButton);
        if(volumeSlider->value()==0)
        {
            volumeButton->setStyleSheet("QPushButton{ border-image: url(:/image/image/bottomBar/mute.png); }");
        }
        else
        {
            volumeButton->setStyleSheet("QPushButton{ border-image: url(:/image/image/bottomBar/volume.png); }");

        }

        disconnect(volumeButton,SIGNAL(enterSignal(int ,int)),volumeWidget,SLOT(display(int,int)));
        emit audioPlaying();

    }
    else
    {

    }
}

void BottomBar::volumeWidgetDetection()//检测鼠标是否移至音量悬浮窗
{
    isatWidget(volumeWidget);
}

void BottomBar::definitionWidgetDetection()//检测鼠标是否移至滤镜悬浮窗
{
    isatWidget(definitionWidget);
}

void BottomBar::settingsWidgetDetection()//检测鼠标是否移至设置悬浮窗
{
    isatWidget(settingsWidget);
}

void BottomBar::on_full_screenButton_clicked()//全屏发射信号
{
    emit full_screenButton_clicked();
    volumeWidget->hide();
}

void BottomBar::wheelMoved(QWheelEvent *event)//滚轮改变音量
{
    if (volumeSlider->orientation() == Qt::Vertical)
    {
        emit wheelMoving(volumeButton->x(), volumeButton->y());
    }
    else
    {

    }

    int max = volumeSlider->maximum();
    int min = volumeSlider->minimum();
    int value = volumeSlider->value();
    int change;
    if ((max - min) <= 10)
    {
        change = 1;
    }
    else if ((max - min) <= 100)
    {
        change = 3;
    }
    else
    {
        change = 5;
    }
    //滚轮向上滚动增加vlaue
    if (event->delta() >= 120)
    {
        value = volumeSlider->value() + change;
        if (value > max)
            value = max;
        volumeSlider->setValue(value);

    }
    //滚轮向下滚动减少vlaue
    else if (event->delta() <= -120)
    {
        value = volumeSlider->value() - change;
        if (value < min)
            value = min;
        volumeSlider->setValue(value);
    }
    else
    {

    }
}

void BottomBar::isatWidget(QWidget *suspensionindow)
{
    if(this->window()->childAt(QPoint(QCursor::pos().x()-this->window()->x(),QCursor::pos().y()-this->window()->y()))==suspensionindow)
    {

    }
    else
    {
        suspensionindow->hide();
    }
}

MySlider *BottomBar::getPlaySpeedSlider() const
{
    return playSpeedSlider;
}

/**
* @method        BottomBar::getMultiplyingPower
* @brief         得到播放倍速
* @param         VOID
* @return        INT
* @author        涂晴昊
* @date          2019-09-10
*/
int BottomBar::getMultiplyingPower() const
{
    return multiplyingPower;
}

/**
* @method        BottomBar::getQuickMoveTime
* @brief         得到快进快退秒数
* @param         VOID
* @return        INT
* @author        涂晴昊
* @date          2019-09-10
*/
int BottomBar::getQuickMoveTime() const
{
    return quickMoveTime;
}



void BottomBar::changeVolume(int vol)//改变音量
{
    if (vol == volumeSlider->value())
    {

    }
    else
    {
        volumeSlider->setValue(vol);
    }

}

void BottomBar::hideVolumeWidget()
{
    volumeWidget->hide();
}

void BottomBar::volumeSliderValueAdd()//音量加
{
    volumeSlider->setValue(volumeSlider->value()+5);
}

void BottomBar::volumeSliderValueSub()//音量减
{
    volumeSlider->setValue(volumeSlider->value()-5);
}

/**
* @method        BottomBar::quickMovePlaySliderPlus
* @brief         快进功能实现
* @param         VOID
* @return        VOID
* @author        涂晴昊
* @date          2019-09-09
*/
void BottomBar::quickMovePlaySliderPlus()
{
    playSlider->setValue(playSlider->value()+quickMoveTime);
}

/*
* @method        BottomBar::quickMovePlaySliderMinus
* @brief         快退功能实现
* @param         VOID
* @return        VOID
* @author        涂晴昊
* @date          2019-09-09
*/
void BottomBar::quickMovePlaySliderMinus()
{
    playSlider->setValue(playSlider->value()-quickMoveTime);
}

void BottomBar::setTotalTime(qint64 value)
{
    int val = value/1000;
    if(val/60>=10&&val%60>=10)
    {
        totalTime->setText(QString::number(val/60) + ":" + QString::number(val%60));
    }
    else if (val/60<10&&val%60>=10)
    {
        totalTime->setText("0" + QString::number(val/60) + ":" + QString::number(val%60));
    }
    else if (val/60>=10&&val%60<10)
    {
        totalTime->setText(QString::number(val/60) + ":" + "0" + QString::number(val%60));
    }
    else
    {
        totalTime->setText("0" + QString::number(val/60) + ":" + "0" + QString::number(val%60));
    }
    playSlider->setMaximum(value);

}

void BottomBar::clearPlaySlider()
{
    playSlider->setValue(0);
    playSlider->setMaximum(0);
    totalTime->setText("00:00");
}

/**
* @method        BottomBar::on_p360DefinitionButton_clicked
* @brief         播放滤镜默认
* @param         VOID
* @return        VOID
* @author        涂晴昊
* @date          2019-09-04
*/
void BottomBar::on_p360DefinitionButton_clicked()
{
    emit sigChangeMediaStyle(1);
}

/**
* @method        BottomBar::on_p360DefinitionButton_clicked
* @brief         播放明亮默认
* @param         VOID
* @return        VOID
* @author        涂晴昊
* @date          2019-09-04
*/
void BottomBar::on_p480DefinitionButton_clicked()
{
    emit sigChangeMediaStyle(2);
}

/**
* @method        BottomBar::on_p360DefinitionButton_clicked
* @brief         播放柔和默认
* @param         VOID
* @return        VOID
* @author        涂晴昊
* @date          2019-09-04
*/
void BottomBar::on_p720DefinitionButton_clicked()
{
    emit sigChangeMediaStyle(3);
}

/**
* @method        BottomBar::connectSettingAndBottom
* @brief         连接设置界面
* @author        涂晴昊
* @date          2019-08-31
*/
void BottomBar::connectSettingAndBottom(SettingWindow *settingWindow)
{
    connect(settingWindow,SIGNAL(sigActionShortcut(QString)),//换暂停播放快捷键
            this,SLOT(changeActionShortcut(QString)));
    connect(settingWindow,SIGNAL(sigLastShortcut(QString)),//换上一首快捷键
            this,SLOT(changeLastShortcut(QString)));
    connect(settingWindow,SIGNAL(sigNextShortcut(QString)),//换下一首快捷键
            this,SLOT(changeNextShortcut(QString)));
    connect(settingWindow,SIGNAL(sigVolumeOnOffShortcut(QString)),//换静音复音快捷键
            this,SLOT(changeVolumeOnOffShortcut(QString)));
    connect(settingWindow,SIGNAL(sigCloseFileShortcut(QString)),//换停止文件快捷键
            this,SLOT(changeCloseFileShortcut(QString)));


    connect(settingWindow,SIGNAL(sigSpeedChange(int)),//设置界面修改主界面倍速
            this,SLOT(changeMultiplyingPower(int)));
    connect(settingWindow,SIGNAL(sigDefinitionChange(int)),//设置界面修改主界面滤镜
            this,SLOT(changeDefinition(int)));
    connect(p360DefinitionButton,SIGNAL(clicked()),//主界面->设置界面默认滤镜
            settingWindow,SLOT(lv1DefinitionChange()));
    connect(p480DefinitionButton,SIGNAL(clicked()),//主界面->设置界面明亮滤镜
            settingWindow,SLOT(lv2DefinitionChange()));
    connect(p720DefinitionButton,SIGNAL(clicked()),//主界面->设置界面柔和滤镜
            settingWindow,SLOT(lv3DefinitionChange()));
    connect(this->playSpeedSlider,SIGNAL(valueChanged(int)),//主界面修改设置界面倍速
            settingWindow,SLOT(speedChange(int)));
    connect(settingWindow,SIGNAL(sigQuickMoveTimeChange(int)),//快进快退秒数修改
            this,SLOT(changePlaySliderPlus(int)));
}




/**
* @method        BottomBar::changeActionShortcut
* @brief         暂停播放快捷键修改
* @param         QSTRING
* @return        VOID
* @author        涂晴昊
* @date          2019-08-29
*/
void BottomBar::changeActionShortcut(QString str)
{
    pauseButton->setShortcut(QKeySequence(str.toLatin1().data()));
}

/**
* @method        BottomBar::changeLastShortcut
* @brief         上一首快捷键修改
* @param         QSTRING
* @return        VOID
* @author        涂晴昊
* @date          2019-08-29
*/
void BottomBar::changeLastShortcut(QString str)
{
    lastButton->setShortcut(QKeySequence(str.toLatin1().data()));
}

/**
* @method        BottomBar::changeNextShortcut
* @brief         下一首快捷键修改
* @param         QSTRING
* @return        VOID
* @author        涂晴昊
* @date          2019-08-29
*/
void BottomBar::changeNextShortcut(QString str)
{
    nextButton->setShortcut(QKeySequence(str.toLatin1().data()));
}

/**
* @method        BottomBar::changeCloseFileShortcut
* @brief         停止文件快捷键修改
* @param         QSTRING
* @return        VOID
* @author        涂晴昊
* @date          2019-09-09
*/
void BottomBar::changeCloseFileShortcut(QString str)
{
    stopButton->setShortcut(QKeySequence(str.toLatin1().data()));
}


/**
* @method        BottomBar::changeVolumeOnOffShortcut
* @brief         静音复音快捷键修改
* @param         QSTRING
* @return        VOID
* @author        涂晴昊
* @date          2019-09-05
*/
void BottomBar::changeVolumeOnOffShortcut(QString str)
{
    volumeButton->setShortcut(QKeySequence(str.toLatin1().data()));
}

/**
* @method        BottomBar::changeMultiplyingPower
* @brief         改变主界面播放倍速
* @param         INT
* @return        VOID
* @author        涂晴昊
* @date          2019-09-04
*/
void BottomBar::changeMultiplyingPower(int mul)
{
    multiplyingPower=mul;
    playSpeedSlider->setValue(mul);
}

/**
* @method        BottomBar::changeDefinition
* @brief         改变主界面滤镜
* @param         INT
* @return        VOID
* @author        涂晴昊
* @date          2019-09-05
*/
void BottomBar::changeDefinition(int d)
{
    if(d==1)
        p360DefinitionButton->click();
    else if(d==2)
        p480DefinitionButton->click();
    else
        p720DefinitionButton->click();
    emit sigChangeMediaStyle(d);

}



