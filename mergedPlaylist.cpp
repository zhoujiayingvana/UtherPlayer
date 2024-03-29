#include "mergedPlaylist.h"

#include <QDebug>
#include <QVBoxLayout>

/* Parameter: serialNumber
 * Function: 新建每个列表的时候都会生成一个独一无二的序列号
 * 根据序列号来分辨存储在主界面中的不同列表
 */
int mergedPlaylist::serialNumber = 0;

mergedPlaylist::mergedPlaylist(QWidget *parent) : QWidget(parent)
{
    this->setAttribute(Qt::WA_StyledBackground);
    SN = serialNumber;
    serialNumber++;


    listBtn = new playlistBtn(SN,this);
    listBtn->setFixedWidth(240);
    listContent = new playList(this);
    listContent->setVisible(false);

    listContent->setCurrentSN(SN);

    listContent->setColumnHidden(0,true);
    listContent->setColumnHidden(2,true);
    listContent->setColumnWidth(1,120);
    listContent->horizontalHeader()->setVisible(false);

    QVBoxLayout* playlistLayout = new QVBoxLayout;
    playlistLayout->addWidget(listBtn);
    playlistLayout->addWidget(listContent);
    playlistLayout->setAlignment(Qt::AlignTop);
    this->setLayout(playlistLayout);

    connect(listBtn,SIGNAL(showOrHideListContentSignal(bool)),
            this,SLOT(showOrHideListContentSlot(bool)));

    connect(listBtn,SIGNAL(deleteListRequest()),
            this,SLOT(deleteListRequestAnswering()));

    connect(listContent,SIGNAL(changeFilesInListSignal(int,QList<QString>)),
            this,SLOT(changeFilesInListSlot(int,QList<QString>)));

    connect(listBtn,SIGNAL(givingSN(int)),this,SLOT(recevingTempSN(int)));

    connect(listContent,SIGNAL(leftBarListFilesChangeSignal(int,QList<QString>)),
            this,SLOT(leftBarListFilesChangeSlot(int,QList<QString>)));

    connect(listBtn,SIGNAL(wantingName(QString)),this,SLOT(wantingNameSlot(QString)));

    connect(listBtn,SIGNAL(hideOtherContentsSignal(int)),this,SLOT(hideOtherContentsSlot(int)));

    connect(this,SIGNAL(hideContentSignal()),this,SLOT(hideContentSlot()));

    connect(listBtn,SIGNAL(sendChangedFolderName(int,QString)),this,SLOT(sendTempFolderName(int,QString)));


    // 9.10 凌晨

    connect(listContent,SIGNAL(temp_addFileToFolderSignal(const int&, const QString&, const QString&, const bool&)),
            this,SLOT(temp_addFileToFolderSlot(const int&, const QString&, const QString&, const bool&)));

    connect(listContent,SIGNAL(sendTempPlayInfo(const PlayArea&,const int&, const int&)),
            this,SLOT(getTempPlayInfo(const PlayArea&,const int&, const int&)));


    connect(listContent,SIGNAL(temp_removeContentSignal(int,int)),
            this,SLOT(temp_removeContentSlot(int,int)));


    connect(listContent,SIGNAL(deleteFilesInListSignal(int,QList<QString>)),
            this,SLOT(deleteFilesInListSlot(int,QList<QString>)));
}

/* Author: zyt
 * Name: getSN
 * Function: 返回SN
 */
int mergedPlaylist::getSN()
{
    return SN;
}

//获取mergerdPlaylist的列表名字
QString mergedPlaylist::getListName()
{
    return listBtn->getFolderName();
}

//改变列表名字
void mergedPlaylist::setListName(QString name)
{
    listBtn->setFolderName(name);
}

// 向收藏夹添加文件
void mergedPlaylist::setFileInList(QList<QString> files)
{
    filesInList = files;
}
// 显示用户上次的文件
void mergedPlaylist::showOldContents()
{
    for (int i = 0;i < filesInList.length(); i++)
    {
        int row = listContent->rowCount();
        listContent->insertRow(row);

        //第2列存放地址QString
        QTableWidgetItem *item = new QTableWidgetItem(filesInList.at(i));
        listContent->setItem(row, 2, item);

        //第0列存放行数
        int temp = listContent->rowCount();
        QString tempStr = QString::number(temp);
        item = new QTableWidgetItem(tempStr);//第几行
        listContent->setItem(row, 0, item);

        //第1列存放名字
        item = new QTableWidgetItem(listContent->getFileName(filesInList.at(i)));
        listContent->setItem(row, 1, item);
    }
}

/* Author: zyt
 * Name: showOrHideListContentSignal
 * Function: 槽：根据点击情况显示/隐藏列表
 * Parameters: bool isClicked:是否点击了显示/隐藏列表按钮
 *             true:点击了显示 / false:点击了隐藏
 */
void mergedPlaylist::showOrHideListContentSlot(bool isClicked)
{
    emit allowDragAndMenuSignal();
    if(isClicked)
    {
        listContent->setVisible(true);
    }
    else if(!isClicked)
    {
        listContent->setVisible(false);
    }
}

/* Author: zyt
 * Name: hideOtherContentsSlot
 * Function: 保证一次只能显示一个列表的内容
 * Parameter: unfoldSN：不做处理的sn按钮
 */
void mergedPlaylist::hideOtherContentsSlot(int unfoldSN)
{
    emit hideContentsExceptThisSignal(unfoldSN);
}

/* Author: zyt
 * Name: recevingTempSN
 * Function: 槽：点击按钮的时候发送一个序列号，先由包含按钮的类接收信号，再由其发送给mainWindow内的displayList
 */
void mergedPlaylist::recevingTempSN(int sn)
{
    emit givingTempSNAndFiles(sn,filesInList);
}

/* Author: zyt
 * Name: changeFilesInListSlot
 * Function: 更新对应sn的文件列表
 */
void mergedPlaylist::changeFilesInListSlot(int currentSN, QList<QString> temp_filesInList)
{
    if(currentSN == SN)
    {
        filesInList += temp_filesInList;

        for(int i = 0; i < filesInList.length(); i++)
        {
            QDir dir = QDir(filesInList.at(i));
            emit sendDirSignal(dir);
        }

        //清空列表显示内容
        int row = listContent->rowCount();
        for(int i = 0; i < row; i++)
        {
            listContent->removeRow(0);
        }

        for (int i = 0;i < filesInList.length(); i++)
        {
            int row = listContent->rowCount();
            listContent->insertRow(row);

            //第2列存放地址QString
            QTableWidgetItem *item = new QTableWidgetItem(filesInList.at(i));
            listContent->setItem(row, 2, item);

            //第0列存放行数
            int temp = listContent->rowCount();
            QString tempStr = QString::number(temp);
            item = new QTableWidgetItem(tempStr);//第几行
            listContent->setItem(row, 0, item);

            //第1列存放名字
            item = new QTableWidgetItem(listContent->getFileName(filesInList.at(i)));
            listContent->setItem(row, 1, item);
        }

    }
}

/* Author: zyt
 * Name: leftBarListFilesChangeSlot
 * Function: 接收到左边列表文件改变信号，并且发出一个信号，给displayList
 *           若displayList的currentSN与此一致
 *           则更新displayList内容
 */
void mergedPlaylist::leftBarListFilesChangeSlot(int sn, QList<QString> files)
{
    emit showChangedListSignal(sn,files);
}

/* Author: zyt
 * Name: wantingNameSLot
 * Function: 槽：发射包含该列表名字的信号
 */
void mergedPlaylist::wantingNameSlot(QString name)
{
    emit givingListName(name);
}

/* Author: zyt
 * Name: hideContentSlot
 * Function: 槽：隐藏该列表的内容，并设置isClicked为false
 */
void mergedPlaylist::hideContentSlot()
{
    this->listBtn->setIsClicked(false);
    this->listContent->setVisible(false);
}

/* Author: zyt
 * Name: deleteListRequestAnswering
 * Function: 槽：删除对应的列表
 */
void mergedPlaylist::deleteListRequestAnswering()
{
    emit deleteList(SN);
    delete this;
}

void mergedPlaylist::sendTempFolderName(int sn, QString name)
{
    emit sendFolderName(sn,name);
}

// 发送添加文件信号
void mergedPlaylist::temp_addFileToFolderSlot(const int& sn,const QString& filename,
                                              const QString& fileAddress, const bool& isLocal)
{
    emit sendAddFileToFolder(sn,filename,fileAddress,isLocal);
}

// 发送播放信号
void mergedPlaylist::getTempPlayInfo(const PlayArea & folders, const int &index, const int &row)
{
    emit sendPlayInfo(folders,index,row);
}

//  发送删除文件
void mergedPlaylist::temp_removeContentSlot(int sn, int row)
{
    emit removeContent(sn,row);
}

// 删除文件之后的显示
void mergedPlaylist::deleteFilesInListSlot(int currentSN, QList<QString>temp_filesInList)
{
    if(currentSN == SN)
    {
        filesInList = temp_filesInList;

        for(int i = 0; i < filesInList.length(); i++)
        {
            QDir dir = QDir(filesInList.at(i));
            emit sendDirSignal(dir);
        }

        //清空列表显示内容
        int row = listContent->rowCount();
        for(int i = 0; i < row; i++)
        {
            listContent->removeRow(0);
        }

        for (int i = 0;i < filesInList.length(); i++)
        {
            int row = listContent->rowCount();
            listContent->insertRow(row);

            //第2列存放地址QString
            QTableWidgetItem *item = new QTableWidgetItem(filesInList.at(i));
            listContent->setItem(row, 2, item);

            //第0列存放行数
            int temp = listContent->rowCount();
            QString tempStr = QString::number(temp);
            item = new QTableWidgetItem(tempStr);//第几行
            listContent->setItem(row, 0, item);

            //第1列存放名字
            item = new QTableWidgetItem(listContent->getFileName(filesInList.at(i)));
            listContent->setItem(row, 1, item);
        }

    }
}
