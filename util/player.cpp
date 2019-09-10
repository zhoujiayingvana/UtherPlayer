#include "util/player.h"

/**
* @method        Player::Player
* @brief         构造函数
* @param         QWIDGET
* @return        VOID
* @author        周嘉莹
* @date          2019.09.11 
*/
Player::Player(QWidget *parent) : QWidget(parent)
{
    //初始化
    this->m_Player=new QMediaPlayer(this);
    this->m_PlayState=QMediaPlayer::StoppedState;
    qDebug()<<this->m_Player->state();
    this->m_Duration=0;
    this->m_CurrentPosition=0;
    //槽函数
    connect(this->m_Player,SIGNAL(durationChanged(qint64)),this,SLOT(needGetInitDuration()));
}

/**
* @method        Player::~Player
* @brief         析构函数
* @param         VOID
* @return        VOID
* @author        周嘉莹
* @date          2019.09.11 
*/
Player::~Player(){
    if(this->m_Player){
        delete this->m_Player;
    }
}

/**
* @method        Player::getPlayWindow
* @brief         获取视频播放窗口
* @param         VOID
* @return        QMediaPlayer*
* @author        周嘉莹
* @date          2019.09.11 
*/
QMediaPlayer* Player::getPlayWindow()
{
    return this->m_Player;
}

/**
* @method        Player::getDuration
* @brief         获取当前视频总时长，打开视频时duration为0，请不要使用
* @param         VOID
* @return        QINT64
* @author        周嘉莹
* @date          2019.09.11 
*/
qint64 Player::getDuration()
{
    return this->m_Duration;
}

/**
* @method        Player::getPlayer
* @brief         获取QMediaPlayer
* @param         VOID
* @return        QMediaPlayer*
* @author        周嘉莹
* @date          2019.09.11 
*/
QMediaPlayer* Player::getPlayer()
{
    return this->m_Player;
}

/**
* @method        Player::needPlay
* @brief         播放视频
* @param         QMediaContent *
* @return        VOID
* @author        周嘉莹
* @date          2019.09.11 
*/
void Player::needPlay(QMediaContent *content)
{
    this->m_Player->setMedia(*content);

    this->m_Player->play();
    this->needGetDuration();
    this->needGetPosition();
    this->needGetStatus();

    if(this->m_Player->mediaStatus()==QMediaPlayer::InvalidMedia){
        qDebug()<<"Player needPlay()"<<" Media cannot play error";
                return;
    }
    this->m_Player->play();
    this->needGetPosition();
    this->needGetStatus();
    this->needGetDuration();
}

/**
* @method        Player::needGetDuration
* @brief         获取当前视频总时长，打开视频时duration为0，请不要使用
* @param         VOID
* @return        VOID
* @author        周嘉莹
* @date          2019.09.11 
*/
void Player::needGetDuration()
{
    //等待播放视频前duration change
    //或者播放过程中
    this->m_Duration=this->m_Player->duration();
    emit returnDuration(this->m_Duration);

    qDebug()<<"needGetDuration() "<<this->m_Duration;
}

/**
* @method        Player::needGetInitDuration
* @brief         打开视频时获取当前视频总时长，打开视频时请使用此函数
* @param         VOID
* @return        VOID
* @author        周嘉莹
* @date          2019.09.11 
*/
void Player::needGetInitDuration()
{
    this->m_Duration=this->m_Player->duration();
    emit returnInitDuration(m_Duration);

}

/**
* @method        Player::needGetPosition
* @brief         获取视频当前位置
* @param         VOID
* @return        VOID
* @author        周嘉莹
* @date          2019.09.11 
*/
void Player::needGetPosition()
{
    this->m_CurrentPosition=this->m_Player->position();
    emit returnPosition(this->m_CurrentPosition);
}

/**
* @method        Player::needGetStatus
* @brief         获取视频状态
* @param         VOID
* @return        VOID
* @author        周嘉莹
* @date          2019.09.11 
*/
void Player::needGetStatus()
{
    this->m_PlayState=this->m_Player->state();
    emit returnStatus(this->m_PlayState);
}

/**
* @method        Player::needRestorePlay
* @brief         恢复播放
* @param         VOID
* @return        VOID
* @author        周嘉莹
* @date          2019.09.11 
*/
void Player::needRestorePlay()
{
    this->m_Player->play();
}

/**
* @method        Player::needPauseVideo
* @brief         暂停播放
* @param         VOID
* @return        VOID
* @author        周嘉莹
* @date          2019.09.11 
*/
void Player::needPauseVideo()
{
    this->m_Player->pause();
}


/**
* @method        Player::needTerminateVideo
* @brief         停止播放，并记录当前位置
* @param         VOID
* @return        QINT64
* @author        周嘉莹
* @date          2019.09.11 
*/
qint64 Player::needTerminateVideo()
{
    // 记录当前播放的位置
    this->m_CurrentPosition=this->m_Player->position();
    // 如果播放完毕，则设为0
    if(this->m_CurrentPosition==this->m_Duration){
        this->m_CurrentPosition=0;
    }
    // 停止播放
    this->m_Player->stop();
    // 向media发送播放位置
    return this->m_CurrentPosition;
}


/**
* @method        Player::needJump
* @brief         快进
* @param         INT
* @return        VOID
* @author        周嘉莹
* @date          2019.09.11 
*/
void Player::needJump(int second)
{
    qint64 currentPosition=this->m_Player->position();
    this->m_Player->setPosition(currentPosition+second*1000);
}

/**
* @method        Player::needSetPosition
* @brief         跳转播放
* @param         QINT64
* @return        VOID
* @author        周嘉莹
* @date          2019.09.11 
*/
void Player::needSetPosition(qint64 pos)
{
    //controller中判断是否超过视频开头或结尾
    this->m_Player->setPosition(pos);
}

/**
* @method        Player::needSetMuted
* @brief         设置静音
* @param         BOOL
* @return        VOID
* @author        周嘉莹
* @date          2019.09.11 
*/
void Player::needSetMuted(bool m)
{
    this->m_Player->setMuted(m);
}

/**
* @method        Player::needSetVolume
* @brief         设置音量
* @param         INT
* @return        VOID
* @author        周嘉莹
* @date          2019.09.11 
*/
void Player::needSetVolume(int vol)
{
    this->m_Player->setVolume(vol);
}

/**
* @method        Player::needSetPlaybackRate
* @brief         设置播放速率
* @param         QREAL
* @return        VOID
* @author        周嘉莹
* @date          2019.09.11 
*/
void Player::needSetPlaybackRate(qreal rate)
{
    this->m_Player->setPlaybackRate(rate);
}

/**
* @method        Player::needCutScreen
* @brief         截图
* @param         WId，QSTRING，QSITRING，INT
* @return        VOID
* @author        周嘉莹
* @date          2019.09.11 
*/
void Player::needCutScreen(WId wId, QString fileName, QString filePath, QString fmt, int qua)
{
    QScreen *screen = QGuiApplication::primaryScreen();
    int quality=-1;
    QString format("jpg");
    //检查参数范围
    if(qua>=0&&qua<=100){
        quality=qua;
    }
    //检查图片格式是否合法
    if(Debug::isScresenCutFormatLegal(fmt)){
        format=fmt;
    }
    else{
        qDebug()<<"Player needCutScreen() "<<Debug::getDebugErrorType(Debug::MyErrors::SCREEN_CUT_FORMAT_ERROR);
        return;
        }
    if(!Debug::isFileDirExits(filePath)){
        qDebug()<<"Player needCutScreen() "<<Debug::getDebugErrorType(Debug::MyErrors::FILE_PATH_ERROR);
        return;
    }
    QString fullPath=filePath+"/"+fileName+"."+fmt;
    screen->grabWindow(wId).save(fullPath,Debug::QString2Char(fmt),quality);
    emit this->returnScreenCut(fullPath);
}

/**
* @method        Player::getPlayer
* @brief         获取播放模块
* @param         VOID
* @return        QMediaPlayer*
* @author        周嘉莹
* @date          2019.09.11 
*/
QMediaPlayer* Player::getPlayer() const
{
    return this->m_Player;
};
