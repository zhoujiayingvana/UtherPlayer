/****************************************************************************
** Meta object code from reading C++ file 'tmzplayer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../tmzplayer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tmzplayer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TMZPlayer_t {
    QByteArrayData data[91];
    char stringdata0[1660];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TMZPlayer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TMZPlayer_t qt_meta_stringdata_TMZPlayer = {
    {
QT_MOC_LITERAL(0, 0, 9), // "TMZPlayer"
QT_MOC_LITERAL(1, 10, 12), // "sendInputStr"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 22), // "maximizeButton_clicked"
QT_MOC_LITERAL(4, 47, 14), // "durationSignal"
QT_MOC_LITERAL(5, 62, 13), // "sendMediaType"
QT_MOC_LITERAL(6, 76, 10), // "MediaType&"
QT_MOC_LITERAL(7, 87, 17), // "sendNewFolderName"
QT_MOC_LITERAL(8, 105, 14), // "whetherPlaying"
QT_MOC_LITERAL(9, 120, 15), // "sendFolderNames"
QT_MOC_LITERAL(10, 136, 11), // "getPosition"
QT_MOC_LITERAL(11, 148, 15), // "pauseBtnCilcked"
QT_MOC_LITERAL(12, 164, 16), // "changingPlayMode"
QT_MOC_LITERAL(13, 181, 11), // "stopPlaying"
QT_MOC_LITERAL(14, 193, 15), // "playFileAddress"
QT_MOC_LITERAL(15, 209, 17), // "deleteFileAddress"
QT_MOC_LITERAL(16, 227, 11), // "playWebSong"
QT_MOC_LITERAL(17, 239, 19), // "displaySearchResult"
QT_MOC_LITERAL(18, 259, 8), // "inputStr"
QT_MOC_LITERAL(19, 268, 17), // "currentPosChanged"
QT_MOC_LITERAL(20, 286, 14), // "fullScreenMode"
QT_MOC_LITERAL(21, 301, 25), // "on_hideLeftBarBtn_clicked"
QT_MOC_LITERAL(22, 327, 25), // "on_showLeftBarBtn_clicked"
QT_MOC_LITERAL(23, 353, 26), // "on_hideRightBarBtn_clicked"
QT_MOC_LITERAL(24, 380, 26), // "on_showRightBarBtn_clicked"
QT_MOC_LITERAL(25, 407, 28), // "on_systemTrayModeBtn_clicked"
QT_MOC_LITERAL(26, 436, 23), // "on_activatedSysTrayIcon"
QT_MOC_LITERAL(27, 460, 33), // "QSystemTrayIcon::ActivationRe..."
QT_MOC_LITERAL(28, 494, 17), // "on_showMainAction"
QT_MOC_LITERAL(29, 512, 20), // "on_playOrPauseAction"
QT_MOC_LITERAL(30, 533, 24), // "on_displayMode_maxAction"
QT_MOC_LITERAL(31, 558, 25), // "on_displayMode_miniAction"
QT_MOC_LITERAL(32, 584, 25), // "on_displayMode_trayAction"
QT_MOC_LITERAL(33, 610, 28), // "on_playOrder_listOrderAction"
QT_MOC_LITERAL(34, 639, 26), // "on_playOrder_shuffleAction"
QT_MOC_LITERAL(35, 666, 25), // "on_playOrder_repeatAction"
QT_MOC_LITERAL(36, 692, 24), // "on_playOrder_orderAction"
QT_MOC_LITERAL(37, 717, 13), // "on_exitAction"
QT_MOC_LITERAL(38, 731, 17), // "on_lastSongAction"
QT_MOC_LITERAL(39, 749, 17), // "on_nextSongAction"
QT_MOC_LITERAL(40, 767, 19), // "on_miniMode_clicked"
QT_MOC_LITERAL(41, 787, 13), // "miniToMaxSlot"
QT_MOC_LITERAL(42, 801, 14), // "miniToTraySlot"
QT_MOC_LITERAL(43, 816, 11), // "addListSlot"
QT_MOC_LITERAL(44, 828, 16), // "showDownloadList"
QT_MOC_LITERAL(45, 845, 24), // "downloadFilesChangesSlot"
QT_MOC_LITERAL(46, 870, 14), // "QList<QString>"
QT_MOC_LITERAL(47, 885, 17), // "receivingListName"
QT_MOC_LITERAL(48, 903, 26), // "hideContentsExceptThisSlot"
QT_MOC_LITERAL(49, 930, 20), // "allowDragAndMenuSlot"
QT_MOC_LITERAL(50, 951, 20), // "changeLouderShortcut"
QT_MOC_LITERAL(51, 972, 19), // "changeLowerShortcut"
QT_MOC_LITERAL(52, 992, 27), // "changeQuickMovePlusShortcut"
QT_MOC_LITERAL(53, 1020, 28), // "changeQuickMoveMinusShortcut"
QT_MOC_LITERAL(54, 1049, 24), // "changeShotScreenShortcut"
QT_MOC_LITERAL(55, 1074, 20), // "changeRecordShortcut"
QT_MOC_LITERAL(56, 1095, 22), // "changeLuminAddShortcut"
QT_MOC_LITERAL(57, 1118, 22), // "changeLuminSubShortcut"
QT_MOC_LITERAL(58, 1141, 13), // "changeShotDir"
QT_MOC_LITERAL(59, 1155, 15), // "changeRecordDir"
QT_MOC_LITERAL(60, 1171, 16), // "changeBackGround"
QT_MOC_LITERAL(61, 1188, 19), // "changePicBackGround"
QT_MOC_LITERAL(62, 1208, 12), // "lastFunction"
QT_MOC_LITERAL(63, 1221, 12), // "playFunction"
QT_MOC_LITERAL(64, 1234, 12), // "nextFunction"
QT_MOC_LITERAL(65, 1247, 12), // "stopFunction"
QT_MOC_LITERAL(66, 1260, 12), // "changeVolume"
QT_MOC_LITERAL(67, 1273, 14), // "returnPosition"
QT_MOC_LITERAL(68, 1288, 14), // "changePlayMode"
QT_MOC_LITERAL(69, 1303, 9), // "PlayOrder"
QT_MOC_LITERAL(70, 1313, 12), // "shotMyScreen"
QT_MOC_LITERAL(71, 1326, 14), // "recordMyScreen"
QT_MOC_LITERAL(72, 1341, 16), // "changeShotFormat"
QT_MOC_LITERAL(73, 1358, 16), // "changeRecordSize"
QT_MOC_LITERAL(74, 1375, 17), // "changeSplitStatus"
QT_MOC_LITERAL(75, 1393, 13), // "userEndRecord"
QT_MOC_LITERAL(76, 1407, 11), // "changeLumin"
QT_MOC_LITERAL(77, 1419, 18), // "quickMoveMediaPlus"
QT_MOC_LITERAL(78, 1438, 19), // "quickMoveMediaMinus"
QT_MOC_LITERAL(79, 1458, 16), // "changeMediaSpeed"
QT_MOC_LITERAL(80, 1475, 16), // "changeMediaStyle"
QT_MOC_LITERAL(81, 1492, 19), // "on_openFile_clicked"
QT_MOC_LITERAL(82, 1512, 10), // "closeEvent"
QT_MOC_LITERAL(83, 1523, 12), // "QCloseEvent*"
QT_MOC_LITERAL(84, 1536, 5), // "event"
QT_MOC_LITERAL(85, 1542, 17), // "sltResendPlayInfo"
QT_MOC_LITERAL(86, 1560, 8), // "PlayArea"
QT_MOC_LITERAL(87, 1569, 10), // "flushHisUI"
QT_MOC_LITERAL(88, 1580, 26), // "givingHistoryAddressToPlay"
QT_MOC_LITERAL(89, 1607, 28), // "givingHistoryAddressToDelete"
QT_MOC_LITERAL(90, 1636, 23) // "sltDelHistoricalContent"

    },
    "TMZPlayer\0sendInputStr\0\0maximizeButton_clicked\0"
    "durationSignal\0sendMediaType\0MediaType&\0"
    "sendNewFolderName\0whetherPlaying\0"
    "sendFolderNames\0getPosition\0pauseBtnCilcked\0"
    "changingPlayMode\0stopPlaying\0"
    "playFileAddress\0deleteFileAddress\0"
    "playWebSong\0displaySearchResult\0"
    "inputStr\0currentPosChanged\0fullScreenMode\0"
    "on_hideLeftBarBtn_clicked\0"
    "on_showLeftBarBtn_clicked\0"
    "on_hideRightBarBtn_clicked\0"
    "on_showRightBarBtn_clicked\0"
    "on_systemTrayModeBtn_clicked\0"
    "on_activatedSysTrayIcon\0"
    "QSystemTrayIcon::ActivationReason\0"
    "on_showMainAction\0on_playOrPauseAction\0"
    "on_displayMode_maxAction\0"
    "on_displayMode_miniAction\0"
    "on_displayMode_trayAction\0"
    "on_playOrder_listOrderAction\0"
    "on_playOrder_shuffleAction\0"
    "on_playOrder_repeatAction\0"
    "on_playOrder_orderAction\0on_exitAction\0"
    "on_lastSongAction\0on_nextSongAction\0"
    "on_miniMode_clicked\0miniToMaxSlot\0"
    "miniToTraySlot\0addListSlot\0showDownloadList\0"
    "downloadFilesChangesSlot\0QList<QString>\0"
    "receivingListName\0hideContentsExceptThisSlot\0"
    "allowDragAndMenuSlot\0changeLouderShortcut\0"
    "changeLowerShortcut\0changeQuickMovePlusShortcut\0"
    "changeQuickMoveMinusShortcut\0"
    "changeShotScreenShortcut\0changeRecordShortcut\0"
    "changeLuminAddShortcut\0changeLuminSubShortcut\0"
    "changeShotDir\0changeRecordDir\0"
    "changeBackGround\0changePicBackGround\0"
    "lastFunction\0playFunction\0nextFunction\0"
    "stopFunction\0changeVolume\0returnPosition\0"
    "changePlayMode\0PlayOrder\0shotMyScreen\0"
    "recordMyScreen\0changeShotFormat\0"
    "changeRecordSize\0changeSplitStatus\0"
    "userEndRecord\0changeLumin\0quickMoveMediaPlus\0"
    "quickMoveMediaMinus\0changeMediaSpeed\0"
    "changeMediaStyle\0on_openFile_clicked\0"
    "closeEvent\0QCloseEvent*\0event\0"
    "sltResendPlayInfo\0PlayArea\0flushHisUI\0"
    "givingHistoryAddressToPlay\0"
    "givingHistoryAddressToDelete\0"
    "sltDelHistoricalContent"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TMZPlayer[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      81,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      13,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  419,    2, 0x06 /* Public */,
       3,    0,  422,    2, 0x06 /* Public */,
       4,    1,  423,    2, 0x06 /* Public */,
       5,    1,  426,    2, 0x06 /* Public */,
       7,    1,  429,    2, 0x06 /* Public */,
       8,    1,  432,    2, 0x06 /* Public */,
       9,    1,  435,    2, 0x06 /* Public */,
      10,    1,  438,    2, 0x06 /* Public */,
      11,    0,  441,    2, 0x06 /* Public */,
      12,    1,  442,    2, 0x06 /* Public */,
      13,    0,  445,    2, 0x06 /* Public */,
      14,    1,  446,    2, 0x06 /* Public */,
      15,    1,  449,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      16,    1,  452,    2, 0x0a /* Public */,
      17,    1,  455,    2, 0x08 /* Private */,
      19,    1,  458,    2, 0x08 /* Private */,
      20,    0,  461,    2, 0x08 /* Private */,
      21,    0,  462,    2, 0x08 /* Private */,
      22,    0,  463,    2, 0x08 /* Private */,
      23,    0,  464,    2, 0x08 /* Private */,
      24,    0,  465,    2, 0x08 /* Private */,
      25,    0,  466,    2, 0x08 /* Private */,
      26,    1,  467,    2, 0x08 /* Private */,
      28,    0,  470,    2, 0x08 /* Private */,
      29,    0,  471,    2, 0x08 /* Private */,
      30,    0,  472,    2, 0x08 /* Private */,
      31,    0,  473,    2, 0x08 /* Private */,
      32,    0,  474,    2, 0x08 /* Private */,
      33,    0,  475,    2, 0x08 /* Private */,
      34,    0,  476,    2, 0x08 /* Private */,
      35,    0,  477,    2, 0x08 /* Private */,
      36,    0,  478,    2, 0x08 /* Private */,
      37,    0,  479,    2, 0x08 /* Private */,
      38,    0,  480,    2, 0x08 /* Private */,
      39,    0,  481,    2, 0x08 /* Private */,
      40,    0,  482,    2, 0x08 /* Private */,
      41,    0,  483,    2, 0x08 /* Private */,
      42,    0,  484,    2, 0x08 /* Private */,
      43,    0,  485,    2, 0x08 /* Private */,
      44,    0,  486,    2, 0x08 /* Private */,
      45,    2,  487,    2, 0x08 /* Private */,
      47,    1,  492,    2, 0x08 /* Private */,
      48,    1,  495,    2, 0x08 /* Private */,
      49,    0,  498,    2, 0x08 /* Private */,
      50,    1,  499,    2, 0x08 /* Private */,
      51,    1,  502,    2, 0x08 /* Private */,
      52,    1,  505,    2, 0x08 /* Private */,
      53,    1,  508,    2, 0x08 /* Private */,
      54,    1,  511,    2, 0x08 /* Private */,
      55,    1,  514,    2, 0x08 /* Private */,
      56,    1,  517,    2, 0x08 /* Private */,
      57,    1,  520,    2, 0x08 /* Private */,
      58,    1,  523,    2, 0x08 /* Private */,
      59,    1,  526,    2, 0x08 /* Private */,
      60,    1,  529,    2, 0x08 /* Private */,
      61,    1,  532,    2, 0x08 /* Private */,
      62,    0,  535,    2, 0x08 /* Private */,
      63,    0,  536,    2, 0x08 /* Private */,
      64,    0,  537,    2, 0x08 /* Private */,
      65,    0,  538,    2, 0x08 /* Private */,
      66,    1,  539,    2, 0x08 /* Private */,
      67,    0,  542,    2, 0x08 /* Private */,
      68,    1,  543,    2, 0x08 /* Private */,
      70,    0,  546,    2, 0x08 /* Private */,
      71,    0,  547,    2, 0x08 /* Private */,
      72,    1,  548,    2, 0x08 /* Private */,
      73,    1,  551,    2, 0x08 /* Private */,
      74,    0,  554,    2, 0x08 /* Private */,
      75,    0,  555,    2, 0x08 /* Private */,
      76,    1,  556,    2, 0x08 /* Private */,
      77,    0,  559,    2, 0x08 /* Private */,
      78,    0,  560,    2, 0x08 /* Private */,
      79,    1,  561,    2, 0x08 /* Private */,
      80,    1,  564,    2, 0x08 /* Private */,
      81,    0,  567,    2, 0x08 /* Private */,
      82,    1,  568,    2, 0x08 /* Private */,
      85,    3,  571,    2, 0x08 /* Private */,
      87,    0,  578,    2, 0x08 /* Private */,
      88,    0,  579,    2, 0x08 /* Private */,
      89,    1,  580,    2, 0x08 /* Private */,
      90,    1,  583,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::QStringList,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::QString,   18,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 27,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 46,    2,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 69,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 83,   84,
    QMetaType::Void, 0x80000000 | 86, QMetaType::Int, QMetaType::Int,    2,    2,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Int,    2,

       0        // eod
};

void TMZPlayer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TMZPlayer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sendInputStr((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->maximizeButton_clicked(); break;
        case 2: _t->durationSignal((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->sendMediaType((*reinterpret_cast< MediaType(*)>(_a[1]))); break;
        case 4: _t->sendNewFolderName((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->whetherPlaying((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->sendFolderNames((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 7: _t->getPosition((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->pauseBtnCilcked(); break;
        case 9: _t->changingPlayMode((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->stopPlaying(); break;
        case 11: _t->playFileAddress((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 12: _t->deleteFileAddress((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 13: _t->playWebSong((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->displaySearchResult((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 15: _t->currentPosChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->fullScreenMode(); break;
        case 17: _t->on_hideLeftBarBtn_clicked(); break;
        case 18: _t->on_showLeftBarBtn_clicked(); break;
        case 19: _t->on_hideRightBarBtn_clicked(); break;
        case 20: _t->on_showRightBarBtn_clicked(); break;
        case 21: _t->on_systemTrayModeBtn_clicked(); break;
        case 22: _t->on_activatedSysTrayIcon((*reinterpret_cast< QSystemTrayIcon::ActivationReason(*)>(_a[1]))); break;
        case 23: _t->on_showMainAction(); break;
        case 24: _t->on_playOrPauseAction(); break;
        case 25: _t->on_displayMode_maxAction(); break;
        case 26: _t->on_displayMode_miniAction(); break;
        case 27: _t->on_displayMode_trayAction(); break;
        case 28: _t->on_playOrder_listOrderAction(); break;
        case 29: _t->on_playOrder_shuffleAction(); break;
        case 30: _t->on_playOrder_repeatAction(); break;
        case 31: _t->on_playOrder_orderAction(); break;
        case 32: _t->on_exitAction(); break;
        case 33: _t->on_lastSongAction(); break;
        case 34: _t->on_nextSongAction(); break;
        case 35: _t->on_miniMode_clicked(); break;
        case 36: _t->miniToMaxSlot(); break;
        case 37: _t->miniToTraySlot(); break;
        case 38: _t->addListSlot(); break;
        case 39: _t->showDownloadList(); break;
        case 40: _t->downloadFilesChangesSlot((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QList<QString>(*)>(_a[2]))); break;
        case 41: _t->receivingListName((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 42: _t->hideContentsExceptThisSlot((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 43: _t->allowDragAndMenuSlot(); break;
        case 44: _t->changeLouderShortcut((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 45: _t->changeLowerShortcut((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 46: _t->changeQuickMovePlusShortcut((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 47: _t->changeQuickMoveMinusShortcut((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 48: _t->changeShotScreenShortcut((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 49: _t->changeRecordShortcut((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 50: _t->changeLuminAddShortcut((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 51: _t->changeLuminSubShortcut((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 52: _t->changeShotDir((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 53: _t->changeRecordDir((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 54: _t->changeBackGround((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 55: _t->changePicBackGround((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 56: _t->lastFunction(); break;
        case 57: _t->playFunction(); break;
        case 58: _t->nextFunction(); break;
        case 59: _t->stopFunction(); break;
        case 60: _t->changeVolume((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 61: _t->returnPosition(); break;
        case 62: _t->changePlayMode((*reinterpret_cast< PlayOrder(*)>(_a[1]))); break;
        case 63: _t->shotMyScreen(); break;
        case 64: _t->recordMyScreen(); break;
        case 65: _t->changeShotFormat((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 66: _t->changeRecordSize((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 67: _t->changeSplitStatus(); break;
        case 68: _t->userEndRecord(); break;
        case 69: _t->changeLumin((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 70: _t->quickMoveMediaPlus(); break;
        case 71: _t->quickMoveMediaMinus(); break;
        case 72: _t->changeMediaSpeed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 73: _t->changeMediaStyle((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 74: _t->on_openFile_clicked(); break;
        case 75: _t->closeEvent((*reinterpret_cast< QCloseEvent*(*)>(_a[1]))); break;
        case 76: _t->sltResendPlayInfo((*reinterpret_cast< const PlayArea(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2])),(*reinterpret_cast< const int(*)>(_a[3]))); break;
        case 77: _t->flushHisUI(); break;
        case 78: _t->givingHistoryAddressToPlay(); break;
        case 79: _t->givingHistoryAddressToDelete((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 80: _t->sltDelHistoricalContent((*reinterpret_cast< const int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 40:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QString> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TMZPlayer::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TMZPlayer::sendInputStr)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (TMZPlayer::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TMZPlayer::maximizeButton_clicked)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (TMZPlayer::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TMZPlayer::durationSignal)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (TMZPlayer::*)(MediaType & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TMZPlayer::sendMediaType)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (TMZPlayer::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TMZPlayer::sendNewFolderName)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (TMZPlayer::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TMZPlayer::whetherPlaying)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (TMZPlayer::*)(QStringList );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TMZPlayer::sendFolderNames)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (TMZPlayer::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TMZPlayer::getPosition)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (TMZPlayer::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TMZPlayer::pauseBtnCilcked)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (TMZPlayer::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TMZPlayer::changingPlayMode)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (TMZPlayer::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TMZPlayer::stopPlaying)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (TMZPlayer::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TMZPlayer::playFileAddress)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (TMZPlayer::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TMZPlayer::deleteFileAddress)) {
                *result = 12;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject TMZPlayer::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_TMZPlayer.data,
    qt_meta_data_TMZPlayer,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TMZPlayer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TMZPlayer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TMZPlayer.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int TMZPlayer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 81)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 81;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 81)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 81;
    }
    return _id;
}

// SIGNAL 0
void TMZPlayer::sendInputStr(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void TMZPlayer::maximizeButton_clicked()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void TMZPlayer::durationSignal(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void TMZPlayer::sendMediaType(MediaType & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void TMZPlayer::sendNewFolderName(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void TMZPlayer::whetherPlaying(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void TMZPlayer::sendFolderNames(QStringList _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void TMZPlayer::getPosition(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void TMZPlayer::pauseBtnCilcked()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void TMZPlayer::changingPlayMode(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void TMZPlayer::stopPlaying()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void TMZPlayer::playFileAddress(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void TMZPlayer::deleteFileAddress(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
