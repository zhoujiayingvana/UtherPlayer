#ifndef TMZPLAYER_H
#define TMZPLAYER_H

#include "ui_tmzplayer.h"
#include "mini.h"
#include "titlebar.h"
#include "bottombar.h"
#include "mediawidget.h"
#include "history.h"
#include "mergedPlaylist.h"
#include "settingwindow.h"
#include "util/media.h"
#include "QVideoWidget"

#include <QIcon>
#include <QMenu>
#include <QWidget>
#include <QAction>
#include <QGroupBox>
#include <QListView>
#include <QDebug>
#include <QList>
#include <QLayout>
#include <QAction>
#include <QGroupBox>
#include <QMessageBox>
#include <QFileDialog>
#include <QScrollArea>
#include <QTableWidget>
#include <QSystemTrayIcon>
#include <QStringListModel>
#include <QStandardItemModel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QAbstractButton>
#include <QMainWindow>
#include <QMouseEvent>


namespace Ui {
class TMZPlayer;
}

class TMZPlayer : public QMainWindow
{
    Q_OBJECT

public:
    explicit TMZPlayer(QWidget *parent = nullptr, Media *m=nullptr);
    ~TMZPlayer();
    bool whetherInitializeListButton();

    //实现窗口缩放
    bool nativeEvent(const QByteArray &eventType, void *message, long *result);
    void creatActions();
    void creatMenu();
    QString getFileName(QString);
    void addHistory(QString _name, QString _address);

signals:
    void maximizeButton_clicked();
    void durationSignal(int);
    void sendMediaType(MediaType&);
    void whetherPlaying(bool);

private slots:
    void currentPosChanged(int);

    void fullScreenMode();

    void on_hideLeftBarBtn_clicked();

    void on_showLeftBarBtn_clicked();

    void on_hideRightBarBtn_clicked();

    void on_showRightBarBtn_clicked();

    void on_systemTrayModeBtn_clicked();

    void on_activatedSysTrayIcon(QSystemTrayIcon::ActivationReason);

    void on_showMainAction();

    void on_playOrPauseAction();

    void on_displayMode_maxAction();

    void on_displayMode_miniAction();

    void on_displayMode_trayAction();

    void on_exitAction();

    void on_miniMode_clicked();

    void miniToMaxSlot();

    void miniToTraySlot();

    void addListSlot();

    void showDownloadList();

    void downloadFilesChangesSlot(int, QList<QString>);

    void receivingListName(QString);

    void hideContentsExceptThisSlot(int);

    void allowDragAndMenuSlot();
    //音量增快捷键修改
    void changeLouderShortcut(QString);

    //音量减快捷键修改
    void changeLowerShortcut(QString);

    //快进快捷键修改
    void changeQuickMovePlusShortcut(QString);
    //快退快捷键修改
    void changeQuickMoveMinusShortcut(QString);

    //修改截屏快捷键
    void changeShotScreenShortcut(QString);
    //修改录屏快捷键
    void changeRecordShortcut(QString);

    //打开文件快捷键修改
    void changeOpenFileShortcut(QString);

    //修改截屏路径
    void changeShotDir(QString);
    //修改录屏路径
    void changeRecordDir(QString);
    /*
     * 修改主界面背景
     * 设置界面三个button分别emit传QString
     * */
    void changeBackGround(QString);

    //修改主界面自定义图片背景
    void changePicBackGround(QString);

    //上一个
    void lastFunction();

    //播放
    void playFunction();
    //下一个
    void nextFunction();
    //停止
    void stopFunction();
    //改变meidia音量
    void changeVolume(int);


    //截屏
    void shotMyScreen();
    //录屏
    void recordMyScreen();
    //修改截屏格式
    void changeShotFormat(QString);

    void on_openFile_clicked();

    void closeEvent(QCloseEvent *event);

private:
    Ui::TMZPlayer *ui;
    QWidget *widget;
    TitleBar * pTitleBar;
    BottomBar * pBottomBar;
    MediaWidget * space;
    QHBoxLayout *middleBarLayout;
    QWidget *leftWidget;
    QHBoxLayout *leftLayout;
    QWidget *rightWidget;
    QHBoxLayout *rightLayout;
    QWidget *middleWidget;
    QVBoxLayout *middleLayout;
    QVBoxLayout * mMiddleLayout;

    QVBoxLayout *pLayout;

    QMenu *sysTrayMenu;
    QSystemTrayIcon *sysTrayIcon;

    //托盘的功能
    QAction* exitAction;
    QAction* settingAction;
    QAction* lastSongAction;
    QAction* nextSongAction;
    QAction* showStatusAction;
    QAction* playOrPauseAction;
    QAction* whetherShowLyricAction;
    QAction* whetherLockLyricAction;

    QMenu* playOrderMenu;
    QAction* playOrder_orderAction; //顺序播放
    QAction* playOrder_repeatAction; //重复播放
    QAction* playOrder_shuffleAction; //随机播放
    QAction* playOrder_listOrderAction; //列表循环

    QMenu* displayModeMenu;
    QAction* displayMode_maxAction;
    QAction* displayMode_miniAction;
    QAction* displayMode_trayAction;

    bool isPlaying;

    Mini* mini;

    QPushButton* downloadListBtn;


    QGroupBox* listBox;
    QVBoxLayout* listBoxLayout;
    QPushButton* addListBtn;

    QList<mergedPlaylist*> playlistsContainer;
    QList<history*> historyContainer;
    QList<QString> downloadSongs;
    //音量调节快捷键
    QShortcut *volumeAdd;
    QShortcut *volumeSub;

    //快进快退快捷键
    QShortcut *quickMovePlus;
    QShortcut *quickMoveMinus;

    QString currentQss;//当前qss
    
    //截屏快捷键
    QShortcut *shotScreen;
    QShortcut *recordScreen;

    //播放模块zjy&ml
    Media* media;

    QString picPath;//截图路径
    QString gifPath;//录屏/gif路径
    QString shotFormat;//截图格式

    bool recordStatus;//录屏状态
    
    //9.9
    QBoxLayout* historyLayout;
    


};

#endif // TMZPLAYER_H
