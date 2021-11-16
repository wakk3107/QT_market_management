#ifndef QUERY_GOODS_H
#define QUERY_GOODS_H

#include<QDebug>
#include <QDialog>
#include<QList>
#include<QString>
#include<QTextStream>
#include<QMessageBox>
#include<QFile>
#include<QStringList>
#include<QStandardItem>
#include<QStandardItemModel>

namespace Ui {
class query_goods;
}

class query_goods : public QDialog
{
    Q_OBJECT

public:
    explicit query_goods(QWidget *parent = 0);
    ~query_goods();
signals:
    void re();
public slots:
    void on_btn_query_clicked();
    void do_query(int index,QString cnt);
    void display(int row,QStringList subs);
    int read_from_flie();
private:
    Ui::query_goods *ui;
    QList<QString> goods_lines;
    QStandardItemModel* model;
};

#endif // QUERY_GOODS_H
