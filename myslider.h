#ifndef MYSLIDER_H
#define MYSLIDER_H
#include <QObject>
#include<QSlider>

class MySlider : public QSlider
{
    Q_OBJECT
public:
    MySlider(QWidget *parent = nullptr);
    ~MySlider();
signals:
    void timerStop();
    void timerStart();
protected:
    void mousePressEvent(QMouseEvent *event);//点击时重设value至点击位置并使计时器停止
    void mouseReleaseEvent(QMouseEvent *event);//松开后计时器启动
    void wheelEvent(QWheelEvent *event);//滚轮改变value

};

#endif // MYSLIDER_H
