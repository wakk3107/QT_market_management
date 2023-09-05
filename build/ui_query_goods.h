/********************************************************************************
** Form generated from reading UI file 'query_goods.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUERY_GOODS_H
#define UI_QUERY_GOODS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_query_goods
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QComboBox *cbb_method;
    QLineEdit *le_cnt;
    QPushButton *btn_query;
    QTableView *tableView;

    void setupUi(QDialog *query_goods)
    {
        if (query_goods->objectName().isEmpty())
            query_goods->setObjectName(QString::fromUtf8("query_goods"));
        query_goods->resize(759, 515);
        verticalLayout = new QVBoxLayout(query_goods);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        cbb_method = new QComboBox(query_goods);
        cbb_method->addItem(QString());
        cbb_method->addItem(QString());
        cbb_method->addItem(QString());
        cbb_method->addItem(QString());
        cbb_method->setObjectName(QString::fromUtf8("cbb_method"));
        cbb_method->setStyleSheet(QString::fromUtf8("font: 10pt \"\345\256\213\344\275\223\";"));

        horizontalLayout->addWidget(cbb_method);

        le_cnt = new QLineEdit(query_goods);
        le_cnt->setObjectName(QString::fromUtf8("le_cnt"));

        horizontalLayout->addWidget(le_cnt);

        btn_query = new QPushButton(query_goods);
        btn_query->setObjectName(QString::fromUtf8("btn_query"));

        horizontalLayout->addWidget(btn_query);

        horizontalLayout->setStretch(0, 2);
        horizontalLayout->setStretch(1, 5);
        horizontalLayout->setStretch(2, 2);

        verticalLayout->addLayout(horizontalLayout);

        tableView = new QTableView(query_goods);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        verticalLayout->addWidget(tableView);


        retranslateUi(query_goods);

        QMetaObject::connectSlotsByName(query_goods);
    } // setupUi

    void retranslateUi(QDialog *query_goods)
    {
        query_goods->setWindowTitle(QCoreApplication::translate("query_goods", "Dialog", nullptr));
        cbb_method->setItemText(0, QCoreApplication::translate("query_goods", "\350\257\267\351\200\211\346\213\251\346\237\245\350\257\242\346\226\271\345\274\217", nullptr));
        cbb_method->setItemText(1, QCoreApplication::translate("query_goods", "\346\214\211\345\220\215\347\247\260\346\237\245\350\257\242", nullptr));
        cbb_method->setItemText(2, QCoreApplication::translate("query_goods", "\346\214\211\347\261\273\345\210\253\346\237\245\350\257\242", nullptr));
        cbb_method->setItemText(3, QCoreApplication::translate("query_goods", "\346\214\211\345\216\202\345\256\266\346\237\245\350\257\242", nullptr));

        btn_query->setText(QCoreApplication::translate("query_goods", "\346\237\245\350\257\242", nullptr));
    } // retranslateUi

};

namespace Ui {
    class query_goods: public Ui_query_goods {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUERY_GOODS_H
