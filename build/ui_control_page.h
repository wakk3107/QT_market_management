/********************************************************************************
** Form generated from reading UI file 'control_page.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTROL_PAGE_H
#define UI_CONTROL_PAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_control_page
{
public:
    QGridLayout *gridLayout;
    QTableView *tableView;
    QLabel *label;
    QLabel *label_2;
    QVBoxLayout *verticalLayout;
    QPushButton *btn_buy;
    QPushButton *btn_add;
    QPushButton *btn_del;
    QPushButton *btn_modify;
    QPushButton *btn_query;

    void setupUi(QWidget *control_page)
    {
        if (control_page->objectName().isEmpty())
            control_page->setObjectName(QString::fromUtf8("control_page"));
        control_page->resize(719, 525);
        gridLayout = new QGridLayout(control_page);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tableView = new QTableView(control_page);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tableView->sizePolicy().hasHeightForWidth());
        tableView->setSizePolicy(sizePolicy);

        gridLayout->addWidget(tableView, 2, 0, 1, 1);

        label = new QLabel(control_page);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        label->setStyleSheet(QString::fromUtf8("font: 75 26pt \"\345\256\213\344\275\223\";"));
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(control_page);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);
        label_2->setStyleSheet(QString::fromUtf8("font: 16pt \"\345\256\213\344\275\223\";"));
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        btn_buy = new QPushButton(control_page);
        btn_buy->setObjectName(QString::fromUtf8("btn_buy"));
        btn_buy->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\256\213\344\275\223\";"));

        verticalLayout->addWidget(btn_buy);

        btn_add = new QPushButton(control_page);
        btn_add->setObjectName(QString::fromUtf8("btn_add"));
        btn_add->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\256\213\344\275\223\";"));

        verticalLayout->addWidget(btn_add);

        btn_del = new QPushButton(control_page);
        btn_del->setObjectName(QString::fromUtf8("btn_del"));
        btn_del->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\256\213\344\275\223\";"));

        verticalLayout->addWidget(btn_del);

        btn_modify = new QPushButton(control_page);
        btn_modify->setObjectName(QString::fromUtf8("btn_modify"));
        btn_modify->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\256\213\344\275\223\";"));

        verticalLayout->addWidget(btn_modify);

        btn_query = new QPushButton(control_page);
        btn_query->setObjectName(QString::fromUtf8("btn_query"));
        btn_query->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\256\213\344\275\223\";"));

        verticalLayout->addWidget(btn_query);


        gridLayout->addLayout(verticalLayout, 1, 1, 2, 1);


        retranslateUi(control_page);

        QMetaObject::connectSlotsByName(control_page);
    } // setupUi

    void retranslateUi(QWidget *control_page)
    {
        control_page->setWindowTitle(QCoreApplication::translate("control_page", "Form", nullptr));
        label->setText(QCoreApplication::translate("control_page", "\346\254\242\350\277\216\344\275\277\347\224\250\345\225\206\345\223\201\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        label_2->setText(QCoreApplication::translate("control_page", "\346\225\260\346\215\256\346\200\273\350\247\210", nullptr));
        btn_buy->setText(QCoreApplication::translate("control_page", "\350\264\255\344\271\260\345\225\206\345\223\201", nullptr));
        btn_add->setText(QCoreApplication::translate("control_page", "\346\267\273\345\212\240\345\225\206\345\223\201", nullptr));
        btn_del->setText(QCoreApplication::translate("control_page", "\345\210\240\351\231\244\345\225\206\345\223\201", nullptr));
        btn_modify->setText(QCoreApplication::translate("control_page", "\344\277\256\346\224\271\345\225\206\345\223\201", nullptr));
        btn_query->setText(QCoreApplication::translate("control_page", "\346\237\245\350\257\242\345\225\206\345\223\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class control_page: public Ui_control_page {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTROL_PAGE_H
