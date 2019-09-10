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
public slots:
    void hideBottomBar();
    void mediaLuminAdd();//亮度增
    void mediaLuminSub();//亮度减

protected:
    virtual void mouseDoubleClickEvent(QMouseEvent *event);
    virtual void mouseMoveEvent(QMouseEvent *event);
    virtual void enterEvent(QEvent *event);
    virtual void leaveEvent(QEvent *event);
    virtual void wheelEvent(QWheelEvent *event);

private:
   QTimer *timer;
};

#endif // MEDIAWIDGET_H
