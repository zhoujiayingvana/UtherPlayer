#include "mediawidget.h"

MediaWidget::MediaWidget(QWidget *parent) : QVideoWidget(parent)
{

    this->setCursor(Qt::PointingHandCursor);
    this->setMouseTracking(true);
    timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(hideBottomBar()));

}

void MediaWidget::hideBottomBar()
{
    setCursor(Qt::BlankCursor);
    if(this->window()->isFullScreen())
    {
        emit bottomBarHide();
    }
    else
    {

    }
    emit volumeWidgetHide();

}

/**
* @method        MediaWidget::mediaLuminAdd
* @brief         亮度增
* @param         VOID
* @return        VOID
* @author        涂晴昊
* @date          2019-09-10
*/
void MediaWidget::mediaLuminAdd()
{
    setBrightness(brightness()+5);
}

/**
* @method        MediaWidget::mediaLuminSub
* @brief         亮度减
* @param         VOID
* @return        VOID
* @author        涂晴昊
* @date          2019-09-10
*/
void MediaWidget::mediaLuminSub()
{
    setBrightness(brightness()-5);
}

void MediaWidget::mousePressEvent(QMouseEvent *event)
{
    Q_UNUSED(event);
    emit mousePress();
}

void MediaWidget::mouseDoubleClickEvent(QMouseEvent *event)
{

    Q_UNUSED(event);
    emit full_screenButton_clicked();
    emit mousePress();
}

void MediaWidget::mouseMoveEvent(QMouseEvent *event)
{
    Q_UNUSED(event);
    setCursor(Qt::PointingHandCursor);


    if(this->window()->isFullScreen())
    {
        emit bottomBarShow();
    }
    else
    {

    }

    timer->start(1000);


}

void MediaWidget::enterEvent(QEvent *event)
{
    Q_UNUSED(event);
    timer->start(1000);
}

void MediaWidget::leaveEvent(QEvent *event)
{
    Q_UNUSED(event);
    timer->stop();
}

void MediaWidget::wheelEvent(QWheelEvent *event)
{
    emit wheelMoved(event);
    if(this->window()->isFullScreen())
    {
        emit bottomBarShow();
    }
    else
    {

    }

    timer->start(1000);

}
