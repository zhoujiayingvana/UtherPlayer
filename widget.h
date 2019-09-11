#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QDebug>

/*
 *Author:LY
 *Function:实现悬浮窗
 */

class Widget : public QWidget
{
    Q_OBJECT
public:
    explicit Widget(QWidget *parent = nullptr);
    ~Widget();

protected:
    virtual void leaveEvent(QEvent *event);//鼠标离开时悬浮窗隐藏



signals:


public slots:
    void display(int, int);
private:
    QWidget *pParent;



};

#endif // WIDGET_H
