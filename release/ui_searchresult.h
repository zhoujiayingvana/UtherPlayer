/********************************************************************************
** Form generated from reading UI file 'searchresult.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCHRESULT_H
#define UI_SEARCHRESULT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_searchResult
{
public:
    QTableWidget *searchContent;

    void setupUi(QDialog *searchResult)
    {
        if (searchResult->objectName().isEmpty())
            searchResult->setObjectName(QString::fromUtf8("searchResult"));
        searchResult->resize(933, 501);
        searchContent = new QTableWidget(searchResult);
        searchContent->setObjectName(QString::fromUtf8("searchContent"));
        searchContent->setGeometry(QRect(0, 0, 1541, 441));

        retranslateUi(searchResult);

        QMetaObject::connectSlotsByName(searchResult);
    } // setupUi

    void retranslateUi(QDialog *searchResult)
    {
        searchResult->setWindowTitle(QApplication::translate("searchResult", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class searchResult: public Ui_searchResult {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHRESULT_H
