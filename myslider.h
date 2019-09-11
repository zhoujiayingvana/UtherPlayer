#ifndef MYSLIDER_H
#define MYSLIDER_H
#include <QObject>
#include<QSlider>

class MySlider : public QSlider
{
    Q_OBJECT
signals:
    void timerStop();
    void timerStart();

public:
    MySlider(QWidget *parent = nullptr);
    ~MySlider();
protected:
    void mousePressEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);
    void wheelEvent(QWheelEvent *event);

};

#endif // MYSLIDER_H
