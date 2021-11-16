/********************************************************************************
** Form generated from reading UI file 'add_goods.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_GOODS_H
#define UI_ADD_GOODS_H

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

class Ui_add_goods
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QComboBox *cbb_kind;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *le_name;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QLineEdit *le_price;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QLineEdit *le_store;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_6;
    QLineEdit *le_logo;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_7;
    QLineEdit *le_maker;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *btn_add;
    QSpacerItem *horizontalSpacer_9;
    QPushButton *btn_cancel;
    QSpacerItem *horizontalSpacer_8;

    void setupUi(QDialog *add_goods)
    {
        if (add_goods->objectName().isEmpty())
            add_goods->setObjectName(QStringLiteral("add_goods"));
        add_goods->resize(631, 591);
        verticalLayout = new QVBoxLayout(add_goods);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(add_goods);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setStyleSheet(QString::fromUtf8("font: 75 18pt \"\345\256\213\344\275\223\";"));
        label->setAlignment(Qt::AlignCenter);
        label->setWordWrap(false);

        verticalLayout->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_2 = new QLabel(add_goods);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("font: 10pt \"\345\256\213\344\275\223\";"));
        label_2->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_2);

        cbb_kind = new QComboBox(add_goods);
        cbb_kind->setObjectName(QStringLiteral("cbb_kind"));
        cbb_kind->setStyleSheet(QString::fromUtf8("font: 10pt \"\345\256\213\344\275\223\";"));

        horizontalLayout->addWidget(cbb_kind);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        horizontalLayout->setStretch(0, 3);
        horizontalLayout->setStretch(1, 3);
        horizontalLayout->setStretch(2, 5);

        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_3 = new QLabel(add_goods);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setStyleSheet(QString::fromUtf8("font: 10pt \"\345\256\213\344\275\223\";"));
        label_3->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_3);

        le_name = new QLineEdit(add_goods);
        le_name->setObjectName(QStringLiteral("le_name"));
        le_name->setStyleSheet(QString::fromUtf8("font: 10pt \"\345\256\213\344\275\223\";"));
        le_name->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(le_name);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        horizontalLayout_2->setStretch(0, 3);
        horizontalLayout_2->setStretch(1, 5);
        horizontalLayout_2->setStretch(2, 3);

        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_4 = new QLabel(add_goods);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setStyleSheet(QString::fromUtf8("font: 10pt \"\345\256\213\344\275\223\";"));
        label_4->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label_4);

        le_price = new QLineEdit(add_goods);
        le_price->setObjectName(QStringLiteral("le_price"));
        le_price->setStyleSheet(QString::fromUtf8("font: 10pt \"\345\256\213\344\275\223\";"));
        le_price->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(le_price);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        horizontalLayout_3->setStretch(0, 3);
        horizontalLayout_3->setStretch(1, 5);
        horizontalLayout_3->setStretch(2, 3);

        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_5 = new QLabel(add_goods);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setStyleSheet(QString::fromUtf8("font: 10pt \"\345\256\213\344\275\223\";"));
        label_5->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(label_5);

        le_store = new QLineEdit(add_goods);
        le_store->setObjectName(QStringLiteral("le_store"));
        le_store->setStyleSheet(QString::fromUtf8("font: 10pt \"\345\256\213\344\275\223\";"));
        le_store->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(le_store);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);

        horizontalLayout_4->setStretch(0, 3);
        horizontalLayout_4->setStretch(1, 5);
        horizontalLayout_4->setStretch(2, 3);

        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_6 = new QLabel(add_goods);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setStyleSheet(QString::fromUtf8("font: 10pt \"\345\256\213\344\275\223\";"));
        label_6->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(label_6);

        le_logo = new QLineEdit(add_goods);
        le_logo->setObjectName(QStringLiteral("le_logo"));
        le_logo->setStyleSheet(QString::fromUtf8("font: 10pt \"\345\256\213\344\275\223\";"));
        le_logo->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(le_logo);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);

        horizontalLayout_5->setStretch(0, 3);
        horizontalLayout_5->setStretch(1, 5);
        horizontalLayout_5->setStretch(2, 3);

        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_7 = new QLabel(add_goods);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setStyleSheet(QString::fromUtf8("font: 10pt \"\345\256\213\344\275\223\";"));
        label_7->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(label_7);

        le_maker = new QLineEdit(add_goods);
        le_maker->setObjectName(QStringLiteral("le_maker"));
        le_maker->setStyleSheet(QString::fromUtf8("font: 10pt \"\345\256\213\344\275\223\";"));
        le_maker->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(le_maker);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_6);

        horizontalLayout_6->setStretch(0, 3);
        horizontalLayout_6->setStretch(1, 5);
        horizontalLayout_6->setStretch(2, 3);

        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_7);

        btn_add = new QPushButton(add_goods);
        btn_add->setObjectName(QStringLiteral("btn_add"));
        btn_add->setStyleSheet(QString::fromUtf8("font: 10pt \"\345\256\213\344\275\223\";"));

        horizontalLayout_7->addWidget(btn_add);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_9);

        btn_cancel = new QPushButton(add_goods);
        btn_cancel->setObjectName(QStringLiteral("btn_cancel"));
        btn_cancel->setStyleSheet(QString::fromUtf8("font: 10pt \"\345\256\213\344\275\223\";"));

        horizontalLayout_7->addWidget(btn_cancel);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_8);


        verticalLayout->addLayout(horizontalLayout_7);

        label_2->raise();
        label_3->raise();
        label_4->raise();
        label_5->raise();
        label_6->raise();
        label_7->raise();
        le_name->raise();
        le_price->raise();
        le_store->raise();
        le_logo->raise();
        le_maker->raise();
        btn_cancel->raise();
        btn_add->raise();
        cbb_kind->raise();
        label->raise();
        label->raise();

        retranslateUi(add_goods);

        QMetaObject::connectSlotsByName(add_goods);
    } // setupUi

    void retranslateUi(QDialog *add_goods)
    {
        add_goods->setWindowTitle(QApplication::translate("add_goods", "add_goods", 0));
        label->setText(QApplication::translate("add_goods", "\346\267\273\345\212\240\345\225\206\345\223\201", 0));
        label_2->setText(QApplication::translate("add_goods", "\345\225\206\345\223\201\347\247\215\347\261\273\357\274\232", 0));
        cbb_kind->clear();
        cbb_kind->insertItems(0, QStringList()
         << QApplication::translate("add_goods", "\350\257\267\351\200\211\346\213\251\345\225\206\345\223\201\347\247\215\347\261\273", 0)
         << QApplication::translate("add_goods", "\351\243\237\345\223\201", 0)
         << QApplication::translate("add_goods", "\351\245\256\346\226\231", 0)
         << QApplication::translate("add_goods", "\346\227\245\347\224\250\345\223\201", 0)
         << QApplication::translate("add_goods", "\345\214\226\345\246\206\345\223\201", 0)
        );
        label_3->setText(QApplication::translate("add_goods", "\345\225\206\345\223\201\345\220\215\347\247\260\357\274\232", 0));
        le_name->setInputMask(QString());
        le_name->setPlaceholderText(QApplication::translate("add_goods", "\350\257\267\350\276\223\345\205\245\345\225\206\345\223\201\345\220\215\347\247\260", 0));
        label_4->setText(QApplication::translate("add_goods", "\345\225\206\345\223\201\344\273\267\346\240\274\357\274\232", 0));
        le_price->setInputMask(QString());
        le_price->setPlaceholderText(QApplication::translate("add_goods", "\350\257\267\350\276\223\345\205\245\345\225\206\345\223\201\344\273\267\346\240\274", 0));
        label_5->setText(QApplication::translate("add_goods", "\345\225\206\345\223\201\345\272\223\345\255\230\357\274\232", 0));
        le_store->setInputMask(QString());
        le_store->setText(QString());
        le_store->setPlaceholderText(QApplication::translate("add_goods", "\350\257\267\350\276\223\345\205\245\345\225\206\345\223\201\345\272\223\345\255\230", 0));
        label_6->setText(QApplication::translate("add_goods", "\345\225\206\345\223\201\345\223\201\347\211\214\357\274\232", 0));
        le_logo->setInputMask(QString());
        le_logo->setPlaceholderText(QApplication::translate("add_goods", "\350\257\267\350\276\223\345\205\245\345\225\206\345\223\201\345\223\201\347\211\214", 0));
        label_7->setText(QApplication::translate("add_goods", "\345\225\206\345\223\201\345\216\202\345\256\266\357\274\232", 0));
        le_maker->setInputMask(QString());
        le_maker->setPlaceholderText(QApplication::translate("add_goods", "\350\257\267\350\276\223\345\205\245\345\225\206\345\223\201\345\216\202\345\256\266", 0));
        btn_add->setText(QApplication::translate("add_goods", "\346\267\273\345\212\240", 0));
        btn_cancel->setText(QApplication::translate("add_goods", "\345\217\226\346\266\210", 0));
    } // retranslateUi

};

namespace Ui {
    class add_goods: public Ui_add_goods {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_GOODS_H
