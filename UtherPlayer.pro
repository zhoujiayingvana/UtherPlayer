#-------------------------------------------------
#
# Project created by QtCreator 2019-09-01T14:38:39
#
#-------------------------------------------------

QT       += core gui \
            multimedia multimediawidgets sql \

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = UtherPlayer
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
    bottombar.cpp \
    bottombutton.cpp \
    debug.cpp \
    history.cpp \
    io/dbfinisherthread.cpp \
    io/foldershandler.cpp \
    io/historieshandler.cpp \
    main.cpp \
    mediawidget.cpp \
    mergedPlaylist.cpp \
    mini.cpp \
    mylineedit.cpp \
    myskinmenubutton.cpp \
    myslider.cpp \
    newLineEdit.cpp \
    playlist.cpp \
    playlistbtn.cpp \
    searchresult.cpp \
    settingwindow.cpp \
    testmainwindow.cpp \
    titlebar.cpp \
    tmzplayer.cpp \
    tools/gif.cpp \
    util/controller.cpp \
    util/folder.cpp \
    util/foldercontent.cpp \
    util/folders.cpp \
    util/helper.cpp \
    util/historicalcontent.cpp \
    util/histories.cpp \
    util/media.cpp \
    util/networkmodel.cpp \
    util/player.cpp \
    widget.cpp

HEADERS += \
    bottombar.h \
    bottombutton.h \
    debug.h \
    history.h \
    io/dbfinisherthread.h \
    io/foldershandler.h \
    io/historieshandler.h \
    mediawidget.h \
    mergedPlaylist.h \
    mini.h \
    mylineedit.h \
    myskinmenubutton.h \
    myslider.h \
    newLineEdit.h \
    playlist.h \
    playlistbtn.h \
    searchresult.h \
    settingwindow.h \
    testmainwindow.h \
    titlebar.h \
    tmzplayer.h \
    tools/gif.h \
    util/controller.h \
    util/folder.h \
    util/foldercontent.h \
    util/folders.h \
    util/helper.h \
    util/historicalcontent.h \
    util/histories.h \
    util/media.h \
    util/networkmodel.h \
    util/player.h \
    widget.h

FORMS += \
    mini.ui \
    searchresult.ui \
    settingwindow.ui \
    testmainwindow.ui \
    tmzplayer.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    image/backgroundPicture/uther2.png \
    user/Retina.db \
    vid/t3.avi \
    uther.rc

RESOURCES += \
    background.qrc \
    iconimage.qrc
RC_FILE += uther.rc
