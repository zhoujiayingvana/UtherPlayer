#ifndef HISTORY_H
#define HISTORY_H

#include <QTimer>
#include <QLabel>
#include <QEvent>
#include <QDebug>
#include <QEvent>
#include <QWidget>
#include <QPalette>
#include <QPushButton>
#include <QPushButton>
#include <QGridLayout>
#include <QMouseEvent>
#include <util/helper.h>

class history : public QWidget
{
    Q_OBJECT
public:
    explicit history(QWidget *parent=nullptr, const int& _firstRank=-1);
    void setNameAndAddress(QString,QString);
    QString getName();
    QString getAddress();

    int getFirstRank() const;
    void setFirstRank(int value);

signals:
    void sigPlayHistoricalContent(const PlayArea&, const int&, const int&);
    void sigDeleteHistoricalContent(const int&);

public slots:
    void sltDelHistoricalContent();


public:
    void enterEvent(QEvent*);
    void leaveEvent(QEvent*);
    void mouseDoubleClickEvent(QMouseEvent*);

private:
    QLabel *NameLabel;
    QLabel *AddressLabel;
    QPushButton *deleteBtn;
    QPalette original_backgroundPalette;
    QPalette active_backgroundPalette;

    bool doubleClicked;
    QTimer* singleClickedTimer;

    // 该空间的rank位置
    int firstRank;
};

#endif // HISTORY_H
