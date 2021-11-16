/********************************************************************************
** Form generated from reading UI file 'query_goods.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUERY_GOODS_H
#define UI_QUERY_GOODS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
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
            query_goods->setObjectName(QStringLiteral("query_goods"));
        query_goods->resize(759, 515);
        verticalLayout = new QVBoxLayout(query_goods);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        cbb_method = new QComboBox(query_goods);
        cbb_method->setObjectName(QStringLiteral("cbb_method"));
        cbb_method->setStyleSheet(QString::fromUtf8("font: 10pt \"\345\256\213\344\275\223\";"));

        horizontalLayout->addWidget(cbb_method);

        le_cnt = new QLineEdit(query_goods);
        le_cnt->setObjectName(QStringLiteral("le_cnt"));

        horizontalLayout->addWidget(le_cnt);

        btn_query = new QPushButton(query_goods);
        btn_query->setObjectName(QStringLiteral("btn_query"));

        horizontalLayout->addWidget(btn_query);

        horizontalLayout->setStretch(0, 2);
        horizontalLayout->setStretch(1, 5);
        horizontalLayout->setStretch(2, 2);

        verticalLayout->addLayout(horizontalLayout);

        tableView = new QTableView(query_goods);
        tableView->setObjectName(QStringLiteral("tableView"));

        verticalLayout->addWidget(tableView);


        retranslateUi(query_goods);

        QMetaObject::connectSlotsByName(query_goods);
    } // setupUi

    void retranslateUi(QDialog *query_goods)
    {
        query_goods->setWindowTitle(QApplication::translate("query_goods", "Dialog", 0));
        cbb_method->clear();
        cbb_method->insertItems(0, QStringList()
         << QApplication::translate("query_goods", "\350\257\267\351\200\211\346\213\251\346\237\245\350\257\242\346\226\271\345\274\217", 0)
         << QApplication::translate("query_goods", "\346\214\211\345\220\215\347\247\260\346\237\245\350\257\242", 0)
         << QApplication::translate("query_goods", "\346\214\211\347\261\273\345\210\253\346\237\245\350\257\242", 0)
         << QApplication::translate("query_goods", "\346\214\211\345\216\202\345\256\266\346\237\245\350\257\242", 0)
        );
        btn_query->setText(QApplication::translate("query_goods", "\346\237\245\350\257\242", 0));
    } // retranslateUi

};

namespace Ui {
    class query_goods: public Ui_query_goods {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUERY_GOODS_H
