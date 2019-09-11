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
#include "searchresult.h"

#include <QIcon>
#include <QMenu>
#include <QDateTime>
#include <QTimer>
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
    void addHistory(QString, QString, int=-1);

    void zinit();
    void moveZHisText2First(const int& fromIndex);

    QStringList getFilenames() const;
    void setFilenames(const QStringList& value);

    QStringList getFilepaths() const;
    void setFilepaths(const QStringList& value);

signals:
    void sendInputStr(QString);
    void maximizeButton_clicked();
    void durationSignal(int);
    void sendMediaType(MediaType&);
    void sendNewFolderName(QString);
    void whetherPlaying(bool);
    void sendFolderNames(QStringList);
    void getPosition(int);
    void pauseBtnCilcked();
    void changingPlayMode(int);
    void stopPlaying();

    // 我加了这些
    // 双击历史记录，删除历史记录会传你操作的历史记录的地址出来
    void playFileAddress(QString);
    void deleteFileAddress(QString);

public slots:
    void playWebSong(int);

private slots:
    void displaySearchResult(QString inputStr);
    //实现media跳转到指定时间
    void currentPosChanged(int);
    //切换全屏
    void fullScreenMode();
    //隐藏左侧栏
    void on_hideLeftBarBtn_clicked();
    //显示左侧栏
    void on_showLeftBarBtn_clicked();
    //隐藏右侧栏
    void on_hideRightBarBtn_clicked();
    //显示右侧栏
    void on_showRightBarBtn_clicked();

    void on_systemTrayModeBtn_clicked();

    void on_activatedSysTrayIcon(QSystemTrayIcon::ActivationReason);

    void on_showMainAction();
    //播放暂停切换
    void on_playOrPauseAction();

    void on_displayMode_maxAction();

    void on_displayMode_miniAction();

    void on_displayMode_trayAction();
    //改为列表循环
    void on_playOrder_listOrderAction();
    //改为随机播放
    void on_playOrder_shuffleAction();
    //改为单曲循环
    void on_playOrder_repeatAction();
    //改为顺序播放
    void on_playOrder_orderAction();

    void on_exitAction();
    //上一个
    void on_lastSongAction();
    //下一个
    void on_nextSongAction();
    //转到mini模式
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


    //亮度增快捷键修改
    void changeLuminAddShortcut(QString);
    //亮度减快捷键修改
    void changeLuminSubShortcut(QString);

    //修改截屏路径
    void changeShotDir(QString);
    //修改录屏路径
    void changeRecordDir(QString);
    //每过10s改变musicwidget图片
    void musicWidgetChange();

    //修改主界面背景
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
    //返回现在时间
    void returnPosition();
    //改变播放顺序
    void changePlayMode(PlayOrder);

    //截屏
    void shotMyScreen();
    //录屏
    void recordMyScreen();

    //修改截屏格式
    void changeShotFormat(QString);
    //修改录屏时长
    void changeRecordSize(int);
    //修改是否自动分割录屏状态
    void changeSplitStatus();
    //用户停止录屏
    void userEndRecord();

    //修改主界面亮度
    void changeLumin(int);

    //视频快进
    void quickMoveMediaPlus();
    //视频快退
    void quickMoveMediaMinus();

    //修改视频播放倍速
    void changeMediaSpeed(int);

    //更换滤镜风格
    void changeMediaStyle(int);

    void on_openFile_clicked();

    void closeEvent(QCloseEvent *event);

    void sltResendPlayInfo(const PlayArea&, const int&, const int&);

    void flushHisUI();


    // zyt
    void givingHistoryAddressToPlay();
    void givingHistoryAddressToDelete(QString);


    // 删除历史记录
    void sltDelHistoricalContent(const int&);

private:
    Ui::TMZPlayer *ui;
    QWidget *widget;
    TitleBar * pTitleBar;
    BottomBar * pBottomBar;
    MediaWidget * space;
    QWidget *musicWidget;
    QHBoxLayout *middleBarLayout;
    QWidget *leftWidget;
    QHBoxLayout *leftLayout;
    QWidget *rightWidget;
    QHBoxLayout *rightLayout;
    QWidget *middleWidget;
    QVBoxLayout *middleLayout;

    QVBoxLayout *pLayout;

    QMenu *sysTrayMenu;
    QSystemTrayIcon *sysTrayIcon;

    //托盘的功能
    QAction* exitAction;
    QAction* lastSongAction;
    QAction* nextSongAction;
    QAction* showStatusAction;
    QAction* playOrPauseAction;

    QMenu* playOrderMenu;
    QAction* playOrder_orderAction; //顺序播放
    QAction* playOrder_repeatAction; //重复播放
    QAction* playOrder_shuffleAction; //随机播放
    QAction* playOrder_listOrderAction; //列表循环

    QMenu* displayModeMenu;
    QAction* displayMode_maxAction;
    QAction* displayMode_miniAction;
    QAction* displayMode_trayAction;


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
    
    //截屏录屏快捷键
    QShortcut *shotScreen;
    QShortcut *recordScreen;
    QTimer *recordTimer;
    int timeLimit;
    QDateTime *picTime;

    //亮度快捷键
    QShortcut *luminAdd;
    QShortcut *luminSub;

    //播放模块zjy&ml
    Media* media;

    QString picPath;//截图路径
    QString gifPath;//录屏/gif路径
    QString shotFormat;//截图格式

    bool recordStatus;//录屏状态
    bool splitOrNot;//是否自动分割录屏
    int userEnd;//用户停止录屏
    
    //9.9
    QBoxLayout* historyLayout;
    
    // 最后一个历史记录的地址
    int lastPos;

    QTimer *changeImage;
    int imageNum;
    searchResult* searchResultWidget;

    QStringList filenames;
    QStringList filepaths;

};

#endif // TMZPLAYER_H
