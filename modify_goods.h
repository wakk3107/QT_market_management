#ifndef MODIFY_GOODS_H
#define MODIFY_GOODS_H

#include <QDialog>
#include<QString>
#include<QDebug>
#include<QFile>
#include<QIODevice>
#include<QTextStream>
#include<QMessageBox>
#include <mysqlproductmanager.h>

namespace Ui {
class modify_goods;
}

class modify_goods : public QDialog
{
    Q_OBJECT

public:
    explicit modify_goods(QWidget *parent = 0);
    ~modify_goods();

public slots:
    void on_btn_query_clicked();
    void on_btn_cancel_clicked();
    void on_btn_submit_clicked();
signals:
    void re();
private:
    Ui::modify_goods *ui;
    MySQLProductManager* sql;
};

#endif // MODIFY_GOODS_H
