/********************************************************************************
** Form generated from reading UI file 'modify_goods.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFY_GOODS_H
#define UI_MODIFY_GOODS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_modify_goods
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_17;
    QLabel *label_3;
    QLineEdit *le_cnt;
    QPushButton *btn_query;
    QSpacerItem *horizontalSpacer_18;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_2;
    QComboBox *cbb_kind;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label;
    QLineEdit *le_name;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label_4;
    QLineEdit *le_price;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_7;
    QLabel *label_5;
    QLineEdit *le_store;
    QSpacerItem *horizontalSpacer_8;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_9;
    QLabel *label_6;
    QLineEdit *le_logo;
    QSpacerItem *horizontalSpacer_10;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_11;
    QLabel *label_7;
    QLineEdit *le_maker;
    QSpacerItem *horizontalSpacer_12;
    QSpacerItem *horizontalSpacer_16;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_14;
    QPushButton *btn_cancel;
    QSpacerItem *horizontalSpacer_13;
    QPushButton *btn_submit;
    QSpacerItem *horizontalSpacer_15;

    void setupUi(QDialog *modify_goods)
    {
        if (modify_goods->objectName().isEmpty())
            modify_goods->setObjectName(QString::fromUtf8("modify_goods"));
        modify_goods->resize(668, 475);
        verticalLayout = new QVBoxLayout(modify_goods);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_17 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_17);

        label_3 = new QLabel(modify_goods);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setStyleSheet(QString::fromUtf8("font: 10pt \"\345\256\213\344\275\223\";"));

        horizontalLayout->addWidget(label_3);

        le_cnt = new QLineEdit(modify_goods);
        le_cnt->setObjectName(QString::fromUtf8("le_cnt"));
        le_cnt->setStyleSheet(QString::fromUtf8("font: 10pt \"\345\256\213\344\275\223\";"));

        horizontalLayout->addWidget(le_cnt);

        btn_query = new QPushButton(modify_goods);
        btn_query->setObjectName(QString::fromUtf8("btn_query"));
        btn_query->setStyleSheet(QString::fromUtf8("font: 10pt \"\345\256\213\344\275\223\";"));

        horizontalLayout->addWidget(btn_query);

        horizontalLayout->setStretch(0, 2);
        horizontalLayout->setStretch(1, 4);
        horizontalLayout->setStretch(2, 5);
        horizontalLayout->setStretch(3, 3);

        verticalLayout->addLayout(horizontalLayout);

        horizontalSpacer_18 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout->addItem(horizontalSpacer_18);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        label_2 = new QLabel(modify_goods);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("font: 10pt \"\345\256\213\344\275\223\";"));
        label_2->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_2);

        cbb_kind = new QComboBox(modify_goods);
        cbb_kind->addItem(QString());
        cbb_kind->addItem(QString());
        cbb_kind->addItem(QString());
        cbb_kind->addItem(QString());
        cbb_kind->addItem(QString());
        cbb_kind->setObjectName(QString::fromUtf8("cbb_kind"));
        cbb_kind->setStyleSheet(QString::fromUtf8("font: 10pt \"\345\256\213\344\275\223\";"));

        horizontalLayout_2->addWidget(cbb_kind);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(1, 2);
        horizontalLayout_2->setStretch(2, 2);
        horizontalLayout_2->setStretch(3, 1);

        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        label = new QLabel(modify_goods);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("font: 10pt \"\345\256\213\344\275\223\";"));
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label);

        le_name = new QLineEdit(modify_goods);
        le_name->setObjectName(QString::fromUtf8("le_name"));
        le_name->setStyleSheet(QString::fromUtf8("font: 10pt \"\345\256\213\344\275\223\";"));
        le_name->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(le_name);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);

        horizontalLayout_3->setStretch(0, 1);
        horizontalLayout_3->setStretch(1, 2);
        horizontalLayout_3->setStretch(2, 2);
        horizontalLayout_3->setStretch(3, 1);

        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_5);

        label_4 = new QLabel(modify_goods);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setStyleSheet(QString::fromUtf8("font: 10pt \"\345\256\213\344\275\223\";"));
        label_4->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(label_4);

        le_price = new QLineEdit(modify_goods);
        le_price->setObjectName(QString::fromUtf8("le_price"));
        le_price->setStyleSheet(QString::fromUtf8("font: 10pt \"\345\256\213\344\275\223\";"));
        le_price->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(le_price);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_6);

        horizontalLayout_4->setStretch(0, 1);
        horizontalLayout_4->setStretch(1, 2);
        horizontalLayout_4->setStretch(2, 2);
        horizontalLayout_4->setStretch(3, 1);

        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_7);

        label_5 = new QLabel(modify_goods);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setStyleSheet(QString::fromUtf8("font: 10pt \"\345\256\213\344\275\223\";"));
        label_5->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(label_5);

        le_store = new QLineEdit(modify_goods);
        le_store->setObjectName(QString::fromUtf8("le_store"));
        le_store->setStyleSheet(QString::fromUtf8("font: 10pt \"\345\256\213\344\275\223\";"));
        le_store->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(le_store);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_8);

        horizontalLayout_5->setStretch(0, 1);
        horizontalLayout_5->setStretch(1, 2);
        horizontalLayout_5->setStretch(2, 2);
        horizontalLayout_5->setStretch(3, 1);

        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_9);

        label_6 = new QLabel(modify_goods);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setStyleSheet(QString::fromUtf8("font: 10pt \"\345\256\213\344\275\223\";"));
        label_6->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(label_6);

        le_logo = new QLineEdit(modify_goods);
        le_logo->setObjectName(QString::fromUtf8("le_logo"));
        le_logo->setStyleSheet(QString::fromUtf8("font: 10pt \"\345\256\213\344\275\223\";"));
        le_logo->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(le_logo);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_10);

        horizontalLayout_6->setStretch(0, 1);
        horizontalLayout_6->setStretch(1, 2);
        horizontalLayout_6->setStretch(2, 2);
        horizontalLayout_6->setStretch(3, 1);

        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_11);

        label_7 = new QLabel(modify_goods);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setStyleSheet(QString::fromUtf8("font: 10pt \"\345\256\213\344\275\223\";"));
        label_7->setAlignment(Qt::AlignCenter);

        horizontalLayout_7->addWidget(label_7);

        le_maker = new QLineEdit(modify_goods);
        le_maker->setObjectName(QString::fromUtf8("le_maker"));
        le_maker->setStyleSheet(QString::fromUtf8("font: 10pt \"\345\256\213\344\275\223\";"));
        le_maker->setAlignment(Qt::AlignCenter);

        horizontalLayout_7->addWidget(le_maker);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_12);

        horizontalLayout_7->setStretch(0, 1);
        horizontalLayout_7->setStretch(1, 2);
        horizontalLayout_7->setStretch(2, 2);
        horizontalLayout_7->setStretch(3, 1);

        verticalLayout->addLayout(horizontalLayout_7);

        horizontalSpacer_16 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout->addItem(horizontalSpacer_16);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_14);

        btn_cancel = new QPushButton(modify_goods);
        btn_cancel->setObjectName(QString::fromUtf8("btn_cancel"));
        btn_cancel->setStyleSheet(QString::fromUtf8("font: 10pt \"\345\256\213\344\275\223\";"));

        horizontalLayout_8->addWidget(btn_cancel);

        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_13);

        btn_submit = new QPushButton(modify_goods);
        btn_submit->setObjectName(QString::fromUtf8("btn_submit"));
        btn_submit->setStyleSheet(QString::fromUtf8("font: 10pt \"\345\256\213\344\275\223\";"));

        horizontalLayout_8->addWidget(btn_submit);

        horizontalSpacer_15 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_15);


        verticalLayout->addLayout(horizontalLayout_8);


        retranslateUi(modify_goods);

        QMetaObject::connectSlotsByName(modify_goods);
    } // setupUi

    void retranslateUi(QDialog *modify_goods)
    {
        modify_goods->setWindowTitle(QCoreApplication::translate("modify_goods", "Dialog", nullptr));
        label_3->setText(QCoreApplication::translate("modify_goods", "\350\257\267\350\276\223\345\205\245\350\246\201\344\277\256\346\224\271\345\225\206\345\223\201\347\232\204\345\220\215\347\247\260\357\274\232", nullptr));
        btn_query->setText(QCoreApplication::translate("modify_goods", "\346\237\245\350\257\242", nullptr));
        label_2->setText(QCoreApplication::translate("modify_goods", "\345\225\206\345\223\201\347\247\215\347\261\273\357\274\232", nullptr));
        cbb_kind->setItemText(0, QCoreApplication::translate("modify_goods", "\350\257\267\351\200\211\346\213\251\345\225\206\345\223\201\347\247\215\347\261\273", nullptr));
        cbb_kind->setItemText(1, QCoreApplication::translate("modify_goods", "\351\243\237\345\223\201", nullptr));
        cbb_kind->setItemText(2, QCoreApplication::translate("modify_goods", "\351\245\256\346\226\231", nullptr));
        cbb_kind->setItemText(3, QCoreApplication::translate("modify_goods", "\346\227\245\347\224\250\345\223\201", nullptr));
        cbb_kind->setItemText(4, QCoreApplication::translate("modify_goods", "\345\214\226\345\246\206\345\223\201", nullptr));

        label->setText(QCoreApplication::translate("modify_goods", "\345\225\206\345\223\201\345\220\215\347\247\260\357\274\232", nullptr));
        label_4->setText(QCoreApplication::translate("modify_goods", "\344\273\267   \346\240\274\357\274\232", nullptr));
        label_5->setText(QCoreApplication::translate("modify_goods", "\345\272\223  \345\255\230\357\274\232", nullptr));
        label_6->setText(QCoreApplication::translate("modify_goods", "\345\223\201  \347\211\214\357\274\232", nullptr));
        label_7->setText(QCoreApplication::translate("modify_goods", "\347\224\237\344\272\247\345\216\202\345\225\206\357\274\232", nullptr));
        btn_cancel->setText(QCoreApplication::translate("modify_goods", "\345\217\226\346\266\210", nullptr));
        btn_submit->setText(QCoreApplication::translate("modify_goods", "\346\217\220\344\272\244", nullptr));
    } // retranslateUi

};

namespace Ui {
    class modify_goods: public Ui_modify_goods {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFY_GOODS_H
