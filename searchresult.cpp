#include "searchresult.h"
#include "ui_searchresult.h"

#include <QDebug>

searchResult::searchResult(QStringList _filenames, QStringList _filepaths, QWidget *parent) :
  QDialog(parent),
  ui(new Ui::searchResult)
{
  ui->setupUi(this);

  fileNames = _filenames;
  filePaths = _filepaths;

  QStringList headers;
  headers << "歌名" << "地址";

  ui->searchContent->setColumnCount(2);
  ui->searchContent->setRowCount(5);
  ui->searchContent->verticalHeader()->hide();
  ui->searchContent->horizontalHeader()->setSectionResizeMode(QHeaderView::Interactive);
  ui->searchContent->horizontalHeader()->setStretchLastSection(true);
  ui->searchContent->setHorizontalHeaderLabels(headers);
  ui->searchContent->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
  ui->searchContent->setColumnWidth(0,350);
  ui->searchContent->setColumnWidth(1,320);
  ui->searchContent->setSelectionBehavior(QAbstractItemView::SelectRows);
  ui->searchContent->setSelectionMode(QAbstractItemView::SingleSelection);
  ui->searchContent->setEditTriggers(QAbstractItemView::NoEditTriggers);

  //表头文字左对齐
  QHeaderView* headerView = ui->searchContent->horizontalHeader();
  headerView->setDefaultAlignment(Qt::AlignLeft);

  //不显示竖直方向的分割线
  ui->searchContent->setShowGrid(false);
  ui->searchContent->setStyleSheet("QTableWidget::item:selected { background-color: rgb(198, 241, 255); color: black; }");

  connect(ui->searchContent,SIGNAL(cellDoubleClicked(int,int)),this,SLOT(sltCellDoubleClicked(int,int)));

  initOutput(fileNames,filePaths);
}

/* Author: zyt
 * Name: initOutput
 * Function: 将获取到的文件名/文件地址存入tableWidget，给用户观看
 */
void searchResult::initOutput(QStringList nameList, QStringList pathList)
{
  for(int i = 0; i < nameList.length(); i++)
    {
      if ( i == 5 ) // 只能放五个
        {
          break;
        }
      QTableWidgetItem *item = new QTableWidgetItem(nameList.at(i));

      ui->searchContent->setItem(i, 0, item);

      item = new QTableWidgetItem(pathList.at(i));
      ui->searchContent->setItem(i, 1, item);
    }
}

searchResult::~searchResult()
{
  delete ui;
}

/* Author: zyt
 * Name: sltCellDoubleClicked
 * Function: 槽：双击搜索栏单元格之后返回该格所在的行、列
 */
void searchResult::sltCellDoubleClicked(int row, int col)
{
  Q_UNUSED(col);

  //双击返回改行索引 （0、1、2、3、4）
  //传索引给后端以播放文件/添加到历史纪录
  emit clickIndexSignal(row);

  this->hide();
}

////////////////////////
//以下为set及get函数
////////////////////////
QStringList searchResult::getFilePaths() const
{
    return filePaths;
}

void searchResult::setFilePaths(const QStringList& value)
{
    filePaths = value;
}

QStringList searchResult::getFileNames() const
{
    return fileNames;
}

void searchResult::setFileNames(const QStringList& value)
{
    fileNames = value;
}
