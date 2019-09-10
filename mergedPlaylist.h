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


private:
  playlistBtn* listBtn;
  playList* listContent;
  QList<QString> filesInList;

  static int serialNumber;
  int SN;
};

#endif // MERGEDPLAYLIST_H
