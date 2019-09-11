#ifndef SEARCHRESULT_H
#define SEARCHRESULT_H

#include <QDialog>
#include <QHeaderView>
#include <QTableWidget>

namespace Ui {
  class searchResult;
}

class searchResult : public QDialog
{
  Q_OBJECT

public:
  explicit searchResult(QStringList _filenames, QStringList _filepaths, QWidget *parent = nullptr);

  //初始化显示给用户的内容
  void initOutput(QStringList nameList, QStringList pathList);


  ~searchResult();

  QStringList getFileNames() const;
  void setFileNames(const QStringList& value);

  QStringList getFilePaths() const;
  void setFilePaths(const QStringList& value);

signals:
  //发送双击文件，文件位置的索引
  void clickIndexSignal(int);

public slots:
  //双击单元格事件对应的槽
  void sltCellDoubleClicked(int,int);

private:
  Ui::searchResult *ui;

  QStringList fileNames;
  QStringList filePaths;
};

#endif // SEARCHRESULT_H
