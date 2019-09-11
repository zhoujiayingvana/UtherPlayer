#ifndef MEDIAWIDGET_H
#define MEDIAWIDGET_H

#include <QVideoWidget>
#include <QDebug>
#include <QTimer>

class MediaWidget : public QVideoWidget
{
    Q_OBJECT
public:
    explicit MediaWidget(QWidget *parent = nullptr);

signals:
    void full_screenButton_clicked();
    void bottomBarHide();
    void volumeWidgetHide();
    void bottomBarShow();
    void wheelMoved(QWheelEvent *);
    void mousePress();

public slots:
    void hideBottomBar();
    void mediaLuminAdd();//亮度增
    void mediaLuminSub();//亮度减

protected:
    virtual void mousePressEvent(QMouseEvent *event);//单击发射信号暂停或播放
    virtual void mouseDoubleClickEvent(QMouseEvent *event);//双击全屏
    virtual void mouseMoveEvent(QMouseEvent *event);//鼠标移动显示底部、侧边栏、箭头
    virtual void enterEvent(QEvent *event);//鼠标进入计时器启动
    virtual void leaveEvent(QEvent *event);//鼠标进入计时器停止
    virtual void wheelEvent(QWheelEvent *event);//滚轮调节音量

private:
   QTimer *timer;
};

#endif // MEDIAWIDGET_H
