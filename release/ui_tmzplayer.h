/********************************************************************************
** Form generated from reading UI file 'tmzplayer.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TMZPLAYER_H
#define UI_TMZPLAYER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TMZPlayer
{
public:
    QWidget *centralWidget;
    QPushButton *hideRightBarBtn;
    QPushButton *hideLeftBarBtn;
    QPushButton *showLeftBarBtn;
    QScrollArea *scrollArea;
    QWidget *leftsideBar;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *leftsideBarLayout;
    QPushButton *showRightBarBtn;
    QScrollArea *historyList;
    QWidget *rightsideBar;

    void setupUi(QMainWindow *TMZPlayer)
    {
        if (TMZPlayer->objectName().isEmpty())
            TMZPlayer->setObjectName(QString::fromUtf8("TMZPlayer"));
        TMZPlayer->resize(1600, 800);
        centralWidget = new QWidget(TMZPlayer);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        hideRightBarBtn = new QPushButton(centralWidget);
        hideRightBarBtn->setObjectName(QString::fromUtf8("hideRightBarBtn"));
        hideRightBarBtn->setGeometry(QRect(1150, 320, 21, 21));
        hideRightBarBtn->setCursor(QCursor(Qt::PointingHandCursor));
        hideLeftBarBtn = new QPushButton(centralWidget);
        hideLeftBarBtn->setObjectName(QString::fromUtf8("hideLeftBarBtn"));
        hideLeftBarBtn->setGeometry(QRect(290, 310, 21, 21));
        hideLeftBarBtn->setCursor(QCursor(Qt::PointingHandCursor));
        showLeftBarBtn = new QPushButton(centralWidget);
        showLeftBarBtn->setObjectName(QString::fromUtf8("showLeftBarBtn"));
        showLeftBarBtn->setGeometry(QRect(0, 310, 21, 21));
        showLeftBarBtn->setCursor(QCursor(Qt::PointingHandCursor));
        scrollArea = new QScrollArea(centralWidget);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(20, 20, 261, 561));
        scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollArea->setWidgetResizable(true);
        leftsideBar = new QWidget();
        leftsideBar->setObjectName(QString::fromUtf8("leftsideBar"));
        leftsideBar->setGeometry(QRect(0, 0, 259, 559));
        verticalLayoutWidget = new QWidget(leftsideBar);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 0, 160, 551));
        leftsideBarLayout = new QVBoxLayout(verticalLayoutWidget);
        leftsideBarLayout->setSpacing(6);
        leftsideBarLayout->setContentsMargins(11, 11, 11, 11);
        leftsideBarLayout->setObjectName(QString::fromUtf8("leftsideBarLayout"));
        leftsideBarLayout->setContentsMargins(0, 0, 0, 0);
        scrollArea->setWidget(leftsideBar);
        showRightBarBtn = new QPushButton(centralWidget);
        showRightBarBtn->setObjectName(QString::fromUtf8("showRightBarBtn"));
        showRightBarBtn->setGeometry(QRect(1340, 320, 21, 21));
        showRightBarBtn->setCursor(QCursor(Qt::PointingHandCursor));
        historyList = new QScrollArea(centralWidget);
        historyList->setObjectName(QString::fromUtf8("historyList"));
        historyList->setGeometry(QRect(1180, 0, 221, 591));
        historyList->setWidgetResizable(true);
        rightsideBar = new QWidget();
        rightsideBar->setObjectName(QString::fromUtf8("rightsideBar"));
        rightsideBar->setGeometry(QRect(0, 0, 219, 589));
        historyList->setWidget(rightsideBar);
        TMZPlayer->setCentralWidget(centralWidget);

        retranslateUi(TMZPlayer);

        QMetaObject::connectSlotsByName(TMZPlayer);
    } // setupUi

    void retranslateUi(QMainWindow *TMZPlayer)
    {
        TMZPlayer->setWindowTitle(QApplication::translate("TMZPlayer", "TMZPlayer", nullptr));
        hideRightBarBtn->setText(QApplication::translate("TMZPlayer", "->", nullptr));
        hideLeftBarBtn->setText(QApplication::translate("TMZPlayer", "<-", nullptr));
        showLeftBarBtn->setText(QApplication::translate("TMZPlayer", "->", nullptr));
        showRightBarBtn->setText(QApplication::translate("TMZPlayer", "<-", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TMZPlayer: public Ui_TMZPlayer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TMZPLAYER_H
