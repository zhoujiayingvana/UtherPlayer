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
    void mousePressEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);
    void wheelEvent(QWheelEvent *event);

};

#endif // MYSLIDER_H
