#include "widget.h"

Widget::Widget(QWidget *parent) : QWidget(parent)
{
    pParent=parent;
    this->setAttribute(Qt::WA_StyledBackground);
}

Widget::~Widget()
{

}



void Widget::leaveEvent(QEvent *event)
{
    Q_UNUSED(event);
    hide();
}





void Widget::display(int x,int y)
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
