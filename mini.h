#ifndef MINI_H
#define MINI_H

#include "myslider.h"
#include <QWidget>
#include <QPushButton>
#include "util/media.h"


namespace Ui {
  class Mini;
}

class Mini : public QWidget
{
  Q_OBJECT
  class clickableLabel;

public:
  explicit Mini(QWidget *parent = nullptr,Media *m=nullptr);
  ~Mini();

signals:
  void miniToMaxSignal();
  void closeSignal();
  void sendLastSignal();
  void sendNextSignal();
  void volumeChanged(int);
  void sendPlayOrPauseSignal();

protected:
  void mousePressEvent(QMouseEvent*);
  void mouseMoveEvent(QMouseEvent*);
  void mouseReleaseEvent(QMouseEvent*);
  void enterEvent(QEvent*);
  void leaveEvent(QEvent*);

public slots:

  void on_maxModeBtn_clicked();

  void on_closeBtn_clicked();

  void on_volumeBtn_clicked();

  void on_volumeSlider_valueChanged(int);

  void on_playOrPauseBtn_clicked();


  void changeVolume(int);//改变音量

  void changePlayOrPauseBtn(bool);

private slots:

  void on_lastSongBtn_clicked();

  void on_nextSongBtn_clicked();

private:
  Ui::Mini *ui;
  bool drag;
  MySlider *volumeSlider;
  QPoint mouseStartPos;
  QPoint windowStartPos;

  //播放模块
  Media* media;
};

#endif // MINI_H
