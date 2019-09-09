#include "history.h"

history::history(QWidget *parent) : QWidget(parent)
{
  this->setFixedSize(221, 57);

  this->setFocusPolicy(Qt::NoFocus);
  this->setMouseTracking(true);

  NameLabel = new QLabel(this);
  NameLabel->setObjectName(QString::fromUtf8("NameLabel"));
  NameLabel->setGeometry(QRect(0, 0, 221, 31));
  NameLabel->setText("歌曲名字");
  NameLabel->setToolTip(NameLabel->text());

  QFont font;
  font.setFamily(QString::fromUtf8("宋体"));
  font.setPointSize(11);

  NameLabel->setFont(font);
  AddressLabel = new QLabel(this);
  AddressLabel->setObjectName(QString::fromUtf8("AddressLabel"));
  AddressLabel->setGeometry(QRect(0, 31, 221, 21));
  AddressLabel->setText("歌曲地址");
  AddressLabel->setToolTip(AddressLabel->text());

  deleteBtn = new QPushButton(this);
  deleteBtn->setObjectName(QString::fromUtf8("deleteBtn"));
  deleteBtn->setGeometry(QRect(190, 8, 20, 20));
  QIcon icon;
  icon.addFile(QString::fromUtf8(":/image/image/btn_delete_n.png"), QSize(), QIcon::Normal, QIcon::Off);
  deleteBtn->setIcon(icon);
  deleteBtn->setFlat(true);
  deleteBtn->setVisible(false);
  deleteBtn->setCursor(Qt::PointingHandCursor);

  original_backgroundPalette = this->palette();
  active_backgroundPalette = QPalette(QPalette::Background, QColor(221,246,255));
  this->setAutoFillBackground(true);

  doubleClicked = false;
  singleClickedTimer = new QTimer(this);

  connect(deleteBtn,SIGNAL(clicked()),this,SLOT(deleteHistory()));
  connect(this,SIGNAL(doubleClickedSignal()),this,SLOT(playHistory()));
}


/* Author: zyt
 * Name: setAddress
 * Function: 设置该历史记录的文件位置，文件名，显示内容
 */
void history::setNameAndAddress(QString _name, QString _address)
{
  name = _name;
  address = _address;
  this->NameLabel->setText(name);
  this->AddressLabel->setText(address);
}

QString history::getName()
{
  return name;
}

QString history::getAddress()
{
  return address;
}

/* Author: zyt
 * Name: deleteHistory
 * Function: 槽：删除该历史纪录
 */
void history::deleteHistory()
{
  delete this;
}

/* Author: zyt
 * Name: playHistory
 * Function: 播放当前历史纪录
 */
void history::playHistory()
{
  emit historyDoubleClicked();  // 传递给TMZPlayer
}

/* Author: zyt
 * Name: enterEvent
 * Function: 鼠标进入才显示删除按钮，修改背景颜色
 */
void history::enterEvent(QEvent *event)
{
  Q_UNUSED(event);
  deleteBtn->setVisible(true);
  this->setPalette(active_backgroundPalette);

}

/* Author: zyt
 * Name: leaveEvent
 * Function: 鼠标离开隐藏删除按钮，还原背景颜色
 */
void history::leaveEvent(QEvent *event)
{
  Q_UNUSED(event);
  deleteBtn->setVisible(false);
  this->setPalette(original_backgroundPalette);
}

/* Author: zyt
 * Name: mouseDoubleClickEvent
 * Function: 传递双击信号
 */
void history::mouseDoubleClickEvent(QMouseEvent *event)
{
  if(event->button() == Qt::LeftButton) {
      emit doubleClickedSignal();
    }
}

