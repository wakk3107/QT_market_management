/********************************************************************************
** Form generated from reading UI file 'buy_goods.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BUY_GOODS_H
#define UI_BUY_GOODS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_buy_goods
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_8;
    QComboBox *cbb_kind;
    QLineEdit *le_cnt;
    QPushButton *btn_query;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_4;
    QComboBox *cbb_kind_2;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label;
    QLineEdit *le_name;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label_5;
    QLineEdit *le_price;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_7;
    QLabel *label_6;
    QLineEdit *le_store;
    QSpacerItem *horizontalSpacer_8;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_9;
    QLabel *label_7;
    QLineEdit *le_logo;
    QSpacerItem *horizontalSpacer_10;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_11;
    QLabel *label_8;
    QLineEdit *le_maker;
    QSpacerItem *horizontalSpacer_12;
    QSpacerItem *horizontalSpacer_14;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_15;
    QPushButton *btn_cancel;
    QSpacerItem *horizontalSpacer_13;
    QPushButton *btn_buy;
    QSpacerItem *horizontalSpacer_16;

    void setupUi(QDialog *buy_goods)
    {
        if (buy_goods->objectName().isEmpty())
            buy_goods->setObjectName(QStringLiteral("buy_goods"));
        buy_goods->resize(708, 555);
        verticalLayout = new QVBoxLayout(buy_goods);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_3 = new QLabel(buy_goods);
        label_3->setObjectName(QStringLiteral("label_3"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setStyleSheet(QString::fromUtf8("font: 26pt \"\345\256\213\344\275\223\";"));
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_3);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        cbb_kind = new QComboBox(buy_goods);
        cbb_kind->setObjectName(QStringLiteral("cbb_kind"));
        cbb_kind->setStyleSheet(QString::fromUtf8("font: 10pt \"\345\256\213\344\275\223\";"));

        horizontalLayout_8->addWidget(cbb_kind);

        le_cnt = new QLineEdit(buy_goods);
        le_cnt->setObjectName(QStringLiteral("le_cnt"));
        le_cnt->setStyleSheet(QString::fromUtf8("font: 10pt \"\345\256\213\344\275\223\";"));
        le_cnt->setAlignment(Qt::AlignCenter);

        horizontalLayout_8->addWidget(le_cnt);

        btn_query = new QPushButton(buy_goods);
        btn_query->setObjectName(QStringLiteral("btn_query"));

        horizontalLayout_8->addWidget(btn_query);

        horizontalLayout_8->setStretch(1, 5);
        horizontalLayout_8->setStretch(2, 2);

        verticalLayout->addLayout(horizontalLayout_8);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        label_4 = new QLabel(buy_goods);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setStyleSheet(QString::fromUtf8("font: 10pt \"\345\256\213\344\275\223\";"));
        label_4->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_4);

        cbb_kind_2 = new QComboBox(buy_goods);
        cbb_kind_2->setObjectName(QStringLiteral("cbb_kind_2"));
        cbb_kind_2->setStyleSheet(QString::fromUtf8("font: 10pt \"\345\256\213\344\275\223\";"));
        cbb_kind_2->setEditable(false);
        cbb_kind_2->setSizeAdjustPolicy(QComboBox::AdjustToContentsOnFirstShow);

        horizontalLayout_2->addWidget(cbb_kind_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(1, 1);
        horizontalLayout_2->setStretch(2, 2);
        horizontalLayout_2->setStretch(3, 1);

        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        label = new QLabel(buy_goods);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QString::fromUtf8("font: 10pt \"\345\256\213\344\275\223\";"));
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label);

        le_name = new QLineEdit(buy_goods);
        le_name->setObjectName(QStringLiteral("le_name"));
        le_name->setStyleSheet(QString::fromUtf8("font: 10pt \"\345\256\213\344\275\223\";"));
        le_name->setAlignment(Qt::AlignCenter);
        le_name->setReadOnly(true);

        horizontalLayout_3->addWidget(le_name);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);

        horizontalLayout_3->setStretch(0, 1);
        horizontalLayout_3->setStretch(1, 1);
        horizontalLayout_3->setStretch(2, 2);
        horizontalLayout_3->setStretch(3, 1);

        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_5);

        label_5 = new QLabel(buy_goods);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setStyleSheet(QString::fromUtf8("font: 10pt \"\345\256\213\344\275\223\";"));
        label_5->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(label_5);

        le_price = new QLineEdit(buy_goods);
        le_price->setObjectName(QStringLiteral("le_price"));
        le_price->setStyleSheet(QString::fromUtf8("font: 10pt \"\345\256\213\344\275\223\";"));
        le_price->setAlignment(Qt::AlignCenter);
        le_price->setReadOnly(true);

        horizontalLayout_4->addWidget(le_price);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_6);

        horizontalLayout_4->setStretch(0, 1);
        horizontalLayout_4->setStretch(1, 1);
        horizontalLayout_4->setStretch(2, 2);
        horizontalLayout_4->setStretch(3, 1);

        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_7);

        label_6 = new QLabel(buy_goods);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setStyleSheet(QString::fromUtf8("font: 10pt \"\345\256\213\344\275\223\";"));
        label_6->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(label_6);

        le_store = new QLineEdit(buy_goods);
        le_store->setObjectName(QStringLiteral("le_store"));
        le_store->setStyleSheet(QString::fromUtf8("font: 10pt \"\345\256\213\344\275\223\";"));
        le_store->setAlignment(Qt::AlignCenter);
        le_store->setReadOnly(true);

        horizontalLayout_5->addWidget(le_store);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_8);

        horizontalLayout_5->setStretch(0, 1);
        horizontalLayout_5->setStretch(1, 1);
        horizontalLayout_5->setStretch(2, 2);
        horizontalLayout_5->setStretch(3, 1);

        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_9);

        label_7 = new QLabel(buy_goods);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setStyleSheet(QString::fromUtf8("font: 10pt \"\345\256\213\344\275\223\";"));
        label_7->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(label_7);

        le_logo = new QLineEdit(buy_goods);
        le_logo->setObjectName(QStringLiteral("le_logo"));
        le_logo->setStyleSheet(QString::fromUtf8("font: 10pt \"\345\256\213\344\275\223\";"));
        le_logo->setAlignment(Qt::AlignCenter);
        le_logo->setReadOnly(true);

        horizontalLayout_6->addWidget(le_logo);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_10);

        horizontalLayout_6->setStretch(0, 1);
        horizontalLayout_6->setStretch(1, 1);
        horizontalLayout_6->setStretch(2, 2);
        horizontalLayout_6->setStretch(3, 1);

        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_11);

        label_8 = new QLabel(buy_goods);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setStyleSheet(QString::fromUtf8("font: 10pt \"\345\256\213\344\275\223\";"));
        label_8->setAlignment(Qt::AlignCenter);

        horizontalLayout_7->addWidget(label_8);

        le_maker = new QLineEdit(buy_goods);
        le_maker->setObjectName(QStringLiteral("le_maker"));
        le_maker->setStyleSheet(QString::fromUtf8("font: 10pt \"\345\256\213\344\275\223\";"));
        le_maker->setAlignment(Qt::AlignCenter);
        le_maker->setReadOnly(true);

        horizontalLayout_7->addWidget(le_maker);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_12);

        horizontalLayout_7->setStretch(0, 1);
        horizontalLayout_7->setStretch(1, 1);
        horizontalLayout_7->setStretch(2, 2);
        horizontalLayout_7->setStretch(3, 1);

        verticalLayout->addLayout(horizontalLayout_7);

        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout->addItem(horizontalSpacer_14);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer_15 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_15);

        btn_cancel = new QPushButton(buy_goods);
        btn_cancel->setObjectName(QStringLiteral("btn_cancel"));

        horizontalLayout->addWidget(btn_cancel);

        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_13);

        btn_buy = new QPushButton(buy_goods);
        btn_buy->setObjectName(QStringLiteral("btn_buy"));

        horizontalLayout->addWidget(btn_buy);

        horizontalSpacer_16 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_16);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 2);
        horizontalLayout->setStretch(2, 1);
        horizontalLayout->setStretch(3, 2);
        horizontalLayout->setStretch(4, 1);

        verticalLayout->addLayout(horizontalLayout);

        cbb_kind->raise();
        le_cnt->raise();
        label_3->raise();
        cbb_kind->raise();
        btn_query->raise();
        label_4->raise();
        label->raise();
        le_name->raise();
        btn_cancel->raise();
        btn_buy->raise();

        retranslateUi(buy_goods);

        QMetaObject::connectSlotsByName(buy_goods);
    } // setupUi

    void retranslateUi(QDialog *buy_goods)
    {
        buy_goods->setWindowTitle(QApplication::translate("buy_goods", "Dialog", 0));
        label_3->setText(QApplication::translate("buy_goods", "\350\264\255\344\271\260\345\225\206\345\223\201", 0));
        cbb_kind->clear();
        cbb_kind->insertItems(0, QStringList()
         << QApplication::translate("buy_goods", "\350\257\267\351\200\211\346\213\251\345\225\206\345\223\201\347\247\215\347\261\273", 0)
         << QApplication::translate("buy_goods", "\351\243\237\345\223\201", 0)
         << QApplication::translate("buy_goods", "\351\245\256\346\226\231", 0)
         << QApplication::translate("buy_goods", "\346\227\245\347\224\250\345\223\201", 0)
         << QApplication::translate("buy_goods", "\345\214\226\345\246\206\345\223\201", 0)
        );
        le_cnt->setPlaceholderText(QApplication::translate("buy_goods", "\350\257\267\350\276\223\345\205\245\350\246\201\350\264\255\344\271\260\347\232\204\345\225\206\345\223\201\345\220\215\347\247\260:", 0));
        btn_query->setText(QApplication::translate("buy_goods", "\346\237\245\350\257\242", 0));
        label_4->setText(QApplication::translate("buy_goods", "\345\225\206\345\223\201\347\247\215\347\261\273\357\274\232", 0));
        cbb_kind_2->clear();
        cbb_kind_2->insertItems(0, QStringList()
         << QApplication::translate("buy_goods", "\350\257\267\351\200\211\346\213\251\345\225\206\345\223\201\347\247\215\347\261\273", 0)
         << QApplication::translate("buy_goods", "\351\243\237\345\223\201", 0)
         << QApplication::translate("buy_goods", "\351\245\256\346\226\231", 0)
         << QApplication::translate("buy_goods", "\346\227\245\347\224\250\345\223\201", 0)
         << QApplication::translate("buy_goods", "\345\214\226\345\246\206\345\223\201", 0)
        );
        label->setText(QApplication::translate("buy_goods", "\345\225\206\345\223\201\345\220\215\347\247\260\357\274\232", 0));
        label_5->setText(QApplication::translate("buy_goods", "\344\273\267   \346\240\274\357\274\232", 0));
        label_6->setText(QApplication::translate("buy_goods", "\345\272\223  \345\255\230\357\274\232", 0));
        label_7->setText(QApplication::translate("buy_goods", "\345\223\201  \347\211\214\357\274\232", 0));
        label_8->setText(QApplication::translate("buy_goods", "\347\224\237\344\272\247\345\216\202\345\225\206\357\274\232", 0));
        btn_cancel->setText(QApplication::translate("buy_goods", "\345\217\226\346\266\210", 0));
        btn_buy->setText(QApplication::translate("buy_goods", "\350\264\255\344\271\260", 0));
    } // retranslateUi

};

namespace Ui {
    class buy_goods: public Ui_buy_goods {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BUY_GOODS_H
