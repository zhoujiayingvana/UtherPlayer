#include "util/controller.h"
#include <QDebug>

/**
* @method        Controller::Controller
* @brief         构造函数
* @param         QWIDGET
* @return        NULL
* @author        周嘉莹
* @date          2019.09.11 
*/
Controller::Controller(QWidget *parent) : QWidget(parent)
{
    //设置播放状态为停止
    this->m_CtrlPlayState=QMediaPlayer::StoppedState;
    this->m_CtrlDuration=0;
    this->m_CtrlCurrentPosition=0;
    this->m_CutScreenFile=nullptr;
}

/**
* @method        Controller::~Controller
* @brief         析构函数
* @param         VOID
* @return        NULL
* @author        周嘉莹
* @date          2019.09.11 
*/
Controller::~Controller()
{
    
}

/**
* @method        Controller::terminateVideo
* @brief         停止播放视频
* @param         VOID
* @return        VOID
* @author        周嘉莹
* @date          2019.09.11 
*/
void Controller::terminateVideo()
{
    emit this->needTerminateVideo();
}

/**
* @method        Controller::seekPosition
* @brief         视频跳转到指定位置
* @param         QINT64
* @return        VOID
* @author        周嘉莹
* @date          2019.09.11 
*/
void Controller::seekPosition(qint64 pos)
{   
    qint64 tempPos;
    //跳转到视频结尾
    if(pos>this->getDuration()){
        tempPos=this->getDuration();
    }
    //跳转到视频开头
    else if(pos<0){
        tempPos=0;
    }
    else{
        tempPos=pos;
    }
    emit this->needSeekPosition(tempPos);
}

/**
* @method        Controller::setVolume
* @brief         调节音量
* @param         INT
* @return        VOID
* @author        周嘉莹
* @date          2019.09.11 
*/
void Controller::setVolume(int vol)
{
    int tempVol;
    //音量大于100
    if(vol>100){
        tempVol=100;
    }
    //音量小于0
    else if(vol<0){
        tempVol=0;
    }
    else {
        tempVol=vol;
    }
    emit this->needSetVolume(tempVol);
}

/**
* @method        Controller::setMuted
* @brief         设置静音
* @param         BOOL
* @return        VOID
* @author        周嘉莹
* @date          2019.09.11 
*/
void Controller::setMuted(bool m)
{
    emit this->needSetMuted(m);
}

/**
* @method        Controller::jump
* @brief         视频快进
* @param         INT
* @return        VOID
* @author        周嘉莹
* @date          2019.09.11 
*/
void Controller::jump(int second)
{
    qint64 tempPos=this->getPosition();
    
    //跳转到视频结尾
    if(tempPos+second*1000>this->getDuration()){
        emit this->needSeekPosition(this->getDuration());
    }
    //跳转到视频开头
    else if(tempPos+second*1000<0){
        emit this->needSeekPosition(0);
    }
    else {
        emit this->needJump(second);
    }

}

/**
* @method        Controller::setPlaybackRate
* @brief         倍速播放
* @param         QREAL
* @return        VOID
* @author        周嘉莹
* @date          2019.09.11 
*/
void Controller::setPlaybackRate(qreal rate)
{
    emit needSetPlaybackRate(rate);
}

/**
* @method        Controller::cutScreen
* @brief         截屏功能
* @param         WID, QSTRING, QSTRING, QSTRING, INT
* @return        QSTRING
* @author        周嘉莹
* @date          2019.09.11 
*/
QString Controller::cutScreen(WId wId, QString fileName,QString filePath,QString fmt, int qua)
{
    emit needCutScreen(wId,fileName,filePath,fmt,qua);
    //判断是否为空指针
    if(this->m_CutScreenFile==nullptr){
        qDebug()<<"Controller cutScreen() "<<Debug::getDebugErrorType(Debug::NULLPTR_ERROR);
        return nullptr;
    }
    //判断文件是否生成
    else if(!Debug::isFileExits(this->m_CutScreenFile)){
        qDebug()<<"Controller cutScreen()"<<Debug::getDebugErrorType((Debug::FILE_EXIT_ERROR));
        return nullptr;
    }
    return this->m_CutScreenFile;
}

/**
* @method        Controller::setOrder
* @brief         设置播放顺序
* @param         PLAYORDER
* @return        VOID
* @author        周嘉莹
* @date          2019.09.11 
*/
void Controller::setOrder(PlayOrder order)
{
    emit needSetOrder(order);
}

/**
* @method        Controller::getOrder
* @brief         获取播放顺序
* @param         VOID
* @return        PLAYORDER
* @author        周嘉莹
* @date          2019.09.11 
*/
PlayOrder Controller::getOrder()
{
    emit needGetOrder();
    return this->m_order;
}

/**
* @method        Controller::receivePosition
* @brief         槽函数，接收Player的当前播放位置
* @param         QINT64
* @return        VOID
* @author        周嘉莹
* @date          2019.09.11 
*/
void Controller::receivePosition(qint64 pos)
{
    this->m_CtrlCurrentPosition=pos;
}

/**
* @method        Controller::receiveDuration
* @brief         槽函数，接收Player的当前视频时长
* @param         QINT64
* @return        VOID
* @author        周嘉莹
* @date          2019.09.11 
*/
void Controller::receiveDuration(qint64 dur)
{
    this->m_CtrlDuration=dur;
    
}

/**
* @method        Controller::receiveInitDuration
* @brief         接收player的初始化时长，解决视频播放开始时duration为0的问题
* @param         QINT64
* @return        VOID
* @author        周嘉莹
* @date          2019.09.11 
*/
void Controller::receiveInitDuration(qint64 dur)
{
    this->m_CtrlDuration=dur;
    emit returnInitDuration(dur);
}

/**
* @method        Controller::receiveStatus
* @brief         接收player的当前视频播放状态
* @param         QMEDIAPLAYER::STATE
* @return        VOID
* @author        周嘉莹
* @date          2019.09.11 
*/
void Controller::receiveStatus(QMediaPlayer::State stus)
{
    this->m_CtrlPlayState=stus;
}

/**
* @method        Controller::receiveScreenCut
* @brief         接收player截图后的文件路径
* @param         QSTRING
* @return        VOID
* @author        周嘉莹
* @date          2019.09.11 
*/
void Controller::receiveScreenCut(QString fileName)
{
    this->m_CutScreenFile=fileName;
}

/**
* @method        Controller::receiveOrder
* @brief         接收player的播放顺序
* @param         VOID
* @return        VOID
* @author        周嘉莹
* @date          2019.09.11 
*/
void Controller::receiveOrder(PlayOrder order)
{
    this->m_order=order;
}

/**
* @method        Controller::getDuratio
* @brief         获取当前视频时长
* @param         VOID
* @return        QINT64
* @author        周嘉莹
* @date          2019.09.11 
*/
qint64 Controller::getDuration()
{
    emit needGetDuration();
    //等待player发送信号
    return this->m_CtrlDuration;
}

/**
* @method        Controller::getPosition
* @brief         获取当前视频位置
* @param         VOID
* @return        QINT64
* @author        周嘉莹
* @date          2019.09.11 
*/
qint64 Controller::getPosition()
{
    emit needGetPosition();
    return this->m_CtrlCurrentPosition;
}

/**
* @method        Controller::getStatus
* @brief         获取当前视频状态
* @param         VOID
* @return        QMediaPlayer::State
* @author        周嘉莹
* @date          2019.09.11 
*/
QMediaPlayer::State Controller::getStatus()
{
    emit needGetStatus();
    return this->m_CtrlPlayState;
}

/**
* @method        Controller::restorePlay
* @brief         恢复播放，对应暂停播放
* @param         VOID
* @return        VOID
* @author        周嘉莹
* @date          2019.09.11 
*/
void Controller::restorePlay()
{
    if(this->getStatus()!=QMediaPlayer::StoppedState){
        emit this->needRestorePlay();        
    }

}

/**
* @method        Controller::pauseVideo
* @brief         暂停视频，对应恢复播放
* @param         VOID
* @return        VOID
* @author        周嘉莹
* @date          2019.09.11 
*/
void Controller::pauseVideo()
{
    if(this->getStatus()!=QMediaPlayer::StoppedState){
        emit this->needPauseVideo();       
    }

}
