﻿#include "tmzplayer.h"
#include <QApplication>
#include "util/networkmodel.h"
#include <QFileInfo>
#include "util/media.h"
#include "testmainwindow.h"

int main(int argc, char *argv[])
{
    QApplication::addLibraryPath("./plugins");
    QApplication a(argc, argv);
    Media* main_Media=new Media();
    try {
        TMZPlayer* w = new TMZPlayer(nullptr,main_Media);
        w->show();
    } catch (MyErrors e) {
        qDebug() << getErrorType(e);
    }
    return a.exec();
}
