#ifndef MERGEDPLAYLIST_H
#define MERGEDPLAYLIST_H

#include "playlist.h"
#include "playlistbtn.h"

#include <QWidget>
#include <QHeaderView>

class mergedPlaylist : public QWidget
{
  Q_OBJECT
public:
  explicit mergedPlaylist(QWidget *parent = nullptr);
  int getSN();
  QString getListName();
  void setListName(QString);
  void setFileInList(QList<QString>);
  void showOldContents();

signals:
  void sendDirSignal(QDir);
  void givingTempSNAndFiles(int,QList<QString>);
  void showChangedListSignal(int,QList<QString>);
  void givingListName(QString);
  void hideContentsExceptThisSignal(int);
  void hideContentSignal();
  void allowDragAndMenuSignal();

  void deleteList(int);

  //发送修改了那个收藏夹的那个名字
  void sendFolderName(int,QString);

  //发送在哪个文件夹添加了哪个文件
  void sendAddFileToFolder(const int&, const QString& ,const QString&, const bool&);

  //发送播放信号
  void sendPlayInfo(const PlayArea&,const int&, const int&);

  //发送删除信号
  void removeContent(int,int);

public slots:
  void showOrHideListContentSlot(bool);
  void hideOtherContentsSlot(int);
  void recevingTempSN(int);
  void changeFilesInListSlot(int currentSN,QList<QString> temp_filesInList);
  void leftBarListFilesChangeSlot(int,QList<QString>);
  void wantingNameSlot(QString);
  void hideContentSlot();
  void deleteListRequestAnswering();
  void sendTempFolderName(int,QString);

  void temp_addFileToFolderSlot(const int&, const QString&, const QString&, const bool&);
  void getTempPlayInfo(const PlayArea&,const int&, const int&);

  void temp_removeContentSlot(int,int);

  void deleteFilesInListSlot(int,QList<QString>);

private:
  playlistBtn* listBtn;
  playList* listContent;
  QList<QString> filesInList;

  static int serialNumber;
  int SN;
};

#endif // MERGEDPLAYLIST_H
