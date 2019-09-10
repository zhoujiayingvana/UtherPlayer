#include "tmzplayer.h"

#include<QApplication>
#include<QVBoxLayout>

#include <QDebug>
#ifdef Q_OS_WIN
#include <qt_windows.h>
#include <windowsx.h>
#endif

TMZPlayer::TMZPlayer(QWidget *parent,Media* m) :
    QMainWindow(parent),
    ui(new Ui::TMZPlayer),media(m),
    lastPos(0)
{
    ui->setupUi(this);
    resize(1280,768);
    this->setWindowFlags(Qt::FramelessWindowHint|Qt::WindowMinimizeButtonHint);
    
    widget = new QWidget();
    this->setCentralWidget(widget);
    
    //截屏录屏路径
    QDir info("../");
    picPath=info.absolutePath();
    qDebug()<<picPath;
    gifPath=info.absolutePath();
    recordStatus=true;
    splitOrNot=false;
    shotFormat="jpg";

    //录屏计时器
    picTime=new QDateTime();
    recordTimer=new QTimer(this);
    //recordTimer->setSingleShot(true);
    timeLimit=5000;
    connect(recordTimer,SIGNAL(timeout()),this,SLOT(recordMyScreen()));
    userEnd=0;


    
    pTitleBar = new TitleBar(this);
    //    pTitleBar->setAutoFillBackground(true);//test
    //    pTitleBar->setPalette(QPalette(Qt::black));//test
    pBottomBar = new BottomBar(this);
    //    pBottomBar->setAutoFillBackground(true);//test
    //    pBottomBar->setPalette(QPalette(Qt::black));//test
    space = new MediaWidget(this);//test
    //    space->setAutoFillBackground(true);//test
    //    space->setPalette(QPalette(Qt::gray));//test
    space->hide();
    //设置播放窗口匹配
    media->getPlayWindow()->setVideoOutput(space);
    QPalette palette(this->palette());
    palette.setColor(QPalette::Background, Qt::black);
    space->setPalette(palette);
    space->setAutoFillBackground(true);
    qDebug()<<space->pos();

    ui->showLeftBarBtn->setVisible(false);
    ui->showRightBarBtn->setVisible(false);
    
    
    mini = new Mini(this);
    sysTrayIcon = new QSystemTrayIcon(this);
    


    downloadListBtn = new QPushButton(this);
    downloadListBtn->setFlat(true);
    downloadListBtn->setText(QStringLiteral(" 我的下载"));
    downloadListBtn->setFixedHeight(35);
    QFont downloadListBtnFont = downloadListBtn->font();
    downloadListBtnFont.setPointSize(11);
    downloadListBtn->setStyleSheet("text-align: left;");
    downloadListBtn->setFont(downloadListBtnFont);
    QIcon downloadIcon(":/image/image/musiclist.png");
    downloadListBtn->setIcon(downloadIcon);
    downloadListBtn->setIconSize(QSize(20,20));
    
    
    listBox = new QGroupBox(this);
    listBox->setTitle(QStringLiteral("列表"));
    listBox->setStyleSheet("QGroupBox { border: none; font-size: 15px; }");
    addListBtn = new QPushButton(this);
    addListBtn->setText(QStringLiteral("+ 新建播放列表"));
    QFont addListBtnFont = addListBtn->font();
    addListBtnFont.setPointSize(11);
    addListBtn->setFont(addListBtnFont);
    addListBtn->setFlat(true);
    
    ui->leftsideBarLayout->setAlignment(Qt::AlignTop);
    ui->leftsideBar->setLayout(ui->leftsideBarLayout);
    ui->leftsideBarLayout->addWidget(downloadListBtn);
    ui->leftsideBarLayout->addWidget(listBox);
    
    ui->showLeftBarBtn->setFixedSize(21,21);
    ui->showRightBarBtn->setFixedSize(21,21);
    ui->hideLeftBarBtn->setFixedSize(21,21);
    ui->hideRightBarBtn->setFixedSize(21,21);
    
    
    listBoxLayout = new QVBoxLayout();
    listBoxLayout->setAlignment(Qt::AlignTop);
    listBoxLayout->setContentsMargins(0,20,0,0);
    listBox->setLayout(listBoxLayout);
    listBoxLayout->addWidget(addListBtn);
    
    
    QIcon icon = QIcon(":/image/image/test.png");
    sysTrayIcon->setIcon(icon);
    sysTrayIcon->setToolTip("TMZPlayer");
    
    
    creatActions();
    creatMenu();
    
    sysTrayIcon->show();
    

    
    
    middleBarLayout = new QHBoxLayout();
    leftWidget = new QWidget(this);
    leftLayout = new QHBoxLayout(leftWidget);
    rightWidget = new QWidget(this);
    rightLayout = new QHBoxLayout(rightWidget);
    middleWidget = new QWidget(this);
    middleLayout = new QVBoxLayout(middleWidget);
    leftLayout->addWidget(ui->scrollArea);
    leftLayout->addWidget(ui->hideLeftBarBtn);
    leftLayout->addWidget(ui->showLeftBarBtn);
    rightLayout->addWidget(ui->hideRightBarBtn);
    rightLayout->addWidget(ui->historyList);
    rightLayout->addWidget(ui->showRightBarBtn);



    fileWidget = new QWidget(this);
    fileLayout = new QVBoxLayout(fileWidget);
    fileLayout->addWidget(ui->listNameLabel);
    fileLayout->addWidget(ui->displayList);
    fileLayout->setSpacing(0);
    fileLayout->setContentsMargins(0, 0, 0, 0);

    fileWidget->hide();
    space->show();
    middleLayout->addWidget(space);
    middleLayout->addWidget(fileWidget);

    
    
    
    leftLayout->setContentsMargins(0, 0, 0, 0);
    rightLayout->setContentsMargins(0, 0, 0, 0);
    middleLayout->setContentsMargins(0, 0, 0, 0);
    leftLayout->setSpacing(0);
    rightLayout->setSpacing(0);
    middleLayout->setSpacing(0);
    leftWidget->setFixedWidth(261);
    rightWidget->setFixedWidth(221);
    middleBarLayout->addWidget(leftWidget);
    middleBarLayout->addWidget(middleWidget);
    middleBarLayout->addWidget(rightWidget);
    
    
    pLayout = new QVBoxLayout();
    pLayout->addWidget(pTitleBar);
    pLayout->addLayout(middleBarLayout);
    pLayout->addWidget(pBottomBar);
    
    
    pLayout->setSpacing(0);
    pLayout->setContentsMargins(5, 5, 5, 5);
    
    widget->setLayout(pLayout);
    
    
    //音量增减快捷键
    volumeAdd = new QShortcut(this);
    volumeAdd->setKey(tr("up"));
    volumeAdd->setAutoRepeat(true);
    volumeSub = new QShortcut(this);
    volumeSub->setKey(tr("down"));
    volumeSub->setAutoRepeat(true);
    connect(volumeAdd, SIGNAL(activated()), pBottomBar, SLOT(volumeSliderValueAdd()));
    connect(volumeSub, SIGNAL(activated()), pBottomBar, SLOT(volumeSliderValueSub()));
    
    //快进快退快捷键
    quickMovePlus=new QShortcut(this);
    quickMovePlus->setKey(tr("right"));
    quickMovePlus->setAutoRepeat(true);
    quickMoveMinus=new QShortcut(this);
    quickMoveMinus->setKey(tr("left"));
    quickMoveMinus->setAutoRepeat(true);
    connect(quickMovePlus, SIGNAL(activated()), pBottomBar, SLOT(quickMovePlaySliderPlus()));
    connect(quickMoveMinus, SIGNAL(activated()), pBottomBar, SLOT(quickMovePlaySliderMinus()));


    //截屏快捷键
    shotScreen=new QShortcut(this);
    shotScreen->setKey(tr("CTRL+1"));
    shotScreen->setAutoRepeat(true);
    connect(shotScreen, SIGNAL(activated()), this,SLOT(shotMyScreen()));
    //录屏快捷键
    recordScreen=new QShortcut(this);
    recordScreen->setKey(tr("CTRL+2"));
    recordScreen->setAutoRepeat(true);
    connect(recordScreen, SIGNAL(activated()), this,SLOT(userEndRecord()));
    connect(recordScreen, SIGNAL(activated()), this,SLOT(recordMyScreen()));

    //亮度快捷键
    luminAdd=new QShortcut(this);
    luminAdd->setKey(tr("ctrl+up"));
    luminAdd->setAutoRepeat(true);
    luminSub=new QShortcut(this);
    luminSub->setKey(tr("ctrl+down"));
    luminSub->setAutoRepeat(true);
    connect(luminAdd, SIGNAL(activated()), space, SLOT(mediaLuminAdd()));
    connect(luminSub, SIGNAL(activated()), space, SLOT(mediaLuminSub()));
    
    connect(mini,SIGNAL(miniToMaxSignal()),this,SLOT(miniToMaxSlot()));
    connect(mini,SIGNAL(miniToTraySignal()),this,SLOT(miniToTraySlot()));
    connect(mini,SIGNAL(closeSignal()),pTitleBar,SLOT(on_closeButton_clicked()));
    connect(mini,SIGNAL(sendLastSignal()),pBottomBar,SLOT(on_lastButton_clicked()));
    connect(mini,SIGNAL(sendNextSignal()),pBottomBar,SLOT(on_nextButton_clicked()));


    connect(mini,SIGNAL(sendPlayOrPauseSignal()),pBottomBar,SLOT(on_pauseButton_clicked()));
    connect(addListBtn,SIGNAL(clicked()),this,SLOT(addListSlot()));
    connect(pBottomBar,SIGNAL(full_screenButton_clicked()),this,SLOT(fullScreenMode()));
    connect(pBottomBar, SIGNAL(volumeChanged(int)), mini, SLOT(changeVolume(int)));
    connect(pBottomBar, SIGNAL(currentPosChanged(int)), this, SLOT(currentPosChanged(int)));
    connect(pBottomBar, SIGNAL(lastButton_clicked()), this, SLOT(lastFunction()));
    connect(pBottomBar, SIGNAL(pauseButton_clicked()), this, SLOT(playFunction()));
    connect(pBottomBar, SIGNAL(nextButton_clicked()), this, SLOT(nextFunction()));
    connect(pBottomBar, SIGNAL(stopButton_clicked()), this, SLOT(stopFunction()));
    connect(pBottomBar, SIGNAL(volumeChanged(int)), this, SLOT(changeVolume(int)));
    connect(pBottomBar, SIGNAL(needPosition()), this, SLOT(returnPosition()));
    connect(this, SIGNAL(getPosition(int)), pBottomBar, SLOT(setPlaySliderValue(int)));
    connect(this, SIGNAL(whetherPlaying(bool)), pBottomBar, SLOT(changePauseButton(bool)));
    connect(this, SIGNAL(whetherPlaying(bool)), mini, SLOT(changePlayOrPauseBtn(bool)));
    connect(this, SIGNAL(durationSignal(int)), pBottomBar, SLOT(startPlaying(int)));
    connect(this, SIGNAL(maximizeButton_clicked()), pTitleBar, SLOT(on_maximizeButton_clicked()));
    connect(space,SIGNAL(full_screenButton_clicked()),this,SLOT(fullScreenMode()));
    connect(space,SIGNAL(wheelMoved(QWheelEvent *)),pBottomBar,SLOT(wheelMoved(QWheelEvent *)));
    connect(space, SIGNAL(bottomBarHide()), pBottomBar, SLOT(hide()));
    connect(space, SIGNAL(volumeWidgetHide()), pBottomBar, SLOT(hideVolumeWidget()));
    connect(space, SIGNAL(bottomBarShow()), pBottomBar, SLOT(show()));
    connect(pTitleBar,SIGNAL(systemTrayMode()),this,SLOT(on_systemTrayModeBtn_clicked()));
    connect(pTitleBar,SIGNAL(miniMode()),this,SLOT(on_miniMode_clicked()));
    connect(sysTrayIcon, SIGNAL(activated(QSystemTrayIcon::ActivationReason)), this, SLOT(on_activatedSysTrayIcon(QSystemTrayIcon::ActivationReason)));
    connect(mini, SIGNAL(volumeChanged(int)), pBottomBar, SLOT(changeVolume(int)));
    connect(downloadListBtn, SIGNAL(clicked()), this, SLOT(showDownloadList()));
    connect(ui->displayList, SIGNAL(downloadFilesChangesSignal(int, QList<QString>)),
            this, SLOT(downloadFilesChangesSlot(int, QList<QString>)));
    
    //9.9

    connect(pTitleBar->settingWindow,SIGNAL(sigLouderShortcut(QString)),//换音量增快捷键
            this,SLOT(changeLouderShortcut(QString)));
    connect(pTitleBar->settingWindow,SIGNAL(sigLowerShortcut(QString)),//换音量减快捷键
            this,SLOT(changeLowerShortcut(QString)));
    connect(pTitleBar->settingWindow,SIGNAL(sigSpeedUpScreenShortcut(QString)),//换快进快捷键
            this,SLOT(changeQuickMovePlusShortcut(QString)));
    connect(pTitleBar->settingWindow,SIGNAL(sigSpeedDownScreenShortcut(QString)),//换快退快捷键
            this,SLOT(changeQuickMoveMinusShortcut(QString)));

    connect(pTitleBar->settingWindow,SIGNAL(sigScreenshotShortcut(QString)),//修改截屏快捷键
            this,SLOT(changeShotScreenShortcut(QString)));
    connect(pTitleBar->settingWindow,SIGNAL(sigShotDirChange(QString)),//修改截屏路径
            this,SLOT(changeShotDir(QString)));
    connect(pTitleBar->settingWindow,SIGNAL(sigShotFormatChange(QString)),//修改截屏格式
            this,SLOT(changeShotFormat(QString)));
    connect(pTitleBar->settingWindow,SIGNAL(sigRecordShotcut(QString)),//修改录屏快捷键
            this,SLOT(changeRecordShortcut(QString)));
    connect(pTitleBar->settingWindow,SIGNAL(sigRecordDirChange(QString)),//修改录屏路径
            this,SLOT(changeRecordDir(QString)));
    connect(pTitleBar->settingWindow,SIGNAL(sigLuminChange(int)),//修改主界面亮度
            this,SLOT(changeLumin(int)));
    connect(this->space,SIGNAL(brightnessChanged(int)),//主界面修改设置界面亮度
            pTitleBar->settingWindow,SLOT(changeSetLumin(int)));
    connect(pTitleBar->settingWindow,SIGNAL(sigLuminUpShortcut(QString)),//亮度增快捷键修改
            this,SLOT(changeLuminAddShortcut(QString)));
    connect(pTitleBar->settingWindow,SIGNAL(sigLuminDownShortcut(QString)),//亮度减快捷键修改
            this,SLOT(changeLuminSubShortcut(QString)));
    connect(pTitleBar->settingWindow,SIGNAL(sigTimeLimitChange(int)),//修改录屏最大时长
            this,SLOT(changeRecordSize(int)));
    connect(pTitleBar->settingWindow,SIGNAL(sigAutoSplitRecord()),//自动分割录屏
            this,SLOT(changeSplitStatus()));

    // 连接自动切换模式
    connect(this, SIGNAL(sendMediaType(MediaType&)),
            pBottomBar, SLOT(rcvSwitchModeButton(MediaType&)));    

    // 新建收藏夹
    connect(this, SIGNAL(sendNewFolderName(QString)),
            &this->media->getFolders(), SLOT(addNewFolder(QString))
            );
    //获取视频总时长
    connect(media->getController(), SIGNAL(returnInitDuration(qint64)),
            pBottomBar, SLOT(setTotalTime(qint64)));
    //得到信号打开文件
    connect(pTitleBar,SIGNAL(openFile_clicked()),this,SLOT(on_openFile_clicked()));



    //    connect(settingAction,SIGNAL(triggered()),//托盘模式打开设置窗口
    //            pTitleBar->settingWindow,SLOT(setVisible(true)));
    //    connect(pTitleBar->settingWindow,SIGNAL(sigPlayDirChange(QString)),//修改媒体库目录
    //            )
    //    connect(pTitleBar->settingWindow,SIGNAL(sigDownloadDirChange(QString)),
    //            )//修改下载路径
    
    //连接设置与BottomBar
    pBottomBar->connectSettingAndBottom(pTitleBar->settingWindow);
    
    
    currentQss=":/new/prefix1/myQss/style2.qss";
    //蓝色风格
    QFile qssfile(currentQss);
    qssfile.open(QFile::ReadOnly);
    if(!qssfile.exists())
        qDebug() <<"no file";
    QString qss;
    qss = qssfile.readAll();
    this->setStyleSheet(qss);
    qDebug()<<this;
    
    

    
    
    // 建立
    this->zinit();
}

TMZPlayer::~TMZPlayer()
{
    delete ui;
}

bool TMZPlayer::nativeEvent(const QByteArray &eventType, void *message, long *result)//实现窗口缩放
{
    Q_UNUSED(eventType);
    
    const int HIT_BORDER = 5;
    const MSG *msg=static_cast<MSG*>(message);



    if(msg->message == WM_NCHITTEST)
    {
        int xPos = GET_X_LPARAM(msg->lParam) - this->geometry().x();
        int yPos = GET_Y_LPARAM(msg->lParam) - this->geometry().y();
        
        if(this->centralWidget()->childAt(xPos,yPos) != nullptr)//鼠标在子对象上则不处理
        {
            return QWidget::nativeEvent(eventType, message, result);
        }

        
        //鼠标在边框上则缩放
        if(xPos > 0 && xPos < HIT_BORDER)
        {
            *result = HTLEFT;
        }
        if(xPos > (this->width() - HIT_BORDER) && xPos < this->width())
        {
            *result = HTRIGHT;
        }
        if(yPos > 0 && yPos < HIT_BORDER)
        {
            *result = HTTOP;
        }
        if(yPos > (this->height() - HIT_BORDER) && yPos < this->height())
        {
            *result = HTBOTTOM;
        }
        if(xPos > 0 && xPos < HIT_BORDER && yPos > 0 && yPos < HIT_BORDER)
        {
            *result = HTTOPLEFT;
        }
        if(xPos > (this->width() - HIT_BORDER) && xPos < this->width() && yPos > 0 && yPos < HIT_BORDER)
        {
            *result = HTTOPRIGHT;
        }
        if(xPos > 0 && xPos < HIT_BORDER && yPos > (this->height() - HIT_BORDER) && yPos < this->height())
        {
            *result = HTBOTTOMLEFT;
        }
        if(xPos > (this->width() - HIT_BORDER) && xPos < this->width() && yPos > (this->height() - HIT_BORDER) && yPos < this->height())
        {
            *result = HTBOTTOMRIGHT;
        }
        return true;
    }
    return QWidget::nativeEvent(eventType, message, result);
    
}

void TMZPlayer::fullScreenMode()
{
    if(isFullScreen())
    {
        emit maximizeButton_clicked();
        pTitleBar->show();
        pBottomBar->show();
        pLayout->removeItem(middleBarLayout);
        pLayout->addWidget(pTitleBar);
        pLayout->addLayout(middleBarLayout);
        pLayout->addWidget(pBottomBar);
        pLayout->setContentsMargins(5, 5, 5, 5);
        showNormal();
        emit ui->showLeftBarBtn->click();
        emit ui->showRightBarBtn->click();
        
        
        
    }
    else
    {
        emit maximizeButton_clicked();
        pLayout->setContentsMargins(0, 0, 0, 0);
        this->showFullScreen();
        pBottomBar->setWindowOpacity(0.5);
        pLayout->removeWidget(pBottomBar);
        pLayout->removeWidget(pTitleBar);
        pBottomBar->raise();
        pTitleBar->hide();
        emit ui->hideLeftBarBtn->click();
        emit ui->hideRightBarBtn->click();
    }
}

/* Author: zyt
 * Name: whetherInitializeListButton
 * Function:（未实现） 检测用户的历史播放列表记录
 * Return:false：未创建
 *        true：创建过，按照历史纪录初始化
 */
bool TMZPlayer::whetherInitializeListButton()
{
    return false;
    Q_UNUSED(true);
    return true;
}

/* Author: zyt
 * Name: addListSlot
 * Function: 槽：实现添加列表操作，建立连接
 */
void TMZPlayer::addListSlot()
{
    playlistsContainer.append(new mergedPlaylist);

    QString temp = playlistsContainer.last()->getListName();
    emit sendNewFolderName(temp);

    listBoxLayout->addWidget(playlistsContainer.at(playlistsContainer.length() - 1));
    connect(playlistsContainer.at(playlistsContainer.length() - 1),
            SIGNAL(givingTempSNAndFiles(int, QList<QString>)),
            ui->displayList,
            SLOT(recevingSNAndFiles(int, QList<QString>)));
    
    connect(ui->displayList,
            SIGNAL(changeFilesInListSignal(int, QList<QString>)),
            playlistsContainer.at(playlistsContainer.length() - 1),
            SLOT(changeFilesInListSlot(int, QList<QString>)));
    
    connect(playlistsContainer.at(playlistsContainer.length() - 1),
            SIGNAL(showChangedListSignal(int, QList<QString>)),
            ui->displayList,
            SLOT(showChangedListSlot(int, QList<QString>)));
    
    connect(playlistsContainer.at(playlistsContainer.length() - 1),
            SIGNAL(givingListName(QString)),
            this,
            SLOT(receivingListName(QString)));
    
    connect(playlistsContainer.at(playlistsContainer.length() - 1),
            SIGNAL(hideContentsExceptThisSignal(int)),
            this,
            SLOT(hideContentsExceptThisSlot(int)));
    
    connect(playlistsContainer.at(playlistsContainer.length() - 1),
            SIGNAL(allowDragAndMenuSignal()),
            this,
            SLOT(allowDragAndMenuSlot()));

    // 收藏夹改名
    connect(
        playlistsContainer.at(playlistsContainer.length() - 1),
        SIGNAL(sendFolderName(int,QString)),
        &this->media->getFolders(),
        SLOT(renameFolder(int, QString))
    );

    // 向收藏夹中添加内容
    connect(playlistsContainer.at(playlistsContainer.length() - 1),
            SIGNAL(sendAddFileToFolder(const int&, const QString& ,const QString&, const bool&)),
            &this->media->getFolders(),
            SLOT(addContent2Folder(const int&, const QString&,
                                   const QString&, const bool&)));

    // 在左边的连接
    connect(playlistsContainer.at(playlistsContainer.length() - 1),
            SIGNAL(sendPlayInfo(const PlayArea&,const int&, const int&)),
            this,
            SLOT(sltResendPlayInfo(const PlayArea&, const int&, const int&)));

    connect(playlistsContainer.at(playlistsContainer.length() - 1),
            SIGNAL(removeContent(int,int)),
            &this->media->getFolders(),
            SLOT(removeContentFromFolder(int, int)));
}

/* Author: zyt
 * Name: showDownloadList
 * Function: 槽：显示我的下载列表
 */
void TMZPlayer::showDownloadList()
{
    qDebug() << ui->listNameLabel->text();
    
    ui->listNameLabel->setText(QStringLiteral("我的下载"));
    //我的下载SN为0
    ui->displayList->recevingSNAndFiles(0, downloadSongs);
    
    
    //不允许右键点击事件
    ui->displayList->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->displayList->setContextMenuPolicy(Qt::NoContextMenu);
    
    //不允许拖拽文件进入
    ui->displayList->setAcceptDrops(false);
}

/* Author: zyt
 * Name: downloadFilesChangesSlot
 * Function: 若我的下载列表内文件发生改变，修改存储列表内的对应文件
 */
void TMZPlayer::downloadFilesChangesSlot(int sn, QList<QString> files)
{
    if (sn == 0)
    {
        downloadSongs = files;
    }
}

/* Author: zyt
 * Name: receivingListName
 * Function: 双击我的列表时，显示displayList指向对应的列表名字
 */
void TMZPlayer::receivingListName(QString listName)
{
    ui->listNameLabel->setText(listName);
    
    
}

/* Author: zyt
 * Name: hideContentsExceptThisSlot
 * Function: 收起除了该exceptSN的左侧列表
 */
void TMZPlayer::hideContentsExceptThisSlot(int exceptSN)
{
    for (int i = 0; i < playlistsContainer.length(); i++)
    {
        if (playlistsContainer.at(i)->getSN() != exceptSN)
        {
            emit playlistsContainer.at(i)->hideContentSignal();
        }
    }
}

/* Author: zyt
 * Name: allowDragAndMenuSlot
 * Function: 槽：允许列表的文件拖拽和右键事件
 */
void TMZPlayer::allowDragAndMenuSlot()
{
    //允许右键点击事件
    ui->displayList->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->displayList->setContextMenuPolicy(Qt::CustomContextMenu);
    
    //允许拖拽文件进入
    ui->displayList->setAcceptDrops(true);
}

/**
* @method        TMZPlayer::changeLouderShortcut
* @brief         音量增快捷键修改
* @param         QSTRING
* @return        VOID
* @author        涂晴昊
* @date          2019-08-29
*/
void TMZPlayer::changeLouderShortcut(QString str)
{
    volumeAdd->setKey(str);
}

/**
* @method        TMZPlayer::changeLowerShortcut
* @brief         音量减快捷键修改
* @param         QSTRING
* @return        VOID
* @author        涂晴昊
* @date          2019-08-29
*/
void TMZPlayer::changeLowerShortcut(QString str)
{
    volumeSub->setKey(str);
}

/**
* @method        TMZPlayer::changeQuickMovePlusShortcut
* @brief         快进快捷键修改
* @param         QSTRING
* @return        VOID
* @author        涂晴昊
* @date          2019-09-09
*/
void TMZPlayer::changeQuickMovePlusShortcut(QString str)
{
    quickMovePlus->setKey(str);
}

/**
* @method        TMZPlayer::changeQuickMoveMinusShortcut
* @brief         快退快捷键修改
* @param         QSTRING
* @return        VOID
* @author        涂晴昊
* @date          2019-09-09
*/
void TMZPlayer::changeQuickMoveMinusShortcut(QString str)
{
    quickMoveMinus->setKey(str);
}



/**
* @method        TMZPlayer::changeLuminAddShortcut
* @brief         亮度增快捷键修改
* @param         QSTRING
* @return        VOID
* @author        涂晴昊
* @date          2019-09-10
*/
void TMZPlayer::changeLuminAddShortcut(QString str)
{
    luminAdd->setKey(str);
}

/**
* @method        TMZPlayer::changeLuminSubShortcut
* @brief         亮度减快捷键修改
* @param         QSTRING
* @return        VOID
* @author        涂晴昊
* @date          2019-09-10
*/
void TMZPlayer::changeLuminSubShortcut(QString str)
{
    luminSub->setKey(str);
}

/**
* @method        TMZPlayer::changeShotScreenShortcut
* @brief         截屏快捷键修改
* @param         QSTRING
* @return        VOID
* @author        涂晴昊
* @date          2019-09-09
*/
void TMZPlayer::changeShotScreenShortcut(QString str)
{
    shotScreen->setKey(str);
}

/**
* @method        TMZPlayer::changeRecordShortcut
* @brief         录屏快捷键修改
* @param         QString
* @return        VOID
* @author        涂晴昊
* @date          2019-09-09
*/
void TMZPlayer::changeRecordShortcut(QString str)
{
    recordScreen->setKey(str);
}

/**
* @method        TMZPlayer::changeShotDir
* @brief         修改截屏路径
* @param         QSTRING
* @return        VOID
* @author        涂晴昊
* @date          2019-09-09
*/
void TMZPlayer::changeShotDir(QString str)
{
    picPath=str;
    qDebug()<<picPath;
}

/**
* @method        TMZPlayer::changeRecordDir
* @brief         修改录屏路径
* @param         QSTRING
* @return        VOID
* @author        涂晴昊
* @date          2019-09-09
*/
void TMZPlayer::changeRecordDir(QString str)
{
    gifPath=str;
    qDebug()<<gifPath;
}

/* Author: zyt
 * Name: on_hideLeftBarBtn_clicked
 * Function: 隐藏左侧边栏
 */
void TMZPlayer::on_hideLeftBarBtn_clicked()
{
    
    ui->scrollArea->setVisible(false);
    ui->hideLeftBarBtn->setVisible(false);
    ui->showLeftBarBtn->setVisible(true);
    leftWidget->setFixedWidth(21);
    
}

/* Author: zyt
 * Name: on_showLeftBarBtn_clicked
 * Function: 显示左侧边栏
 */
void TMZPlayer::on_showLeftBarBtn_clicked()
{
    ui->scrollArea->setVisible(true);
    ui->showLeftBarBtn->setVisible(false);
    ui->hideLeftBarBtn->setVisible(true);
    leftWidget->setFixedWidth(261);
    
}

/* Author: zyt
 * Name: on_hideRightBarBtn_clicked
 * Function: 隐藏右侧边栏
 */
void TMZPlayer::on_hideRightBarBtn_clicked()
{
    ui->historyList->setVisible(false);
    ui->showRightBarBtn->setVisible(true);
    ui->hideRightBarBtn->setVisible(false);
    rightWidget->setFixedWidth(21);
    
}

/* Author: zyt
 * Name: on_showRightBarBtn_clicked
 * Function: 显示右侧边栏
 */
void TMZPlayer::on_showRightBarBtn_clicked()
{
    ui->historyList->setVisible(true);
    ui->showRightBarBtn->setVisible(false);
    ui->hideRightBarBtn->setVisible(true);
    rightWidget->setFixedWidth(221);
    
}

/* Author: zyt
 * Name: creatActions
 * Function: 创建右键托盘菜单及图标的功能，并进行信号与槽的连接
 */
void TMZPlayer::creatActions()
{  
    //实际情况待对接
    if(isPlaying)
        playOrPauseAction = new QAction(QStringLiteral("暂停"));
    else if(!isPlaying)
        playOrPauseAction = new QAction(QStringLiteral("播放"));
    
    showStatusAction = new QAction(QStringLiteral("暂无播放歌曲"));
    lastSongAction = new QAction(QStringLiteral("上一首"));
    nextSongAction = new QAction(QStringLiteral("下一首"));
    
    playOrderMenu = new QMenu(QStringLiteral("播放模式"));
    playOrder_orderAction = new QAction(QStringLiteral("顺序播放"));
    playOrder_repeatAction = new QAction(QStringLiteral("单曲循环"));
    playOrder_shuffleAction = new QAction(QStringLiteral("随机播放"));
    playOrder_listOrderAction = new QAction(QStringLiteral("列表循环"));
    playOrderMenu->addAction(playOrder_listOrderAction);
    playOrderMenu->addAction(playOrder_repeatAction);
    playOrderMenu->addAction(playOrder_shuffleAction);
    playOrderMenu->addAction(playOrder_orderAction);
    
    
    displayModeMenu = new QMenu(QStringLiteral("显示模式"));
    displayMode_maxAction = new QAction(QStringLiteral("完整模式"));
    displayMode_miniAction = new QAction(QStringLiteral("mini模式"));
    displayMode_trayAction = new QAction(QStringLiteral("最小化到托盘"));
    displayModeMenu->addAction(displayMode_maxAction);
    displayModeMenu->addAction(displayMode_miniAction);
    displayModeMenu->addAction(displayMode_trayAction);
    
    
    
    whetherShowLyricAction = new QAction(QStringLiteral("打开桌面歌词"));
    whetherLockLyricAction = new QAction(QStringLiteral("锁定桌面歌词"));
    
    settingAction = new QAction(QStringLiteral("设置"));
    
    exitAction = new QAction(QStringLiteral("退出"));
    
    if(isPlaying)
        playOrPauseAction->setIcon(QIcon(":/image/image/pause.jpg"));
    else if(!isPlaying)
        playOrPauseAction->setIcon(QIcon(":/image/image/play.jpg"));
    
    showStatusAction->setIcon(QIcon(":/image/image/status.png"));
    lastSongAction->setIcon(QIcon(":/image/image/last_song.png"));
    nextSongAction->setIcon(QIcon(":/image/image/next_song.png"));
    playOrder_orderAction->setIcon(QIcon(":/image/image/order.png"));
    playOrder_repeatAction->setIcon(QIcon(":/image/image/repeat.png"));
    playOrder_shuffleAction->setIcon(QIcon(":/image/image/shuffle.png"));
    playOrder_listOrderAction->setIcon(QIcon(":/image/image/listOrder.png"));
    displayMode_maxAction->setIcon(QIcon(":/image/image/max.png"));
    displayMode_miniAction->setIcon(QIcon(":/image/image/mini.png"));
    displayMode_trayAction->setIcon(QIcon(":/image/image/tray.png"));
    whetherShowLyricAction->setIcon(QIcon(":/image/image/show_lyric.png"));
    whetherLockLyricAction->setIcon(QIcon(":/image/image/lock_lyric.png"));
    settingAction->setIcon(QIcon(":/image/image/setting.png"));
    exitAction->setIcon(QIcon(":/image/image/exit.png"));
    
    connect(showStatusAction,SIGNAL(triggered()),this,SLOT(on_showMainAction()));
    connect(exitAction,SIGNAL(triggered()),this,SLOT(on_exitAction()));
    connect(playOrPauseAction,SIGNAL(triggered()),this,SLOT(on_playOrPauseAction()));
    connect(displayMode_maxAction,SIGNAL(triggered()),this,SLOT(on_displayMode_maxAction()));
    connect(displayMode_miniAction,SIGNAL(triggered()),this,SLOT(on_displayMode_miniAction()));
    connect(displayMode_trayAction, SIGNAL(triggered()), this, SLOT(on_displayMode_trayAction()));
    
}

/* Author: zyt
 * Name: creatMenu
 * Function: 创建右键托盘图标的功能显示
 */
void TMZPlayer::creatMenu()
{
    sysTrayMenu = new QMenu(this);
    QList<QAction*> addActions;
    addActions << showStatusAction << playOrPauseAction << lastSongAction << nextSongAction;
    sysTrayMenu->addActions(addActions);
    addActions.clear();
    sysTrayMenu->addSeparator();
    
    sysTrayMenu->addMenu(playOrderMenu);
    sysTrayMenu->addMenu(displayModeMenu);
    addActions << whetherShowLyricAction << whetherLockLyricAction;
    sysTrayMenu->addActions(addActions);
    addActions.clear();
    sysTrayMenu->addSeparator();
    
    sysTrayMenu->addAction(settingAction);
    
    sysTrayMenu->addSeparator();
    sysTrayMenu->addAction(exitAction);
    QPalette palette = sysTrayMenu->palette();
    palette.setColor(QPalette::Window,QColor(250,250,250));
    sysTrayMenu->setPalette(palette);
    
    sysTrayIcon->setContextMenu(sysTrayMenu);
}

void TMZPlayer::currentPosChanged(int time)
{
    if((media->getController()->getPosition()-time)>=500)
    {
        media->getController()->seekPosition(time+200);
    }
    else if((media->getController()->getPosition()-time)<-500){
        media->getController()->seekPosition(time-100);
    }

}



/* Author: zyt
 * Name: on_systemTrayModeBtn_clicked
 * Function: 使播放器转变为托盘模式
 */
void TMZPlayer::on_systemTrayModeBtn_clicked()
{
    this->setVisible(false);
    
    
    //清空qss
    
    changeBackGround(":/new/prefix1/myQss/style4.qss");
    
    sysTrayIcon->show();
    
}

/* Author: zyt
 * Name: on_activatedSysTrayIcon
 * Function: 实现托盘的左键/双击/右键对应操作
 * Parameters: reason:操作名（单击/双击/右键)
 */
void TMZPlayer::on_activatedSysTrayIcon(QSystemTrayIcon::ActivationReason reason)
{
    switch (reason) {
    case QSystemTrayIcon::Trigger:
        break;
    case QSystemTrayIcon::DoubleClick:
        this->show();
        break;
    case QSystemTrayIcon::Unknown:
        break;
    case QSystemTrayIcon::Context:
        break;
    case QSystemTrayIcon::MiddleClick:
        break;
    }
}

/* Author: zyt
 * Name: on_showMainAction
 * Function: 槽：托盘菜单显示主界面的实现
 */
void TMZPlayer::on_showMainAction()
{
    changeBackGround(currentQss);
    this->show();
}

/* Author: zyt
 * Name: on_playOrPauseAction
 * Function: 槽：托盘菜单中播放/暂停键的切换
 */
void TMZPlayer::on_playOrPauseAction()
{
    if(!isPlaying)
    {
        playOrPauseAction->setText(QStringLiteral("播放"));
        playOrPauseAction->setIcon(QIcon(":/image/image/play.png"));
    }
    else if(isPlaying)
    {
        playOrPauseAction->setText(QStringLiteral("暂停"));
        playOrPauseAction->setIcon(QIcon(":/image/image/pause.jpg"));
    }
    isPlaying = !isPlaying;
}

/* Author: zyt
 * Name: on_displayMode_maxAction
 * Function: 槽，显示主界面
 */
void TMZPlayer::on_displayMode_maxAction()
{
    changeBackGround(currentQss);
    this->show();
    mini->hide();
}

/* Author: zyt
 * Name: on_displayMode_miniAction
 * Function: 槽，以mini模式显示
 */
void TMZPlayer::on_displayMode_miniAction()
{
    this->hide();
    changeBackGround(":/new/prefix1/myQss/style4.qss");
    on_miniMode_clicked();
}

void TMZPlayer::on_displayMode_trayAction()
{
    this->hide();
    mini->hide();
}
/* Author: zyt
 * Name: on_exitAction
 * Function: 槽：退出播放器
 */
void TMZPlayer::on_exitAction()
{
    exit(0);
}


/* Author: zyt
 * Name: on_miniMode_clicked
 * Function: 槽：使播放器以mini模式显示
 */
void TMZPlayer::on_miniMode_clicked()
{
    this->hide();
    changeBackGround(":/new/prefix1/myQss/style4.qss");
    mini->show();
}

/* Author: zyt
 * Name: miniToMaxSlot
 * Function: 槽：mini->窗口模式
 */
void TMZPlayer::miniToMaxSlot()
{
    mini->hide();
    this->show();
    space->show();
    changeBackGround(currentQss);
}

/* Author: zyt
 * Name: miniToTraySlot
 * Function: 槽：mini->托盘模式
 */
void TMZPlayer::miniToTraySlot()
{
    mini->hide();
    on_systemTrayModeBtn_clicked();
}

/**
* @method        TMZPlayer::changeBackGround
* @brief         修改主界面背景 设置界面三个button分别emit传QString
* @param         VOID
* @return        VOID
* @author        涂晴昊
* @date          2019-08-26
*/
void TMZPlayer::changeBackGround(QString back)
{
    if(back!=":/new/prefix1/myQss/style4.qss")
        currentQss=back;
    QFile qssfile(back);
    qssfile.open(QFile::ReadOnly);
    if(!qssfile.exists())
        qDebug() <<"no file";
    QString qss;
    qss = qssfile.readAll();
    this->setStyleSheet(qss);
    
}

/**
* @method        TMZPlayer::changePicBackGround
* @brief         修改自定义图片背景
* @param         STRING
* @return        VOID
* @author        涂晴昊
* @date          2019-08-29
*/
void TMZPlayer::changePicBackGround(QString back)
{
    this->setStyleSheet("QMainWindow{background-image:url("+back+");}"
                        +"QTableWidget{background-color:rgba(255,255,255,200);}"
                        +"QScrollArea #scrollArea{background-color:rgba(255,255,255,200);}");
    
}
void TMZPlayer::lastFunction()
{
    bool temp = this->media->playLast();
    if (temp)
    {
        MediaType currentMediaType = this->media->getCurrentMediaType();
        emit sendMediaType(currentMediaType);
    }
    else
        return;
}

void TMZPlayer::playFunction()//播放暂停
{
    if(media->getController()->getStatus()==QMediaPlayer::PlayingState)
    {
        media->getController()->pauseVideo();
    }
    else if(media->getController()->getStatus()==QMediaPlayer::PausedState)
    {
        media->getController()->restorePlay();
    }
    else
    {
        
    }
    emit whetherPlaying((media->getController()->getStatus()==QMediaPlayer::PlayingState));
}

void TMZPlayer::nextFunction()//下一个
{
    media->playNextByHand();
    MediaType currentMediaType = this->media->getCurrentMediaType();
    emit sendMediaType(currentMediaType);
}

void TMZPlayer::stopFunction()
{

}

void TMZPlayer::changeVolume(int vol)
{
    media->getController()->setVolume(vol);

}

void TMZPlayer::returnPosition()
{
    qDebug()<<media->getController()->getPosition();
    emit getPosition(media->getController()->getPosition());
}

/**
* @method        TMZPlayer::shotMyScreen
* @brief         截屏
* @param         VOID
* @return        VOID
* @author        涂晴昊
* @date          2019-09-09
*/
void TMZPlayer::shotMyScreen()
{

    QString picName="ShotByUther"+picTime->currentDateTime().toString("yyMMddhhmmss");
    media->getController()->cutScreen(space->winId(),picName,
                                      picPath,shotFormat);
    qDebug()<<picPath;
}

/**
* @method        TMZPlayer::recordMyScreen
* @brief         录屏
* @param         VOID
* @return        VOID
* @author        涂晴昊
* @date          2019-09-09
*/
void TMZPlayer::recordMyScreen()
{
    if(recordStatus){
        recordStatus=false;
        QString gifName="RecordByUther"+picTime->currentDateTime().toString("yyMMddhhmmss");
        media->startCreateGif(space->winId(),gifName,gifPath);
        recordTimer->start(timeLimit);
        qDebug()<<gifPath;
        qDebug()<<"start";
    }
    else if(!recordStatus&&!splitOrNot){
        media->endCreateGif();
        recordStatus=true;
        userEnd+=1;
        recordTimer->stop();
        qDebug()<<"end";
    }
    else if(!recordStatus&&userEnd%2==0)
    {
        media->endCreateGif();
        recordStatus=true;
        recordTimer->stop();
        qDebug()<<"User end";
    }
    else if(!recordStatus&&splitOrNot){
        media->endCreateGif();
        recordTimer->stop();
        QString gifName="RecordByUther"+picTime->currentDateTime().toString("yyMMddhhmmss");
        media->startCreateGif(space->winId(),gifName,gifPath);
        recordTimer->start(timeLimit);
        qDebug()<<"split";
    }
}


/**
* @method        TMZPlayer::changeShotFormat
* @brief         修改截屏格式
* @param         QSTRING
* @return        VOID
* @author        涂晴昊
* @date          2019-09-09
*/
void TMZPlayer::changeShotFormat(QString str)
{
    shotFormat=str;
}

/**
* @method        TMZPlayer::changeRecordSize
* @brief         修改录屏时长
* @param         INT
* @return        VOID
* @author        涂晴昊
* @date          2019-09-10
*/
void TMZPlayer::changeRecordSize(int i)
{
    timeLimit=i*1000;
}

/**
* @method        TMZPlayer::changeSplitStatus
* @brief         修改是否自动分割录屏状态
* @param         VOID
* @return        VOID
* @author        涂晴昊
* @date          2019-09-10
*/
void TMZPlayer::changeSplitStatus()
{
    splitOrNot=!splitOrNot;
    qDebug()<<splitOrNot;
}

/**
* @method        TMZPlayer::userEndRecord
* @brief         用户停止录屏
* @param         VOID
* @return        VOID
* @author        涂晴昊
* @date          2019-09-10
*/
void TMZPlayer::userEndRecord()
{
    userEnd+=1;
}

/**
* @method        TMZPlayer::changeLumin
* @brief         修改主界面亮度
* @param         INT
* @return        VOID
* @author        涂晴昊
* @date          2019-09-10
*/
void TMZPlayer::changeLumin(int i)
{
    space->setBrightness(i);
}


/* Author: zyt
 * Name: on_openFile_clicked
 * Function: 打开一个文件以播放
 */
void TMZPlayer::on_openFile_clicked()
{
    QFileDialog* selectDialog = new QFileDialog(this);
    selectDialog->setFileMode(QFileDialog::ExistingFile);
    selectDialog->setNameFilter("所有(*.mp3 *.flac *.wav *.wma *.m4a *.avi *.mov *.rmvb *.mp4);;"
                                "音乐文件(*.mp3 *.flac *.wav *.wma *.m4a);;"
                                "视频文件(*.avi *.mov *.rmvb *.mp4);;");
    selectDialog->setViewMode(QFileDialog::Detail);
    
    QStringList filePaths;
    if ( selectDialog->exec() == QDialog::Accepted )
    {
        filePaths = selectDialog->selectedFiles();
        QFileInfo info(filePaths.last());

        QString _fileName = info.fileName();
        QString _filePath = info.filePath();

        media->play(true, _fileName, _filePath);
        qint64 what = media->getController()->getDuration();
        emit durationSignal(static_cast<int>(what));

        MediaType currentMediaType = this->media->getCurrentMediaType();
        emit sendMediaType(currentMediaType);
        emit whetherPlaying(true);
    }
}

void TMZPlayer::closeEvent(QCloseEvent* event)
{
    this->media->closeSelf();
}

void TMZPlayer::sltResendPlayInfo(const PlayArea& playArea,
                                  const int& firstRank,
                                  const int& secondRank)
{
    this->media->play(playArea, firstRank, secondRank);
    qint64 what = media->getController()->getDuration();
    emit durationSignal(static_cast<int>(what));
    MediaType currentMediaType = this->media->getCurrentMediaType();
    emit sendMediaType(currentMediaType);
    this->flushHisUI();
}

void TMZPlayer::flushHisUI()
{
    QList<QStringList> whatsStrings = this->media->getHistories().get4Client();
    for (int i = 0; i < whatsStrings.length(); ++i)
        addHistory(whatsStrings[i][0], whatsStrings[i][1], i);
    for (int i = whatsStrings.length(); i < 12; ++i)
        addHistory("", "", i);
}


// 双击历史记录，发送该历史记录的文件地址
void TMZPlayer::givingHistoryAddressToPlay()
{
    history* temp_history = qobject_cast<history*>(sender());
    QString address = temp_history->getAddress();
    emit playFileAddress(address);
}

// 点击删除按钮，发送该删除的历史记录的文件地址
void TMZPlayer::givingHistoryAddressToDelete(QString)
{
    history* temp_history = qobject_cast<history*>(sender());
    QString address = temp_history->getAddress();
    emit deleteFileAddress(address);
}

void TMZPlayer::sltDelHistoricalContent(const int& _index)
{
    this->media->getHistories().removeContent(_index);
    this->flushHisUI();
}

/* Author: zyt
 * Name: addHistory
 * Function: 增加新的一条历史记录
 */
void TMZPlayer::addHistory(QString _name, QString _address, int where)
{
    this->historyContainer[where]->setNameAndAddress(
        _name, _address
    );
}

void TMZPlayer::zinit()
{
    historyLayout = new QBoxLayout(QBoxLayout::BottomToTop);
      historyLayout->setAlignment(Qt::AlignTop);

      ui->rightsideBar->setLayout(historyLayout);
      ui->historyList->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

      // 初始化历史纪录,12个
      for(int i = 0; i < 12; i++)
        {
          history* tempHistory = new history(nullptr, i);
          historyContainer.append(tempHistory);
          tempHistory->setNameAndAddress("", "");
          connect(tempHistory,SIGNAL(historyDoubleClicked()),
                  this,SLOT(givingHistoryAddressToPlay()));
          connect(tempHistory,SIGNAL(deleteHistorySignal(QString)),
                  this,SLOT(givingHistoryAddressToDelete(QString)));
          connect(tempHistory,
                  SIGNAL(sigPlayHistoricalContent(const PlayArea&, const int&, const int&)),
                  this,
                  SLOT(sltResendPlayInfo(const PlayArea&, const int&, const int&)));
          connect(tempHistory,
                  SIGNAL(sigDeleteHistoricalContent(const int&)),
                  this,
                  SLOT(sltDelHistoricalContent(const int&)));
        }
      for(int i = 11; i >= 0; --i)
        {
          historyLayout->addWidget(historyContainer.at(i));
        }

      connect(ui->displayList,
              SIGNAL(sendTempPlayInfo(const PlayArea&,const int&, const int&)),
              this->media,
              SLOT(play(const PlayArea&, const int&, const int&)));


      QStringList oldFolders = this->media->getFolders().getFolderNames();
      QList<QStringList> oldFiles = this->media->getFolders().getFolderFilePaths();

      for(int i = 0; i< oldFolders.length(); i++)
        {
          playlistsContainer.append(new mergedPlaylist);
          playlistsContainer.last()->setListName(oldFolders.at(i));
          playlistsContainer.last()->setFileInList(oldFiles.at(i));
          playlistsContainer.last()->showOldContents();

          listBoxLayout->addWidget(playlistsContainer.at(playlistsContainer.length() - 1));

          connect(playlistsContainer.at(playlistsContainer.length() - 1),
                  SIGNAL(givingTempSNAndFiles(int, QList<QString>)),
                  ui->displayList,
                  SLOT(recevingSNAndFiles(int, QList<QString>)));

          connect(ui->displayList,
                  SIGNAL(changeFilesInListSignal(int, QList<QString>)),
                  playlistsContainer.at(playlistsContainer.length() - 1),
                  SLOT(changeFilesInListSlot(int, QList<QString>)));

          connect(playlistsContainer.at(playlistsContainer.length() - 1),
                  SIGNAL(showChangedListSignal(int, QList<QString>)),
                  ui->displayList,
                  SLOT(showChangedListSlot(int, QList<QString>)));

          connect(playlistsContainer.at(playlistsContainer.length() - 1),
                  SIGNAL(givingListName(QString)),
                  this,
                  SLOT(receivingListName(QString)));

          connect(playlistsContainer.at(playlistsContainer.length() - 1),
                  SIGNAL(hideContentsExceptThisSignal(int)),
                  this,
                  SLOT(hideContentsExceptThisSlot(int)));

          connect(playlistsContainer.at(playlistsContainer.length() - 1),
                  SIGNAL(allowDragAndMenuSignal()),
                  this,
                  SLOT(allowDragAndMenuSlot()));

          // 收藏夹改名
          connect(
                playlistsContainer.at(playlistsContainer.length() - 1),
                SIGNAL(sendFolderName(int,QString)),
                &this->media->getFolders(),
                SLOT(renameFolder(int, QString))
                );

          // 向收藏夹中添加内容
          connect(playlistsContainer.at(playlistsContainer.length() - 1),
                  SIGNAL(sendAddFileToFolder(const int&, const QString& ,const QString&, const bool&)),
                  &this->media->getFolders(),
                  SLOT(addContent2Folder(const int&, const QString&,
                                         const QString&, const bool&)));

          // 在左边的连接
          connect(playlistsContainer.at(playlistsContainer.length() - 1),
                  SIGNAL(sendPlayInfo(const PlayArea&,const int&, const int&)),
                  this,
                  SLOT(sltResendPlayInfo(const PlayArea&, const int&, const int&)));

          connect(playlistsContainer.at(playlistsContainer.length() - 1),
                  SIGNAL(removeContent(int,int)),
                  &this->media->getFolders(),
                  SLOT(removeContentFromFolder(int, int)));
        }


      this->flushHisUI();
}

void TMZPlayer::moveZHisText2First(const int& fromIndex)
{
    history* tHistory = this->historyContainer.at(fromIndex);
    for (int i = this->historyContainer.length() - 1; i > 0; --i)
        this->historyContainer[i] = this->historyContainer[i - 1];
    this->historyContainer[0] = tHistory;
}



