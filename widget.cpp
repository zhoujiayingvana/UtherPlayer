#include "widget.h"

/*
 *Author:LY
 *Function:实现悬浮窗
 */

Widget::Widget(QWidget *parent) : QWidget(parent)
{
    pParent=parent;
    this->setAttribute(Qt::WA_StyledBackground);
}

Widget::~Widget()
{

}



void Widget::leaveEvent(QEvent *event)//鼠标离开时悬浮窗隐藏
{
    Q_UNUSED(event);
    hide();
}





void Widget::display(int x,int y)//接收信号时悬浮窗出现在合适位置
{
    if(this->window()->isFullScreen())
    {
        setGeometry(x+20-this->width()/2,pParent->height()-80+y-this->height(),geometry().width(),geometry().height());
    }
    else
    {
        setGeometry(x+25-this->width()/2,pParent->height()-80+y-this->height(),geometry().width(),geometry().height());
    }
    show();


}
