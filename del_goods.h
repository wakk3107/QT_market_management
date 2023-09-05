#ifndef DEL_GOODS_H
#define DEL_GOODS_H

#include <QDialog>
#include<QString>
#include<QDebug>
#include<QFile>
#include<QIODevice>
#include<QTextStream>
#include<QMessageBox>
#include <mysqlproductmanager.h>

namespace Ui {
class del_goods;
}

class del_goods : public QDialog
{
    Q_OBJECT

public:
    explicit del_goods(QWidget *parent = 0);
    ~del_goods();

public slots:
    void on_btn_cancel_clicked();
    void on_btn_del_clicked();
signals:
    void re();
private:
    Ui::del_goods *ui;
    MySQLProductManager* sql;
};

#endif // DEL_GOODS_H
