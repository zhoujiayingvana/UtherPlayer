#ifndef HISTORY_H
#define HISTORY_H

#include <QTimer>
#include <QLabel>
#include <QEvent>
#include <QDebug>
#include <QEvent>
#include <QWidget>
#include <QPalette>
#include <QPushButton>
#include <QPushButton>
#include <QGridLayout>
#include <QMouseEvent>

class history : public QWidget
{
  Q_OBJECT
public:
  explicit history(QWidget *parent = nullptr);
  void setNameAndAddress(QString,QString);
  QString getName();
  QString getAddress();

signals:
  void doubleClickedSignal();
  void historyDoubleClicked();

public slots:
  void deleteHistory();
  void playHistory();

protected:
  void enterEvent(QEvent*);
  void leaveEvent(QEvent*);
  void mouseDoubleClickEvent(QMouseEvent*);

private:
  QLabel *NameLabel;
  QLabel *AddressLabel;
  QString name;
  QString address;
  QPushButton *deleteBtn;
  QPalette original_backgroundPalette;
  QPalette active_backgroundPalette;

  bool doubleClicked;
  QTimer* singleClickedTimer;
};

#endif // HISTORY_H
