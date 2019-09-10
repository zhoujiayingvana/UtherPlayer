/****************************************************************************
** Meta object code from reading C++ file 'tmzplayer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../tmzplayer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tmzplayer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TMZPlayer_t {
    QByteArrayData data[67];
    char stringdata0[1216];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TMZPlayer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TMZPlayer_t qt_meta_stringdata_TMZPlayer = {
    {
QT_MOC_LITERAL(0, 0, 9), // "TMZPlayer"
QT_MOC_LITERAL(1, 10, 22), // "maximizeButton_clicked"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 14), // "durationSignal"
QT_MOC_LITERAL(4, 49, 13), // "sendMediaType"
QT_MOC_LITERAL(5, 63, 10), // "MediaType&"
QT_MOC_LITERAL(6, 74, 17), // "sendNewFolderName"
QT_MOC_LITERAL(7, 92, 14), // "whetherPlaying"
QT_MOC_LITERAL(8, 107, 20), // "givingHistoryAddress"
QT_MOC_LITERAL(9, 128, 15), // "sendFolderNames"
QT_MOC_LITERAL(10, 144, 11), // "getPosition"
QT_MOC_LITERAL(11, 156, 17), // "currentPosChanged"
QT_MOC_LITERAL(12, 174, 14), // "fullScreenMode"
QT_MOC_LITERAL(13, 189, 25), // "on_hideLeftBarBtn_clicked"
QT_MOC_LITERAL(14, 215, 25), // "on_showLeftBarBtn_clicked"
QT_MOC_LITERAL(15, 241, 26), // "on_hideRightBarBtn_clicked"
QT_MOC_LITERAL(16, 268, 26), // "on_showRightBarBtn_clicked"
QT_MOC_LITERAL(17, 295, 28), // "on_systemTrayModeBtn_clicked"
QT_MOC_LITERAL(18, 324, 23), // "on_activatedSysTrayIcon"
QT_MOC_LITERAL(19, 348, 33), // "QSystemTrayIcon::ActivationRe..."
QT_MOC_LITERAL(20, 382, 17), // "on_showMainAction"
QT_MOC_LITERAL(21, 400, 20), // "on_playOrPauseAction"
QT_MOC_LITERAL(22, 421, 24), // "on_displayMode_maxAction"
QT_MOC_LITERAL(23, 446, 25), // "on_displayMode_miniAction"
QT_MOC_LITERAL(24, 472, 25), // "on_displayMode_trayAction"
QT_MOC_LITERAL(25, 498, 13), // "on_exitAction"
QT_MOC_LITERAL(26, 512, 19), // "on_miniMode_clicked"
QT_MOC_LITERAL(27, 532, 13), // "miniToMaxSlot"
QT_MOC_LITERAL(28, 546, 14), // "miniToTraySlot"
QT_MOC_LITERAL(29, 561, 11), // "addListSlot"
QT_MOC_LITERAL(30, 573, 16), // "showDownloadList"
QT_MOC_LITERAL(31, 590, 24), // "downloadFilesChangesSlot"
QT_MOC_LITERAL(32, 615, 14), // "QList<QString>"
QT_MOC_LITERAL(33, 630, 17), // "receivingListName"
QT_MOC_LITERAL(34, 648, 26), // "hideContentsExceptThisSlot"
QT_MOC_LITERAL(35, 675, 20), // "allowDragAndMenuSlot"
QT_MOC_LITERAL(36, 696, 20), // "changeLouderShortcut"
QT_MOC_LITERAL(37, 717, 19), // "changeLowerShortcut"
QT_MOC_LITERAL(38, 737, 27), // "changeQuickMovePlusShortcut"
QT_MOC_LITERAL(39, 765, 28), // "changeQuickMoveMinusShortcut"
QT_MOC_LITERAL(40, 794, 24), // "changeShotScreenShortcut"
QT_MOC_LITERAL(41, 819, 20), // "changeRecordShortcut"
QT_MOC_LITERAL(42, 840, 22), // "changeLuminAddShortcut"
QT_MOC_LITERAL(43, 863, 22), // "changeLuminSubShortcut"
QT_MOC_LITERAL(44, 886, 13), // "changeShotDir"
QT_MOC_LITERAL(45, 900, 15), // "changeRecordDir"
QT_MOC_LITERAL(46, 916, 16), // "changeBackGround"
QT_MOC_LITERAL(47, 933, 19), // "changePicBackGround"
QT_MOC_LITERAL(48, 953, 12), // "lastFunction"
QT_MOC_LITERAL(49, 966, 12), // "playFunction"
QT_MOC_LITERAL(50, 979, 12), // "nextFunction"
QT_MOC_LITERAL(51, 992, 12), // "stopFunction"
QT_MOC_LITERAL(52, 1005, 12), // "changeVolume"
QT_MOC_LITERAL(53, 1018, 14), // "returnPosition"
QT_MOC_LITERAL(54, 1033, 12), // "shotMyScreen"
QT_MOC_LITERAL(55, 1046, 14), // "recordMyScreen"
QT_MOC_LITERAL(56, 1061, 16), // "changeShotFormat"
QT_MOC_LITERAL(57, 1078, 16), // "changeRecordSize"
QT_MOC_LITERAL(58, 1095, 17), // "changeSplitStatus"
QT_MOC_LITERAL(59, 1113, 13), // "userEndRecord"
QT_MOC_LITERAL(60, 1127, 11), // "changeLumin"
QT_MOC_LITERAL(61, 1139, 19), // "on_openFile_clicked"
QT_MOC_LITERAL(62, 1159, 10), // "closeEvent"
QT_MOC_LITERAL(63, 1170, 12), // "QCloseEvent*"
QT_MOC_LITERAL(64, 1183, 5), // "event"
QT_MOC_LITERAL(65, 1189, 17), // "sltResendPlayInfo"
QT_MOC_LITERAL(66, 1207, 8) // "PlayArea"

    },
    "TMZPlayer\0maximizeButton_clicked\0\0"
    "durationSignal\0sendMediaType\0MediaType&\0"
    "sendNewFolderName\0whetherPlaying\0"
    "givingHistoryAddress\0sendFolderNames\0"
    "getPosition\0currentPosChanged\0"
    "fullScreenMode\0on_hideLeftBarBtn_clicked\0"
    "on_showLeftBarBtn_clicked\0"
    "on_hideRightBarBtn_clicked\0"
    "on_showRightBarBtn_clicked\0"
    "on_systemTrayModeBtn_clicked\0"
    "on_activatedSysTrayIcon\0"
    "QSystemTrayIcon::ActivationReason\0"
    "on_showMainAction\0on_playOrPauseAction\0"
    "on_displayMode_maxAction\0"
    "on_displayMode_miniAction\0"
    "on_displayMode_trayAction\0on_exitAction\0"
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
    "shotMyScreen\0recordMyScreen\0"
    "changeShotFormat\0changeRecordSize\0"
    "changeSplitStatus\0userEndRecord\0"
    "changeLumin\0on_openFile_clicked\0"
    "closeEvent\0QCloseEvent*\0event\0"
    "sltResendPlayInfo\0PlayArea"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TMZPlayer[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      59,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  309,    2, 0x06 /* Public */,
       3,    1,  310,    2, 0x06 /* Public */,
       4,    1,  313,    2, 0x06 /* Public */,
       6,    1,  316,    2, 0x06 /* Public */,
       7,    1,  319,    2, 0x06 /* Public */,
       8,    1,  322,    2, 0x06 /* Public */,
       9,    1,  325,    2, 0x06 /* Public */,
      10,    1,  328,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    1,  331,    2, 0x08 /* Private */,
      12,    0,  334,    2, 0x08 /* Private */,
      13,    0,  335,    2, 0x08 /* Private */,
      14,    0,  336,    2, 0x08 /* Private */,
      15,    0,  337,    2, 0x08 /* Private */,
      16,    0,  338,    2, 0x08 /* Private */,
      17,    0,  339,    2, 0x08 /* Private */,
      18,    1,  340,    2, 0x08 /* Private */,
      20,    0,  343,    2, 0x08 /* Private */,
      21,    0,  344,    2, 0x08 /* Private */,
      22,    0,  345,    2, 0x08 /* Private */,
      23,    0,  346,    2, 0x08 /* Private */,
      24,    0,  347,    2, 0x08 /* Private */,
      25,    0,  348,    2, 0x08 /* Private */,
      26,    0,  349,    2, 0x08 /* Private */,
      27,    0,  350,    2, 0x08 /* Private */,
      28,    0,  351,    2, 0x08 /* Private */,
      29,    0,  352,    2, 0x08 /* Private */,
      30,    0,  353,    2, 0x08 /* Private */,
      31,    2,  354,    2, 0x08 /* Private */,
      33,    1,  359,    2, 0x08 /* Private */,
      34,    1,  362,    2, 0x08 /* Private */,
      35,    0,  365,    2, 0x08 /* Private */,
      36,    1,  366,    2, 0x08 /* Private */,
      37,    1,  369,    2, 0x08 /* Private */,
      38,    1,  372,    2, 0x08 /* Private */,
      39,    1,  375,    2, 0x08 /* Private */,
      40,    1,  378,    2, 0x08 /* Private */,
      41,    1,  381,    2, 0x08 /* Private */,
      42,    1,  384,    2, 0x08 /* Private */,
      43,    1,  387,    2, 0x08 /* Private */,
      44,    1,  390,    2, 0x08 /* Private */,
      45,    1,  393,    2, 0x08 /* Private */,
      46,    1,  396,    2, 0x08 /* Private */,
      47,    1,  399,    2, 0x08 /* Private */,
      48,    0,  402,    2, 0x08 /* Private */,
      49,    0,  403,    2, 0x08 /* Private */,
      50,    0,  404,    2, 0x08 /* Private */,
      51,    0,  405,    2, 0x08 /* Private */,
      52,    1,  406,    2, 0x08 /* Private */,
      53,    0,  409,    2, 0x08 /* Private */,
      54,    0,  410,    2, 0x08 /* Private */,
      55,    0,  411,    2, 0x08 /* Private */,
      56,    1,  412,    2, 0x08 /* Private */,
      57,    1,  415,    2, 0x08 /* Private */,
      58,    0,  418,    2, 0x08 /* Private */,
      59,    0,  419,    2, 0x08 /* Private */,
      60,    1,  420,    2, 0x08 /* Private */,
      61,    0,  423,    2, 0x08 /* Private */,
      62,    1,  424,    2, 0x08 /* Private */,
      65,    3,  427,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QStringList,    2,
    QMetaType::Void, QMetaType::Int,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 19,    2,
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
    QMetaType::Void, QMetaType::Int, 0x80000000 | 32,    2,    2,
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
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 63,   64,
    QMetaType::Void, 0x80000000 | 66, QMetaType::Int, QMetaType::Int,    2,    2,    2,

       0        // eod
};

void TMZPlayer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TMZPlayer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->maximizeButton_clicked(); break;
        case 1: _t->durationSignal((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->sendMediaType((*reinterpret_cast< MediaType(*)>(_a[1]))); break;
        case 3: _t->sendNewFolderName((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->whetherPlaying((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->givingHistoryAddress((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->sendFolderNames((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 7: _t->getPosition((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->currentPosChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->fullScreenMode(); break;
        case 10: _t->on_hideLeftBarBtn_clicked(); break;
        case 11: _t->on_showLeftBarBtn_clicked(); break;
        case 12: _t->on_hideRightBarBtn_clicked(); break;
        case 13: _t->on_showRightBarBtn_clicked(); break;
        case 14: _t->on_systemTrayModeBtn_clicked(); break;
        case 15: _t->on_activatedSysTrayIcon((*reinterpret_cast< QSystemTrayIcon::ActivationReason(*)>(_a[1]))); break;
        case 16: _t->on_showMainAction(); break;
        case 17: _t->on_playOrPauseAction(); break;
        case 18: _t->on_displayMode_maxAction(); break;
        case 19: _t->on_displayMode_miniAction(); break;
        case 20: _t->on_displayMode_trayAction(); break;
        case 21: _t->on_exitAction(); break;
        case 22: _t->on_miniMode_clicked(); break;
        case 23: _t->miniToMaxSlot(); break;
        case 24: _t->miniToTraySlot(); break;
        case 25: _t->addListSlot(); break;
        case 26: _t->showDownloadList(); break;
        case 27: _t->downloadFilesChangesSlot((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QList<QString>(*)>(_a[2]))); break;
        case 28: _t->receivingListName((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 29: _t->hideContentsExceptThisSlot((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 30: _t->allowDragAndMenuSlot(); break;
        case 31: _t->changeLouderShortcut((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 32: _t->changeLowerShortcut((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 33: _t->changeQuickMovePlusShortcut((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 34: _t->changeQuickMoveMinusShortcut((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 35: _t->changeShotScreenShortcut((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 36: _t->changeRecordShortcut((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 37: _t->changeLuminAddShortcut((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 38: _t->changeLuminSubShortcut((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 39: _t->changeShotDir((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 40: _t->changeRecordDir((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 41: _t->changeBackGround((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 42: _t->changePicBackGround((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 43: _t->lastFunction(); break;
        case 44: _t->playFunction(); break;
        case 45: _t->nextFunction(); break;
        case 46: _t->stopFunction(); break;
        case 47: _t->changeVolume((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 48: _t->returnPosition(); break;
        case 49: _t->shotMyScreen(); break;
        case 50: _t->recordMyScreen(); break;
        case 51: _t->changeShotFormat((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 52: _t->changeRecordSize((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 53: _t->changeSplitStatus(); break;
        case 54: _t->userEndRecord(); break;
        case 55: _t->changeLumin((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 56: _t->on_openFile_clicked(); break;
        case 57: _t->closeEvent((*reinterpret_cast< QCloseEvent*(*)>(_a[1]))); break;
        case 58: _t->sltResendPlayInfo((*reinterpret_cast< const PlayArea(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2])),(*reinterpret_cast< const int(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 27:
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
            using _t = void (TMZPlayer::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TMZPlayer::maximizeButton_clicked)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (TMZPlayer::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TMZPlayer::durationSignal)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (TMZPlayer::*)(MediaType & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TMZPlayer::sendMediaType)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (TMZPlayer::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TMZPlayer::sendNewFolderName)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (TMZPlayer::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TMZPlayer::whetherPlaying)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (TMZPlayer::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TMZPlayer::givingHistoryAddress)) {
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
        if (_id < 59)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 59;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 59)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 59;
    }
    return _id;
}

// SIGNAL 0
void TMZPlayer::maximizeButton_clicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void TMZPlayer::durationSignal(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void TMZPlayer::sendMediaType(MediaType & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void TMZPlayer::sendNewFolderName(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void TMZPlayer::whetherPlaying(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void TMZPlayer::givingHistoryAddress(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void TMZPlayer::sendFolderNames(QStringList _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void TMZPlayer::getPosition(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
