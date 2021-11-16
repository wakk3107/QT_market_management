/********************************************************************************
** Form generated from reading UI file 'del_goods.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEL_GOODS_H
#define UI_DEL_GOODS_H

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

class Ui_del_goods
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
    QSpacerItem *horizontalSpacer_4;
    QPushButton *btn_cancel;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *btn_del;
    QSpacerItem *horizontalSpacer_5;

    void setupUi(QDialog *del_goods)
    {
        if (del_goods->objectName().isEmpty())
            del_goods->setObjectName(QStringLiteral("del_goods"));
        del_goods->resize(586, 433);
        verticalLayout = new QVBoxLayout(del_goods);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(del_goods);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setStyleSheet(QString::fromUtf8("font: 75 18pt \"\345\256\213\344\275\223\";"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_2 = new QLabel(del_goods);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("font: 10pt \"\345\256\213\344\275\223\";"));

        horizontalLayout->addWidget(label_2);

        cbb_kind = new QComboBox(del_goods);
        cbb_kind->setObjectName(QStringLiteral("cbb_kind"));
        cbb_kind->setStyleSheet(QString::fromUtf8("font: 10pt \"\345\256\213\344\275\223\";"));

        horizontalLayout->addWidget(cbb_kind);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        horizontalLayout->setStretch(1, 5);
        horizontalLayout->setStretch(2, 3);

        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_3 = new QLabel(del_goods);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setStyleSheet(QString::fromUtf8("font: 10pt \"\345\256\213\344\275\223\";"));

        horizontalLayout_2->addWidget(label_3);

        le_name = new QLineEdit(del_goods);
        le_name->setObjectName(QStringLiteral("le_name"));

        horizontalLayout_2->addWidget(le_name);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        horizontalLayout_2->setStretch(0, 3);
        horizontalLayout_2->setStretch(1, 5);
        horizontalLayout_2->setStretch(2, 3);

        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);

        btn_cancel = new QPushButton(del_goods);
        btn_cancel->setObjectName(QStringLiteral("btn_cancel"));

        horizontalLayout_3->addWidget(btn_cancel);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        btn_del = new QPushButton(del_goods);
        btn_del->setObjectName(QStringLiteral("btn_del"));

        horizontalLayout_3->addWidget(btn_del);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);


        verticalLayout->addLayout(horizontalLayout_3);


        retranslateUi(del_goods);

        QMetaObject::connectSlotsByName(del_goods);
    } // setupUi

    void retranslateUi(QDialog *del_goods)
    {
        del_goods->setWindowTitle(QApplication::translate("del_goods", "Dialog", 0));
        label->setText(QApplication::translate("del_goods", "\345\210\240\351\231\244\345\225\206\345\223\201", 0));
        label_2->setText(QApplication::translate("del_goods", "\350\257\267\351\200\211\346\213\251\350\246\201\345\210\240\351\231\244\345\225\206\345\223\201\347\232\204\347\247\215\347\261\273\357\274\232", 0));
        cbb_kind->clear();
        cbb_kind->insertItems(0, QStringList()
         << QApplication::translate("del_goods", "\350\257\267\351\200\211\346\213\251\345\225\206\345\223\201\347\247\215\347\261\273", 0)
         << QApplication::translate("del_goods", "\351\243\237\345\223\201", 0)
         << QApplication::translate("del_goods", "\351\245\256\346\226\231", 0)
         << QApplication::translate("del_goods", "\346\227\245\347\224\250\345\223\201", 0)
         << QApplication::translate("del_goods", "\345\214\226\345\246\206\345\223\201", 0)
        );
        label_3->setText(QApplication::translate("del_goods", "\350\257\267\350\276\223\345\205\245\350\246\201\345\210\240\351\231\244\345\225\206\345\223\201\347\232\204\345\220\215\347\247\260\357\274\232", 0));
        btn_cancel->setText(QApplication::translate("del_goods", "\345\217\226\346\266\210", 0));
        btn_del->setText(QApplication::translate("del_goods", "\345\210\240\351\231\244", 0));
    } // retranslateUi

};

namespace Ui {
    class del_goods: public Ui_del_goods {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEL_GOODS_H
