#ifndef CONTROL_PAGE_H
#define CONTROL_PAGE_H

#include <QWidget>
#include"add_goods.h"
#include"query_goods.h"
#include"del_goods.h"
#include"modify_goods.h"
#include"buy_goods.h"
#include"mysqlproductmanager.h"
namespace Ui {
class control_page;
}

class control_page : public QWidget
{
    Q_OBJECT

public:
    explicit control_page(QWidget *parent = 0);
    ~control_page();
public slots:
    void refresh();
private slots:
    void on_btn_add_clicked();

    void on_btn_del_clicked();

    void on_btn_modify_clicked();

    void on_btn_query_clicked();

    void display();

    void on_btn_buy_clicked();

private:
    add_goods* a;
    query_goods* q;
    del_goods* d;
    modify_goods* m;
    buy_goods* b;
    Ui::control_page *ui;
    QList<QString> goods_lines;
    QStandardItemModel* model;
    MySQLProductManager* sql;
};

#endif // CONTROL_PAGE_H
