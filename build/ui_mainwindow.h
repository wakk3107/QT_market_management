/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_add;
    QAction *action_query;
    QAction *action_del;
    QAction *action_modify;
    QAction *action_help;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer_9;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label_2;
    QLineEdit *le_user;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_3;
    QLineEdit *le_passwd;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *btn_cancel;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *btn_login;
    QSpacerItem *horizontalSpacer_8;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        action_add = new QAction(MainWindow);
        action_add->setObjectName(QString::fromUtf8("action_add"));
        action_query = new QAction(MainWindow);
        action_query->setObjectName(QString::fromUtf8("action_query"));
        action_del = new QAction(MainWindow);
        action_del->setObjectName(QString::fromUtf8("action_del"));
        action_modify = new QAction(MainWindow);
        action_modify->setObjectName(QString::fromUtf8("action_modify"));
        action_help = new QAction(MainWindow);
        action_help->setObjectName(QString::fromUtf8("action_help"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setStyleSheet(QString::fromUtf8("font: 75 26pt \"\345\256\213\344\275\223\";"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout->addItem(horizontalSpacer_9);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\256\213\344\275\223\";"));

        horizontalLayout->addWidget(label_2);

        le_user = new QLineEdit(centralwidget);
        le_user->setObjectName(QString::fromUtf8("le_user"));
        le_user->setStyleSheet(QString::fromUtf8("font: 10pt \"\345\256\213\344\275\223\";"));

        horizontalLayout->addWidget(le_user);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\256\213\344\275\223\";"));

        horizontalLayout_2->addWidget(label_3);

        le_passwd = new QLineEdit(centralwidget);
        le_passwd->setObjectName(QString::fromUtf8("le_passwd"));
        le_passwd->setStyleSheet(QString::fromUtf8("font: 10pt \"\345\256\213\344\275\223\";"));

        horizontalLayout_2->addWidget(le_passwd);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalSpacer_5 = new QSpacerItem(40, 10, QSizePolicy::Preferred, QSizePolicy::Minimum);

        verticalLayout->addItem(horizontalSpacer_5);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_7);

        btn_cancel = new QPushButton(centralwidget);
        btn_cancel->setObjectName(QString::fromUtf8("btn_cancel"));
        btn_cancel->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\256\213\344\275\223\";"));

        horizontalLayout_3->addWidget(btn_cancel);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);

        btn_login = new QPushButton(centralwidget);
        btn_login->setObjectName(QString::fromUtf8("btn_login"));
        btn_login->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\256\213\344\275\223\";"));

        horizontalLayout_3->addWidget(btn_login);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_8);


        verticalLayout->addLayout(horizontalLayout_3);

        MainWindow->setCentralWidget(centralwidget);
        label->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        action_add->setText(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240\345\225\206\345\223\201", nullptr));
        action_query->setText(QCoreApplication::translate("MainWindow", "\346\237\245\350\257\242\345\225\206\345\223\201", nullptr));
        action_del->setText(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244\345\225\206\345\223\201", nullptr));
        action_modify->setText(QCoreApplication::translate("MainWindow", "\344\277\256\346\224\271\345\225\206\345\223\201", nullptr));
        action_help->setText(QCoreApplication::translate("MainWindow", "\345\270\256\345\212\251\344\277\241\346\201\257", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\346\254\242\350\277\216\344\275\277\347\224\250\345\225\206\345\223\201\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\350\264\246\345\217\267\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\345\257\206\347\240\201\357\274\232", nullptr));
        btn_cancel->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
        btn_login->setText(QCoreApplication::translate("MainWindow", "\347\231\273\351\231\206", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
