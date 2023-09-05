#ifndef DEL_GOODS_H
#define DEL_GOODS_H

#include <QDialog>
#include<QString>
#include<QDebug>
#include<QFile>
#include<QIODevice>
#include<QTextStream>
#include<QMessageBox>

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
    QString find_from_files(QString cnt,QString cnt1);
    void del(QString subs);
    int read_from_flie();
    void on_btn_del_clicked();
signals:
    void re();
private:
    Ui::del_goods *ui;
    QList<QString> goods_lines;
};

#endif // DEL_GOODS_H
