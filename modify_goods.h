#ifndef MODIFY_GOODS_H
#define MODIFY_GOODS_H

#include <QDialog>
#include<QString>
#include<QDebug>
#include<QFile>
#include<QIODevice>
#include<QTextStream>
#include<QMessageBox>


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
    int read_from_flie();
    void on_btn_cancel_clicked();
    int renew_file();
    void on_btn_submit_clicked();
signals:
    void re();
private:
    Ui::modify_goods *ui;
    QList<QString> goods_lines;
};

#endif // MODIFY_GOODS_H
